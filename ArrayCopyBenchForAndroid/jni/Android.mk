LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_LDLIBS    := -llog
LOCAL_MODULE    := nativecopy
LOCAL_ARM_MODE  := arm
LOCAL_SRC_FILES := com_uraroji_garage_android_arrraycopybench_NativeCopy.c

include $(BUILD_SHARED_LIBRARY)
