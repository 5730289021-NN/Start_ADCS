/*
 * start2R2_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "start2R2".
 *
 * Model version              : 3.24
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Tue Jul 13 04:19:04 2021
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_start2R2_private_h_
#define RTW_HEADER_start2R2_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         (*((rtm)->errorStatus))
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    (*((rtm)->errorStatus) = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  (rtm)->errorStatus
#endif

#ifndef rtmSetErrorStatusPointer
#define rtmSetErrorStatusPointer(rtm, val) ((rtm)->errorStatus = (val))
#endif

extern const real_T rtCP_pooled_VFRqbNG3Rfzk[9];

#define rtCP_Constant_Value            rtCP_pooled_VFRqbNG3Rfzk  /* Expression: [0 -1 0; -1 0 0; 0 0 -1]
                                                                  * Referenced by: '<Root>/Constant'
                                                                  */
#endif                                 /* RTW_HEADER_start2R2_private_h_ */
