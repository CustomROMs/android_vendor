#lcs make file

MY_LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_PREBUILT_LIBS := $(TOP)/$(MY_LOCAL_PATH)/pre_built/liblcsclient.a

#LOCAL_MODULE:= liblcsclient
#LOCAL_MODULE_CLASS := optional

#include $(BUILD_PREBUILT)
include $(BUILD_MULTI_PREBUILT)
