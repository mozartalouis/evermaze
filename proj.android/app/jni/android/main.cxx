// Copyright (c) 2018 Mozart Alexander Louis. All rights reserved.

#include <memory>
#include <android/log.h>
#include <jni.h>
#include "app/app_delegate.hxx"

#define  LOG_TAG    "main"
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)

namespace {
std::unique_ptr<AppDelegate> appDelegate;
}

void cocos_android_app_init(JNIEnv* env) {
    LOGD("cocos_android_app_init");
    appDelegate.reset(new AppDelegate());
}