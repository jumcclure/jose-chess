/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_lirc_socket_UnixSocketImpl */

#ifndef _Included_org_lirc_socket_UnixSocketImpl
#define _Included_org_lirc_socket_UnixSocketImpl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_lirc_socket_UnixSocketImpl
 * Method:    createSocket
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_lirc_socket_UnixSocketImpl_createSocket
  (JNIEnv *, jclass);

/*
 * Class:     org_lirc_socket_UnixSocketImpl
 * Method:    bind
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_lirc_socket_UnixSocketImpl_bind
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_lirc_socket_UnixSocketImpl
 * Method:    listen
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_lirc_socket_UnixSocketImpl_listen
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_lirc_socket_UnixSocketImpl
 * Method:    nativeAccept
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_lirc_socket_UnixSocketImpl_nativeAccept
  (JNIEnv *, jobject);

/*
 * Class:     org_lirc_socket_UnixSocketImpl
 * Method:    connect
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_lirc_socket_UnixSocketImpl_connect
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_lirc_socket_UnixSocketImpl
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_lirc_socket_UnixSocketImpl_close
  (JNIEnv *, jobject);

/*
 * Class:     org_lirc_socket_UnixSocketImpl
 * Method:    shutdownInput
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_lirc_socket_UnixSocketImpl_shutdownInput
  (JNIEnv *, jobject);

/*
 * Class:     org_lirc_socket_UnixSocketImpl
 * Method:    shutdownOutput
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_lirc_socket_UnixSocketImpl_shutdownOutput
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif