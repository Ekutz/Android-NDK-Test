LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := JNIExample
LOCAL_SRC_FILES := jniFirst.cpp
LOCAL_LDLIBS    := -llog

include $(BUILD_SHARED_LIBRARY)