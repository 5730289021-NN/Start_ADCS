/*
 * asbCubeSatACS_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "asbCubeSatACS".
 *
 * Model version              : 4.1
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Tue Jul 13 04:18:47 2021
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "asbCubeSatACS.h"
#include "asbCubeSatACS_private.h"

/* Invariant block signals (default storage) */
const ConstB_asbCubeSatACS_h_T asbCubeSatACS_ConstB = {
  0.0,                                 /* '<S77>/Dot Product3' */
  1.0,                                 /* '<S77>/Dot Product1' */
  1.0,                                 /* '<S77>/Dot Product2' */
  1.0,                                 /* '<S77>/Divide1' */
  1.0,                                 /* '<S77>/Sqrt3' */
  0.0,                                 /* '<S77>/Divide' */
  -1.0,                                /* '<S77>/Bias' */
  1.0,                                 /* '<S77>/Abs' */
  1.0,                                 /* '<S77>/Bias1' */
  1.0,                                 /* '<S77>/Abs1' */
  1.0,                                 /* '<S111>/Dot Product1' */
  1.0,                                 /* '<S84>/Dot Product1' */
  -0.0,                                /* '<S113>/Gain' */
  1.0,                                 /* '<S113>/Gain2' */

  { -0.0, 0.0, 0.0 },                  /* '<S113>/Switch3' */
  0.0,                                 /* '<S121>/i x j' */
  0.0,                                 /* '<S121>/j x k' */
  0.0,                                 /* '<S121>/k x i' */
  0.0,                                 /* '<S122>/i x k' */
  -0.0,                                /* '<S122>/j x i' */
  -0.0,                                /* '<S122>/k x j' */

  { 0.0, 0.0, 0.0 },                   /* '<S120>/Sum' */
  0.0,                                 /* '<S142>/i x j' */
  0.0,                                 /* '<S142>/j x k' */
  -1.0,                                /* '<S142>/k x i' */
  0.0,                                 /* '<S143>/i x k' */
  0.0,                                 /* '<S143>/j x i' */
  -0.0,                                /* '<S143>/k x j' */

  { 0.0, -1.0, 0.0 },                  /* '<S140>/Sum' */
  0.0,                                 /* '<S144>/i x j' */
  1.0,                                 /* '<S144>/j x k' */
  0.0,                                 /* '<S144>/k x i' */
  -0.0,                                /* '<S145>/i x k' */
  -0.0,                                /* '<S145>/j x i' */
  0.0,                                 /* '<S145>/k x j' */

  { 1.0, 0.0, 0.0 },                   /* '<S141>/Sum' */
  1                                    /* '<S113>/x>z' */
};
