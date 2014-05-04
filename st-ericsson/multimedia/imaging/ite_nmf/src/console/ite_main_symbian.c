/*
 * Copyright (C) ST-Ericsson SA 2010. All rights reserved.
 * This code is ST-Ericsson proprietary and confidential.
 * Any use of the code for whatever purpose is subject to
 * specific written permission of ST-Ericsson SA.
 */

#ifdef __ARM_SYMBIAN
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#include "services.h"

#include "ite_platform.h"
#include "cli.h"
#include "ite_nmf_cmd.h"
#include "ite_darkybox_cmd.h"
#include "ite_nmf_standard_functions.h"
#include "ite_nmf_flash_functions.h"
#include "ite_nmf_sensor_tunning_functions.h"
#include "ite_nmf_ndfilter_functions.h"
#include "ite_nmf_focuscontrol_functions.h"
#include "ite_nmf_statistic_functions.h"
#include "ite_nmf_zoom_functions.h"
#include "ite_host2sensor.h"
#include "ite_nmf_nvm_functions.h"
#include "ite_nmf_stat_and_zoom_tests.h"
#include "ite_nmf_sms_tests.h"
#include "ite_nmf_headers.h"
#include "ite_ispblocks_tests.h"


#include <inc/type.h>
#include "cm/inc/cm.h"
#include <cm/inc/cm_macros.h>

#include "los/api/los_api.h"
#include "ite_main.h"

#ifdef MMTE_USB_TRUE
 #include "retargetio.h"
 #pragma import(__use_no_semihosting_swi)
#endif

void dbc_assert(int a, int errorId, const char * file, int line)
{
    if (!(a))
	{
        LOS_Log("assert : file %s, line %d\n", file, line, NULL, NULL, NULL, NULL);
    }
}


char g_out_path[KlogDirectoryLentgh];
#ifdef DUMP_PERF_DATA_TO_FILE
char g_trace_path[KlogDirectoryLentgh];
#endif

t_uint8 g_exit_CM_CALLBACK_THREAD = 1;

#ifdef TIMELOG
ts_sia_eventtimelog eventtimelog = {{0,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE}},
				    {0,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE}},
				    {0,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE}},
				    {0,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE}},
				    {0,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE}},
				    {0,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE}},
				    {0,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE}},
				    {0,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE}},
				    {0,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE}},
				    {0,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE}},
				    {0,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE}},
				    {0,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE}},
				    {0,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE}},
				    {0,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE}},
				    {0,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE}},
				    {0,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE}},
				    {0,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE,ISP_INF_NONE}}};
#endif

ts_sia_usecase usecase = {
    .sensor = 0,
    .LR_XSize = 640,
    .LR_YSize = 480,
    .LR_resolution = VGA,
    .LR_GrbFormat = GRBFMT_R5G6B5,
    .HR_XSize = 640,
    .HR_YSize = 480,
    .HR_resolution = VGA,
    .HR_GrbFormat = GRBFMT_YUV420_MB_SEMIPLANAR_DECIMATED,
    .BMS_XSize = 640,
    .BMS_YSize = 480,
    .BMS_resolution = VGA,
    .BMS_GrbFormat = GRBFMT_RAW8,
    .BMS_Mode = BMSSTILL,
    .BMS_output = BAYERSTORE0,
    .BML_input = BAYERLOAD1,
    .BML_GrbFormat = GRBFMT_FAST_RAW8,
    .flag_backup_fw = FALSE,
    .flag_nosensor_testmode = FALSE,
    .esramGrabCacheMemHandle = 0,
    .FwTuning_handler = 0,
    .mode = MODE_UNDEFINED,
    .state = STATE_FREE,
    .MaxDZ = 8,
    .CurrentDZ = 1,
    .LR_Min_resolution = SUBQCIF,
    .HR_Min_resolution = SUBQCIF,
    .LR_Max_resolution = XGA,
    .HR_Video_Max_resolution = FULLHD,
    .HR_Still_Max_resolution = EIGHTMEGA,
    .sensormode = NORMAL_MODE,
    .HorizPos = 1,
    .BMS_woi_X = 0,
    .BMS_woi_Y = 0,
    .framerate_x100 = 0,
    .data_format = 0,
    .smiapp_powerUp_sequence = 0,
    .stripeInUse = 0,
    .stripeIndex = 0,
};

t_uint8 debug;
ts_sia_nonregselect nonregselect = {{1,0,0,0,0},   	//LR datapath nonreg
				    {1,1,0,0,0},	//HR datapath nonreg
				    {1,1,1,1,0},	//LRHR datapath nonreg
				    {1,0,0,0,0},	//BMS datapath nonreg
				    {1,1,0,0,0}, 	//BML datapath nonreg
				    {1,1,0,0,0}}; 	//zoom nonreg

char myiobuf[2048]; // patch for Trace32

extern void initNMFCallBackServices(void);
extern void NMF_CallBackThread(void *);


extern void Init_algos_ITECmdList(void);
extern void Init_NVM_ITECmdList(void);
extern void Init_SENSOR_TUNNING_ITECmdList(void);
extern void Init_Test_CmdList(void);
extern void Init_algos_ITECmdList(void);
extern void Init_NVM_ITECmdList(void);
extern void Init_focus_ITECmdList(void);
extern void Init_ISP_Blocks_Configure_ITECmdList(void);

/// The NMF callback FIFO Identifier
t_nmf_channel nmfCallBackFifoID;

#define INIT_ATE "init.ate"

/// NMF MPC to HOST Callback message size: parameter size + 2 x 32-bits int
#define MAX_NMF_MESSAGE_SIZE 1024
#define NMF_CALL_BACK_STACK_SIZE (32*1024)
#define NMF_CM_CB_FIFO_SIZE 128


/************************************************************************************************/

EXPORT_C int ite_main(int argc, char **argv)
{
    Result_te err =Result_e_Success;
    char imaging_path_value[256] = IMAGING_PATH;

   /* HCL Services, alloc, Log, IT, xti ....*/


   /*Create callback thread for callback management */
   //CM_SetMode(CM_CMD_TRACE_LEVEL, 0);
   initNMFCallBackServices();

   // Initializes all available functions accesible thru ATE
   CLI_init();

   memset(g_out_path, 0, KlogDirectoryLentgh*sizeof (char) );
   Init_Test_CmdList();

   CLI_disp_msg("Entering Init for ITE ...NMF part\n");
   Init_Nmf_ITECmdList();
   Init_statistic_ITECmdList();
   Init_Flash_ITECmdList();
   Init_SENSOR_TUNNING_ITECmdList();
   Init_NDFilter_ITECmdList();
   Init_algos_ITECmdList();
   Init_focus_ITECmdList();
   Init_dz_ITECmdList();
   Init_NVM_ITECmdList();
   Init_STAT_AND_ZOOM_CmdList();
   Init_SMS_CmdList();
   Init_ISP_Blocks_Configure_ITECmdList();

#ifndef __ARM_SYMBIAN
   Init_DarkyBox_ITECmdList();
#endif

  /* start command interpreter */
   CLI_disp_msg("\n\n(c) STMicroelectronics\nNOMADIK Shell - Imaging NMF Test Environment\n");
   CLI_disp_msg("Last built: %s, %s\n", __DATE__, __TIME__);

   CLI_add_alias ("IMAGING_PATH",imaging_path_value,1);

   return 0;
}

void initNMFCallBackServices(void)
{
    t_cm_error err;

	// Start a channel to the CM engine - must be done prior to any CM call
    err = CM_CreateChannel(NMF_CHANNEL_SHARED,&nmfCallBackFifoID);
    if(err != NMF_OK)
    {
        CLI_disp_msg("NMF-DSP(DBG): Failed with error %d\n", err);
    }

#if 0
    /* enable NMF debug mode and disable power management (DSP will never be stopped) */
    err = CM_SetMode(CM_CMD_DBG_MODE, 1);
    if (err != CM_OK) {
       CLI_disp_msg("NMF-DSP(DBG): Failed error %d\n",err);
    }
#endif

    /* Force no trace */
    CM_SetMode(CM_CMD_TRACE_LEVEL, 0);


    LOS_Log("initNMFCallBackServices - nmfCallBackFifoID=%d, thread_id=%d\n",
		     nmfCallBackFifoID, LOS_GetCurrentId());

    // Start the thread managing the NMF MPC to HOST call backs
    LOS_ThreadCreate(NMF_CallBackThread, NULL,
		     NMF_CALL_BACK_STACK_SIZE, LOS_USER_URGENT_PRIORITY,
		     "NMF_MPC_2_HOST_CB_Thread");
}

void stopNMFCallBackServices()
{
    CM_CloseChannel(nmfCallBackFifoID);
}

// NMF Call Back thread function
void NMF_CallBackThread(void *fct)
 {
    char *buffer;
    void *itfref=0;
    t_cm_error err;

    LOS_Log("NMF-DSP Callbackthread - Starting Callback the Thread\n");
    mapInstallActiveScheduler();

    // CM Callback Thread
    while(1 && g_exit_CM_CALLBACK_THREAD)
    {
        err = CM_GetMessage(nmfCallBackFifoID, &itfref, &buffer, (t_bool)TRUE);

        if(err == CM_OK)
        {
            // Execute the call back
            if (itfref)
            {
                CM_ExecuteMessage(itfref, buffer);
            } else
            {
                // NMF service message (panic, ...)
                LOS_Log("NMF-DSP CallbackThread: CM_Empty Message\n");
                CM_ExecuteMessage(0, buffer);
            }
        }
        else if ( err == NMF_FLUSH_MESSAGE )
        {
            LOS_Log("NMF-DSP CallbackThread: PANIC PANIC PANIC NMF_FLUSH_MESSAGE\n");
            //Shuts down the thread
            break;
        }
        else if ( err == CM_NO_MESSAGE )
        {
            LOS_Log("NMF-DSP CallbackThread: CM_NO_MESSAGE\n");
            //Shuts down the thread
            break;
        }
        else
        {
            LOS_Log("NMF-DSP CallbackThread: ERROR REPLY\n");
            //Shuts down the thread
            break;
        }
    }

    mapDeleteActiveScheduler();
    LOS_Log("NMF-DSP Callbackthread - Exiting the Thread\n");
}

#endif /* __ARM_SUMBIAN */
