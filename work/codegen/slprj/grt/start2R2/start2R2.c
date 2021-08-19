/*
 * Code generation for system model 'start2R2'
 *
 * Model                      : start2R2
 * Model version              : 3.24
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Tue Jul 13 04:19:04 2021
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "start2R2.h"
#include "start2R2_private.h"

/* Output and update for referenced model: 'start2R2' */
void start2R2(const real_T rtu_Reference[3], real_T rty_RotatedReference[3])
{
  const real_T *tmp;
  int32_T i;

  /* Product: '<Root>/Matrix Multiply1' incorporates:
   *  Constant: '<Root>/Constant'
   */
  tmp = &rtCP_Constant_Value[0];
  for (i = 0; i < 3; i++) {
    rty_RotatedReference[i] = 0.0;
    rty_RotatedReference[i] += tmp[i] * rtu_Reference[0];
    rty_RotatedReference[i] += tmp[i + 3] * rtu_Reference[1];
    rty_RotatedReference[i] += tmp[i + 6] * rtu_Reference[2];
  }

  /* End of Product: '<Root>/Matrix Multiply1' */
}

/* Model initialize function */
void start2R2_initialize(const char_T **rt_errorStatus, RT_MODEL_start2R2_T *
  const start2R2_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(start2R2_M, rt_errorStatus);
}
