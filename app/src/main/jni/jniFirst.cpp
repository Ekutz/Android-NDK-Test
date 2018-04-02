//
// Created by Jinsoo Park on 2018. 4. 2..
//

#include <com_example_jspark_ndktest_MainActivity.h>

JNIEXPORT jstring JNICALL Java_com_example_jspark_ndktest_MainActivity_getJNIString
        (JNIEnv *env, jobject obj) {

    return env->NewStringUTF("Hello JNI World!");
}
