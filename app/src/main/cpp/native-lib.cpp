#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_org_eu_exodus_1privacy_exodusprivacy_objects_Keys_apiKey(JNIEnv *env, jobject object) {
    std::string token = "API_Key";
    return env->NewStringUTF(token.c_str());
}
