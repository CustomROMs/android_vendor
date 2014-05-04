/*
 * Copyright (C) ST-Ericsson SA 2010. All rights reserved.
 * This code is ST-Ericsson proprietary and confidential.
 * Any use of the code for whatever purpose is subject to
 * specific written permission of ST-Ericsson SA.
 */

#include "ste_omx_ens_component_loader.h"
#include "ste_ens_video_components.h"

/** Definition of all the components this module will register to the STE ENS loader*/
static struct ste_omx_ens_component_def_array components_to_register = 
    { {
#ifdef SW_ENCODER
	    {{"OMX.ST.VFM.MPEG4Enc"}, 
	     {{"video_encoder.mpeg4"}, {"video_encoder.h263"}, {0}},
	     MPEG4EncFactoryMethodHOST},
#else
	    {{"OMX.ST.VFM.MPEG4Enc"},
	     {{"video_encoder.mpeg4"}, {"video_encoder.h263"}, {0}},
	     MPEG4EncFactoryMethodMPC},
	    {{"OMX.ST.VFM.MPEG4HostEnc"}, 
	     {{"video_encoder.mpeg4"}, {"video_encoder.h263"}, {0}},
	     MPEG4EncFactoryMethodHOST},
#endif
	    {{0}, {{0}}, 0}
	} };

extern "C"
{
/** The function the OMX ENS loader is calling to register the components of this module*/
    void ste_omx_ens_component_register(struct ste_omx_ens_component_def_array **refs)
    {
	*refs = &components_to_register;
    }
}
