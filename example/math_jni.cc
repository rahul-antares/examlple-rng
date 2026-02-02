#include <jni.h>

extern "C" {

// functions from libmath.so
void* math_create();
int   math_add(void*, int, int);
int   math_mult(void*, int, int);
int   math_get_random(void*);
void  math_destroy(void*);

}

extern "C"
JNIEXPORT jlong JNICALL
Java_Game_nativeCreate(JNIEnv*, jclass) {
    return reinterpret_cast<jlong>(math_create());
}

extern "C"
JNIEXPORT jint JNICALL
Java_Game_nativeAdd(JNIEnv*, jclass, jlong h, jint a, jint b) {
    return math_add(reinterpret_cast<void*>(h), a, b);
}

extern "C"
JNIEXPORT jint JNICALL
Java_Game_nativeMult(JNIEnv*, jclass, jlong h, jint a, jint b) {
    return math_mult(reinterpret_cast<void*>(h), a, b);
}

extern "C"
JNIEXPORT jint JNICALL
Java_Game_nativeGetRandom(JNIEnv*, jclass, jlong h) {
    return math_get_random(reinterpret_cast<void*>(h));
}

extern "C"
JNIEXPORT void JNICALL
Java_Game_nativeDestroy(JNIEnv*, jclass, jlong h) {
    math_destroy(reinterpret_cast<void*>(h));
}
