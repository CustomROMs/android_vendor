/*
** Copyright 2010, The Android Open-Source Project
** Copyright (c) 2011-2012, Code Aurora Forum. All rights reserved.
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/
#ifndef _AUDIO_H_
#define _AUDIO_H_

#include <sound/asound.h>

#define PCM_ERROR_MAX 128
struct pcm {
    int fd;
    int timer_fd;
    unsigned rate;
    unsigned channels;
    unsigned flags;
    unsigned format;
    unsigned running:1;
    int underruns;
    unsigned buffer_size;
    unsigned period_size;
    unsigned period_cnt;
    char error[PCM_ERROR_MAX];
    struct snd_pcm_hw_params *hw_p;
    struct snd_pcm_sw_params *sw_p;
    struct snd_pcm_sync_ptr *sync_ptr;
    struct snd_pcm_channel_info ch[2];
    void *addr;
    int card_no;
    int device_no;
    int start;
};

struct mixer {
    int fd;
    struct snd_ctl_elem_info *info;
    struct mixer_ctl *ctl;
    unsigned count;
};

struct mixer_ctl {
    struct mixer *mixer;
    struct snd_ctl_elem_info *info;
    char **ename;
};

#endif
