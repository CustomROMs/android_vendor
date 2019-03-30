# Copyright (C) 2008 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)
LOCAL_C_INCLUDES := $(LOCAL_PATH)/../nmf/linux/api
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../nmf/linux/src/common
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../nmf/linux/src/driver
LOCAL_PRELINK_MODULE := false
LOCAL_SHARED_LIBRARIES := liblog libcutils
#LOCAL_MODULE_PATH := $(PRODUCT_OUT)/lib
LOCAL_SRC_FILES := \
    cmdebugfs.c \
    cmsyscallwrapper.c \
    cm/engine/utils/src/swap.c \
    cm/proxy/user/communication/src/communication_wrapper.c \
    cm/proxy/common/component/src/component_info.c \
    cm/proxy/common/repository/src/repository.c \
    cm/proxy/common/utils/src/list.c \
    cm/proxy/common/wrapper/src/stub_c_mgt.c \
    cm/proxy/common/wrapper/src/wrapper.c \
    cm/proxy/common/wrapper/src/stub_mgt.c \
    cm/proxy/common/communication/src/hoststubs_mgt.c \
    cm/proxy/common/configuration/src/user.c \
    cm/proxy/common/configuration/src/version.c \
    osal.c \
    cm/proxy/common/wrapper/src/stub_cpp_mgt.cpp

##LOCAL_SRC_FILES := $(shell cd $(LOCAL_PATH) && find cm -name "*.cpp")
LOCAL_MODULE := libnmf
#LOCAL_MODULE_TAGS := optional
include $(BUILD_SHARED_LIBRARY)
