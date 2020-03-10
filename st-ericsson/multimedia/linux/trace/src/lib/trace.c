/*
 * Copyright (C) ST-Ericsson SA 2010. All rights reserved.
 * This code is ST-Ericsson proprietary and confidential.
 * Any use of the code for whatever purpose is subject to
 * specific written permission of ST-Ericsson SA.
 */

#include <errno.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <pthread.h>
#include <stdio.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <unistd.h>

#if defined (__ARM_LINUX)

//#include <trace/stm.h>
#include "stm-trace.h"

////////////////////////////////////////////////////////////////////////////
int stm_trace_open(void)
{
	return 0;
}

void stm_trace_close(void)
{
}

#define DEFLLTFUN(type, size) \
	void  stm_trace_##size(unsigned char channel, unsigned type data) \
	{ } \
	void stm_tracet_##size(unsigned char channel, unsigned type data) \
	{ }

DEFLLTFUN(char, 8)
DEFLLTFUN(short, 16)
DEFLLTFUN(int, 32)
DEFLLTFUN(long long, 64)

static void free_key(void *channel) {
}

static void create_key(void) {
}

static int get_key_value(void) {
	return 0;
}

/* Register the caller thread as trace user, get and associate a STM channel */
static int stm_trace_register_thread(int *channel) {
	return 0;
}

/* Retreive the channel ID if already registered
   if not already registered then register this thread */
int stm_trace_get_thread_channel(int *channel) {
	return 0;
}

/* Unregister the caller thread as trace user */
void stm_trace_free_thread_channel(void) {
}

/* Output the buffer into the XTI channel */
int stm_trace_buffer(size_t size, const char *buffer)
{
	return 0;
}

#endif	/* #if defined (__ARM_LINUX) */

