#ifndef AA_LOG_H
#define AA_LOG_H

#define HAVE_LOG

#ifdef HAVE_LOG

#include <android/log.h>
#define LOG_TAG "AALog"

#define LOGV(...) \
    __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)
#define LOGD(...) \
    __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGI(...) \
    __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

#define LOGW(...) \
    __android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__)
#define LOGE(...) \
    __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
#else

#define LOGV(...)
#define LOGD(...)
#define LOGI(...)

#define LOGW(...)
#define LOGE(...)

#endif

#endif
