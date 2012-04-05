#include <stddef.h> 
#include <memory.h>
#include "com_uraroji_garage_android_arrraycopybench_NativeCopy.h"

JNIEXPORT void JNICALL Java_com_uraroji_garage_android_arrraycopybench_NativeCopy_copyNative___3BI_3BII
  (JNIEnv *env, jclass cls, jbyteArray src, jint srcPos, jbyteArray dst, jint dstPos, jint length) {
	jbyte* j_src = (*env)->GetByteArrayElements(env, src, NULL);
	jbyte* j_dst = (*env)->GetByteArrayElements(env, dst, NULL);

	memcpy(j_dst + dstPos, j_src + srcPos, sizeof(jbyte) * length);

	(*env)->ReleaseByteArrayElements(env, src, j_src, 0);
	(*env)->ReleaseByteArrayElements(env, dst, j_dst, 0);
}

JNIEXPORT void JNICALL Java_com_uraroji_garage_android_arrraycopybench_NativeCopy_copyNative___3SI_3SII
  (JNIEnv *env, jclass cls, jshortArray src, jint srcPos, jshortArray dst, jint dstPos, jint length) {
	jshort* j_src = (*env)->GetShortArrayElements(env, src, NULL);
	jshort* j_dst = (*env)->GetShortArrayElements(env, dst, NULL);

	memcpy(j_dst + dstPos, j_src + srcPos, sizeof(jshort) * length);

	(*env)->ReleaseShortArrayElements(env, src, j_src, 0);
	(*env)->ReleaseShortArrayElements(env, dst, j_dst, 0);
}

JNIEXPORT void JNICALL Java_com_uraroji_garage_android_arrraycopybench_NativeCopy_copyNative___3II_3III
  (JNIEnv *env, jclass cls, jintArray src, jint srcPos, jintArray dst, jint dstPos, jint length) {
	jint* j_src = (*env)->GetIntArrayElements(env, src, NULL);
	jint* j_dst = (*env)->GetIntArrayElements(env, dst, NULL);

	memcpy(j_dst + dstPos, j_src + srcPos, sizeof(jint) * length);

	(*env)->ReleaseIntArrayElements(env, src, j_src, 0);
	(*env)->ReleaseIntArrayElements(env, dst, j_dst, 0);
}

JNIEXPORT void JNICALL Java_com_uraroji_garage_android_arrraycopybench_NativeCopy_copyNative___3JI_3JII
  (JNIEnv *env, jclass cls, jlongArray src, jint srcPos, jlongArray dst, jint dstPos, jint length) {
	jlong* j_src = (*env)->GetLongArrayElements(env, src, NULL);
	jlong* j_dst = (*env)->GetLongArrayElements(env, dst, NULL);

	memcpy(j_dst + dstPos, j_src + srcPos, sizeof(jlong) * length);

	(*env)->ReleaseLongArrayElements(env, src, j_src, 0);
	(*env)->ReleaseLongArrayElements(env, dst, j_dst, 0);
}

JNIEXPORT void JNICALL Java_com_uraroji_garage_android_arrraycopybench_NativeCopy_copyNative___3DI_3DII
  (JNIEnv *env, jclass cls, jdoubleArray src, jint srcPos, jdoubleArray dst, jint dstPos, jint length) {
	jdouble* j_src = (*env)->GetDoubleArrayElements(env, src, NULL);
	jdouble* j_dst = (*env)->GetDoubleArrayElements(env, dst, NULL);

	memcpy(j_dst + dstPos, j_src + srcPos, sizeof(jdouble) * length);

	(*env)->ReleaseDoubleArrayElements(env, src, j_src, 0);
	(*env)->ReleaseDoubleArrayElements(env, dst, j_dst, 0);
}
