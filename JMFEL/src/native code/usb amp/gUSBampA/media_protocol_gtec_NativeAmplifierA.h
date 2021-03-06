/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class media_protocol_gtec_NativeAmplifierA */

#ifndef _Included_media_protocol_gtec_NativeAmplifierA
#define _Included_media_protocol_gtec_NativeAmplifierA
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    getHeaderSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_media_protocol_gtec_NativeAmplifierA_getHeaderSize
  (JNIEnv *, jobject);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    getSizeOfFloat
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_media_protocol_gtec_NativeAmplifierA_getSizeOfFloat
  (JNIEnv *, jobject);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    getDriverVersion
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_media_protocol_gtec_NativeAmplifierA_getDriverVersion
  (JNIEnv *, jobject);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    probeDevice
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_probeDevice
  (JNIEnv *, jobject, jint);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    openDevice
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_openDevice__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    openDevice
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_openDevice__Ljava_lang_String_2
  (JNIEnv *, jobject, jstring);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    closeDevice
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_closeDevice
  (JNIEnv *, jobject);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    getData
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_media_protocol_gtec_NativeAmplifierA_getData
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    setBufferSize
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_setBufferSize
  (JNIEnv *, jobject, jint);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    setSampleRate
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_setSampleRate
  (JNIEnv *, jobject, jint);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    start
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_start
  (JNIEnv *, jobject);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    stop
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_stop
  (JNIEnv *, jobject);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    setChannels
 * Signature: ([I)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_setChannels
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    setDigitalOut
 * Signature: (IZ)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_setDigitalOut
  (JNIEnv *, jobject, jint, jboolean);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    getDigitalIO
 * Signature: ([Z[Z)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_getDigitalIO
  (JNIEnv *, jobject, jbooleanArray, jbooleanArray);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    getLastError
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_media_protocol_gtec_NativeAmplifierA_getLastError
  (JNIEnv *, jobject);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    getLastErrorCode
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_media_protocol_gtec_NativeAmplifierA_getLastErrorCode
  (JNIEnv *, jobject);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    getLastErrorMessage
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_media_protocol_gtec_NativeAmplifierA_getLastErrorMessage
  (JNIEnv *, jobject);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    resetTransfer
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_resetTransfer
  (JNIEnv *, jobject);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    getSerial
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_media_protocol_gtec_NativeAmplifierA_getSerial
  (JNIEnv *, jobject);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    enableTriggerLine
 * Signature: (Z)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_enableTriggerLine
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    getImpedance
 * Signature: (I)D
 */
JNIEXPORT jdouble JNICALL Java_media_protocol_gtec_NativeAmplifierA_getImpedance
  (JNIEnv *, jobject, jint);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    calibrate
 * Signature: ([F[F)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_calibrate
  (JNIEnv *, jobject, jfloatArray, jfloatArray);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    setScale
 * Signature: ([F[F)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_setScale
  (JNIEnv *, jobject, jfloatArray, jfloatArray);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    getScale
 * Signature: ([F[F)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_getScale
  (JNIEnv *, jobject, jfloatArray, jfloatArray);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    getFilterSpec
 * Signature: ([FI)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_getFilterSpec
  (JNIEnv *, jobject, jfloatArray, jint);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    getNumberOfFilters
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_media_protocol_gtec_NativeAmplifierA_getNumberOfFilters
  (JNIEnv *, jobject);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    setBandPass
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_setBandPass
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    getNotchFilterSpec
 * Signature: ([FI)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_getNotchFilterSpec
  (JNIEnv *, jobject, jfloatArray, jint);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    getNumberOfNotchFilters
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_media_protocol_gtec_NativeAmplifierA_getNumberOfNotchFilters
  (JNIEnv *, jobject);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    setNotch
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_setNotch
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    setMode
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_setMode
  (JNIEnv *, jobject, jint);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    getMode
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_media_protocol_gtec_NativeAmplifierA_getMode
  (JNIEnv *, jobject);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    setGround
 * Signature: ([Z)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_setGround
  (JNIEnv *, jobject, jbooleanArray);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    getGround
 * Signature: ([Z)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_getGround
  (JNIEnv *, jobject, jbooleanArray);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    setReference
 * Signature: ([Z)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_setReference
  (JNIEnv *, jobject, jbooleanArray);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    getReference
 * Signature: ([Z)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_getReference
  (JNIEnv *, jobject, jbooleanArray);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    setBipolar
 * Signature: ([I)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_setBipolar
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    setDRLChannel
 * Signature: ([I)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_setDRLChannel
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    enableSC
 * Signature: (Z)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_enableSC
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    setSlave
 * Signature: (Z)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_setSlave
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     media_protocol_gtec_NativeAmplifierA
 * Method:    setDAC
 * Signature: (BIII)Z
 */
JNIEXPORT jboolean JNICALL Java_media_protocol_gtec_NativeAmplifierA_setDAC
  (JNIEnv *, jobject, jbyte, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
