/*
 * Code generation for system model 'asbCubeSatACS'
 *
 * Model                      : asbCubeSatACS
 * Model version              : 4.1
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Tue Jul 13 04:18:47 2021
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "asbCubeSatACS.h"
#include "asbCubeSatACS_private.h"
#include "rt_atan2d_snf.h"

/* Named constants for Chart: '<S1>/Pointing Mode Selection' */
#define asbCubeSatACS_IN_Earth         ((uint8_T)1U)
#define asbCubeSatACS_IN_Off           ((uint8_T)1U)
#define asbCubeSatACS_IN_On            ((uint8_T)2U)
#define asbCubeSatACS_IN_Sun           ((uint8_T)2U)
#define asbCubeSatACS_IN_Transition    ((uint8_T)3U)
#define asbCubeSatAC_IN_NO_ACTIVE_CHILD ((uint8_T)0U)

const StatesOutBus asbCubeSatACS_rtZStatesOutBus = {
  {
    0.0, 0.0, 0.0 }
  ,                                    /* V_ecef */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* X_ecef */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* q_ecef2b */

  {
    0.0, 0.0, 0.0, 0.0 }
  ,                                    /* q_eci2b */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* Euler */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* LatLonAlt */

  {
    0.0, 0.0, 0.0 }
  /* x_sun_eci */
} ;                                    /* StatesOutBus ground */

const EnvBus asbCubeSatACS_rtZEnvBus = {
  {
    0.0, 0.0, 0.0 }
  ,                                    /* envAccel_ecef */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* envTorques_body */

  {
    0.0, 0.0, 0.0 }
  ,                                    /* x_sun_eci */

  {
    0.0, 0.0, 0.0 }
  /* earthAngRate */
} ;                                    /* EnvBus ground */

/*
 * Output and update for action system:
 *    '<S67>/If Action Subsystem2'
 *    '<S166>/If Action Subsystem2'
 */
void asbCubeSatAC_IfActionSubsystem2(real_T rtu_In, real_T *rty_OutOrig)
{
  /* Inport: '<S70>/In' */
  *rty_OutOrig = rtu_In;
}

/*
 * Output and update for action system:
 *    '<S77>/If Action Subsystem'
 *    '<S78>/If Action Subsystem'
 *    '<S111>/If Action Subsystem'
 *    '<S126>/If Action Subsystem'
 */
void asbCubeSatACS_IfActionSubsystem(real_T *rty_Out1)
{
  /* SignalConversion generated from: '<S88>/Out1' incorporates:
   *  Constant: '<S88>/Constant'
   */
  *rty_Out1 = 1.0;
}

/*
 * Output and update for action system:
 *    '<S77>/If Action Subsystem1'
 *    '<S78>/If Action Subsystem1'
 *    '<S111>/If Action Subsystem1'
 *    '<S126>/If Action Subsystem1'
 */
void asbCubeSatAC_IfActionSubsystem1(real_T *rty_Out1)
{
  /* SignalConversion generated from: '<S89>/Out1' incorporates:
   *  Constant: '<S89>/Constant'
   */
  *rty_Out1 = -1.0;
}

/*
 * Output and update for action system:
 *    '<S77>/If Action Subsystem2'
 *    '<S78>/If Action Subsystem2'
 *    '<S111>/If Action Subsystem2'
 *    '<S126>/If Action Subsystem2'
 */
void asbCubeSat_IfActionSubsystem2_p(real_T *rty_Out1)
{
  /* SignalConversion generated from: '<S90>/Out1' incorporates:
   *  Constant: '<S90>/Constant'
   */
  *rty_Out1 = 0.0;
}

/* System initialize for referenced model: 'asbCubeSatACS' */
void asbCubeSatACS_Init(ACSOutBus *rty_ACSOut, B_asbCubeSatACS_c_T *localB,
  DW_asbCubeSatACS_f_T *localDW)
{
  /* SystemInitialize for Chart: '<S1>/Pointing Mode Selection' */
  localDW->is_On = asbCubeSatAC_IN_NO_ACTIVE_CHILD;
  localDW->is_active_c1_asbCubeSatACS = 0U;
  localDW->is_c1_asbCubeSatACS = asbCubeSatAC_IN_NO_ACTIVE_CHILD;

  /* InitializeConditions for DiscreteIntegrator: '<S205>/Integrator' */
  localDW->Integrator_DSTATE[0] = 0.0;

  /* InitializeConditions for Delay: '<S198>/UD' */
  localDW->UD_DSTATE[0] = 0.0;

  /* SystemInitialize for Merge: '<S3>/ Merge ' incorporates:
   *  Chart: '<S1>/Pointing Mode Selection'
   */
  localB->PointingCmd[0] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S205>/Integrator' */
  localDW->Integrator_DSTATE[1] = 0.0;

  /* InitializeConditions for Delay: '<S198>/UD' */
  localDW->UD_DSTATE[1] = 0.0;

  /* SystemInitialize for Merge: '<S3>/ Merge ' incorporates:
   *  Chart: '<S1>/Pointing Mode Selection'
   */
  localB->PointingCmd[1] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S205>/Integrator' */
  localDW->Integrator_DSTATE[2] = 0.0;

  /* InitializeConditions for Delay: '<S198>/UD' */
  localDW->UD_DSTATE[2] = 0.0;

  /* SystemInitialize for Merge: '<S3>/ Merge ' incorporates:
   *  Chart: '<S1>/Pointing Mode Selection'
   */
  localB->PointingCmd[2] = 0.0;

  /* SystemInitialize for Chart: '<S1>/Pointing Mode Selection' */
  localB->ControlMode = 0.0;

  /* SystemInitialize for IfAction SubSystem: '<S3>/On.Earth' */
  /* SystemInitialize for Merge: '<S13>/Merge' incorporates:
   *  Chart: '<S1>/Pointing Mode Selection'
   */
  localB->Merge_e[0] = 1.0;
  localB->Merge_e[1] = 0.0;
  localB->Merge_e[2] = 0.0;
  localB->Merge_e[3] = 0.0;

  /* End of SystemInitialize for SubSystem: '<S3>/On.Earth' */

  /* SystemInitialize for BusCreator generated from: '<Root>/Bus Creator' */
  rty_ACSOut->AttitudeError.Roll = localB->PointingCmd[0];
  rty_ACSOut->AttitudeError.Pitch = localB->PointingCmd[1];
  rty_ACSOut->AttitudeError.Yaw = localB->PointingCmd[2];
}

/* System reset for referenced model: 'asbCubeSatACS' */
void asbCubeSatACS_Reset(B_asbCubeSatACS_c_T *localB, DW_asbCubeSatACS_f_T
  *localDW)
{
  /* SystemReset for Chart: '<S1>/Pointing Mode Selection' */
  localDW->is_On = asbCubeSatAC_IN_NO_ACTIVE_CHILD;
  localDW->is_active_c1_asbCubeSatACS = 0U;
  localDW->is_c1_asbCubeSatACS = asbCubeSatAC_IN_NO_ACTIVE_CHILD;

  /* InitializeConditions for DiscreteIntegrator: '<S205>/Integrator' */
  localDW->Integrator_DSTATE[0] = 0.0;

  /* InitializeConditions for Delay: '<S198>/UD' */
  localDW->UD_DSTATE[0] = 0.0;

  /* SystemReset for Merge: '<S3>/ Merge ' incorporates:
   *  Chart: '<S1>/Pointing Mode Selection'
   */
  localB->PointingCmd[0] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S205>/Integrator' */
  localDW->Integrator_DSTATE[1] = 0.0;

  /* InitializeConditions for Delay: '<S198>/UD' */
  localDW->UD_DSTATE[1] = 0.0;

  /* SystemReset for Merge: '<S3>/ Merge ' incorporates:
   *  Chart: '<S1>/Pointing Mode Selection'
   */
  localB->PointingCmd[1] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S205>/Integrator' */
  localDW->Integrator_DSTATE[2] = 0.0;

  /* InitializeConditions for Delay: '<S198>/UD' */
  localDW->UD_DSTATE[2] = 0.0;

  /* SystemReset for Merge: '<S3>/ Merge ' incorporates:
   *  Chart: '<S1>/Pointing Mode Selection'
   */
  localB->PointingCmd[2] = 0.0;

  /* SystemReset for Chart: '<S1>/Pointing Mode Selection' */
  localB->ControlMode = 0.0;
}

/* Outputs for referenced model: 'asbCubeSatACS' */
void asbCubeSatACS(const real_T rtu_SensorsOut_V_ecef[3], const real_T
                   rtu_SensorsOut_X_ecef[3], const real_T
                   rtu_SensorsOut_q_ecef2b[4], const real_T
                   rtu_SensorsOut_q_eci2b[4], const real_T rtu_SensorsOut_Euler
                   [3], const real_T rtu_SensorsOut_LatLonAlt[3], const real_T
                   rtu_SensorsOut_x_sun_eci[3], const real_T *rtu_AttitudeMode,
                   const real_T rtu_Environment_envAccel_ecef[3], const real_T
                   rtu_Environment_envTorques_body[3], const real_T
                   rtu_Environment_x_sun_eci[3], const real_T
                   rtu_Environment_earthAngRate[3], ACSOutBus *rty_ACSOut,
                   B_asbCubeSatACS_c_T *localB, DW_asbCubeSatACS_f_T *localDW)
{
  real_T tmpForInput;
  real_T tmpForInput_0;
  real_T tmpForInput_1;
  real_T tmpForInput_idx_0;
  real_T tmpForInput_idx_1;
  real_T tmpForInput_idx_2;
  int32_T i;

  /* BusCreator generated from: '<S1>/Pointing Mode Selection' */
  localB->BusConversion_InsertedFor_Point.V_ecef[0] = rtu_SensorsOut_V_ecef[0];
  localB->BusConversion_InsertedFor_Point.X_ecef[0] = rtu_SensorsOut_X_ecef[0];
  localB->BusConversion_InsertedFor_Point.V_ecef[1] = rtu_SensorsOut_V_ecef[1];
  localB->BusConversion_InsertedFor_Point.X_ecef[1] = rtu_SensorsOut_X_ecef[1];
  localB->BusConversion_InsertedFor_Point.V_ecef[2] = rtu_SensorsOut_V_ecef[2];
  localB->BusConversion_InsertedFor_Point.X_ecef[2] = rtu_SensorsOut_X_ecef[2];
  localB->BusConversion_InsertedFor_Point.q_ecef2b[0] = rtu_SensorsOut_q_ecef2b
    [0];
  localB->BusConversion_InsertedFor_Point.q_eci2b[0] = rtu_SensorsOut_q_eci2b[0];
  localB->BusConversion_InsertedFor_Point.q_ecef2b[1] = rtu_SensorsOut_q_ecef2b
    [1];
  localB->BusConversion_InsertedFor_Point.q_eci2b[1] = rtu_SensorsOut_q_eci2b[1];
  localB->BusConversion_InsertedFor_Point.q_ecef2b[2] = rtu_SensorsOut_q_ecef2b
    [2];
  localB->BusConversion_InsertedFor_Point.q_eci2b[2] = rtu_SensorsOut_q_eci2b[2];
  localB->BusConversion_InsertedFor_Point.q_ecef2b[3] = rtu_SensorsOut_q_ecef2b
    [3];
  localB->BusConversion_InsertedFor_Point.q_eci2b[3] = rtu_SensorsOut_q_eci2b[3];
  localB->BusConversion_InsertedFor_Point.Euler[0] = rtu_SensorsOut_Euler[0];
  localB->BusConversion_InsertedFor_Point.LatLonAlt[0] =
    rtu_SensorsOut_LatLonAlt[0];
  localB->BusConversion_InsertedFor_Point.x_sun_eci[0] =
    rtu_SensorsOut_x_sun_eci[0];

  /* BusCreator generated from: '<S1>/Pointing Mode Selection' */
  localB->BusConversion_InsertedFor_Poi_e.envAccel_ecef[0] =
    rtu_Environment_envAccel_ecef[0];
  localB->BusConversion_InsertedFor_Poi_e.envTorques_body[0] =
    rtu_Environment_envTorques_body[0];
  localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[0] =
    rtu_Environment_x_sun_eci[0];
  localB->BusConversion_InsertedFor_Poi_e.earthAngRate[0] =
    rtu_Environment_earthAngRate[0];

  /* BusCreator generated from: '<S1>/Pointing Mode Selection' */
  localB->BusConversion_InsertedFor_Point.Euler[1] = rtu_SensorsOut_Euler[1];
  localB->BusConversion_InsertedFor_Point.LatLonAlt[1] =
    rtu_SensorsOut_LatLonAlt[1];
  localB->BusConversion_InsertedFor_Point.x_sun_eci[1] =
    rtu_SensorsOut_x_sun_eci[1];

  /* BusCreator generated from: '<S1>/Pointing Mode Selection' */
  localB->BusConversion_InsertedFor_Poi_e.envAccel_ecef[1] =
    rtu_Environment_envAccel_ecef[1];
  localB->BusConversion_InsertedFor_Poi_e.envTorques_body[1] =
    rtu_Environment_envTorques_body[1];
  localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[1] =
    rtu_Environment_x_sun_eci[1];
  localB->BusConversion_InsertedFor_Poi_e.earthAngRate[1] =
    rtu_Environment_earthAngRate[1];

  /* BusCreator generated from: '<S1>/Pointing Mode Selection' */
  localB->BusConversion_InsertedFor_Point.Euler[2] = rtu_SensorsOut_Euler[2];
  localB->BusConversion_InsertedFor_Point.LatLonAlt[2] =
    rtu_SensorsOut_LatLonAlt[2];
  localB->BusConversion_InsertedFor_Point.x_sun_eci[2] =
    rtu_SensorsOut_x_sun_eci[2];

  /* BusCreator generated from: '<S1>/Pointing Mode Selection' */
  localB->BusConversion_InsertedFor_Poi_e.envAccel_ecef[2] =
    rtu_Environment_envAccel_ecef[2];
  localB->BusConversion_InsertedFor_Poi_e.envTorques_body[2] =
    rtu_Environment_envTorques_body[2];
  localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[2] =
    rtu_Environment_x_sun_eci[2];
  localB->BusConversion_InsertedFor_Poi_e.earthAngRate[2] =
    rtu_Environment_earthAngRate[2];

  /* Chart: '<S1>/Pointing Mode Selection' incorporates:
   *  If: '<S77>/If'
   */
  /* Gateway: Attitude Control/Pointing Mode Selection */
  /* During: Attitude Control/Pointing Mode Selection */
  if (localDW->is_active_c1_asbCubeSatACS == 0U) {
    /* Entry: Attitude Control/Pointing Mode Selection */
    localDW->is_active_c1_asbCubeSatACS = 1U;

    /* Entry Internal: Attitude Control/Pointing Mode Selection */
    /* Transition: '<S3>:6' */
    localDW->is_c1_asbCubeSatACS = asbCubeSatACS_IN_Off;

    /* Merge: '<S3>/ Merge ' incorporates:
     *  SignalConversion generated from: '<S4>/PointingCmd'
     */
    localB->PointingCmd[0] = 0.0;
    localB->PointingCmd[1] = 0.0;
    localB->PointingCmd[2] = 0.0;
  } else if (localDW->is_c1_asbCubeSatACS == 1) {
    /* During 'Off': '<S3>:50' */
    if (*rtu_AttitudeMode != 0.0) {
      /* Transition: '<S3>:53' */
      localB->ControlMode = 1.0;
      localDW->is_c1_asbCubeSatACS = asbCubeSatACS_IN_On;

      /* Entry Internal 'On': '<S3>:37' */
      /* Transition: '<S3>:54' */
      localDW->is_On = asbCubeSatACS_IN_Transition;
    } else {
      /* Merge: '<S3>/ Merge ' incorporates:
       *  SignalConversion generated from: '<S4>/PointingCmd'
       */
      localB->PointingCmd[0] = 0.0;
      localB->PointingCmd[1] = 0.0;
      localB->PointingCmd[2] = 0.0;
    }

    /* During 'On': '<S3>:37' */
  } else if (*rtu_AttitudeMode == 0.0) {
    /* Transition: '<S3>:41' */
    localB->ControlMode = 0.0;

    /* Exit Internal 'On': '<S3>:37' */
    localDW->is_On = asbCubeSatAC_IN_NO_ACTIVE_CHILD;
    localDW->is_c1_asbCubeSatACS = asbCubeSatACS_IN_Off;

    /* Merge: '<S3>/ Merge ' incorporates:
     *  SignalConversion generated from: '<S4>/PointingCmd'
     */
    localB->PointingCmd[0] = 0.0;
    localB->PointingCmd[1] = 0.0;
    localB->PointingCmd[2] = 0.0;
  } else {
    switch (localDW->is_On) {
     case asbCubeSatACS_IN_Earth:
      /* During 'Earth': '<S3>:48' */
      if (*rtu_AttitudeMode == 2.0) {
        /* Transition: '<S3>:56' */
        localB->ControlMode = 1.0;
        localDW->is_On = asbCubeSatACS_IN_Transition;
      } else {
        /* Product: '<S19>/j x k' */
        localB->jxk_n = localB->BusConversion_InsertedFor_Point.V_ecef[1] *
          localB->BusConversion_InsertedFor_Point.X_ecef[2];

        /* Product: '<S19>/k x i' */
        localB->kxi_p = localB->BusConversion_InsertedFor_Point.X_ecef[0] *
          localB->BusConversion_InsertedFor_Point.V_ecef[2];

        /* Product: '<S19>/i x j' */
        localB->ixj_k = localB->BusConversion_InsertedFor_Point.V_ecef[0] *
          localB->BusConversion_InsertedFor_Point.X_ecef[1];

        /* Product: '<S20>/k x j' */
        localB->kxj_n = localB->BusConversion_InsertedFor_Point.X_ecef[1] *
          localB->BusConversion_InsertedFor_Point.V_ecef[2];

        /* Product: '<S20>/i x k' */
        localB->ixk_kv = localB->BusConversion_InsertedFor_Point.V_ecef[0] *
          localB->BusConversion_InsertedFor_Point.X_ecef[2];

        /* Product: '<S20>/j x i' */
        localB->jxi_bb = localB->BusConversion_InsertedFor_Point.X_ecef[0] *
          localB->BusConversion_InsertedFor_Point.V_ecef[1];

        /* Sum: '<S12>/Sum' */
        localB->Sum_ou[0] = localB->jxk_n - localB->kxj_n;
        localB->Sum_ou[1] = localB->kxi_p - localB->ixk_kv;
        localB->Sum_ou[2] = localB->ixj_k - localB->jxi_bb;

        /* Gain: '<S7>/z = -r' */
        localB->zr[0] = -localB->BusConversion_InsertedFor_Point.X_ecef[0];
        localB->zr[1] = -localB->BusConversion_InsertedFor_Point.X_ecef[1];
        localB->zr[2] = -localB->BusConversion_InsertedFor_Point.X_ecef[2];

        /* Product: '<S17>/i x j' */
        localB->ixj_i = localB->Sum_ou[0] * localB->zr[1];

        /* Product: '<S17>/j x k' */
        localB->jxk_i = localB->Sum_ou[1] * localB->zr[2];

        /* Product: '<S17>/k x i' */
        localB->kxi_o = localB->zr[0] * localB->Sum_ou[2];

        /* Product: '<S18>/i x k' */
        localB->ixk_g = localB->Sum_ou[0] * localB->zr[2];

        /* Product: '<S18>/j x i' */
        localB->jxi_ok = localB->zr[0] * localB->Sum_ou[1];

        /* Product: '<S18>/k x j' */
        localB->kxj_g = localB->zr[1] * localB->Sum_ou[2];

        /* Sum: '<S11>/Sum' */
        localB->Sum_dv[0] = localB->jxk_i - localB->kxj_g;
        localB->Sum_dv[1] = localB->kxi_o - localB->ixk_g;
        localB->Sum_dv[2] = localB->ixj_i - localB->jxi_ok;

        /* DotProduct: '<S14>/Dot Product' */
        tmpForInput_idx_0 = localB->Sum_dv[0];
        tmpForInput_idx_1 = localB->Sum_dv[0];
        tmpForInput_idx_2 = tmpForInput_idx_0 * tmpForInput_idx_1;
        tmpForInput_idx_0 = localB->Sum_dv[1];
        tmpForInput_idx_1 = localB->Sum_dv[1];
        tmpForInput_idx_2 += tmpForInput_idx_0 * tmpForInput_idx_1;
        tmpForInput_idx_0 = localB->Sum_dv[2];
        tmpForInput_idx_1 = localB->Sum_dv[2];
        tmpForInput_idx_2 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S14>/Dot Product' */
        localB->DotProduct = tmpForInput_idx_2;

        /* Sum: '<S14>/Sum of Elements' */
        tmpForInput_idx_0 = localB->DotProduct;

        /* Sum: '<S14>/Sum of Elements' */
        localB->SumofElements = tmpForInput_idx_0;

        /* Math: '<S14>/Math Function1'
         *
         * About '<S14>/Math Function1':
         *  Operator: sqrt
         */
        tmpForInput_idx_0 = localB->SumofElements;
        if (tmpForInput_idx_0 < 0.0) {
          /* Math: '<S14>/Math Function1'
           *
           * About '<S14>/Math Function1':
           *  Operator: sqrt
           */
          localB->MathFunction1 = -sqrt(fabs(tmpForInput_idx_0));
        } else {
          /* Math: '<S14>/Math Function1'
           *
           * About '<S14>/Math Function1':
           *  Operator: sqrt
           */
          localB->MathFunction1 = sqrt(tmpForInput_idx_0);
        }

        /* Product: '<S14>/Divide' */
        localB->ORFtoECEF[0] = localB->Sum_dv[0] / localB->MathFunction1;

        /* DotProduct: '<S15>/Dot Product' */
        tmpForInput_idx_0 = localB->Sum_ou[0];
        tmpForInput_idx_1 = localB->Sum_ou[0];
        tmpForInput_idx_2 = tmpForInput_idx_0 * tmpForInput_idx_1;

        /* Product: '<S14>/Divide' */
        localB->ORFtoECEF[1] = localB->Sum_dv[1] / localB->MathFunction1;

        /* DotProduct: '<S15>/Dot Product' */
        tmpForInput_idx_0 = localB->Sum_ou[1];
        tmpForInput_idx_1 = localB->Sum_ou[1];
        tmpForInput_idx_2 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* Product: '<S14>/Divide' */
        localB->ORFtoECEF[2] = localB->Sum_dv[2] / localB->MathFunction1;

        /* DotProduct: '<S15>/Dot Product' */
        tmpForInput_idx_0 = localB->Sum_ou[2];
        tmpForInput_idx_1 = localB->Sum_ou[2];
        tmpForInput_idx_2 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S15>/Dot Product' */
        localB->DotProduct_m = tmpForInput_idx_2;

        /* Sum: '<S15>/Sum of Elements' */
        tmpForInput_idx_0 = localB->DotProduct_m;

        /* Sum: '<S15>/Sum of Elements' */
        localB->SumofElements_h = tmpForInput_idx_0;

        /* Math: '<S15>/Math Function1'
         *
         * About '<S15>/Math Function1':
         *  Operator: sqrt
         */
        tmpForInput_idx_0 = localB->SumofElements_h;
        if (tmpForInput_idx_0 < 0.0) {
          /* Math: '<S15>/Math Function1'
           *
           * About '<S15>/Math Function1':
           *  Operator: sqrt
           */
          localB->MathFunction1_n = -sqrt(fabs(tmpForInput_idx_0));
        } else {
          /* Math: '<S15>/Math Function1'
           *
           * About '<S15>/Math Function1':
           *  Operator: sqrt
           */
          localB->MathFunction1_n = sqrt(tmpForInput_idx_0);
        }

        /* Product: '<S15>/Divide' */
        localB->ORFtoECEF[3] = localB->Sum_ou[0] / localB->MathFunction1_n;

        /* DotProduct: '<S16>/Dot Product' */
        tmpForInput_idx_0 = localB->zr[0];
        tmpForInput_idx_1 = localB->zr[0];
        tmpForInput_idx_2 = tmpForInput_idx_0 * tmpForInput_idx_1;

        /* Product: '<S15>/Divide' */
        localB->ORFtoECEF[4] = localB->Sum_ou[1] / localB->MathFunction1_n;

        /* DotProduct: '<S16>/Dot Product' */
        tmpForInput_idx_0 = localB->zr[1];
        tmpForInput_idx_1 = localB->zr[1];
        tmpForInput_idx_2 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* Product: '<S15>/Divide' */
        localB->ORFtoECEF[5] = localB->Sum_ou[2] / localB->MathFunction1_n;

        /* DotProduct: '<S16>/Dot Product' */
        tmpForInput_idx_0 = localB->zr[2];
        tmpForInput_idx_1 = localB->zr[2];
        tmpForInput_idx_2 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S16>/Dot Product' */
        localB->DotProduct_b = tmpForInput_idx_2;

        /* Sum: '<S16>/Sum of Elements' */
        tmpForInput_idx_0 = localB->DotProduct_b;

        /* Sum: '<S16>/Sum of Elements' */
        localB->SumofElements_g = tmpForInput_idx_0;

        /* Math: '<S16>/Math Function1'
         *
         * About '<S16>/Math Function1':
         *  Operator: sqrt
         */
        tmpForInput_idx_0 = localB->SumofElements_g;
        if (tmpForInput_idx_0 < 0.0) {
          /* Math: '<S16>/Math Function1'
           *
           * About '<S16>/Math Function1':
           *  Operator: sqrt
           */
          localB->MathFunction1_ni = -sqrt(fabs(tmpForInput_idx_0));
        } else {
          /* Math: '<S16>/Math Function1'
           *
           * About '<S16>/Math Function1':
           *  Operator: sqrt
           */
          localB->MathFunction1_ni = sqrt(tmpForInput_idx_0);
        }

        /* Product: '<S16>/Divide' */
        localB->ORFtoECEF[6] = localB->zr[0] / localB->MathFunction1_ni;
        localB->ORFtoECEF[7] = localB->zr[1] / localB->MathFunction1_ni;
        localB->ORFtoECEF[8] = localB->zr[2] / localB->MathFunction1_ni;
        for (i = 0; i < 3; i++) {
          /* Math: '<S7>/ECEF to ORF' incorporates:
           *  Concatenate: '<S7>/ORF to ECEF'
           */
          localB->ECEFtoORF[3 * i] = localB->ORFtoECEF[i];
          localB->ECEFtoORF[3 * i + 1] = localB->ORFtoECEF[i + 3];
          localB->ECEFtoORF[3 * i + 2] = localB->ORFtoECEF[i + 6];
        }

        /* Sum: '<S24>/Add' */
        tmpForInput_idx_0 = localB->ECEFtoORF[0];
        tmpForInput_idx_1 = localB->ECEFtoORF[4];
        tmpForInput_idx_2 = localB->ECEFtoORF[8];
        tmpForInput_idx_0 += tmpForInput_idx_1;
        tmpForInput_idx_0 += tmpForInput_idx_2;

        /* Sum: '<S24>/Add' */
        localB->Add = tmpForInput_idx_0;

        /* If: '<S13>/If' incorporates:
         *  If: '<S21>/Find Maximum Diagonal Value'
         */
        if (localB->Add > 0.0) {
          /* Outputs for IfAction SubSystem: '<S13>/Positive Trace' incorporates:
           *  ActionPort: '<S22>/Action Port'
           */
          /* Sum: '<S22>/Sum' incorporates:
           *  Constant: '<S22>/Constant'
           */
          localB->Sum_dx = localB->Add + 1.0;

          /* Sqrt: '<S22>/sqrt' */
          localB->sqrt_be = sqrt(localB->Sum_dx);

          /* Gain: '<S22>/Gain' */
          localB->Merge_e[0] = 0.5 * localB->sqrt_be;

          /* Gain: '<S22>/Gain1' */
          localB->Gain1_l = 2.0 * localB->sqrt_be;

          /* Sum: '<S45>/Add' */
          localB->Add_i5 = localB->ECEFtoORF[7] - localB->ECEFtoORF[5];

          /* Sum: '<S44>/Add' */
          localB->Add_fn = localB->ECEFtoORF[2] - localB->ECEFtoORF[6];

          /* Sum: '<S46>/Add' */
          localB->Add_mp = localB->ECEFtoORF[3] - localB->ECEFtoORF[1];

          /* Product: '<S22>/Product' */
          localB->Merge_e[1] = localB->Add_i5 / localB->Gain1_l;
          localB->Merge_e[2] = localB->Add_fn / localB->Gain1_l;
          localB->Merge_e[3] = localB->Add_mp / localB->Gain1_l;

          /* End of Outputs for SubSystem: '<S13>/Positive Trace' */
        } else {
          /* Outputs for IfAction SubSystem: '<S13>/Negative Trace' incorporates:
           *  ActionPort: '<S21>/Action Port'
           */
          if ((localB->ECEFtoORF[4] > localB->ECEFtoORF[0]) &&
              (localB->ECEFtoORF[4] > localB->ECEFtoORF[8])) {
            /* Outputs for IfAction SubSystem: '<S21>/Maximum Value at DCM(2,2)' incorporates:
             *  ActionPort: '<S26>/Action Port'
             */
            /* If: '<S21>/Find Maximum Diagonal Value' incorporates:
             *  Constant: '<S38>/Constant'
             *  Gain: '<S26>/Gain'
             *  Gain: '<S26>/Gain1'
             *  Gain: '<S26>/Gain3'
             *  Gain: '<S26>/Gain4'
             *  Product: '<S26>/Product'
             *  Product: '<S37>/Product'
             *  Sqrt: '<S26>/sqrt'
             *  Sum: '<S34>/Add'
             *  Sum: '<S35>/Add'
             *  Sum: '<S36>/Add'
             *  Sum: '<S38>/Add'
             *  Switch: '<S37>/Switch'
             */
            localB->Add_hm = ((localB->ECEFtoORF[4] - localB->ECEFtoORF[0]) -
                              localB->ECEFtoORF[8]) + 1.0;
            localB->sqrt_p = sqrt(localB->Add_hm);
            localB->Merge_e[2] = 0.5 * localB->sqrt_p;
            localB->Add_o = localB->ECEFtoORF[1] + localB->ECEFtoORF[3];
            localB->Add_f = localB->ECEFtoORF[5] + localB->ECEFtoORF[7];
            localB->Add_b4 = localB->ECEFtoORF[2] - localB->ECEFtoORF[6];
            if (localB->sqrt_p != 0.0) {
              /* Switch: '<S37>/Switch' incorporates:
               *  Constant: '<S37>/Constant1'
               */
              localB->Switch_f1[0] = 0.5;
              localB->Switch_f1[1] = localB->sqrt_p;
            } else {
              /* Switch: '<S37>/Switch' */
              localB->Switch_f1[0] = 0.0;
              localB->Switch_f1[1] = 1.0;
            }

            localB->Product_jp = localB->Switch_f1[0] / localB->Switch_f1[1];
            localB->Product_oi[0] = localB->Add_o * localB->Product_jp;
            localB->Product_oi[1] = localB->Add_f * localB->Product_jp;
            localB->Product_oi[2] = localB->Add_b4 * localB->Product_jp;
            localB->Merge_e[1] = localB->Product_oi[0];
            localB->Merge_e[3] = localB->Product_oi[1];
            localB->Merge_e[0] = localB->Product_oi[2];

            /* End of Outputs for SubSystem: '<S21>/Maximum Value at DCM(2,2)' */
          } else if (localB->ECEFtoORF[8] > localB->ECEFtoORF[0]) {
            /* Outputs for IfAction SubSystem: '<S21>/Maximum Value at DCM(3,3)' incorporates:
             *  ActionPort: '<S27>/Action Port'
             */
            /* If: '<S21>/Find Maximum Diagonal Value' incorporates:
             *  Constant: '<S43>/Constant'
             *  Gain: '<S27>/Gain'
             *  Gain: '<S27>/Gain1'
             *  Gain: '<S27>/Gain2'
             *  Gain: '<S27>/Gain3'
             *  Product: '<S27>/Product'
             *  Product: '<S42>/Product'
             *  Sqrt: '<S27>/sqrt'
             *  Sum: '<S39>/Add'
             *  Sum: '<S40>/Add'
             *  Sum: '<S41>/Add'
             *  Sum: '<S43>/Add'
             *  Switch: '<S42>/Switch'
             */
            localB->Add_h = ((localB->ECEFtoORF[8] - localB->ECEFtoORF[0]) -
                             localB->ECEFtoORF[4]) + 1.0;
            localB->sqrt_o2 = sqrt(localB->Add_h);
            localB->Merge_e[3] = 0.5 * localB->sqrt_o2;
            localB->Add_b = localB->ECEFtoORF[2] + localB->ECEFtoORF[6];
            localB->Add_a = localB->ECEFtoORF[5] + localB->ECEFtoORF[7];
            localB->Add_p = localB->ECEFtoORF[3] - localB->ECEFtoORF[1];
            if (localB->sqrt_o2 != 0.0) {
              /* Switch: '<S42>/Switch' incorporates:
               *  Constant: '<S42>/Constant1'
               */
              localB->Switch_o[0] = 0.5;
              localB->Switch_o[1] = localB->sqrt_o2;
            } else {
              /* Switch: '<S42>/Switch' */
              localB->Switch_o[0] = 0.0;
              localB->Switch_o[1] = 1.0;
            }

            localB->Product_ph = localB->Switch_o[0] / localB->Switch_o[1];
            localB->Product_oee[0] = localB->Add_b * localB->Product_ph;
            localB->Product_oee[1] = localB->Add_a * localB->Product_ph;
            localB->Product_oee[2] = localB->Add_p * localB->Product_ph;
            localB->Merge_e[1] = localB->Product_oee[0];
            localB->Merge_e[2] = localB->Product_oee[1];
            localB->Merge_e[0] = localB->Product_oee[2];

            /* End of Outputs for SubSystem: '<S21>/Maximum Value at DCM(3,3)' */
          } else {
            /* Outputs for IfAction SubSystem: '<S21>/Maximum Value at DCM(1,1)' incorporates:
             *  ActionPort: '<S25>/Action Port'
             */
            /* If: '<S21>/Find Maximum Diagonal Value' incorporates:
             *  Constant: '<S33>/Constant'
             *  Gain: '<S25>/Gain'
             *  Gain: '<S25>/Gain1'
             *  Gain: '<S25>/Gain2'
             *  Gain: '<S25>/Gain3'
             *  Product: '<S25>/Product'
             *  Product: '<S32>/Product'
             *  Sqrt: '<S25>/sqrt'
             *  Sum: '<S29>/Add'
             *  Sum: '<S30>/Add'
             *  Sum: '<S31>/Add'
             *  Sum: '<S33>/Add'
             *  Switch: '<S32>/Switch'
             */
            localB->Add_d = ((localB->ECEFtoORF[0] - localB->ECEFtoORF[4]) -
                             localB->ECEFtoORF[8]) + 1.0;
            localB->sqrt_nk = sqrt(localB->Add_d);
            localB->Merge_e[1] = 0.5 * localB->sqrt_nk;
            if (localB->sqrt_nk != 0.0) {
              /* Switch: '<S32>/Switch' incorporates:
               *  Constant: '<S32>/Constant1'
               */
              localB->Switch_f[0] = 0.5;
              localB->Switch_f[1] = localB->sqrt_nk;
            } else {
              /* Switch: '<S32>/Switch' */
              localB->Switch_f[0] = 0.0;
              localB->Switch_f[1] = 1.0;
            }

            localB->Product_n4 = localB->Switch_f[0] / localB->Switch_f[1];
            localB->Add_de = localB->ECEFtoORF[1] + localB->ECEFtoORF[3];
            localB->Add_i = localB->ECEFtoORF[2] + localB->ECEFtoORF[6];
            localB->Add_m = localB->ECEFtoORF[7] - localB->ECEFtoORF[5];
            localB->Product_i2[0] = localB->Product_n4 * localB->Add_de;
            localB->Product_i2[1] = localB->Product_n4 * localB->Add_i;
            localB->Product_i2[2] = localB->Product_n4 * localB->Add_m;
            localB->Merge_e[2] = localB->Product_i2[0];
            localB->Merge_e[3] = localB->Product_i2[1];
            localB->Merge_e[0] = localB->Product_i2[2];

            /* End of Outputs for SubSystem: '<S21>/Maximum Value at DCM(1,1)' */
          }

          /* End of Outputs for SubSystem: '<S13>/Negative Trace' */
        }

        /* Product: '<S60>/Product' */
        localB->Product_ky = localB->BusConversion_InsertedFor_Point.q_ecef2b[0]
          * localB->BusConversion_InsertedFor_Point.q_ecef2b[0];

        /* Product: '<S60>/Product1' */
        localB->Product1_li = localB->BusConversion_InsertedFor_Point.q_ecef2b[1]
          * localB->BusConversion_InsertedFor_Point.q_ecef2b[1];

        /* Product: '<S60>/Product2' */
        localB->Product2_g = localB->BusConversion_InsertedFor_Point.q_ecef2b[2]
          * localB->BusConversion_InsertedFor_Point.q_ecef2b[2];

        /* Product: '<S60>/Product3' */
        localB->Product3_a = localB->BusConversion_InsertedFor_Point.q_ecef2b[3]
          * localB->BusConversion_InsertedFor_Point.q_ecef2b[3];

        /* Sum: '<S60>/Sum' */
        localB->Sum_hk = ((localB->Product_ky + localB->Product1_li) +
                          localB->Product2_g) + localB->Product3_a;

        /* Product: '<S8>/Divide' */
        localB->Divide_j = localB->BusConversion_InsertedFor_Point.q_ecef2b[0] /
          localB->Sum_hk;

        /* UnaryMinus: '<S59>/Unary Minus' */
        localB->UnaryMinus = -localB->BusConversion_InsertedFor_Point.q_ecef2b[1];

        /* Product: '<S8>/Divide1' */
        localB->Divide1_d = localB->UnaryMinus / localB->Sum_hk;

        /* UnaryMinus: '<S59>/Unary Minus1' */
        localB->UnaryMinus1 = -localB->BusConversion_InsertedFor_Point.q_ecef2b
          [2];

        /* Product: '<S8>/Divide2' */
        localB->Divide2 = localB->UnaryMinus1 / localB->Sum_hk;

        /* UnaryMinus: '<S59>/Unary Minus2' */
        localB->UnaryMinus2 = -localB->BusConversion_InsertedFor_Point.q_ecef2b
          [3];

        /* Product: '<S8>/Divide3' */
        localB->Divide3 = localB->UnaryMinus2 / localB->Sum_hk;

        /* Product: '<S61>/Product' */
        localB->Product_pb = localB->Divide_j * localB->Merge_e[0];

        /* Product: '<S61>/Product1' */
        localB->Product1_pg = localB->Divide1_d * localB->Merge_e[1];

        /* Product: '<S61>/Product2' */
        localB->Product2_mw = localB->Divide2 * localB->Merge_e[2];

        /* Product: '<S61>/Product3' */
        localB->Product3_cd = localB->Divide3 * localB->Merge_e[3];

        /* Sum: '<S61>/Sum' */
        localB->Sum_fj = ((localB->Product_pb - localB->Product1_pg) -
                          localB->Product2_mw) - localB->Product3_cd;

        /* Product: '<S62>/Product' */
        localB->Product_la = localB->Divide_j * localB->Merge_e[1];

        /* Product: '<S62>/Product1' */
        localB->Product1_p5 = localB->Divide1_d * localB->Merge_e[0];

        /* Product: '<S62>/Product2' */
        localB->Product2_jd = localB->Divide2 * localB->Merge_e[3];

        /* Product: '<S62>/Product3' */
        localB->Product3_db = localB->Divide3 * localB->Merge_e[2];

        /* Sum: '<S62>/Sum' */
        localB->Sum_c3 = ((localB->Product_la + localB->Product1_p5) +
                          localB->Product2_jd) - localB->Product3_db;

        /* Product: '<S63>/Product' */
        localB->Product_nm = localB->Divide_j * localB->Merge_e[2];

        /* Product: '<S63>/Product1' */
        localB->Product1_od = localB->Divide1_d * localB->Merge_e[3];

        /* Product: '<S63>/Product2' */
        localB->Product2_bn = localB->Divide2 * localB->Merge_e[0];

        /* Product: '<S63>/Product3' */
        localB->Product3_gc = localB->Divide3 * localB->Merge_e[1];

        /* Sum: '<S63>/Sum' */
        localB->Sum_hn = ((localB->Product_nm - localB->Product1_od) +
                          localB->Product2_bn) + localB->Product3_gc;

        /* Product: '<S64>/Product' */
        localB->Product_m0 = localB->Divide_j * localB->Merge_e[3];

        /* Product: '<S64>/Product1' */
        localB->Product1_e = localB->Divide1_d * localB->Merge_e[2];

        /* Product: '<S64>/Product2' */
        localB->Product2_dz = localB->Divide2 * localB->Merge_e[1];

        /* Product: '<S64>/Product3' */
        localB->Product3_ox = localB->Divide3 * localB->Merge_e[0];

        /* Sum: '<S64>/Sum' */
        localB->Sum_h4 = ((localB->Product_m0 + localB->Product1_e) -
                          localB->Product2_dz) + localB->Product3_ox;

        /* Product: '<S72>/Product' */
        localB->Product_mx = localB->Sum_fj * localB->Sum_fj;

        /* Product: '<S72>/Product1' */
        localB->Product1_fz = localB->Sum_c3 * localB->Sum_c3;

        /* Product: '<S72>/Product2' */
        localB->Product2_p4 = localB->Sum_hn * localB->Sum_hn;

        /* Product: '<S72>/Product3' */
        localB->Product3_kb = localB->Sum_h4 * localB->Sum_h4;

        /* Sum: '<S72>/Sum' */
        localB->Sum_k = ((localB->Product_mx + localB->Product1_fz) +
                         localB->Product2_p4) + localB->Product3_kb;

        /* Sqrt: '<S71>/sqrt' */
        localB->sqrt_j = sqrt(localB->Sum_k);

        /* Product: '<S66>/Product' */
        localB->Product_j = localB->Sum_fj / localB->sqrt_j;

        /* Product: '<S66>/Product1' */
        localB->Product1_i = localB->Sum_c3 / localB->sqrt_j;

        /* Product: '<S66>/Product2' */
        localB->Product2_ev = localB->Sum_hn / localB->sqrt_j;

        /* Product: '<S66>/Product3' */
        localB->Product3_f = localB->Sum_h4 / localB->sqrt_j;

        /* Fcn: '<S10>/fcn3' */
        localB->fcn3_l = (localB->Product1_i * localB->Product3_f +
                          localB->Product_j * localB->Product2_ev) * 2.0;

        /* If: '<S67>/If' */
        if (localB->fcn3_l > 1.0) {
          /* Outputs for IfAction SubSystem: '<S67>/If Action Subsystem' incorporates:
           *  ActionPort: '<S68>/Action Port'
           */
          /* Merge: '<S67>/Merge' incorporates:
           *  Constant: '<S68>/Constant'
           */
          localB->Merge_c = 1.0;

          /* End of Outputs for SubSystem: '<S67>/If Action Subsystem' */
        } else if (localB->fcn3_l < -1.0) {
          /* Outputs for IfAction SubSystem: '<S67>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S69>/Action Port'
           */
          /* Merge: '<S67>/Merge' incorporates:
           *  Constant: '<S69>/Constant'
           */
          localB->Merge_c = 1.0;

          /* End of Outputs for SubSystem: '<S67>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S67>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S70>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem2(localB->fcn3_l, &localB->Merge_c);

          /* End of Outputs for SubSystem: '<S67>/If Action Subsystem2' */
        }

        /* Fcn: '<S10>/fcn1' */
        localB->fcn1_l = (localB->Product2_ev * localB->Product3_f -
                          localB->Product_j * localB->Product1_i) * -2.0;

        /* Fcn: '<S10>/fcn2' */
        localB->fcn2_k = ((localB->Product_j * localB->Product_j -
                           localB->Product1_i * localB->Product1_i) -
                          localB->Product2_ev * localB->Product2_ev) +
          localB->Product3_f * localB->Product3_f;

        /* Trigonometry: '<S65>/Trigonometric Function1' */
        localB->PointingCmd[0] = rt_atan2d_snf(localB->fcn1_l, localB->fcn2_k);

        /* Fcn: '<S10>/fcn4' */
        localB->fcn4_e = (localB->Product1_i * localB->Product2_ev -
                          localB->Product_j * localB->Product3_f) * -2.0;

        /* Fcn: '<S10>/fcn5' */
        localB->fcn5_p = ((localB->Product_j * localB->Product_j +
                           localB->Product1_i * localB->Product1_i) -
                          localB->Product2_ev * localB->Product2_ev) -
          localB->Product3_f * localB->Product3_f;

        /* Trigonometry: '<S65>/Trigonometric Function3' */
        localB->PointingCmd[2] = rt_atan2d_snf(localB->fcn4_e, localB->fcn5_p);

        /* Trigonometry: '<S65>/trigFcn' */
        tmpForInput_idx_0 = localB->Merge_c;
        if (tmpForInput_idx_0 > 1.0) {
          tmpForInput_idx_0 = 1.0;
        } else if (tmpForInput_idx_0 < -1.0) {
          tmpForInput_idx_0 = -1.0;
        }

        localB->PointingCmd[1] = asin(tmpForInput_idx_0);
      }
      break;

     case asbCubeSatACS_IN_Sun:
      /* During 'Sun': '<S3>:49' */
      if (*rtu_AttitudeMode == 1.0) {
        /* Transition: '<S3>:55' */
        localB->ControlMode = 1.0;
        localDW->is_On = asbCubeSatACS_IN_Transition;
      } else {
        if (asbCubeSatACS_ConstB.Abs < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem' incorporates:
           *  ActionPort: '<S88>/Action Port'
           */
          /* If: '<S77>/If' */
          asbCubeSatACS_IfActionSubsystem(&localB->Merge);

          /* End of Outputs for SubSystem: '<S77>/If Action Subsystem' */
        } else if (asbCubeSatACS_ConstB.Abs1 < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S89>/Action Port'
           */
          /* If: '<S77>/If' */
          asbCubeSatAC_IfActionSubsystem1(&localB->Merge);

          /* End of Outputs for SubSystem: '<S77>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S90>/Action Port'
           */
          /* If: '<S77>/If' */
          asbCubeSat_IfActionSubsystem2_p(&localB->Merge);

          /* End of Outputs for SubSystem: '<S77>/If Action Subsystem2' */
        }

        /* Product: '<S157>/Product' incorporates:
         *  If: '<S77>/If'
         */
        localB->Product = localB->BusConversion_InsertedFor_Point.q_eci2b[0] *
          localB->BusConversion_InsertedFor_Point.q_eci2b[0];

        /* Product: '<S157>/Product1' */
        localB->Product1 = localB->BusConversion_InsertedFor_Point.q_eci2b[1] *
          localB->BusConversion_InsertedFor_Point.q_eci2b[1];

        /* Product: '<S157>/Product2' */
        localB->Product2 = localB->BusConversion_InsertedFor_Point.q_eci2b[2] *
          localB->BusConversion_InsertedFor_Point.q_eci2b[2];

        /* Product: '<S157>/Product3' */
        localB->Product3 = localB->BusConversion_InsertedFor_Point.q_eci2b[3] *
          localB->BusConversion_InsertedFor_Point.q_eci2b[3];

        /* Sum: '<S157>/Sum' */
        localB->Sum_n = ((localB->Product + localB->Product1) + localB->Product2)
          + localB->Product3;

        /* Sqrt: '<S156>/sqrt' */
        localB->sqrt_o = sqrt(localB->Sum_n);

        /* Product: '<S152>/Product2' */
        localB->Product2_f = localB->BusConversion_InsertedFor_Point.q_eci2b[2] /
          localB->sqrt_o;

        /* Product: '<S153>/Product6' */
        localB->Product6 = localB->Product2_f * localB->Product2_f;

        /* Product: '<S152>/Product3' */
        localB->Product3_b = localB->BusConversion_InsertedFor_Point.q_eci2b[3] /
          localB->sqrt_o;

        /* Product: '<S153>/Product7' */
        localB->Product7 = localB->Product3_b * localB->Product3_b;

        /* Sum: '<S153>/Sum3' incorporates:
         *  Constant: '<S153>/Constant'
         */
        localB->Sum3 = (0.5 - localB->Product6) - localB->Product7;

        /* Gain: '<S153>/Gain2' */
        localB->Gain2 = 2.0 * localB->Sum3;

        /* Product: '<S153>/Product8' */
        localB->Product8 = localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[0] *
          localB->Gain2;

        /* Product: '<S152>/Product1' */
        localB->Product1_d = localB->BusConversion_InsertedFor_Point.q_eci2b[1] /
          localB->sqrt_o;

        /* Product: '<S153>/Product' */
        localB->Product_m = localB->Product1_d * localB->Product2_f;

        /* Product: '<S152>/Product' */
        localB->Product_b = localB->BusConversion_InsertedFor_Point.q_eci2b[0] /
          localB->sqrt_o;

        /* Product: '<S153>/Product1' */
        localB->Product1_l = localB->Product_b * localB->Product3_b;

        /* Sum: '<S153>/Sum1' */
        localB->Sum1 = localB->Product_m + localB->Product1_l;

        /* Gain: '<S153>/Gain' */
        localB->Gain = 2.0 * localB->Sum1;

        /* Product: '<S153>/Product4' */
        localB->Product4 = localB->Gain *
          localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[1];

        /* Product: '<S153>/Product2' */
        localB->Product2_e = localB->Product_b * localB->Product2_f;

        /* Product: '<S153>/Product3' */
        localB->Product3_i = localB->Product1_d * localB->Product3_b;

        /* Sum: '<S153>/Sum2' */
        localB->Sum2 = localB->Product3_i - localB->Product2_e;

        /* Gain: '<S153>/Gain1' */
        localB->Gain1 = 2.0 * localB->Sum2;

        /* Product: '<S153>/Product5' */
        localB->Product5 = localB->Gain1 *
          localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[2];

        /* Sum: '<S153>/Sum' */
        localB->Sum_p = (localB->Product8 + localB->Product4) + localB->Product5;

        /* Product: '<S154>/Product' */
        localB->Product_l = localB->Product1_d * localB->Product2_f;

        /* Product: '<S154>/Product1' */
        localB->Product1_g = localB->Product_b * localB->Product3_b;

        /* Sum: '<S154>/Sum1' */
        localB->Sum1_m = localB->Product_l - localB->Product1_g;

        /* Gain: '<S154>/Gain' */
        localB->Gain_a = 2.0 * localB->Sum1_m;

        /* Product: '<S154>/Product4' */
        localB->Product4_k = localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[0]
          * localB->Gain_a;

        /* Product: '<S154>/Product6' */
        localB->Product6_o = localB->Product1_d * localB->Product1_d;

        /* Product: '<S154>/Product7' */
        localB->Product7_d = localB->Product3_b * localB->Product3_b;

        /* Sum: '<S154>/Sum3' incorporates:
         *  Constant: '<S154>/Constant'
         */
        localB->Sum3_g = (0.5 - localB->Product6_o) - localB->Product7_d;

        /* Gain: '<S154>/Gain2' */
        localB->Gain2_n = 2.0 * localB->Sum3_g;

        /* Product: '<S154>/Product8' */
        localB->Product8_a = localB->Gain2_n *
          localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[1];

        /* Product: '<S154>/Product2' */
        localB->Product2_a = localB->Product_b * localB->Product1_d;

        /* Product: '<S154>/Product3' */
        localB->Product3_h = localB->Product2_f * localB->Product3_b;

        /* Sum: '<S154>/Sum2' */
        localB->Sum2_o = localB->Product2_a + localB->Product3_h;

        /* Gain: '<S154>/Gain1' */
        localB->Gain1_f = 2.0 * localB->Sum2_o;

        /* Product: '<S154>/Product5' */
        localB->Product5_p = localB->Gain1_f *
          localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[2];

        /* Sum: '<S154>/Sum' */
        localB->Sum_o = (localB->Product4_k + localB->Product8_a) +
          localB->Product5_p;

        /* Product: '<S155>/Product' */
        localB->Product_p = localB->Product1_d * localB->Product3_b;

        /* Product: '<S155>/Product1' */
        localB->Product1_dq = localB->Product_b * localB->Product2_f;

        /* Sum: '<S155>/Sum1' */
        localB->Sum1_j = localB->Product_p + localB->Product1_dq;

        /* Gain: '<S155>/Gain' */
        localB->Gain_j = 2.0 * localB->Sum1_j;

        /* Product: '<S155>/Product4' */
        localB->Product4_g = localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[0]
          * localB->Gain_j;

        /* Product: '<S155>/Product2' */
        localB->Product2_l = localB->Product_b * localB->Product1_d;

        /* Product: '<S155>/Product3' */
        localB->Product3_g = localB->Product2_f * localB->Product3_b;

        /* Sum: '<S155>/Sum2' */
        localB->Sum2_m = localB->Product3_g - localB->Product2_l;

        /* Gain: '<S155>/Gain1' */
        localB->Gain1_o = 2.0 * localB->Sum2_m;

        /* Product: '<S155>/Product5' */
        localB->Product5_b = localB->Gain1_o *
          localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[1];

        /* Product: '<S155>/Product6' */
        localB->Product6_c = localB->Product1_d * localB->Product1_d;

        /* Product: '<S155>/Product7' */
        localB->Product7_g = localB->Product2_f * localB->Product2_f;

        /* Sum: '<S155>/Sum3' incorporates:
         *  Constant: '<S155>/Constant'
         */
        localB->Sum3_c = (0.5 - localB->Product6_c) - localB->Product7_g;

        /* Gain: '<S155>/Gain2' */
        localB->Gain2_a = 2.0 * localB->Sum3_c;

        /* Product: '<S155>/Product8' */
        localB->Product8_m = localB->Gain2_a *
          localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[2];

        /* Sum: '<S155>/Sum' */
        localB->Sum_j = (localB->Product4_g + localB->Product5_b) +
          localB->Product8_m;

        /* SignalConversion generated from: '<S78>/Dot Product1' */
        localB->TmpSignalConversionAtDotProduct[0] = localB->Sum_p;
        localB->TmpSignalConversionAtDotProduct[1] = localB->Sum_o;
        localB->TmpSignalConversionAtDotProduct[2] = localB->Sum_j;

        /* Product: '<S163>/Product' */
        localB->Product_bp = localB->BusConversion_InsertedFor_Point.q_eci2b[0] *
          localB->BusConversion_InsertedFor_Point.q_eci2b[0];

        /* Product: '<S163>/Product1' */
        localB->Product1_f = localB->BusConversion_InsertedFor_Point.q_eci2b[1] *
          localB->BusConversion_InsertedFor_Point.q_eci2b[1];

        /* Product: '<S163>/Product2' */
        localB->Product2_j = localB->BusConversion_InsertedFor_Point.q_eci2b[2] *
          localB->BusConversion_InsertedFor_Point.q_eci2b[2];

        /* Product: '<S163>/Product3' */
        localB->Product3_d = localB->BusConversion_InsertedFor_Point.q_eci2b[3] *
          localB->BusConversion_InsertedFor_Point.q_eci2b[3];

        /* Sum: '<S163>/Sum' */
        localB->Sum_h = ((localB->Product_bp + localB->Product1_f) +
                         localB->Product2_j) + localB->Product3_d;

        /* Sqrt: '<S162>/sqrt' */
        localB->sqrt_n = sqrt(localB->Sum_h);

        /* Product: '<S158>/Product2' */
        localB->Product2_c = localB->BusConversion_InsertedFor_Point.q_eci2b[2] /
          localB->sqrt_n;

        /* Product: '<S159>/Product6' */
        localB->Product6_b = localB->Product2_c * localB->Product2_c;

        /* Product: '<S158>/Product3' */
        localB->Product3_e = localB->BusConversion_InsertedFor_Point.q_eci2b[3] /
          localB->sqrt_n;

        /* Product: '<S159>/Product7' */
        localB->Product7_b = localB->Product3_e * localB->Product3_e;

        /* Sum: '<S159>/Sum3' incorporates:
         *  Constant: '<S159>/Constant'
         */
        localB->Sum3_j = (0.5 - localB->Product6_b) - localB->Product7_b;

        /* Gain: '<S159>/Gain2' */
        localB->Gain2_k = 2.0 * localB->Sum3_j;

        /* Product: '<S159>/Product8' */
        localB->Product8_o = 0.0 * localB->Gain2_k;

        /* Product: '<S158>/Product1' */
        localB->Product1_a = localB->BusConversion_InsertedFor_Point.q_eci2b[1] /
          localB->sqrt_n;

        /* Product: '<S159>/Product' */
        localB->Product_n = localB->Product1_a * localB->Product2_c;

        /* Product: '<S158>/Product' */
        localB->Product_e = localB->BusConversion_InsertedFor_Point.q_eci2b[0] /
          localB->sqrt_n;

        /* Product: '<S159>/Product1' */
        localB->Product1_k = localB->Product_e * localB->Product3_e;

        /* Sum: '<S159>/Sum1' */
        localB->Sum1_n = localB->Product_n + localB->Product1_k;

        /* Gain: '<S159>/Gain' */
        localB->Gain_m = 2.0 * localB->Sum1_n;

        /* Product: '<S159>/Product4' */
        localB->Product4_p = localB->Gain_m * 0.0;

        /* Product: '<S159>/Product2' */
        localB->Product2_h = localB->Product_e * localB->Product2_c;

        /* Product: '<S159>/Product3' */
        localB->Product3_m = localB->Product1_a * localB->Product3_e;

        /* Sum: '<S159>/Sum2' */
        localB->Sum2_g = localB->Product3_m - localB->Product2_h;

        /* Gain: '<S159>/Gain1' */
        localB->Gain1_p = 2.0 * localB->Sum2_g;

        /* Product: '<S159>/Product5' */
        localB->Product5_f = localB->Gain1_p;

        /* Sum: '<S159>/Sum' */
        localB->Sum_oq = (localB->Product8_o + localB->Product4_p) +
          localB->Product5_f;

        /* Product: '<S160>/Product' */
        localB->Product_g = localB->Product1_a * localB->Product2_c;

        /* Product: '<S160>/Product1' */
        localB->Product1_af = localB->Product_e * localB->Product3_e;

        /* Sum: '<S160>/Sum1' */
        localB->Sum1_h = localB->Product_g - localB->Product1_af;

        /* Gain: '<S160>/Gain' */
        localB->Gain_n = 2.0 * localB->Sum1_h;

        /* Product: '<S160>/Product4' */
        localB->Product4_c = 0.0 * localB->Gain_n;

        /* Product: '<S160>/Product6' */
        localB->Product6_p = localB->Product1_a * localB->Product1_a;

        /* Product: '<S160>/Product7' */
        localB->Product7_dp = localB->Product3_e * localB->Product3_e;

        /* Sum: '<S160>/Sum3' incorporates:
         *  Constant: '<S160>/Constant'
         */
        localB->Sum3_m = (0.5 - localB->Product6_p) - localB->Product7_dp;

        /* Gain: '<S160>/Gain2' */
        localB->Gain2_h = 2.0 * localB->Sum3_m;

        /* Product: '<S160>/Product8' */
        localB->Product8_p = localB->Gain2_h * 0.0;

        /* Product: '<S160>/Product2' */
        localB->Product2_k = localB->Product_e * localB->Product1_a;

        /* Product: '<S160>/Product3' */
        localB->Product3_c = localB->Product2_c * localB->Product3_e;

        /* Sum: '<S160>/Sum2' */
        localB->Sum2_e = localB->Product2_k + localB->Product3_c;

        /* Gain: '<S160>/Gain1' */
        localB->Gain1_c = 2.0 * localB->Sum2_e;

        /* Product: '<S160>/Product5' */
        localB->Product5_i = localB->Gain1_c;

        /* Sum: '<S160>/Sum' */
        localB->Sum_i = (localB->Product4_c + localB->Product8_p) +
          localB->Product5_i;

        /* Product: '<S161>/Product' */
        localB->Product_k = localB->Product1_a * localB->Product3_e;

        /* Product: '<S161>/Product1' */
        localB->Product1_m = localB->Product_e * localB->Product2_c;

        /* Sum: '<S161>/Sum1' */
        localB->Sum1_l = localB->Product_k + localB->Product1_m;

        /* Gain: '<S161>/Gain' */
        localB->Gain_k = 2.0 * localB->Sum1_l;

        /* Product: '<S161>/Product4' */
        localB->Product4_i = 0.0 * localB->Gain_k;

        /* Product: '<S161>/Product2' */
        localB->Product2_m = localB->Product_e * localB->Product1_a;

        /* Product: '<S161>/Product3' */
        localB->Product3_p = localB->Product2_c * localB->Product3_e;

        /* Sum: '<S161>/Sum2' */
        localB->Sum2_l = localB->Product3_p - localB->Product2_m;

        /* Gain: '<S161>/Gain1' */
        localB->Gain1_g = 2.0 * localB->Sum2_l;

        /* Product: '<S161>/Product5' */
        localB->Product5_d = localB->Gain1_g * 0.0;

        /* Product: '<S161>/Product6' */
        localB->Product6_i = localB->Product1_a * localB->Product1_a;

        /* Product: '<S161>/Product7' */
        localB->Product7_bn = localB->Product2_c * localB->Product2_c;

        /* Sum: '<S161>/Sum3' incorporates:
         *  Constant: '<S161>/Constant'
         */
        localB->Sum3_g2 = (0.5 - localB->Product6_i) - localB->Product7_bn;

        /* Gain: '<S161>/Gain2' */
        localB->Gain2_m = 2.0 * localB->Sum3_g2;

        /* Product: '<S161>/Product8' */
        localB->Product8_me = localB->Gain2_m;

        /* Sum: '<S161>/Sum' */
        localB->Sum_d = (localB->Product4_i + localB->Product5_d) +
          localB->Product8_me;

        /* SignalConversion generated from: '<S78>/Dot Product2' */
        localB->TmpSignalConversionAtDotProdu_j[0] = localB->Sum_oq;
        localB->TmpSignalConversionAtDotProdu_j[1] = localB->Sum_i;
        localB->TmpSignalConversionAtDotProdu_j[2] = localB->Sum_d;

        /* DotProduct: '<S78>/Dot Product3' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProduct[0];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_j[0];
        tmpForInput_idx_2 = tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S78>/Dot Product1' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProduct[0];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[0];
        tmpForInput = tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S78>/Dot Product2' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_j[0];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_j[0];
        tmpForInput_0 = tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S78>/Dot Product3' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProduct[1];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_j[1];
        tmpForInput_idx_2 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S78>/Dot Product1' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProduct[1];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[1];
        tmpForInput += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S78>/Dot Product2' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_j[1];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_j[1];
        tmpForInput_0 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S78>/Dot Product3' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProduct[2];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_j[2];
        tmpForInput_idx_2 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S78>/Dot Product1' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProduct[2];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[2];
        tmpForInput += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S78>/Dot Product2' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_j[2];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_j[2];
        tmpForInput_0 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S78>/Dot Product3' */
        localB->DotProduct3 = tmpForInput_idx_2;

        /* DotProduct: '<S78>/Dot Product1' */
        localB->DotProduct1 = tmpForInput;

        /* DotProduct: '<S78>/Dot Product2' */
        localB->DotProduct2 = tmpForInput_0;

        /* Product: '<S78>/Divide1' */
        localB->Divide1 = localB->DotProduct1 * localB->DotProduct2;

        /* Sqrt: '<S78>/Sqrt3' */
        localB->Sqrt3 = sqrt(localB->Divide1);

        /* Product: '<S78>/Divide' */
        localB->Divide = localB->DotProduct3 / localB->Sqrt3;

        /* Bias: '<S78>/Bias' */
        localB->Bias = localB->Divide + -1.0;

        /* Abs: '<S78>/Abs' */
        localB->Abs = fabs(localB->Bias);

        /* Bias: '<S78>/Bias1' */
        localB->Bias1 = localB->Divide + 1.0;

        /* Abs: '<S78>/Abs1' */
        localB->Abs1 = fabs(localB->Bias1);

        /* If: '<S78>/If' */
        if (localB->Abs < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S78>/If Action Subsystem' incorporates:
           *  ActionPort: '<S91>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Merge_f);

          /* End of Outputs for SubSystem: '<S78>/If Action Subsystem' */
        } else if (localB->Abs1 < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S78>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S92>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem1(&localB->Merge_f);

          /* End of Outputs for SubSystem: '<S78>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S78>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S93>/Action Port'
           */
          asbCubeSat_IfActionSubsystem2_p(&localB->Merge_f);

          /* End of Outputs for SubSystem: '<S78>/If Action Subsystem2' */
        }

        /* RelationalOperator: '<S79>/Compare' incorporates:
         *  Constant: '<S79>/Constant'
         */
        localB->Compare = (localB->Merge != 0.0);

        /* RelationalOperator: '<S80>/Compare' incorporates:
         *  Constant: '<S80>/Constant'
         */
        localB->Compare_o = (localB->Merge_f != 0.0);

        /* Logic: '<S73>/OR' */
        localB->OR = (localB->Compare || localB->Compare_o);

        /* DotProduct: '<S84>/Dot Product3' */
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[0];
        tmpForInput_idx_0 = 0.0 * tmpForInput_idx_1;

        /* DotProduct: '<S84>/Dot Product2' */
        tmpForInput_idx_2 = localB->TmpSignalConversionAtDotProduct[0];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[0];
        tmpForInput = tmpForInput_idx_2 * tmpForInput_idx_1;

        /* DotProduct: '<S111>/Dot Product3' */
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[0];
        tmpForInput_0 = 0.0 * tmpForInput_idx_1;

        /* DotProduct: '<S111>/Dot Product2' */
        tmpForInput_idx_2 = localB->TmpSignalConversionAtDotProduct[0];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[0];
        tmpForInput_1 = tmpForInput_idx_2 * tmpForInput_idx_1;

        /* DotProduct: '<S84>/Dot Product3' */
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[1];
        tmpForInput_idx_0 += 0.0 * tmpForInput_idx_1;

        /* DotProduct: '<S84>/Dot Product2' */
        tmpForInput_idx_2 = localB->TmpSignalConversionAtDotProduct[1];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[1];
        tmpForInput += tmpForInput_idx_2 * tmpForInput_idx_1;

        /* DotProduct: '<S111>/Dot Product3' */
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[1];
        tmpForInput_0 += 0.0 * tmpForInput_idx_1;

        /* DotProduct: '<S111>/Dot Product2' */
        tmpForInput_idx_2 = localB->TmpSignalConversionAtDotProduct[1];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[1];
        tmpForInput_1 += tmpForInput_idx_2 * tmpForInput_idx_1;

        /* DotProduct: '<S84>/Dot Product3' */
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[2];
        tmpForInput_idx_0 += -tmpForInput_idx_1;

        /* DotProduct: '<S84>/Dot Product2' */
        tmpForInput_idx_2 = localB->TmpSignalConversionAtDotProduct[2];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[2];
        tmpForInput += tmpForInput_idx_2 * tmpForInput_idx_1;

        /* DotProduct: '<S111>/Dot Product3' */
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[2];
        tmpForInput_0 += -tmpForInput_idx_1;

        /* DotProduct: '<S111>/Dot Product2' */
        tmpForInput_idx_2 = localB->TmpSignalConversionAtDotProduct[2];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[2];
        tmpForInput_1 += tmpForInput_idx_2 * tmpForInput_idx_1;

        /* DotProduct: '<S84>/Dot Product3' */
        localB->DotProduct3_o = tmpForInput_idx_0;

        /* DotProduct: '<S84>/Dot Product2' */
        localB->DotProduct2_c = tmpForInput;

        /* Product: '<S84>/Divide1' */
        localB->Divide1_o = asbCubeSatACS_ConstB.DotProduct1_k *
          localB->DotProduct2_c;

        /* Sqrt: '<S84>/Sqrt3' */
        localB->Sqrt3_a = sqrt(localB->Divide1_o);

        /* Sum: '<S84>/Add2' */
        localB->Add2 = localB->DotProduct3_o + localB->Sqrt3_a;

        /* Product: '<S124>/Product' */
        localB->Product_i = localB->Add2 * localB->Add2;

        /* DotProduct: '<S111>/Dot Product3' */
        localB->DotProduct3_p = tmpForInput_0;

        /* DotProduct: '<S111>/Dot Product2' */
        localB->DotProduct2_h = tmpForInput_1;

        /* Product: '<S111>/Divide1' */
        localB->Divide1_k = asbCubeSatACS_ConstB.DotProduct1_b *
          localB->DotProduct2_h;

        /* Sqrt: '<S111>/Sqrt3' */
        localB->Sqrt3_e = sqrt(localB->Divide1_k);

        /* Product: '<S111>/Divide' */
        localB->Divide_b = localB->DotProduct3_p / localB->Sqrt3_e;

        /* Bias: '<S111>/Bias' */
        localB->Bias_i = localB->Divide_b + -1.0;

        /* Abs: '<S111>/Abs' */
        localB->Abs_l = fabs(localB->Bias_i);

        /* Bias: '<S111>/Bias1' */
        localB->Bias1_f = localB->Divide_b + 1.0;

        /* Abs: '<S111>/Abs1' */
        localB->Abs1_n = fabs(localB->Bias1_f);

        /* If: '<S111>/If' */
        if (localB->Abs_l < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S111>/If Action Subsystem' incorporates:
           *  ActionPort: '<S117>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Merge_k);

          /* End of Outputs for SubSystem: '<S111>/If Action Subsystem' */
        } else if (localB->Abs1_n < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S111>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S118>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem1(&localB->Merge_k);

          /* End of Outputs for SubSystem: '<S111>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S111>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S119>/Action Port'
           */
          asbCubeSat_IfActionSubsystem2_p(&localB->Merge_k);

          /* End of Outputs for SubSystem: '<S111>/If Action Subsystem2' */
        }

        /* RelationalOperator: '<S112>/Compare' incorporates:
         *  Constant: '<S112>/Constant'
         */
        localB->Compare_e = (localB->Merge_k != -1.0);

        /* Switch: '<S84>/is 180deg Rot' */
        if (localB->Compare_e) {
          /* Product: '<S116>/j x i' */
          localB->jxi_n = 0.0 * localB->Sum_p;

          /* Product: '<S116>/i x k' */
          localB->ixk_n = 0.0 * localB->Sum_j;

          /* Product: '<S116>/k x j' */
          localB->kxj_pe = -localB->Sum_o;

          /* Product: '<S115>/i x j' */
          localB->ixj_l = 0.0 * localB->Sum_o;

          /* Product: '<S115>/k x i' */
          localB->kxi_b = -localB->Sum_p;

          /* Product: '<S115>/j x k' */
          localB->jxk_e = 0.0 * localB->Sum_j;

          /* Sum: '<S110>/Sum' */
          localB->Sum_fa[0] = localB->jxk_e - localB->kxj_pe;
          localB->Sum_fa[1] = localB->kxi_b - localB->ixk_n;
          localB->Sum_fa[2] = localB->ixj_l - localB->jxi_n;

          /* Switch: '<S84>/is 180deg Rot' */
          localB->is180degRot[0] = localB->Sum_fa[0];
          localB->is180degRot[1] = localB->Sum_fa[1];
          localB->is180degRot[2] = localB->Sum_fa[2];
        } else {
          /* Switch: '<S84>/is 180deg Rot' */
          localB->is180degRot[0] = asbCubeSatACS_ConstB.Sum[0];
          localB->is180degRot[1] = asbCubeSatACS_ConstB.Sum[1];
          localB->is180degRot[2] = asbCubeSatACS_ConstB.Sum[2];
        }

        /* Product: '<S124>/Product1' */
        localB->Product1_h = localB->is180degRot[0] * localB->is180degRot[0];

        /* Product: '<S124>/Product2' */
        localB->Product2_o = localB->is180degRot[1] * localB->is180degRot[1];

        /* Product: '<S124>/Product3' */
        localB->Product3_hw = localB->is180degRot[2] * localB->is180degRot[2];

        /* Sum: '<S124>/Sum' */
        localB->Sum_ph = ((localB->Product_i + localB->Product1_h) +
                          localB->Product2_o) + localB->Product3_hw;

        /* Sqrt: '<S123>/sqrt' */
        localB->sqrt_b = sqrt(localB->Sum_ph);

        /* Product: '<S114>/Product' */
        localB->Product_pt = localB->Add2 / localB->sqrt_b;

        /* Product: '<S114>/Product2' */
        localB->Product2_ki = localB->is180degRot[1] / localB->sqrt_b;

        /* Product: '<S103>/Product' */
        localB->Product_kc = localB->Product_pt * localB->Product_pt;

        /* Product: '<S114>/Product1' */
        localB->Product1_hz = localB->is180degRot[0] / localB->sqrt_b;

        /* Product: '<S103>/Product1' */
        localB->Product1_p = localB->Product1_hz * localB->Product1_hz;

        /* Product: '<S103>/Product2' */
        localB->Product2_e0 = localB->Product2_ki * localB->Product2_ki;

        /* Product: '<S114>/Product3' */
        localB->Product3_n = localB->is180degRot[2] / localB->sqrt_b;

        /* Product: '<S103>/Product3' */
        localB->Product3_k = localB->Product3_n * localB->Product3_n;

        /* Sum: '<S103>/Sum' */
        localB->Sum_oi = ((localB->Product_kc + localB->Product1_p) +
                          localB->Product2_e0) + localB->Product3_k;

        /* Sqrt: '<S102>/sqrt' */
        localB->sqrt_m = sqrt(localB->Sum_oi);

        /* Product: '<S98>/Product2' */
        localB->Product2_d = localB->Product2_ki / localB->sqrt_m;

        /* Product: '<S99>/Product6' */
        localB->Product6_l = localB->Product2_d * localB->Product2_d;

        /* Product: '<S98>/Product3' */
        localB->Product3_iw = localB->Product3_n / localB->sqrt_m;

        /* Product: '<S99>/Product7' */
        localB->Product7_o = localB->Product3_iw * localB->Product3_iw;

        /* Sum: '<S99>/Sum3' incorporates:
         *  Constant: '<S99>/Constant'
         */
        localB->Sum3_f = (0.5 - localB->Product6_l) - localB->Product7_o;

        /* Gain: '<S99>/Gain2' */
        localB->Gain2_g = 2.0 * localB->Sum3_f;

        /* Product: '<S99>/Product8' */
        localB->Product8_d = asbCubeSatACS_ConstB.Sum_p[0] * localB->Gain2_g;

        /* Product: '<S98>/Product1' */
        localB->Product1_pn = localB->Product1_hz / localB->sqrt_m;

        /* Product: '<S99>/Product' */
        localB->Product_o = localB->Product1_pn * localB->Product2_d;

        /* Product: '<S98>/Product' */
        localB->Product_d = localB->Product_pt / localB->sqrt_m;

        /* Product: '<S99>/Product1' */
        localB->Product1_au = localB->Product_d * localB->Product3_iw;

        /* Sum: '<S99>/Sum1' */
        localB->Sum1_c = localB->Product_o + localB->Product1_au;

        /* Gain: '<S99>/Gain' */
        localB->Gain_al = 2.0 * localB->Sum1_c;

        /* Product: '<S99>/Product4' */
        localB->Product4_pa = localB->Gain_al * asbCubeSatACS_ConstB.Sum_p[1];

        /* Product: '<S99>/Product2' */
        localB->Product2_kz = localB->Product_d * localB->Product2_d;

        /* Product: '<S99>/Product3' */
        localB->Product3_o = localB->Product1_pn * localB->Product3_iw;

        /* Sum: '<S99>/Sum2' */
        localB->Sum2_gt = localB->Product3_o - localB->Product2_kz;

        /* Gain: '<S99>/Gain1' */
        localB->Gain1_fw = 2.0 * localB->Sum2_gt;

        /* Product: '<S99>/Product5' */
        localB->Product5_d2 = localB->Gain1_fw * asbCubeSatACS_ConstB.Sum_p[2];

        /* Sum: '<S99>/Sum' */
        localB->Sum_l = (localB->Product8_d + localB->Product4_pa) +
          localB->Product5_d2;

        /* Product: '<S100>/Product' */
        localB->Product_ii = localB->Product1_pn * localB->Product2_d;

        /* Product: '<S100>/Product1' */
        localB->Product1_kp = localB->Product_d * localB->Product3_iw;

        /* Sum: '<S100>/Sum1' */
        localB->Sum1_hm = localB->Product_ii - localB->Product1_kp;

        /* Gain: '<S100>/Gain' */
        localB->Gain_mk = 2.0 * localB->Sum1_hm;

        /* Product: '<S100>/Product4' */
        localB->Product4_pz = asbCubeSatACS_ConstB.Sum_p[0] * localB->Gain_mk;

        /* Product: '<S100>/Product6' */
        localB->Product6_d = localB->Product1_pn * localB->Product1_pn;

        /* Product: '<S100>/Product7' */
        localB->Product7_k = localB->Product3_iw * localB->Product3_iw;

        /* Sum: '<S100>/Sum3' incorporates:
         *  Constant: '<S100>/Constant'
         */
        localB->Sum3_jw = (0.5 - localB->Product6_d) - localB->Product7_k;

        /* Gain: '<S100>/Gain2' */
        localB->Gain2_hi = 2.0 * localB->Sum3_jw;

        /* Product: '<S100>/Product8' */
        localB->Product8_i = localB->Gain2_hi * asbCubeSatACS_ConstB.Sum_p[1];

        /* Product: '<S100>/Product2' */
        localB->Product2_mm = localB->Product_d * localB->Product1_pn;

        /* Product: '<S100>/Product3' */
        localB->Product3_k1 = localB->Product2_d * localB->Product3_iw;

        /* Sum: '<S100>/Sum2' */
        localB->Sum2_b = localB->Product2_mm + localB->Product3_k1;

        /* Gain: '<S100>/Gain1' */
        localB->Gain1_j = 2.0 * localB->Sum2_b;

        /* Product: '<S100>/Product5' */
        localB->Product5_f1 = localB->Gain1_j * asbCubeSatACS_ConstB.Sum_p[2];

        /* Sum: '<S100>/Sum' */
        localB->Sum_n1 = (localB->Product4_pz + localB->Product8_i) +
          localB->Product5_f1;

        /* Product: '<S101>/Product' */
        localB->Product_oa = localB->Product1_pn * localB->Product3_iw;

        /* Product: '<S101>/Product1' */
        localB->Product1_o = localB->Product_d * localB->Product2_d;

        /* Sum: '<S101>/Sum1' */
        localB->Sum1_g = localB->Product_oa + localB->Product1_o;

        /* Gain: '<S101>/Gain' */
        localB->Gain_d = 2.0 * localB->Sum1_g;

        /* Product: '<S101>/Product4' */
        localB->Product4_n = asbCubeSatACS_ConstB.Sum_p[0] * localB->Gain_d;

        /* Product: '<S101>/Product2' */
        localB->Product2_f0 = localB->Product_d * localB->Product1_pn;

        /* Product: '<S101>/Product3' */
        localB->Product3_kx = localB->Product2_d * localB->Product3_iw;

        /* Sum: '<S101>/Sum2' */
        localB->Sum2_n = localB->Product3_kx - localB->Product2_f0;

        /* Gain: '<S101>/Gain1' */
        localB->Gain1_h = 2.0 * localB->Sum2_n;

        /* Product: '<S101>/Product5' */
        localB->Product5_g = localB->Gain1_h * asbCubeSatACS_ConstB.Sum_p[1];

        /* Product: '<S101>/Product6' */
        localB->Product6_d3 = localB->Product1_pn * localB->Product1_pn;

        /* Product: '<S101>/Product7' */
        localB->Product7_p = localB->Product2_d * localB->Product2_d;

        /* Sum: '<S101>/Sum3' incorporates:
         *  Constant: '<S101>/Constant'
         */
        localB->Sum3_k = (0.5 - localB->Product6_d3) - localB->Product7_p;

        /* Gain: '<S101>/Gain2' */
        localB->Gain2_n1 = 2.0 * localB->Sum3_k;

        /* Product: '<S101>/Product8' */
        localB->Product8_h = localB->Gain2_n1 * asbCubeSatACS_ConstB.Sum_p[2];

        /* Sum: '<S101>/Sum' */
        localB->Sum_dy = (localB->Product4_n + localB->Product5_g) +
          localB->Product8_h;

        /* SignalConversion generated from: '<S126>/Dot Product1' */
        localB->TmpSignalConversionAtDotProdu_h[0] = localB->Sum_l;
        localB->TmpSignalConversionAtDotProdu_h[1] = localB->Sum_n1;
        localB->TmpSignalConversionAtDotProdu_h[2] = localB->Sum_dy;

        /* Product: '<S148>/j x k' */
        localB->jxk = localB->Sum_o * localB->Sum_d;

        /* Product: '<S148>/k x i' */
        localB->kxi = localB->Sum_j * localB->Sum_oq;

        /* Product: '<S148>/i x j' */
        localB->ixj = localB->Sum_p * localB->Sum_i;

        /* Product: '<S149>/k x j' */
        localB->kxj = localB->Sum_j * localB->Sum_i;

        /* Product: '<S149>/i x k' */
        localB->ixk = localB->Sum_p * localB->Sum_d;

        /* Product: '<S149>/j x i' */
        localB->jxi = localB->Sum_o * localB->Sum_oq;

        /* Sum: '<S146>/Sum' */
        localB->Sum_hz[0] = localB->jxk - localB->kxj;
        localB->Sum_hz[1] = localB->kxi - localB->ixk;
        localB->Sum_hz[2] = localB->ixj - localB->jxi;

        /* Product: '<S150>/j x k' */
        localB->jxk_h = localB->Sum_hz[1] * localB->Sum_j;

        /* Product: '<S150>/k x i' */
        localB->kxi_d = localB->Sum_hz[2] * localB->Sum_p;

        /* Product: '<S150>/i x j' */
        localB->ixj_e = localB->Sum_hz[0] * localB->Sum_o;

        /* Product: '<S151>/k x j' */
        localB->kxj_j = localB->Sum_hz[2] * localB->Sum_o;

        /* Product: '<S151>/i x k' */
        localB->ixk_l = localB->Sum_hz[0] * localB->Sum_j;

        /* Product: '<S151>/j x i' */
        localB->jxi_b = localB->Sum_hz[1] * localB->Sum_p;

        /* Sum: '<S147>/Sum' */
        localB->Sum_lt[0] = localB->jxk_h - localB->kxj_j;
        localB->Sum_lt[1] = localB->kxi_d - localB->ixk_l;
        localB->Sum_lt[2] = localB->ixj_e - localB->jxi_b;

        /* Product: '<S109>/Product' */
        localB->Product_f = localB->Product_pt * localB->Product_pt;

        /* Product: '<S109>/Product1' */
        localB->Product1_gs = localB->Product1_hz * localB->Product1_hz;

        /* Product: '<S109>/Product2' */
        localB->Product2_ah = localB->Product2_ki * localB->Product2_ki;

        /* Product: '<S109>/Product3' */
        localB->Product3_ds = localB->Product3_n * localB->Product3_n;

        /* Sum: '<S109>/Sum' */
        localB->Sum_e = ((localB->Product_f + localB->Product1_gs) +
                         localB->Product2_ah) + localB->Product3_ds;

        /* Sqrt: '<S108>/sqrt' */
        localB->sqrt_g = sqrt(localB->Sum_e);

        /* Product: '<S104>/Product2' */
        localB->Product2_p = localB->Product2_ki / localB->sqrt_g;

        /* Product: '<S105>/Product6' */
        localB->Product6_l2 = localB->Product2_p * localB->Product2_p;

        /* Product: '<S104>/Product3' */
        localB->Product3_e1 = localB->Product3_n / localB->sqrt_g;

        /* Product: '<S105>/Product7' */
        localB->Product7_a = localB->Product3_e1 * localB->Product3_e1;

        /* Sum: '<S105>/Sum3' incorporates:
         *  Constant: '<S105>/Constant'
         */
        localB->Sum3_ky = (0.5 - localB->Product6_l2) - localB->Product7_a;

        /* Gain: '<S105>/Gain2' */
        localB->Gain2_j = 2.0 * localB->Sum3_ky;

        /* Product: '<S105>/Product8' */
        localB->Product8_g = localB->Sum_lt[0] * localB->Gain2_j;

        /* Product: '<S104>/Product1' */
        localB->Product1_kk = localB->Product1_hz / localB->sqrt_g;

        /* Product: '<S105>/Product' */
        localB->Product_og = localB->Product1_kk * localB->Product2_p;

        /* Product: '<S104>/Product' */
        localB->Product_c = localB->Product_pt / localB->sqrt_g;

        /* Product: '<S105>/Product1' */
        localB->Product1_as = localB->Product_c * localB->Product3_e1;

        /* Sum: '<S105>/Sum1' */
        localB->Sum1_mw = localB->Product_og + localB->Product1_as;

        /* Gain: '<S105>/Gain' */
        localB->Gain_kn = 2.0 * localB->Sum1_mw;

        /* Product: '<S105>/Product4' */
        localB->Product4_m = localB->Gain_kn * localB->Sum_lt[1];

        /* Product: '<S105>/Product2' */
        localB->Product2_lw = localB->Product_c * localB->Product2_p;

        /* Product: '<S105>/Product3' */
        localB->Product3_mz = localB->Product1_kk * localB->Product3_e1;

        /* Sum: '<S105>/Sum2' */
        localB->Sum2_np = localB->Product3_mz - localB->Product2_lw;

        /* Gain: '<S105>/Gain1' */
        localB->Gain1_e = 2.0 * localB->Sum2_np;

        /* Product: '<S105>/Product5' */
        localB->Product5_c = localB->Gain1_e * localB->Sum_lt[2];

        /* Sum: '<S105>/Sum' */
        localB->Sum_jg = (localB->Product8_g + localB->Product4_m) +
          localB->Product5_c;

        /* Product: '<S106>/Product' */
        localB->Product_gv = localB->Product1_kk * localB->Product2_p;

        /* Product: '<S106>/Product1' */
        localB->Product1_j = localB->Product_c * localB->Product3_e1;

        /* Sum: '<S106>/Sum1' */
        localB->Sum1_a = localB->Product_gv - localB->Product1_j;

        /* Gain: '<S106>/Gain' */
        localB->Gain_g = 2.0 * localB->Sum1_a;

        /* Product: '<S106>/Product4' */
        localB->Product4_o = localB->Sum_lt[0] * localB->Gain_g;

        /* Product: '<S106>/Product6' */
        localB->Product6_n = localB->Product1_kk * localB->Product1_kk;

        /* Product: '<S106>/Product7' */
        localB->Product7_be = localB->Product3_e1 * localB->Product3_e1;

        /* Sum: '<S106>/Sum3' incorporates:
         *  Constant: '<S106>/Constant'
         */
        localB->Sum3_kt = (0.5 - localB->Product6_n) - localB->Product7_be;

        /* Gain: '<S106>/Gain2' */
        localB->Gain2_f = 2.0 * localB->Sum3_kt;

        /* Product: '<S106>/Product8' */
        localB->Product8_pj = localB->Gain2_f * localB->Sum_lt[1];

        /* Product: '<S106>/Product2' */
        localB->Product2_cy = localB->Product_c * localB->Product1_kk;

        /* Product: '<S106>/Product3' */
        localB->Product3_j = localB->Product2_p * localB->Product3_e1;

        /* Sum: '<S106>/Sum2' */
        localB->Sum2_os = localB->Product2_cy + localB->Product3_j;

        /* Gain: '<S106>/Gain1' */
        localB->Gain1_od = 2.0 * localB->Sum2_os;

        /* Product: '<S106>/Product5' */
        localB->Product5_k = localB->Gain1_od * localB->Sum_lt[2];

        /* Sum: '<S106>/Sum' */
        localB->Sum_f = (localB->Product4_o + localB->Product8_pj) +
          localB->Product5_k;

        /* Product: '<S107>/Product' */
        localB->Product_oj = localB->Product1_kk * localB->Product3_e1;

        /* Product: '<S107>/Product1' */
        localB->Product1_gk = localB->Product_c * localB->Product2_p;

        /* Sum: '<S107>/Sum1' */
        localB->Sum1_jw = localB->Product_oj + localB->Product1_gk;

        /* Gain: '<S107>/Gain' */
        localB->Gain_n2 = 2.0 * localB->Sum1_jw;

        /* Product: '<S107>/Product4' */
        localB->Product4_nv = localB->Sum_lt[0] * localB->Gain_n2;

        /* Product: '<S107>/Product2' */
        localB->Product2_pb = localB->Product_c * localB->Product1_kk;

        /* Product: '<S107>/Product3' */
        localB->Product3_hy = localB->Product2_p * localB->Product3_e1;

        /* Sum: '<S107>/Sum2' */
        localB->Sum2_h = localB->Product3_hy - localB->Product2_pb;

        /* Gain: '<S107>/Gain1' */
        localB->Gain1_b = 2.0 * localB->Sum2_h;

        /* Product: '<S107>/Product5' */
        localB->Product5_bm = localB->Gain1_b * localB->Sum_lt[1];

        /* Product: '<S107>/Product6' */
        localB->Product6_pq = localB->Product1_kk * localB->Product1_kk;

        /* Product: '<S107>/Product7' */
        localB->Product7_f = localB->Product2_p * localB->Product2_p;

        /* Sum: '<S107>/Sum3' incorporates:
         *  Constant: '<S107>/Constant'
         */
        localB->Sum3_h = (0.5 - localB->Product6_pq) - localB->Product7_f;

        /* Gain: '<S107>/Gain2' */
        localB->Gain2_g5 = 2.0 * localB->Sum3_h;

        /* Product: '<S107>/Product8' */
        localB->Product8_k = localB->Gain2_g5 * localB->Sum_lt[2];

        /* Sum: '<S107>/Sum' */
        localB->Sum_a = (localB->Product4_nv + localB->Product5_bm) +
          localB->Product8_k;

        /* SignalConversion generated from: '<S126>/Dot Product2' */
        localB->TmpSignalConversionAtDotProdu_p[0] = localB->Sum_jg;
        localB->TmpSignalConversionAtDotProdu_p[1] = localB->Sum_f;
        localB->TmpSignalConversionAtDotProdu_p[2] = localB->Sum_a;

        /* DotProduct: '<S126>/Dot Product3' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_h[0];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_p[0];
        tmpForInput_idx_2 = tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S126>/Dot Product1' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_h[0];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_h[0];
        tmpForInput = tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S126>/Dot Product2' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_p[0];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_p[0];
        tmpForInput_0 = tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S126>/Dot Product3' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_h[1];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_p[1];
        tmpForInput_idx_2 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S126>/Dot Product1' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_h[1];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_h[1];
        tmpForInput += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S126>/Dot Product2' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_p[1];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_p[1];
        tmpForInput_0 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S126>/Dot Product3' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_h[2];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_p[2];
        tmpForInput_idx_2 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S126>/Dot Product1' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_h[2];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_h[2];
        tmpForInput += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S126>/Dot Product2' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_p[2];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_p[2];
        tmpForInput_0 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S126>/Dot Product3' */
        localB->DotProduct3_e = tmpForInput_idx_2;

        /* DotProduct: '<S126>/Dot Product1' */
        localB->DotProduct1_m = tmpForInput;

        /* DotProduct: '<S126>/Dot Product2' */
        localB->DotProduct2_a = tmpForInput_0;

        /* Product: '<S126>/Divide1' */
        localB->Divide1_k5 = localB->DotProduct1_m * localB->DotProduct2_a;

        /* Sqrt: '<S126>/Sqrt3' */
        localB->Sqrt3_ar = sqrt(localB->Divide1_k5);

        /* Product: '<S126>/Divide' */
        localB->Divide_e = localB->DotProduct3_e / localB->Sqrt3_ar;

        /* Bias: '<S126>/Bias' */
        localB->Bias_p = localB->Divide_e + -1.0;

        /* Abs: '<S126>/Abs' */
        localB->Abs_g = fabs(localB->Bias_p);

        /* Bias: '<S126>/Bias1' */
        localB->Bias1_k = localB->Divide_e + 1.0;

        /* Abs: '<S126>/Abs1' */
        localB->Abs1_o = fabs(localB->Bias1_k);

        /* If: '<S126>/If' */
        if (localB->Abs_g < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S126>/If Action Subsystem' incorporates:
           *  ActionPort: '<S132>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Merge_l);

          /* End of Outputs for SubSystem: '<S126>/If Action Subsystem' */
        } else if (localB->Abs1_o < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S126>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S133>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem1(&localB->Merge_l);

          /* End of Outputs for SubSystem: '<S126>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S126>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S134>/Action Port'
           */
          asbCubeSat_IfActionSubsystem2_p(&localB->Merge_l);

          /* End of Outputs for SubSystem: '<S126>/If Action Subsystem2' */
        }

        /* Switch: '<S73>/Switch' */
        if (localB->OR) {
          /* Switch: '<S73>/Switch' */
          localB->Switch[0] = localB->Product_pt;
          localB->Switch[1] = localB->Product1_hz;
          localB->Switch[2] = localB->Product2_ki;
          localB->Switch[3] = localB->Product3_n;
        } else {
          /* RelationalOperator: '<S127>/Compare' incorporates:
           *  Constant: '<S127>/Constant'
           */
          localB->Compare_a = (localB->Merge_l != -1.0);

          /* Switch: '<S85>/is 180deg Rot' */
          if (localB->Compare_a) {
            /* Product: '<S131>/j x i' */
            localB->jxi_k = localB->Sum_n1 * localB->Sum_jg;

            /* Product: '<S131>/i x k' */
            localB->ixk_k = localB->Sum_l * localB->Sum_a;

            /* Product: '<S131>/k x j' */
            localB->kxj_jo = localB->Sum_dy * localB->Sum_f;

            /* Product: '<S130>/i x j' */
            localB->ixj_em = localB->Sum_l * localB->Sum_f;

            /* Product: '<S130>/k x i' */
            localB->kxi_a = localB->Sum_dy * localB->Sum_jg;

            /* Product: '<S130>/j x k' */
            localB->jxk_l = localB->Sum_n1 * localB->Sum_a;

            /* Sum: '<S125>/Sum' */
            localB->Sum_jn[0] = localB->jxk_l - localB->kxj_jo;
            localB->Sum_jn[1] = localB->kxi_a - localB->ixk_k;
            localB->Sum_jn[2] = localB->ixj_em - localB->jxi_k;

            /* Switch: '<S85>/is 180deg Rot' */
            localB->is180degRot_o[0] = localB->Sum_jn[0];
            localB->is180degRot_o[1] = localB->Sum_jn[1];
            localB->is180degRot_o[2] = localB->Sum_jn[2];
          } else {
            /* RelationalOperator: '<S128>/x>z' */
            localB->xz = (localB->Sum_l > localB->Sum_dy);

            /* Switch: '<S128>/Switch3' */
            if (localB->xz) {
              /* Gain: '<S128>/Gain' */
              localB->Gain_c = -localB->Sum_n1;

              /* Switch: '<S128>/Switch3' incorporates:
               *  Constant: '<S128>/Constant'
               */
              localB->Switch3[0] = localB->Gain_c;
              localB->Switch3[1] = localB->Sum_l;
              localB->Switch3[2] = 0.0;
            } else {
              /* Gain: '<S128>/Gain2' */
              localB->Gain2_ax = -localB->Sum_dy;

              /* Switch: '<S128>/Switch3' incorporates:
               *  Constant: '<S128>/Constant1'
               */
              localB->Switch3[0] = 0.0;
              localB->Switch3[1] = localB->Gain2_ax;
              localB->Switch3[2] = localB->Sum_n1;
            }

            /* Product: '<S137>/j x i' */
            localB->jxi_o = localB->Sum_n1 * localB->Switch3[0];

            /* Product: '<S137>/i x k' */
            localB->ixk_d = localB->Sum_l * localB->Switch3[2];

            /* Product: '<S137>/k x j' */
            localB->kxj_p = localB->Sum_dy * localB->Switch3[1];

            /* Product: '<S136>/i x j' */
            localB->ixj_o = localB->Sum_l * localB->Switch3[1];

            /* Product: '<S136>/k x i' */
            localB->kxi_g = localB->Sum_dy * localB->Switch3[0];

            /* Product: '<S136>/j x k' */
            localB->jxk_a = localB->Sum_n1 * localB->Switch3[2];

            /* Sum: '<S135>/Sum' */
            localB->Sum_fq[0] = localB->jxk_a - localB->kxj_p;
            localB->Sum_fq[1] = localB->kxi_g - localB->ixk_d;
            localB->Sum_fq[2] = localB->ixj_o - localB->jxi_o;

            /* Switch: '<S85>/is 180deg Rot' */
            localB->is180degRot_o[0] = localB->Sum_fq[0];
            localB->is180degRot_o[1] = localB->Sum_fq[1];
            localB->is180degRot_o[2] = localB->Sum_fq[2];
          }

          /* Product: '<S139>/Product3' */
          localB->Product3_k0 = localB->is180degRot_o[2] * localB->
            is180degRot_o[2];

          /* Product: '<S139>/Product2' */
          localB->Product2_b = localB->is180degRot_o[1] * localB->is180degRot_o
            [1];

          /* Product: '<S139>/Product1' */
          localB->Product1_l2 = localB->is180degRot_o[0] * localB->
            is180degRot_o[0];

          /* DotProduct: '<S85>/Dot Product2' */
          tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_p[0];
          tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_p[0];
          tmpForInput_idx_2 = tmpForInput_idx_0 * tmpForInput_idx_1;

          /* DotProduct: '<S85>/Dot Product1' */
          tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_h[0];
          tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_h[0];
          tmpForInput = tmpForInput_idx_0 * tmpForInput_idx_1;

          /* DotProduct: '<S85>/Dot Product3' */
          tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_h[0];
          tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_p[0];
          tmpForInput_0 = tmpForInput_idx_0 * tmpForInput_idx_1;

          /* DotProduct: '<S85>/Dot Product2' */
          tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_p[1];
          tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_p[1];
          tmpForInput_idx_2 += tmpForInput_idx_0 * tmpForInput_idx_1;

          /* DotProduct: '<S85>/Dot Product1' */
          tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_h[1];
          tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_h[1];
          tmpForInput += tmpForInput_idx_0 * tmpForInput_idx_1;

          /* DotProduct: '<S85>/Dot Product3' */
          tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_h[1];
          tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_p[1];
          tmpForInput_0 += tmpForInput_idx_0 * tmpForInput_idx_1;

          /* DotProduct: '<S85>/Dot Product2' */
          tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_p[2];
          tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_p[2];
          tmpForInput_idx_2 += tmpForInput_idx_0 * tmpForInput_idx_1;

          /* DotProduct: '<S85>/Dot Product1' */
          tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_h[2];
          tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_h[2];
          tmpForInput += tmpForInput_idx_0 * tmpForInput_idx_1;

          /* DotProduct: '<S85>/Dot Product3' */
          tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_h[2];
          tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_p[2];
          tmpForInput_0 += tmpForInput_idx_0 * tmpForInput_idx_1;

          /* DotProduct: '<S85>/Dot Product2' */
          localB->DotProduct2_i = tmpForInput_idx_2;

          /* DotProduct: '<S85>/Dot Product1' */
          localB->DotProduct1_e = tmpForInput;

          /* Product: '<S85>/Divide1' */
          localB->Divide1_c = localB->DotProduct1_e * localB->DotProduct2_i;

          /* Sqrt: '<S85>/Sqrt3' */
          localB->Sqrt3_h = sqrt(localB->Divide1_c);

          /* DotProduct: '<S85>/Dot Product3' */
          localB->DotProduct3_pm = tmpForInput_0;

          /* Sum: '<S85>/Add2' */
          localB->Add2_h = localB->DotProduct3_pm + localB->Sqrt3_h;

          /* Product: '<S139>/Product' */
          localB->Product_ly = localB->Add2_h * localB->Add2_h;

          /* Sum: '<S139>/Sum' */
          localB->Sum_m = ((localB->Product_ly + localB->Product1_l2) +
                           localB->Product2_b) + localB->Product3_k0;

          /* Sqrt: '<S138>/sqrt' */
          localB->sqrt_e = sqrt(localB->Sum_m);

          /* Product: '<S129>/Product3' */
          localB->Product3_jr = localB->is180degRot_o[2] / localB->sqrt_e;

          /* Product: '<S94>/Product3' */
          localB->Product3_e4 = localB->Product3_n * localB->Product3_jr;

          /* Product: '<S129>/Product2' */
          localB->Product2_ky = localB->is180degRot_o[1] / localB->sqrt_e;

          /* Product: '<S94>/Product2' */
          localB->Product2_hy = localB->Product2_ki * localB->Product2_ky;

          /* Product: '<S129>/Product1' */
          localB->Product1_oh = localB->is180degRot_o[0] / localB->sqrt_e;

          /* Product: '<S94>/Product1' */
          localB->Product1_c = localB->Product1_hz * localB->Product1_oh;

          /* Product: '<S129>/Product' */
          localB->Product_lj = localB->Add2_h / localB->sqrt_e;

          /* Product: '<S94>/Product' */
          localB->Product_oe = localB->Product_pt * localB->Product_lj;

          /* Sum: '<S94>/Sum' */
          localB->Sum_c = ((localB->Product_oe - localB->Product1_c) -
                           localB->Product2_hy) - localB->Product3_e4;

          /* Product: '<S95>/Product3' */
          localB->Product3_np = localB->Product3_n * localB->Product2_ky;

          /* Product: '<S95>/Product2' */
          localB->Product2_i = localB->Product2_ki * localB->Product3_jr;

          /* Product: '<S95>/Product1' */
          localB->Product1_hs = localB->Product1_hz * localB->Product_lj;

          /* Product: '<S95>/Product' */
          localB->Product_cw = localB->Product_pt * localB->Product1_oh;

          /* Sum: '<S95>/Sum' */
          localB->Sum_a1 = ((localB->Product_cw + localB->Product1_hs) +
                            localB->Product2_i) - localB->Product3_np;

          /* Product: '<S96>/Product3' */
          localB->Product3_ep = localB->Product3_n * localB->Product1_oh;

          /* Product: '<S96>/Product2' */
          localB->Product2_b4 = localB->Product2_ki * localB->Product_lj;

          /* Product: '<S96>/Product1' */
          localB->Product1_mo = localB->Product1_hz * localB->Product3_jr;

          /* Product: '<S96>/Product' */
          localB->Product_lt = localB->Product_pt * localB->Product2_ky;

          /* Sum: '<S96>/Sum' */
          localB->Sum_b = ((localB->Product_lt - localB->Product1_mo) +
                           localB->Product2_b4) + localB->Product3_ep;

          /* Product: '<S97>/Product3' */
          localB->Product3_ct = localB->Product3_n * localB->Product_lj;

          /* Product: '<S97>/Product2' */
          localB->Product2_bs = localB->Product2_ki * localB->Product1_oh;

          /* Product: '<S97>/Product1' */
          localB->Product1_al = localB->Product1_hz * localB->Product2_ky;

          /* Product: '<S97>/Product' */
          localB->Product_a = localB->Product_pt * localB->Product3_jr;

          /* Sum: '<S97>/Sum' */
          localB->Sum_hf = ((localB->Product_a + localB->Product1_al) -
                            localB->Product2_bs) + localB->Product3_ct;

          /* Switch: '<S73>/Switch' */
          localB->Switch[0] = localB->Sum_c;
          localB->Switch[1] = localB->Sum_a1;
          localB->Switch[2] = localB->Sum_b;
          localB->Switch[3] = localB->Sum_hf;
        }

        /* Product: '<S171>/Product' */
        localB->Product_do = localB->Switch[0] * localB->Switch[0];

        /* Product: '<S171>/Product1' */
        localB->Product1_h4 = localB->Switch[1] * localB->Switch[1];

        /* Product: '<S171>/Product2' */
        localB->Product2_po = localB->Switch[2] * localB->Switch[2];

        /* Product: '<S171>/Product3' */
        localB->Product3_pz = localB->Switch[3] * localB->Switch[3];

        /* Sum: '<S171>/Sum' */
        localB->Sum_aq = ((localB->Product_do + localB->Product1_h4) +
                          localB->Product2_po) + localB->Product3_pz;

        /* Sqrt: '<S170>/sqrt' */
        localB->sqrt_k = sqrt(localB->Sum_aq);

        /* Product: '<S165>/Product' */
        localB->Product_mw = localB->Switch[0] / localB->sqrt_k;

        /* Product: '<S165>/Product1' */
        localB->Product1_lc = localB->Switch[1] / localB->sqrt_k;

        /* Product: '<S165>/Product2' */
        localB->Product2_el = localB->Switch[2] / localB->sqrt_k;

        /* Product: '<S165>/Product3' */
        localB->Product3_e12 = localB->Switch[3] / localB->sqrt_k;

        /* Fcn: '<S76>/fcn3' */
        localB->fcn3 = (localB->Product1_lc * localB->Product3_e12 +
                        localB->Product_mw * localB->Product2_el) * 2.0;

        /* If: '<S166>/If' */
        if (localB->fcn3 > 1.0) {
          /* Outputs for IfAction SubSystem: '<S166>/If Action Subsystem' incorporates:
           *  ActionPort: '<S167>/Action Port'
           */
          /* Merge: '<S166>/Merge' incorporates:
           *  Constant: '<S167>/Constant'
           */
          localB->Merge_j = 1.0;

          /* End of Outputs for SubSystem: '<S166>/If Action Subsystem' */
        } else if (localB->fcn3 < -1.0) {
          /* Outputs for IfAction SubSystem: '<S166>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S168>/Action Port'
           */
          /* Merge: '<S166>/Merge' incorporates:
           *  Constant: '<S168>/Constant'
           */
          localB->Merge_j = 1.0;

          /* End of Outputs for SubSystem: '<S166>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S166>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S169>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem2(localB->fcn3, &localB->Merge_j);

          /* End of Outputs for SubSystem: '<S166>/If Action Subsystem2' */
        }

        /* Fcn: '<S76>/fcn1' */
        localB->fcn1 = (localB->Product2_el * localB->Product3_e12 -
                        localB->Product_mw * localB->Product1_lc) * -2.0;

        /* Fcn: '<S76>/fcn2' */
        localB->fcn2 = ((localB->Product_mw * localB->Product_mw -
                         localB->Product1_lc * localB->Product1_lc) -
                        localB->Product2_el * localB->Product2_el) +
          localB->Product3_e12 * localB->Product3_e12;

        /* Trigonometry: '<S164>/Trigonometric Function1' */
        localB->PointingCmd[0] = rt_atan2d_snf(localB->fcn1, localB->fcn2);

        /* Fcn: '<S76>/fcn4' */
        localB->fcn4 = (localB->Product1_lc * localB->Product2_el -
                        localB->Product_mw * localB->Product3_e12) * -2.0;

        /* Fcn: '<S76>/fcn5' */
        localB->fcn5 = ((localB->Product_mw * localB->Product_mw +
                         localB->Product1_lc * localB->Product1_lc) -
                        localB->Product2_el * localB->Product2_el) -
          localB->Product3_e12 * localB->Product3_e12;

        /* Trigonometry: '<S164>/Trigonometric Function3' */
        localB->PointingCmd[2] = rt_atan2d_snf(localB->fcn4, localB->fcn5);

        /* Trigonometry: '<S164>/trigFcn' */
        tmpForInput_idx_0 = localB->Merge_j;
        if (tmpForInput_idx_0 > 1.0) {
          tmpForInput_idx_0 = 1.0;
        } else if (tmpForInput_idx_0 < -1.0) {
          tmpForInput_idx_0 = -1.0;
        }

        localB->PointingCmd[1] = asin(tmpForInput_idx_0);
      }
      break;

     default:
      /* During 'Transition': '<S3>:52' */
      if (*rtu_AttitudeMode == 1.0) {
        /* Transition: '<S3>:40' */
        localB->ControlMode = 2.0;
        localDW->is_On = asbCubeSatACS_IN_Earth;

        /* Product: '<S19>/j x k' */
        localB->jxk_n = localB->BusConversion_InsertedFor_Point.V_ecef[1] *
          localB->BusConversion_InsertedFor_Point.X_ecef[2];

        /* Product: '<S19>/k x i' */
        localB->kxi_p = localB->BusConversion_InsertedFor_Point.X_ecef[0] *
          localB->BusConversion_InsertedFor_Point.V_ecef[2];

        /* Product: '<S19>/i x j' */
        localB->ixj_k = localB->BusConversion_InsertedFor_Point.V_ecef[0] *
          localB->BusConversion_InsertedFor_Point.X_ecef[1];

        /* Product: '<S20>/k x j' */
        localB->kxj_n = localB->BusConversion_InsertedFor_Point.X_ecef[1] *
          localB->BusConversion_InsertedFor_Point.V_ecef[2];

        /* Product: '<S20>/i x k' */
        localB->ixk_kv = localB->BusConversion_InsertedFor_Point.V_ecef[0] *
          localB->BusConversion_InsertedFor_Point.X_ecef[2];

        /* Product: '<S20>/j x i' */
        localB->jxi_bb = localB->BusConversion_InsertedFor_Point.X_ecef[0] *
          localB->BusConversion_InsertedFor_Point.V_ecef[1];

        /* Sum: '<S12>/Sum' */
        localB->Sum_ou[0] = localB->jxk_n - localB->kxj_n;
        localB->Sum_ou[1] = localB->kxi_p - localB->ixk_kv;
        localB->Sum_ou[2] = localB->ixj_k - localB->jxi_bb;

        /* Gain: '<S7>/z = -r' */
        localB->zr[0] = -localB->BusConversion_InsertedFor_Point.X_ecef[0];
        localB->zr[1] = -localB->BusConversion_InsertedFor_Point.X_ecef[1];
        localB->zr[2] = -localB->BusConversion_InsertedFor_Point.X_ecef[2];

        /* Product: '<S17>/i x j' */
        localB->ixj_i = localB->Sum_ou[0] * localB->zr[1];

        /* Product: '<S17>/j x k' */
        localB->jxk_i = localB->Sum_ou[1] * localB->zr[2];

        /* Product: '<S17>/k x i' */
        localB->kxi_o = localB->zr[0] * localB->Sum_ou[2];

        /* Product: '<S18>/i x k' */
        localB->ixk_g = localB->Sum_ou[0] * localB->zr[2];

        /* Product: '<S18>/j x i' */
        localB->jxi_ok = localB->zr[0] * localB->Sum_ou[1];

        /* Product: '<S18>/k x j' */
        localB->kxj_g = localB->zr[1] * localB->Sum_ou[2];

        /* Sum: '<S11>/Sum' */
        localB->Sum_dv[0] = localB->jxk_i - localB->kxj_g;
        localB->Sum_dv[1] = localB->kxi_o - localB->ixk_g;
        localB->Sum_dv[2] = localB->ixj_i - localB->jxi_ok;

        /* DotProduct: '<S14>/Dot Product' */
        tmpForInput_idx_0 = localB->Sum_dv[0];
        tmpForInput_idx_1 = localB->Sum_dv[0];
        tmpForInput_idx_2 = tmpForInput_idx_0 * tmpForInput_idx_1;
        tmpForInput_idx_0 = localB->Sum_dv[1];
        tmpForInput_idx_1 = localB->Sum_dv[1];
        tmpForInput_idx_2 += tmpForInput_idx_0 * tmpForInput_idx_1;
        tmpForInput_idx_0 = localB->Sum_dv[2];
        tmpForInput_idx_1 = localB->Sum_dv[2];
        tmpForInput_idx_2 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S14>/Dot Product' */
        localB->DotProduct = tmpForInput_idx_2;

        /* Sum: '<S14>/Sum of Elements' */
        tmpForInput_idx_0 = localB->DotProduct;

        /* Sum: '<S14>/Sum of Elements' */
        localB->SumofElements = tmpForInput_idx_0;

        /* Math: '<S14>/Math Function1'
         *
         * About '<S14>/Math Function1':
         *  Operator: sqrt
         */
        tmpForInput_idx_0 = localB->SumofElements;
        if (tmpForInput_idx_0 < 0.0) {
          /* Math: '<S14>/Math Function1'
           *
           * About '<S14>/Math Function1':
           *  Operator: sqrt
           */
          localB->MathFunction1 = -sqrt(fabs(tmpForInput_idx_0));
        } else {
          /* Math: '<S14>/Math Function1'
           *
           * About '<S14>/Math Function1':
           *  Operator: sqrt
           */
          localB->MathFunction1 = sqrt(tmpForInput_idx_0);
        }

        /* Product: '<S14>/Divide' */
        localB->ORFtoECEF[0] = localB->Sum_dv[0] / localB->MathFunction1;

        /* DotProduct: '<S15>/Dot Product' */
        tmpForInput_idx_0 = localB->Sum_ou[0];
        tmpForInput_idx_1 = localB->Sum_ou[0];
        tmpForInput_idx_2 = tmpForInput_idx_0 * tmpForInput_idx_1;

        /* Product: '<S14>/Divide' */
        localB->ORFtoECEF[1] = localB->Sum_dv[1] / localB->MathFunction1;

        /* DotProduct: '<S15>/Dot Product' */
        tmpForInput_idx_0 = localB->Sum_ou[1];
        tmpForInput_idx_1 = localB->Sum_ou[1];
        tmpForInput_idx_2 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* Product: '<S14>/Divide' */
        localB->ORFtoECEF[2] = localB->Sum_dv[2] / localB->MathFunction1;

        /* DotProduct: '<S15>/Dot Product' */
        tmpForInput_idx_0 = localB->Sum_ou[2];
        tmpForInput_idx_1 = localB->Sum_ou[2];
        tmpForInput_idx_2 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S15>/Dot Product' */
        localB->DotProduct_m = tmpForInput_idx_2;

        /* Sum: '<S15>/Sum of Elements' */
        tmpForInput_idx_0 = localB->DotProduct_m;

        /* Sum: '<S15>/Sum of Elements' */
        localB->SumofElements_h = tmpForInput_idx_0;

        /* Math: '<S15>/Math Function1'
         *
         * About '<S15>/Math Function1':
         *  Operator: sqrt
         */
        tmpForInput_idx_0 = localB->SumofElements_h;
        if (tmpForInput_idx_0 < 0.0) {
          /* Math: '<S15>/Math Function1'
           *
           * About '<S15>/Math Function1':
           *  Operator: sqrt
           */
          localB->MathFunction1_n = -sqrt(fabs(tmpForInput_idx_0));
        } else {
          /* Math: '<S15>/Math Function1'
           *
           * About '<S15>/Math Function1':
           *  Operator: sqrt
           */
          localB->MathFunction1_n = sqrt(tmpForInput_idx_0);
        }

        /* Product: '<S15>/Divide' */
        localB->ORFtoECEF[3] = localB->Sum_ou[0] / localB->MathFunction1_n;

        /* DotProduct: '<S16>/Dot Product' */
        tmpForInput_idx_0 = localB->zr[0];
        tmpForInput_idx_1 = localB->zr[0];
        tmpForInput_idx_2 = tmpForInput_idx_0 * tmpForInput_idx_1;

        /* Product: '<S15>/Divide' */
        localB->ORFtoECEF[4] = localB->Sum_ou[1] / localB->MathFunction1_n;

        /* DotProduct: '<S16>/Dot Product' */
        tmpForInput_idx_0 = localB->zr[1];
        tmpForInput_idx_1 = localB->zr[1];
        tmpForInput_idx_2 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* Product: '<S15>/Divide' */
        localB->ORFtoECEF[5] = localB->Sum_ou[2] / localB->MathFunction1_n;

        /* DotProduct: '<S16>/Dot Product' */
        tmpForInput_idx_0 = localB->zr[2];
        tmpForInput_idx_1 = localB->zr[2];
        tmpForInput_idx_2 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S16>/Dot Product' */
        localB->DotProduct_b = tmpForInput_idx_2;

        /* Sum: '<S16>/Sum of Elements' */
        tmpForInput_idx_0 = localB->DotProduct_b;

        /* Sum: '<S16>/Sum of Elements' */
        localB->SumofElements_g = tmpForInput_idx_0;

        /* Math: '<S16>/Math Function1'
         *
         * About '<S16>/Math Function1':
         *  Operator: sqrt
         */
        tmpForInput_idx_0 = localB->SumofElements_g;
        if (tmpForInput_idx_0 < 0.0) {
          /* Math: '<S16>/Math Function1'
           *
           * About '<S16>/Math Function1':
           *  Operator: sqrt
           */
          localB->MathFunction1_ni = -sqrt(fabs(tmpForInput_idx_0));
        } else {
          /* Math: '<S16>/Math Function1'
           *
           * About '<S16>/Math Function1':
           *  Operator: sqrt
           */
          localB->MathFunction1_ni = sqrt(tmpForInput_idx_0);
        }

        /* Product: '<S16>/Divide' */
        localB->ORFtoECEF[6] = localB->zr[0] / localB->MathFunction1_ni;
        localB->ORFtoECEF[7] = localB->zr[1] / localB->MathFunction1_ni;
        localB->ORFtoECEF[8] = localB->zr[2] / localB->MathFunction1_ni;
        for (i = 0; i < 3; i++) {
          /* Math: '<S7>/ECEF to ORF' incorporates:
           *  Concatenate: '<S7>/ORF to ECEF'
           */
          localB->ECEFtoORF[3 * i] = localB->ORFtoECEF[i];
          localB->ECEFtoORF[3 * i + 1] = localB->ORFtoECEF[i + 3];
          localB->ECEFtoORF[3 * i + 2] = localB->ORFtoECEF[i + 6];
        }

        /* Sum: '<S24>/Add' */
        tmpForInput_idx_0 = localB->ECEFtoORF[0];
        tmpForInput_idx_1 = localB->ECEFtoORF[4];
        tmpForInput_idx_2 = localB->ECEFtoORF[8];
        tmpForInput_idx_0 += tmpForInput_idx_1;
        tmpForInput_idx_0 += tmpForInput_idx_2;

        /* Sum: '<S24>/Add' */
        localB->Add = tmpForInput_idx_0;

        /* If: '<S13>/If' incorporates:
         *  If: '<S21>/Find Maximum Diagonal Value'
         */
        if (localB->Add > 0.0) {
          /* Outputs for IfAction SubSystem: '<S13>/Positive Trace' incorporates:
           *  ActionPort: '<S22>/Action Port'
           */
          /* Sum: '<S22>/Sum' incorporates:
           *  Constant: '<S22>/Constant'
           */
          localB->Sum_dx = localB->Add + 1.0;

          /* Sqrt: '<S22>/sqrt' */
          localB->sqrt_be = sqrt(localB->Sum_dx);

          /* Gain: '<S22>/Gain' */
          localB->Merge_e[0] = 0.5 * localB->sqrt_be;

          /* Gain: '<S22>/Gain1' */
          localB->Gain1_l = 2.0 * localB->sqrt_be;

          /* Sum: '<S45>/Add' */
          localB->Add_i5 = localB->ECEFtoORF[7] - localB->ECEFtoORF[5];

          /* Sum: '<S44>/Add' */
          localB->Add_fn = localB->ECEFtoORF[2] - localB->ECEFtoORF[6];

          /* Sum: '<S46>/Add' */
          localB->Add_mp = localB->ECEFtoORF[3] - localB->ECEFtoORF[1];

          /* Product: '<S22>/Product' */
          localB->Merge_e[1] = localB->Add_i5 / localB->Gain1_l;
          localB->Merge_e[2] = localB->Add_fn / localB->Gain1_l;
          localB->Merge_e[3] = localB->Add_mp / localB->Gain1_l;

          /* End of Outputs for SubSystem: '<S13>/Positive Trace' */
        } else {
          /* Outputs for IfAction SubSystem: '<S13>/Negative Trace' incorporates:
           *  ActionPort: '<S21>/Action Port'
           */
          if ((localB->ECEFtoORF[4] > localB->ECEFtoORF[0]) &&
              (localB->ECEFtoORF[4] > localB->ECEFtoORF[8])) {
            /* Outputs for IfAction SubSystem: '<S21>/Maximum Value at DCM(2,2)' incorporates:
             *  ActionPort: '<S26>/Action Port'
             */
            /* If: '<S21>/Find Maximum Diagonal Value' incorporates:
             *  Constant: '<S38>/Constant'
             *  Gain: '<S26>/Gain'
             *  Gain: '<S26>/Gain1'
             *  Gain: '<S26>/Gain3'
             *  Gain: '<S26>/Gain4'
             *  Product: '<S26>/Product'
             *  Product: '<S37>/Product'
             *  Sqrt: '<S26>/sqrt'
             *  Sum: '<S34>/Add'
             *  Sum: '<S35>/Add'
             *  Sum: '<S36>/Add'
             *  Sum: '<S38>/Add'
             *  Switch: '<S37>/Switch'
             */
            localB->Add_hm = ((localB->ECEFtoORF[4] - localB->ECEFtoORF[0]) -
                              localB->ECEFtoORF[8]) + 1.0;
            localB->sqrt_p = sqrt(localB->Add_hm);
            localB->Merge_e[2] = 0.5 * localB->sqrt_p;
            localB->Add_o = localB->ECEFtoORF[1] + localB->ECEFtoORF[3];
            localB->Add_f = localB->ECEFtoORF[5] + localB->ECEFtoORF[7];
            localB->Add_b4 = localB->ECEFtoORF[2] - localB->ECEFtoORF[6];
            if (localB->sqrt_p != 0.0) {
              /* Switch: '<S37>/Switch' incorporates:
               *  Constant: '<S37>/Constant1'
               */
              localB->Switch_f1[0] = 0.5;
              localB->Switch_f1[1] = localB->sqrt_p;
            } else {
              /* Switch: '<S37>/Switch' */
              localB->Switch_f1[0] = 0.0;
              localB->Switch_f1[1] = 1.0;
            }

            localB->Product_jp = localB->Switch_f1[0] / localB->Switch_f1[1];
            localB->Product_oi[0] = localB->Add_o * localB->Product_jp;
            localB->Product_oi[1] = localB->Add_f * localB->Product_jp;
            localB->Product_oi[2] = localB->Add_b4 * localB->Product_jp;
            localB->Merge_e[1] = localB->Product_oi[0];
            localB->Merge_e[3] = localB->Product_oi[1];
            localB->Merge_e[0] = localB->Product_oi[2];

            /* End of Outputs for SubSystem: '<S21>/Maximum Value at DCM(2,2)' */
          } else if (localB->ECEFtoORF[8] > localB->ECEFtoORF[0]) {
            /* Outputs for IfAction SubSystem: '<S21>/Maximum Value at DCM(3,3)' incorporates:
             *  ActionPort: '<S27>/Action Port'
             */
            /* If: '<S21>/Find Maximum Diagonal Value' incorporates:
             *  Constant: '<S43>/Constant'
             *  Gain: '<S27>/Gain'
             *  Gain: '<S27>/Gain1'
             *  Gain: '<S27>/Gain2'
             *  Gain: '<S27>/Gain3'
             *  Product: '<S27>/Product'
             *  Product: '<S42>/Product'
             *  Sqrt: '<S27>/sqrt'
             *  Sum: '<S39>/Add'
             *  Sum: '<S40>/Add'
             *  Sum: '<S41>/Add'
             *  Sum: '<S43>/Add'
             *  Switch: '<S42>/Switch'
             */
            localB->Add_h = ((localB->ECEFtoORF[8] - localB->ECEFtoORF[0]) -
                             localB->ECEFtoORF[4]) + 1.0;
            localB->sqrt_o2 = sqrt(localB->Add_h);
            localB->Merge_e[3] = 0.5 * localB->sqrt_o2;
            localB->Add_b = localB->ECEFtoORF[2] + localB->ECEFtoORF[6];
            localB->Add_a = localB->ECEFtoORF[5] + localB->ECEFtoORF[7];
            localB->Add_p = localB->ECEFtoORF[3] - localB->ECEFtoORF[1];
            if (localB->sqrt_o2 != 0.0) {
              /* Switch: '<S42>/Switch' incorporates:
               *  Constant: '<S42>/Constant1'
               */
              localB->Switch_o[0] = 0.5;
              localB->Switch_o[1] = localB->sqrt_o2;
            } else {
              /* Switch: '<S42>/Switch' */
              localB->Switch_o[0] = 0.0;
              localB->Switch_o[1] = 1.0;
            }

            localB->Product_ph = localB->Switch_o[0] / localB->Switch_o[1];
            localB->Product_oee[0] = localB->Add_b * localB->Product_ph;
            localB->Product_oee[1] = localB->Add_a * localB->Product_ph;
            localB->Product_oee[2] = localB->Add_p * localB->Product_ph;
            localB->Merge_e[1] = localB->Product_oee[0];
            localB->Merge_e[2] = localB->Product_oee[1];
            localB->Merge_e[0] = localB->Product_oee[2];

            /* End of Outputs for SubSystem: '<S21>/Maximum Value at DCM(3,3)' */
          } else {
            /* Outputs for IfAction SubSystem: '<S21>/Maximum Value at DCM(1,1)' incorporates:
             *  ActionPort: '<S25>/Action Port'
             */
            /* If: '<S21>/Find Maximum Diagonal Value' incorporates:
             *  Constant: '<S33>/Constant'
             *  Gain: '<S25>/Gain'
             *  Gain: '<S25>/Gain1'
             *  Gain: '<S25>/Gain2'
             *  Gain: '<S25>/Gain3'
             *  Product: '<S25>/Product'
             *  Product: '<S32>/Product'
             *  Sqrt: '<S25>/sqrt'
             *  Sum: '<S29>/Add'
             *  Sum: '<S30>/Add'
             *  Sum: '<S31>/Add'
             *  Sum: '<S33>/Add'
             *  Switch: '<S32>/Switch'
             */
            localB->Add_d = ((localB->ECEFtoORF[0] - localB->ECEFtoORF[4]) -
                             localB->ECEFtoORF[8]) + 1.0;
            localB->sqrt_nk = sqrt(localB->Add_d);
            localB->Merge_e[1] = 0.5 * localB->sqrt_nk;
            if (localB->sqrt_nk != 0.0) {
              /* Switch: '<S32>/Switch' incorporates:
               *  Constant: '<S32>/Constant1'
               */
              localB->Switch_f[0] = 0.5;
              localB->Switch_f[1] = localB->sqrt_nk;
            } else {
              /* Switch: '<S32>/Switch' */
              localB->Switch_f[0] = 0.0;
              localB->Switch_f[1] = 1.0;
            }

            localB->Product_n4 = localB->Switch_f[0] / localB->Switch_f[1];
            localB->Add_de = localB->ECEFtoORF[1] + localB->ECEFtoORF[3];
            localB->Add_i = localB->ECEFtoORF[2] + localB->ECEFtoORF[6];
            localB->Add_m = localB->ECEFtoORF[7] - localB->ECEFtoORF[5];
            localB->Product_i2[0] = localB->Product_n4 * localB->Add_de;
            localB->Product_i2[1] = localB->Product_n4 * localB->Add_i;
            localB->Product_i2[2] = localB->Product_n4 * localB->Add_m;
            localB->Merge_e[2] = localB->Product_i2[0];
            localB->Merge_e[3] = localB->Product_i2[1];
            localB->Merge_e[0] = localB->Product_i2[2];

            /* End of Outputs for SubSystem: '<S21>/Maximum Value at DCM(1,1)' */
          }

          /* End of Outputs for SubSystem: '<S13>/Negative Trace' */
        }

        /* Product: '<S60>/Product' */
        localB->Product_ky = localB->BusConversion_InsertedFor_Point.q_ecef2b[0]
          * localB->BusConversion_InsertedFor_Point.q_ecef2b[0];

        /* Product: '<S60>/Product1' */
        localB->Product1_li = localB->BusConversion_InsertedFor_Point.q_ecef2b[1]
          * localB->BusConversion_InsertedFor_Point.q_ecef2b[1];

        /* Product: '<S60>/Product2' */
        localB->Product2_g = localB->BusConversion_InsertedFor_Point.q_ecef2b[2]
          * localB->BusConversion_InsertedFor_Point.q_ecef2b[2];

        /* Product: '<S60>/Product3' */
        localB->Product3_a = localB->BusConversion_InsertedFor_Point.q_ecef2b[3]
          * localB->BusConversion_InsertedFor_Point.q_ecef2b[3];

        /* Sum: '<S60>/Sum' */
        localB->Sum_hk = ((localB->Product_ky + localB->Product1_li) +
                          localB->Product2_g) + localB->Product3_a;

        /* Product: '<S8>/Divide' */
        localB->Divide_j = localB->BusConversion_InsertedFor_Point.q_ecef2b[0] /
          localB->Sum_hk;

        /* UnaryMinus: '<S59>/Unary Minus' */
        localB->UnaryMinus = -localB->BusConversion_InsertedFor_Point.q_ecef2b[1];

        /* Product: '<S8>/Divide1' */
        localB->Divide1_d = localB->UnaryMinus / localB->Sum_hk;

        /* UnaryMinus: '<S59>/Unary Minus1' */
        localB->UnaryMinus1 = -localB->BusConversion_InsertedFor_Point.q_ecef2b
          [2];

        /* Product: '<S8>/Divide2' */
        localB->Divide2 = localB->UnaryMinus1 / localB->Sum_hk;

        /* UnaryMinus: '<S59>/Unary Minus2' */
        localB->UnaryMinus2 = -localB->BusConversion_InsertedFor_Point.q_ecef2b
          [3];

        /* Product: '<S8>/Divide3' */
        localB->Divide3 = localB->UnaryMinus2 / localB->Sum_hk;

        /* Product: '<S61>/Product' */
        localB->Product_pb = localB->Divide_j * localB->Merge_e[0];

        /* Product: '<S61>/Product1' */
        localB->Product1_pg = localB->Divide1_d * localB->Merge_e[1];

        /* Product: '<S61>/Product2' */
        localB->Product2_mw = localB->Divide2 * localB->Merge_e[2];

        /* Product: '<S61>/Product3' */
        localB->Product3_cd = localB->Divide3 * localB->Merge_e[3];

        /* Sum: '<S61>/Sum' */
        localB->Sum_fj = ((localB->Product_pb - localB->Product1_pg) -
                          localB->Product2_mw) - localB->Product3_cd;

        /* Product: '<S62>/Product' */
        localB->Product_la = localB->Divide_j * localB->Merge_e[1];

        /* Product: '<S62>/Product1' */
        localB->Product1_p5 = localB->Divide1_d * localB->Merge_e[0];

        /* Product: '<S62>/Product2' */
        localB->Product2_jd = localB->Divide2 * localB->Merge_e[3];

        /* Product: '<S62>/Product3' */
        localB->Product3_db = localB->Divide3 * localB->Merge_e[2];

        /* Sum: '<S62>/Sum' */
        localB->Sum_c3 = ((localB->Product_la + localB->Product1_p5) +
                          localB->Product2_jd) - localB->Product3_db;

        /* Product: '<S63>/Product' */
        localB->Product_nm = localB->Divide_j * localB->Merge_e[2];

        /* Product: '<S63>/Product1' */
        localB->Product1_od = localB->Divide1_d * localB->Merge_e[3];

        /* Product: '<S63>/Product2' */
        localB->Product2_bn = localB->Divide2 * localB->Merge_e[0];

        /* Product: '<S63>/Product3' */
        localB->Product3_gc = localB->Divide3 * localB->Merge_e[1];

        /* Sum: '<S63>/Sum' */
        localB->Sum_hn = ((localB->Product_nm - localB->Product1_od) +
                          localB->Product2_bn) + localB->Product3_gc;

        /* Product: '<S64>/Product' */
        localB->Product_m0 = localB->Divide_j * localB->Merge_e[3];

        /* Product: '<S64>/Product1' */
        localB->Product1_e = localB->Divide1_d * localB->Merge_e[2];

        /* Product: '<S64>/Product2' */
        localB->Product2_dz = localB->Divide2 * localB->Merge_e[1];

        /* Product: '<S64>/Product3' */
        localB->Product3_ox = localB->Divide3 * localB->Merge_e[0];

        /* Sum: '<S64>/Sum' */
        localB->Sum_h4 = ((localB->Product_m0 + localB->Product1_e) -
                          localB->Product2_dz) + localB->Product3_ox;

        /* Product: '<S72>/Product' */
        localB->Product_mx = localB->Sum_fj * localB->Sum_fj;

        /* Product: '<S72>/Product1' */
        localB->Product1_fz = localB->Sum_c3 * localB->Sum_c3;

        /* Product: '<S72>/Product2' */
        localB->Product2_p4 = localB->Sum_hn * localB->Sum_hn;

        /* Product: '<S72>/Product3' */
        localB->Product3_kb = localB->Sum_h4 * localB->Sum_h4;

        /* Sum: '<S72>/Sum' */
        localB->Sum_k = ((localB->Product_mx + localB->Product1_fz) +
                         localB->Product2_p4) + localB->Product3_kb;

        /* Sqrt: '<S71>/sqrt' */
        localB->sqrt_j = sqrt(localB->Sum_k);

        /* Product: '<S66>/Product' */
        localB->Product_j = localB->Sum_fj / localB->sqrt_j;

        /* Product: '<S66>/Product1' */
        localB->Product1_i = localB->Sum_c3 / localB->sqrt_j;

        /* Product: '<S66>/Product2' */
        localB->Product2_ev = localB->Sum_hn / localB->sqrt_j;

        /* Product: '<S66>/Product3' */
        localB->Product3_f = localB->Sum_h4 / localB->sqrt_j;

        /* Fcn: '<S10>/fcn3' */
        localB->fcn3_l = (localB->Product1_i * localB->Product3_f +
                          localB->Product_j * localB->Product2_ev) * 2.0;

        /* If: '<S67>/If' */
        if (localB->fcn3_l > 1.0) {
          /* Outputs for IfAction SubSystem: '<S67>/If Action Subsystem' incorporates:
           *  ActionPort: '<S68>/Action Port'
           */
          /* Merge: '<S67>/Merge' incorporates:
           *  Constant: '<S68>/Constant'
           */
          localB->Merge_c = 1.0;

          /* End of Outputs for SubSystem: '<S67>/If Action Subsystem' */
        } else if (localB->fcn3_l < -1.0) {
          /* Outputs for IfAction SubSystem: '<S67>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S69>/Action Port'
           */
          /* Merge: '<S67>/Merge' incorporates:
           *  Constant: '<S69>/Constant'
           */
          localB->Merge_c = 1.0;

          /* End of Outputs for SubSystem: '<S67>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S67>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S70>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem2(localB->fcn3_l, &localB->Merge_c);

          /* End of Outputs for SubSystem: '<S67>/If Action Subsystem2' */
        }

        /* Fcn: '<S10>/fcn1' */
        localB->fcn1_l = (localB->Product2_ev * localB->Product3_f -
                          localB->Product_j * localB->Product1_i) * -2.0;

        /* Fcn: '<S10>/fcn2' */
        localB->fcn2_k = ((localB->Product_j * localB->Product_j -
                           localB->Product1_i * localB->Product1_i) -
                          localB->Product2_ev * localB->Product2_ev) +
          localB->Product3_f * localB->Product3_f;

        /* Trigonometry: '<S65>/Trigonometric Function1' */
        localB->PointingCmd[0] = rt_atan2d_snf(localB->fcn1_l, localB->fcn2_k);

        /* Fcn: '<S10>/fcn4' */
        localB->fcn4_e = (localB->Product1_i * localB->Product2_ev -
                          localB->Product_j * localB->Product3_f) * -2.0;

        /* Fcn: '<S10>/fcn5' */
        localB->fcn5_p = ((localB->Product_j * localB->Product_j +
                           localB->Product1_i * localB->Product1_i) -
                          localB->Product2_ev * localB->Product2_ev) -
          localB->Product3_f * localB->Product3_f;

        /* Trigonometry: '<S65>/Trigonometric Function3' */
        localB->PointingCmd[2] = rt_atan2d_snf(localB->fcn4_e, localB->fcn5_p);

        /* Trigonometry: '<S65>/trigFcn' */
        tmpForInput_idx_0 = localB->Merge_c;
        if (tmpForInput_idx_0 > 1.0) {
          tmpForInput_idx_0 = 1.0;
        } else if (tmpForInput_idx_0 < -1.0) {
          tmpForInput_idx_0 = -1.0;
        }

        localB->PointingCmd[1] = asin(tmpForInput_idx_0);
      } else if (*rtu_AttitudeMode == 2.0) {
        /* Transition: '<S3>:51' */
        localB->ControlMode = 2.0;
        localDW->is_On = asbCubeSatACS_IN_Sun;

        /* If: '<S77>/If' */
        if (asbCubeSatACS_ConstB.Abs < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem' incorporates:
           *  ActionPort: '<S88>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Merge);

          /* End of Outputs for SubSystem: '<S77>/If Action Subsystem' */
        } else if (asbCubeSatACS_ConstB.Abs1 < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S89>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem1(&localB->Merge);

          /* End of Outputs for SubSystem: '<S77>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S90>/Action Port'
           */
          asbCubeSat_IfActionSubsystem2_p(&localB->Merge);

          /* End of Outputs for SubSystem: '<S77>/If Action Subsystem2' */
        }

        /* Product: '<S157>/Product' */
        localB->Product = localB->BusConversion_InsertedFor_Point.q_eci2b[0] *
          localB->BusConversion_InsertedFor_Point.q_eci2b[0];

        /* Product: '<S157>/Product1' */
        localB->Product1 = localB->BusConversion_InsertedFor_Point.q_eci2b[1] *
          localB->BusConversion_InsertedFor_Point.q_eci2b[1];

        /* Product: '<S157>/Product2' */
        localB->Product2 = localB->BusConversion_InsertedFor_Point.q_eci2b[2] *
          localB->BusConversion_InsertedFor_Point.q_eci2b[2];

        /* Product: '<S157>/Product3' */
        localB->Product3 = localB->BusConversion_InsertedFor_Point.q_eci2b[3] *
          localB->BusConversion_InsertedFor_Point.q_eci2b[3];

        /* Sum: '<S157>/Sum' */
        localB->Sum_n = ((localB->Product + localB->Product1) + localB->Product2)
          + localB->Product3;

        /* Sqrt: '<S156>/sqrt' */
        localB->sqrt_o = sqrt(localB->Sum_n);

        /* Product: '<S152>/Product2' */
        localB->Product2_f = localB->BusConversion_InsertedFor_Point.q_eci2b[2] /
          localB->sqrt_o;

        /* Product: '<S153>/Product6' */
        localB->Product6 = localB->Product2_f * localB->Product2_f;

        /* Product: '<S152>/Product3' */
        localB->Product3_b = localB->BusConversion_InsertedFor_Point.q_eci2b[3] /
          localB->sqrt_o;

        /* Product: '<S153>/Product7' */
        localB->Product7 = localB->Product3_b * localB->Product3_b;

        /* Sum: '<S153>/Sum3' incorporates:
         *  Constant: '<S153>/Constant'
         */
        localB->Sum3 = (0.5 - localB->Product6) - localB->Product7;

        /* Gain: '<S153>/Gain2' */
        localB->Gain2 = 2.0 * localB->Sum3;

        /* Product: '<S153>/Product8' */
        localB->Product8 = localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[0] *
          localB->Gain2;

        /* Product: '<S152>/Product1' */
        localB->Product1_d = localB->BusConversion_InsertedFor_Point.q_eci2b[1] /
          localB->sqrt_o;

        /* Product: '<S153>/Product' */
        localB->Product_m = localB->Product1_d * localB->Product2_f;

        /* Product: '<S152>/Product' */
        localB->Product_b = localB->BusConversion_InsertedFor_Point.q_eci2b[0] /
          localB->sqrt_o;

        /* Product: '<S153>/Product1' */
        localB->Product1_l = localB->Product_b * localB->Product3_b;

        /* Sum: '<S153>/Sum1' */
        localB->Sum1 = localB->Product_m + localB->Product1_l;

        /* Gain: '<S153>/Gain' */
        localB->Gain = 2.0 * localB->Sum1;

        /* Product: '<S153>/Product4' */
        localB->Product4 = localB->Gain *
          localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[1];

        /* Product: '<S153>/Product2' */
        localB->Product2_e = localB->Product_b * localB->Product2_f;

        /* Product: '<S153>/Product3' */
        localB->Product3_i = localB->Product1_d * localB->Product3_b;

        /* Sum: '<S153>/Sum2' */
        localB->Sum2 = localB->Product3_i - localB->Product2_e;

        /* Gain: '<S153>/Gain1' */
        localB->Gain1 = 2.0 * localB->Sum2;

        /* Product: '<S153>/Product5' */
        localB->Product5 = localB->Gain1 *
          localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[2];

        /* Sum: '<S153>/Sum' */
        localB->Sum_p = (localB->Product8 + localB->Product4) + localB->Product5;

        /* Product: '<S154>/Product' */
        localB->Product_l = localB->Product1_d * localB->Product2_f;

        /* Product: '<S154>/Product1' */
        localB->Product1_g = localB->Product_b * localB->Product3_b;

        /* Sum: '<S154>/Sum1' */
        localB->Sum1_m = localB->Product_l - localB->Product1_g;

        /* Gain: '<S154>/Gain' */
        localB->Gain_a = 2.0 * localB->Sum1_m;

        /* Product: '<S154>/Product4' */
        localB->Product4_k = localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[0]
          * localB->Gain_a;

        /* Product: '<S154>/Product6' */
        localB->Product6_o = localB->Product1_d * localB->Product1_d;

        /* Product: '<S154>/Product7' */
        localB->Product7_d = localB->Product3_b * localB->Product3_b;

        /* Sum: '<S154>/Sum3' incorporates:
         *  Constant: '<S154>/Constant'
         */
        localB->Sum3_g = (0.5 - localB->Product6_o) - localB->Product7_d;

        /* Gain: '<S154>/Gain2' */
        localB->Gain2_n = 2.0 * localB->Sum3_g;

        /* Product: '<S154>/Product8' */
        localB->Product8_a = localB->Gain2_n *
          localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[1];

        /* Product: '<S154>/Product2' */
        localB->Product2_a = localB->Product_b * localB->Product1_d;

        /* Product: '<S154>/Product3' */
        localB->Product3_h = localB->Product2_f * localB->Product3_b;

        /* Sum: '<S154>/Sum2' */
        localB->Sum2_o = localB->Product2_a + localB->Product3_h;

        /* Gain: '<S154>/Gain1' */
        localB->Gain1_f = 2.0 * localB->Sum2_o;

        /* Product: '<S154>/Product5' */
        localB->Product5_p = localB->Gain1_f *
          localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[2];

        /* Sum: '<S154>/Sum' */
        localB->Sum_o = (localB->Product4_k + localB->Product8_a) +
          localB->Product5_p;

        /* Product: '<S155>/Product' */
        localB->Product_p = localB->Product1_d * localB->Product3_b;

        /* Product: '<S155>/Product1' */
        localB->Product1_dq = localB->Product_b * localB->Product2_f;

        /* Sum: '<S155>/Sum1' */
        localB->Sum1_j = localB->Product_p + localB->Product1_dq;

        /* Gain: '<S155>/Gain' */
        localB->Gain_j = 2.0 * localB->Sum1_j;

        /* Product: '<S155>/Product4' */
        localB->Product4_g = localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[0]
          * localB->Gain_j;

        /* Product: '<S155>/Product2' */
        localB->Product2_l = localB->Product_b * localB->Product1_d;

        /* Product: '<S155>/Product3' */
        localB->Product3_g = localB->Product2_f * localB->Product3_b;

        /* Sum: '<S155>/Sum2' */
        localB->Sum2_m = localB->Product3_g - localB->Product2_l;

        /* Gain: '<S155>/Gain1' */
        localB->Gain1_o = 2.0 * localB->Sum2_m;

        /* Product: '<S155>/Product5' */
        localB->Product5_b = localB->Gain1_o *
          localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[1];

        /* Product: '<S155>/Product6' */
        localB->Product6_c = localB->Product1_d * localB->Product1_d;

        /* Product: '<S155>/Product7' */
        localB->Product7_g = localB->Product2_f * localB->Product2_f;

        /* Sum: '<S155>/Sum3' incorporates:
         *  Constant: '<S155>/Constant'
         */
        localB->Sum3_c = (0.5 - localB->Product6_c) - localB->Product7_g;

        /* Gain: '<S155>/Gain2' */
        localB->Gain2_a = 2.0 * localB->Sum3_c;

        /* Product: '<S155>/Product8' */
        localB->Product8_m = localB->Gain2_a *
          localB->BusConversion_InsertedFor_Poi_e.x_sun_eci[2];

        /* Sum: '<S155>/Sum' */
        localB->Sum_j = (localB->Product4_g + localB->Product5_b) +
          localB->Product8_m;

        /* SignalConversion generated from: '<S78>/Dot Product1' */
        localB->TmpSignalConversionAtDotProduct[0] = localB->Sum_p;
        localB->TmpSignalConversionAtDotProduct[1] = localB->Sum_o;
        localB->TmpSignalConversionAtDotProduct[2] = localB->Sum_j;

        /* Product: '<S163>/Product' */
        localB->Product_bp = localB->BusConversion_InsertedFor_Point.q_eci2b[0] *
          localB->BusConversion_InsertedFor_Point.q_eci2b[0];

        /* Product: '<S163>/Product1' */
        localB->Product1_f = localB->BusConversion_InsertedFor_Point.q_eci2b[1] *
          localB->BusConversion_InsertedFor_Point.q_eci2b[1];

        /* Product: '<S163>/Product2' */
        localB->Product2_j = localB->BusConversion_InsertedFor_Point.q_eci2b[2] *
          localB->BusConversion_InsertedFor_Point.q_eci2b[2];

        /* Product: '<S163>/Product3' */
        localB->Product3_d = localB->BusConversion_InsertedFor_Point.q_eci2b[3] *
          localB->BusConversion_InsertedFor_Point.q_eci2b[3];

        /* Sum: '<S163>/Sum' */
        localB->Sum_h = ((localB->Product_bp + localB->Product1_f) +
                         localB->Product2_j) + localB->Product3_d;

        /* Sqrt: '<S162>/sqrt' */
        localB->sqrt_n = sqrt(localB->Sum_h);

        /* Product: '<S158>/Product2' */
        localB->Product2_c = localB->BusConversion_InsertedFor_Point.q_eci2b[2] /
          localB->sqrt_n;

        /* Product: '<S159>/Product6' */
        localB->Product6_b = localB->Product2_c * localB->Product2_c;

        /* Product: '<S158>/Product3' */
        localB->Product3_e = localB->BusConversion_InsertedFor_Point.q_eci2b[3] /
          localB->sqrt_n;

        /* Product: '<S159>/Product7' */
        localB->Product7_b = localB->Product3_e * localB->Product3_e;

        /* Sum: '<S159>/Sum3' incorporates:
         *  Constant: '<S159>/Constant'
         */
        localB->Sum3_j = (0.5 - localB->Product6_b) - localB->Product7_b;

        /* Gain: '<S159>/Gain2' */
        localB->Gain2_k = 2.0 * localB->Sum3_j;

        /* Product: '<S159>/Product8' */
        localB->Product8_o = 0.0 * localB->Gain2_k;

        /* Product: '<S158>/Product1' */
        localB->Product1_a = localB->BusConversion_InsertedFor_Point.q_eci2b[1] /
          localB->sqrt_n;

        /* Product: '<S159>/Product' */
        localB->Product_n = localB->Product1_a * localB->Product2_c;

        /* Product: '<S158>/Product' */
        localB->Product_e = localB->BusConversion_InsertedFor_Point.q_eci2b[0] /
          localB->sqrt_n;

        /* Product: '<S159>/Product1' */
        localB->Product1_k = localB->Product_e * localB->Product3_e;

        /* Sum: '<S159>/Sum1' */
        localB->Sum1_n = localB->Product_n + localB->Product1_k;

        /* Gain: '<S159>/Gain' */
        localB->Gain_m = 2.0 * localB->Sum1_n;

        /* Product: '<S159>/Product4' */
        localB->Product4_p = localB->Gain_m * 0.0;

        /* Product: '<S159>/Product2' */
        localB->Product2_h = localB->Product_e * localB->Product2_c;

        /* Product: '<S159>/Product3' */
        localB->Product3_m = localB->Product1_a * localB->Product3_e;

        /* Sum: '<S159>/Sum2' */
        localB->Sum2_g = localB->Product3_m - localB->Product2_h;

        /* Gain: '<S159>/Gain1' */
        localB->Gain1_p = 2.0 * localB->Sum2_g;

        /* Product: '<S159>/Product5' */
        localB->Product5_f = localB->Gain1_p;

        /* Sum: '<S159>/Sum' */
        localB->Sum_oq = (localB->Product8_o + localB->Product4_p) +
          localB->Product5_f;

        /* Product: '<S160>/Product' */
        localB->Product_g = localB->Product1_a * localB->Product2_c;

        /* Product: '<S160>/Product1' */
        localB->Product1_af = localB->Product_e * localB->Product3_e;

        /* Sum: '<S160>/Sum1' */
        localB->Sum1_h = localB->Product_g - localB->Product1_af;

        /* Gain: '<S160>/Gain' */
        localB->Gain_n = 2.0 * localB->Sum1_h;

        /* Product: '<S160>/Product4' */
        localB->Product4_c = 0.0 * localB->Gain_n;

        /* Product: '<S160>/Product6' */
        localB->Product6_p = localB->Product1_a * localB->Product1_a;

        /* Product: '<S160>/Product7' */
        localB->Product7_dp = localB->Product3_e * localB->Product3_e;

        /* Sum: '<S160>/Sum3' incorporates:
         *  Constant: '<S160>/Constant'
         */
        localB->Sum3_m = (0.5 - localB->Product6_p) - localB->Product7_dp;

        /* Gain: '<S160>/Gain2' */
        localB->Gain2_h = 2.0 * localB->Sum3_m;

        /* Product: '<S160>/Product8' */
        localB->Product8_p = localB->Gain2_h * 0.0;

        /* Product: '<S160>/Product2' */
        localB->Product2_k = localB->Product_e * localB->Product1_a;

        /* Product: '<S160>/Product3' */
        localB->Product3_c = localB->Product2_c * localB->Product3_e;

        /* Sum: '<S160>/Sum2' */
        localB->Sum2_e = localB->Product2_k + localB->Product3_c;

        /* Gain: '<S160>/Gain1' */
        localB->Gain1_c = 2.0 * localB->Sum2_e;

        /* Product: '<S160>/Product5' */
        localB->Product5_i = localB->Gain1_c;

        /* Sum: '<S160>/Sum' */
        localB->Sum_i = (localB->Product4_c + localB->Product8_p) +
          localB->Product5_i;

        /* Product: '<S161>/Product' */
        localB->Product_k = localB->Product1_a * localB->Product3_e;

        /* Product: '<S161>/Product1' */
        localB->Product1_m = localB->Product_e * localB->Product2_c;

        /* Sum: '<S161>/Sum1' */
        localB->Sum1_l = localB->Product_k + localB->Product1_m;

        /* Gain: '<S161>/Gain' */
        localB->Gain_k = 2.0 * localB->Sum1_l;

        /* Product: '<S161>/Product4' */
        localB->Product4_i = 0.0 * localB->Gain_k;

        /* Product: '<S161>/Product2' */
        localB->Product2_m = localB->Product_e * localB->Product1_a;

        /* Product: '<S161>/Product3' */
        localB->Product3_p = localB->Product2_c * localB->Product3_e;

        /* Sum: '<S161>/Sum2' */
        localB->Sum2_l = localB->Product3_p - localB->Product2_m;

        /* Gain: '<S161>/Gain1' */
        localB->Gain1_g = 2.0 * localB->Sum2_l;

        /* Product: '<S161>/Product5' */
        localB->Product5_d = localB->Gain1_g * 0.0;

        /* Product: '<S161>/Product6' */
        localB->Product6_i = localB->Product1_a * localB->Product1_a;

        /* Product: '<S161>/Product7' */
        localB->Product7_bn = localB->Product2_c * localB->Product2_c;

        /* Sum: '<S161>/Sum3' incorporates:
         *  Constant: '<S161>/Constant'
         */
        localB->Sum3_g2 = (0.5 - localB->Product6_i) - localB->Product7_bn;

        /* Gain: '<S161>/Gain2' */
        localB->Gain2_m = 2.0 * localB->Sum3_g2;

        /* Product: '<S161>/Product8' */
        localB->Product8_me = localB->Gain2_m;

        /* Sum: '<S161>/Sum' */
        localB->Sum_d = (localB->Product4_i + localB->Product5_d) +
          localB->Product8_me;

        /* SignalConversion generated from: '<S78>/Dot Product2' */
        localB->TmpSignalConversionAtDotProdu_j[0] = localB->Sum_oq;
        localB->TmpSignalConversionAtDotProdu_j[1] = localB->Sum_i;
        localB->TmpSignalConversionAtDotProdu_j[2] = localB->Sum_d;

        /* DotProduct: '<S78>/Dot Product3' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProduct[0];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_j[0];
        tmpForInput_idx_2 = tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S78>/Dot Product1' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProduct[0];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[0];
        tmpForInput = tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S78>/Dot Product2' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_j[0];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_j[0];
        tmpForInput_0 = tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S78>/Dot Product3' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProduct[1];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_j[1];
        tmpForInput_idx_2 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S78>/Dot Product1' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProduct[1];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[1];
        tmpForInput += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S78>/Dot Product2' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_j[1];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_j[1];
        tmpForInput_0 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S78>/Dot Product3' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProduct[2];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_j[2];
        tmpForInput_idx_2 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S78>/Dot Product1' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProduct[2];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[2];
        tmpForInput += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S78>/Dot Product2' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_j[2];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_j[2];
        tmpForInput_0 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S78>/Dot Product3' */
        localB->DotProduct3 = tmpForInput_idx_2;

        /* DotProduct: '<S78>/Dot Product1' */
        localB->DotProduct1 = tmpForInput;

        /* DotProduct: '<S78>/Dot Product2' */
        localB->DotProduct2 = tmpForInput_0;

        /* Product: '<S78>/Divide1' */
        localB->Divide1 = localB->DotProduct1 * localB->DotProduct2;

        /* Sqrt: '<S78>/Sqrt3' */
        localB->Sqrt3 = sqrt(localB->Divide1);

        /* Product: '<S78>/Divide' */
        localB->Divide = localB->DotProduct3 / localB->Sqrt3;

        /* Bias: '<S78>/Bias' */
        localB->Bias = localB->Divide + -1.0;

        /* Abs: '<S78>/Abs' */
        localB->Abs = fabs(localB->Bias);

        /* Bias: '<S78>/Bias1' */
        localB->Bias1 = localB->Divide + 1.0;

        /* Abs: '<S78>/Abs1' */
        localB->Abs1 = fabs(localB->Bias1);

        /* If: '<S78>/If' */
        if (localB->Abs < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S78>/If Action Subsystem' incorporates:
           *  ActionPort: '<S91>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Merge_f);

          /* End of Outputs for SubSystem: '<S78>/If Action Subsystem' */
        } else if (localB->Abs1 < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S78>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S92>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem1(&localB->Merge_f);

          /* End of Outputs for SubSystem: '<S78>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S78>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S93>/Action Port'
           */
          asbCubeSat_IfActionSubsystem2_p(&localB->Merge_f);

          /* End of Outputs for SubSystem: '<S78>/If Action Subsystem2' */
        }

        /* RelationalOperator: '<S79>/Compare' incorporates:
         *  Constant: '<S79>/Constant'
         */
        localB->Compare = (localB->Merge != 0.0);

        /* RelationalOperator: '<S80>/Compare' incorporates:
         *  Constant: '<S80>/Constant'
         */
        localB->Compare_o = (localB->Merge_f != 0.0);

        /* Logic: '<S73>/OR' */
        localB->OR = (localB->Compare || localB->Compare_o);

        /* DotProduct: '<S84>/Dot Product3' */
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[0];
        tmpForInput_idx_0 = 0.0 * tmpForInput_idx_1;

        /* DotProduct: '<S84>/Dot Product2' */
        tmpForInput_idx_2 = localB->TmpSignalConversionAtDotProduct[0];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[0];
        tmpForInput = tmpForInput_idx_2 * tmpForInput_idx_1;

        /* DotProduct: '<S111>/Dot Product3' */
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[0];
        tmpForInput_0 = 0.0 * tmpForInput_idx_1;

        /* DotProduct: '<S111>/Dot Product2' */
        tmpForInput_idx_2 = localB->TmpSignalConversionAtDotProduct[0];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[0];
        tmpForInput_1 = tmpForInput_idx_2 * tmpForInput_idx_1;

        /* DotProduct: '<S84>/Dot Product3' */
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[1];
        tmpForInput_idx_0 += 0.0 * tmpForInput_idx_1;

        /* DotProduct: '<S84>/Dot Product2' */
        tmpForInput_idx_2 = localB->TmpSignalConversionAtDotProduct[1];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[1];
        tmpForInput += tmpForInput_idx_2 * tmpForInput_idx_1;

        /* DotProduct: '<S111>/Dot Product3' */
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[1];
        tmpForInput_0 += 0.0 * tmpForInput_idx_1;

        /* DotProduct: '<S111>/Dot Product2' */
        tmpForInput_idx_2 = localB->TmpSignalConversionAtDotProduct[1];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[1];
        tmpForInput_1 += tmpForInput_idx_2 * tmpForInput_idx_1;

        /* DotProduct: '<S84>/Dot Product3' */
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[2];
        tmpForInput_idx_0 += -tmpForInput_idx_1;

        /* DotProduct: '<S84>/Dot Product2' */
        tmpForInput_idx_2 = localB->TmpSignalConversionAtDotProduct[2];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[2];
        tmpForInput += tmpForInput_idx_2 * tmpForInput_idx_1;

        /* DotProduct: '<S111>/Dot Product3' */
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[2];
        tmpForInput_0 += -tmpForInput_idx_1;

        /* DotProduct: '<S111>/Dot Product2' */
        tmpForInput_idx_2 = localB->TmpSignalConversionAtDotProduct[2];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProduct[2];
        tmpForInput_1 += tmpForInput_idx_2 * tmpForInput_idx_1;

        /* DotProduct: '<S84>/Dot Product3' */
        localB->DotProduct3_o = tmpForInput_idx_0;

        /* DotProduct: '<S84>/Dot Product2' */
        localB->DotProduct2_c = tmpForInput;

        /* Product: '<S84>/Divide1' */
        localB->Divide1_o = asbCubeSatACS_ConstB.DotProduct1_k *
          localB->DotProduct2_c;

        /* Sqrt: '<S84>/Sqrt3' */
        localB->Sqrt3_a = sqrt(localB->Divide1_o);

        /* Sum: '<S84>/Add2' */
        localB->Add2 = localB->DotProduct3_o + localB->Sqrt3_a;

        /* Product: '<S124>/Product' */
        localB->Product_i = localB->Add2 * localB->Add2;

        /* DotProduct: '<S111>/Dot Product3' */
        localB->DotProduct3_p = tmpForInput_0;

        /* DotProduct: '<S111>/Dot Product2' */
        localB->DotProduct2_h = tmpForInput_1;

        /* Product: '<S111>/Divide1' */
        localB->Divide1_k = asbCubeSatACS_ConstB.DotProduct1_b *
          localB->DotProduct2_h;

        /* Sqrt: '<S111>/Sqrt3' */
        localB->Sqrt3_e = sqrt(localB->Divide1_k);

        /* Product: '<S111>/Divide' */
        localB->Divide_b = localB->DotProduct3_p / localB->Sqrt3_e;

        /* Bias: '<S111>/Bias' */
        localB->Bias_i = localB->Divide_b + -1.0;

        /* Abs: '<S111>/Abs' */
        localB->Abs_l = fabs(localB->Bias_i);

        /* Bias: '<S111>/Bias1' */
        localB->Bias1_f = localB->Divide_b + 1.0;

        /* Abs: '<S111>/Abs1' */
        localB->Abs1_n = fabs(localB->Bias1_f);

        /* If: '<S111>/If' */
        if (localB->Abs_l < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S111>/If Action Subsystem' incorporates:
           *  ActionPort: '<S117>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Merge_k);

          /* End of Outputs for SubSystem: '<S111>/If Action Subsystem' */
        } else if (localB->Abs1_n < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S111>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S118>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem1(&localB->Merge_k);

          /* End of Outputs for SubSystem: '<S111>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S111>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S119>/Action Port'
           */
          asbCubeSat_IfActionSubsystem2_p(&localB->Merge_k);

          /* End of Outputs for SubSystem: '<S111>/If Action Subsystem2' */
        }

        /* RelationalOperator: '<S112>/Compare' incorporates:
         *  Constant: '<S112>/Constant'
         */
        localB->Compare_e = (localB->Merge_k != -1.0);

        /* Switch: '<S84>/is 180deg Rot' */
        if (localB->Compare_e) {
          /* Product: '<S116>/j x i' */
          localB->jxi_n = 0.0 * localB->Sum_p;

          /* Product: '<S116>/i x k' */
          localB->ixk_n = 0.0 * localB->Sum_j;

          /* Product: '<S116>/k x j' */
          localB->kxj_pe = -localB->Sum_o;

          /* Product: '<S115>/i x j' */
          localB->ixj_l = 0.0 * localB->Sum_o;

          /* Product: '<S115>/k x i' */
          localB->kxi_b = -localB->Sum_p;

          /* Product: '<S115>/j x k' */
          localB->jxk_e = 0.0 * localB->Sum_j;

          /* Sum: '<S110>/Sum' */
          localB->Sum_fa[0] = localB->jxk_e - localB->kxj_pe;
          localB->Sum_fa[1] = localB->kxi_b - localB->ixk_n;
          localB->Sum_fa[2] = localB->ixj_l - localB->jxi_n;

          /* Switch: '<S84>/is 180deg Rot' */
          localB->is180degRot[0] = localB->Sum_fa[0];
          localB->is180degRot[1] = localB->Sum_fa[1];
          localB->is180degRot[2] = localB->Sum_fa[2];
        } else {
          /* Switch: '<S84>/is 180deg Rot' */
          localB->is180degRot[0] = asbCubeSatACS_ConstB.Sum[0];
          localB->is180degRot[1] = asbCubeSatACS_ConstB.Sum[1];
          localB->is180degRot[2] = asbCubeSatACS_ConstB.Sum[2];
        }

        /* Product: '<S124>/Product1' */
        localB->Product1_h = localB->is180degRot[0] * localB->is180degRot[0];

        /* Product: '<S124>/Product2' */
        localB->Product2_o = localB->is180degRot[1] * localB->is180degRot[1];

        /* Product: '<S124>/Product3' */
        localB->Product3_hw = localB->is180degRot[2] * localB->is180degRot[2];

        /* Sum: '<S124>/Sum' */
        localB->Sum_ph = ((localB->Product_i + localB->Product1_h) +
                          localB->Product2_o) + localB->Product3_hw;

        /* Sqrt: '<S123>/sqrt' */
        localB->sqrt_b = sqrt(localB->Sum_ph);

        /* Product: '<S114>/Product' */
        localB->Product_pt = localB->Add2 / localB->sqrt_b;

        /* Product: '<S114>/Product2' */
        localB->Product2_ki = localB->is180degRot[1] / localB->sqrt_b;

        /* Product: '<S103>/Product' */
        localB->Product_kc = localB->Product_pt * localB->Product_pt;

        /* Product: '<S114>/Product1' */
        localB->Product1_hz = localB->is180degRot[0] / localB->sqrt_b;

        /* Product: '<S103>/Product1' */
        localB->Product1_p = localB->Product1_hz * localB->Product1_hz;

        /* Product: '<S103>/Product2' */
        localB->Product2_e0 = localB->Product2_ki * localB->Product2_ki;

        /* Product: '<S114>/Product3' */
        localB->Product3_n = localB->is180degRot[2] / localB->sqrt_b;

        /* Product: '<S103>/Product3' */
        localB->Product3_k = localB->Product3_n * localB->Product3_n;

        /* Sum: '<S103>/Sum' */
        localB->Sum_oi = ((localB->Product_kc + localB->Product1_p) +
                          localB->Product2_e0) + localB->Product3_k;

        /* Sqrt: '<S102>/sqrt' */
        localB->sqrt_m = sqrt(localB->Sum_oi);

        /* Product: '<S98>/Product2' */
        localB->Product2_d = localB->Product2_ki / localB->sqrt_m;

        /* Product: '<S99>/Product6' */
        localB->Product6_l = localB->Product2_d * localB->Product2_d;

        /* Product: '<S98>/Product3' */
        localB->Product3_iw = localB->Product3_n / localB->sqrt_m;

        /* Product: '<S99>/Product7' */
        localB->Product7_o = localB->Product3_iw * localB->Product3_iw;

        /* Sum: '<S99>/Sum3' incorporates:
         *  Constant: '<S99>/Constant'
         */
        localB->Sum3_f = (0.5 - localB->Product6_l) - localB->Product7_o;

        /* Gain: '<S99>/Gain2' */
        localB->Gain2_g = 2.0 * localB->Sum3_f;

        /* Product: '<S99>/Product8' */
        localB->Product8_d = asbCubeSatACS_ConstB.Sum_p[0] * localB->Gain2_g;

        /* Product: '<S98>/Product1' */
        localB->Product1_pn = localB->Product1_hz / localB->sqrt_m;

        /* Product: '<S99>/Product' */
        localB->Product_o = localB->Product1_pn * localB->Product2_d;

        /* Product: '<S98>/Product' */
        localB->Product_d = localB->Product_pt / localB->sqrt_m;

        /* Product: '<S99>/Product1' */
        localB->Product1_au = localB->Product_d * localB->Product3_iw;

        /* Sum: '<S99>/Sum1' */
        localB->Sum1_c = localB->Product_o + localB->Product1_au;

        /* Gain: '<S99>/Gain' */
        localB->Gain_al = 2.0 * localB->Sum1_c;

        /* Product: '<S99>/Product4' */
        localB->Product4_pa = localB->Gain_al * asbCubeSatACS_ConstB.Sum_p[1];

        /* Product: '<S99>/Product2' */
        localB->Product2_kz = localB->Product_d * localB->Product2_d;

        /* Product: '<S99>/Product3' */
        localB->Product3_o = localB->Product1_pn * localB->Product3_iw;

        /* Sum: '<S99>/Sum2' */
        localB->Sum2_gt = localB->Product3_o - localB->Product2_kz;

        /* Gain: '<S99>/Gain1' */
        localB->Gain1_fw = 2.0 * localB->Sum2_gt;

        /* Product: '<S99>/Product5' */
        localB->Product5_d2 = localB->Gain1_fw * asbCubeSatACS_ConstB.Sum_p[2];

        /* Sum: '<S99>/Sum' */
        localB->Sum_l = (localB->Product8_d + localB->Product4_pa) +
          localB->Product5_d2;

        /* Product: '<S100>/Product' */
        localB->Product_ii = localB->Product1_pn * localB->Product2_d;

        /* Product: '<S100>/Product1' */
        localB->Product1_kp = localB->Product_d * localB->Product3_iw;

        /* Sum: '<S100>/Sum1' */
        localB->Sum1_hm = localB->Product_ii - localB->Product1_kp;

        /* Gain: '<S100>/Gain' */
        localB->Gain_mk = 2.0 * localB->Sum1_hm;

        /* Product: '<S100>/Product4' */
        localB->Product4_pz = asbCubeSatACS_ConstB.Sum_p[0] * localB->Gain_mk;

        /* Product: '<S100>/Product6' */
        localB->Product6_d = localB->Product1_pn * localB->Product1_pn;

        /* Product: '<S100>/Product7' */
        localB->Product7_k = localB->Product3_iw * localB->Product3_iw;

        /* Sum: '<S100>/Sum3' incorporates:
         *  Constant: '<S100>/Constant'
         */
        localB->Sum3_jw = (0.5 - localB->Product6_d) - localB->Product7_k;

        /* Gain: '<S100>/Gain2' */
        localB->Gain2_hi = 2.0 * localB->Sum3_jw;

        /* Product: '<S100>/Product8' */
        localB->Product8_i = localB->Gain2_hi * asbCubeSatACS_ConstB.Sum_p[1];

        /* Product: '<S100>/Product2' */
        localB->Product2_mm = localB->Product_d * localB->Product1_pn;

        /* Product: '<S100>/Product3' */
        localB->Product3_k1 = localB->Product2_d * localB->Product3_iw;

        /* Sum: '<S100>/Sum2' */
        localB->Sum2_b = localB->Product2_mm + localB->Product3_k1;

        /* Gain: '<S100>/Gain1' */
        localB->Gain1_j = 2.0 * localB->Sum2_b;

        /* Product: '<S100>/Product5' */
        localB->Product5_f1 = localB->Gain1_j * asbCubeSatACS_ConstB.Sum_p[2];

        /* Sum: '<S100>/Sum' */
        localB->Sum_n1 = (localB->Product4_pz + localB->Product8_i) +
          localB->Product5_f1;

        /* Product: '<S101>/Product' */
        localB->Product_oa = localB->Product1_pn * localB->Product3_iw;

        /* Product: '<S101>/Product1' */
        localB->Product1_o = localB->Product_d * localB->Product2_d;

        /* Sum: '<S101>/Sum1' */
        localB->Sum1_g = localB->Product_oa + localB->Product1_o;

        /* Gain: '<S101>/Gain' */
        localB->Gain_d = 2.0 * localB->Sum1_g;

        /* Product: '<S101>/Product4' */
        localB->Product4_n = asbCubeSatACS_ConstB.Sum_p[0] * localB->Gain_d;

        /* Product: '<S101>/Product2' */
        localB->Product2_f0 = localB->Product_d * localB->Product1_pn;

        /* Product: '<S101>/Product3' */
        localB->Product3_kx = localB->Product2_d * localB->Product3_iw;

        /* Sum: '<S101>/Sum2' */
        localB->Sum2_n = localB->Product3_kx - localB->Product2_f0;

        /* Gain: '<S101>/Gain1' */
        localB->Gain1_h = 2.0 * localB->Sum2_n;

        /* Product: '<S101>/Product5' */
        localB->Product5_g = localB->Gain1_h * asbCubeSatACS_ConstB.Sum_p[1];

        /* Product: '<S101>/Product6' */
        localB->Product6_d3 = localB->Product1_pn * localB->Product1_pn;

        /* Product: '<S101>/Product7' */
        localB->Product7_p = localB->Product2_d * localB->Product2_d;

        /* Sum: '<S101>/Sum3' incorporates:
         *  Constant: '<S101>/Constant'
         */
        localB->Sum3_k = (0.5 - localB->Product6_d3) - localB->Product7_p;

        /* Gain: '<S101>/Gain2' */
        localB->Gain2_n1 = 2.0 * localB->Sum3_k;

        /* Product: '<S101>/Product8' */
        localB->Product8_h = localB->Gain2_n1 * asbCubeSatACS_ConstB.Sum_p[2];

        /* Sum: '<S101>/Sum' */
        localB->Sum_dy = (localB->Product4_n + localB->Product5_g) +
          localB->Product8_h;

        /* SignalConversion generated from: '<S126>/Dot Product1' */
        localB->TmpSignalConversionAtDotProdu_h[0] = localB->Sum_l;
        localB->TmpSignalConversionAtDotProdu_h[1] = localB->Sum_n1;
        localB->TmpSignalConversionAtDotProdu_h[2] = localB->Sum_dy;

        /* Product: '<S148>/j x k' */
        localB->jxk = localB->Sum_o * localB->Sum_d;

        /* Product: '<S148>/k x i' */
        localB->kxi = localB->Sum_j * localB->Sum_oq;

        /* Product: '<S148>/i x j' */
        localB->ixj = localB->Sum_p * localB->Sum_i;

        /* Product: '<S149>/k x j' */
        localB->kxj = localB->Sum_j * localB->Sum_i;

        /* Product: '<S149>/i x k' */
        localB->ixk = localB->Sum_p * localB->Sum_d;

        /* Product: '<S149>/j x i' */
        localB->jxi = localB->Sum_o * localB->Sum_oq;

        /* Sum: '<S146>/Sum' */
        localB->Sum_hz[0] = localB->jxk - localB->kxj;
        localB->Sum_hz[1] = localB->kxi - localB->ixk;
        localB->Sum_hz[2] = localB->ixj - localB->jxi;

        /* Product: '<S150>/j x k' */
        localB->jxk_h = localB->Sum_hz[1] * localB->Sum_j;

        /* Product: '<S150>/k x i' */
        localB->kxi_d = localB->Sum_hz[2] * localB->Sum_p;

        /* Product: '<S150>/i x j' */
        localB->ixj_e = localB->Sum_hz[0] * localB->Sum_o;

        /* Product: '<S151>/k x j' */
        localB->kxj_j = localB->Sum_hz[2] * localB->Sum_o;

        /* Product: '<S151>/i x k' */
        localB->ixk_l = localB->Sum_hz[0] * localB->Sum_j;

        /* Product: '<S151>/j x i' */
        localB->jxi_b = localB->Sum_hz[1] * localB->Sum_p;

        /* Sum: '<S147>/Sum' */
        localB->Sum_lt[0] = localB->jxk_h - localB->kxj_j;
        localB->Sum_lt[1] = localB->kxi_d - localB->ixk_l;
        localB->Sum_lt[2] = localB->ixj_e - localB->jxi_b;

        /* Product: '<S109>/Product' */
        localB->Product_f = localB->Product_pt * localB->Product_pt;

        /* Product: '<S109>/Product1' */
        localB->Product1_gs = localB->Product1_hz * localB->Product1_hz;

        /* Product: '<S109>/Product2' */
        localB->Product2_ah = localB->Product2_ki * localB->Product2_ki;

        /* Product: '<S109>/Product3' */
        localB->Product3_ds = localB->Product3_n * localB->Product3_n;

        /* Sum: '<S109>/Sum' */
        localB->Sum_e = ((localB->Product_f + localB->Product1_gs) +
                         localB->Product2_ah) + localB->Product3_ds;

        /* Sqrt: '<S108>/sqrt' */
        localB->sqrt_g = sqrt(localB->Sum_e);

        /* Product: '<S104>/Product2' */
        localB->Product2_p = localB->Product2_ki / localB->sqrt_g;

        /* Product: '<S105>/Product6' */
        localB->Product6_l2 = localB->Product2_p * localB->Product2_p;

        /* Product: '<S104>/Product3' */
        localB->Product3_e1 = localB->Product3_n / localB->sqrt_g;

        /* Product: '<S105>/Product7' */
        localB->Product7_a = localB->Product3_e1 * localB->Product3_e1;

        /* Sum: '<S105>/Sum3' incorporates:
         *  Constant: '<S105>/Constant'
         */
        localB->Sum3_ky = (0.5 - localB->Product6_l2) - localB->Product7_a;

        /* Gain: '<S105>/Gain2' */
        localB->Gain2_j = 2.0 * localB->Sum3_ky;

        /* Product: '<S105>/Product8' */
        localB->Product8_g = localB->Sum_lt[0] * localB->Gain2_j;

        /* Product: '<S104>/Product1' */
        localB->Product1_kk = localB->Product1_hz / localB->sqrt_g;

        /* Product: '<S105>/Product' */
        localB->Product_og = localB->Product1_kk * localB->Product2_p;

        /* Product: '<S104>/Product' */
        localB->Product_c = localB->Product_pt / localB->sqrt_g;

        /* Product: '<S105>/Product1' */
        localB->Product1_as = localB->Product_c * localB->Product3_e1;

        /* Sum: '<S105>/Sum1' */
        localB->Sum1_mw = localB->Product_og + localB->Product1_as;

        /* Gain: '<S105>/Gain' */
        localB->Gain_kn = 2.0 * localB->Sum1_mw;

        /* Product: '<S105>/Product4' */
        localB->Product4_m = localB->Gain_kn * localB->Sum_lt[1];

        /* Product: '<S105>/Product2' */
        localB->Product2_lw = localB->Product_c * localB->Product2_p;

        /* Product: '<S105>/Product3' */
        localB->Product3_mz = localB->Product1_kk * localB->Product3_e1;

        /* Sum: '<S105>/Sum2' */
        localB->Sum2_np = localB->Product3_mz - localB->Product2_lw;

        /* Gain: '<S105>/Gain1' */
        localB->Gain1_e = 2.0 * localB->Sum2_np;

        /* Product: '<S105>/Product5' */
        localB->Product5_c = localB->Gain1_e * localB->Sum_lt[2];

        /* Sum: '<S105>/Sum' */
        localB->Sum_jg = (localB->Product8_g + localB->Product4_m) +
          localB->Product5_c;

        /* Product: '<S106>/Product' */
        localB->Product_gv = localB->Product1_kk * localB->Product2_p;

        /* Product: '<S106>/Product1' */
        localB->Product1_j = localB->Product_c * localB->Product3_e1;

        /* Sum: '<S106>/Sum1' */
        localB->Sum1_a = localB->Product_gv - localB->Product1_j;

        /* Gain: '<S106>/Gain' */
        localB->Gain_g = 2.0 * localB->Sum1_a;

        /* Product: '<S106>/Product4' */
        localB->Product4_o = localB->Sum_lt[0] * localB->Gain_g;

        /* Product: '<S106>/Product6' */
        localB->Product6_n = localB->Product1_kk * localB->Product1_kk;

        /* Product: '<S106>/Product7' */
        localB->Product7_be = localB->Product3_e1 * localB->Product3_e1;

        /* Sum: '<S106>/Sum3' incorporates:
         *  Constant: '<S106>/Constant'
         */
        localB->Sum3_kt = (0.5 - localB->Product6_n) - localB->Product7_be;

        /* Gain: '<S106>/Gain2' */
        localB->Gain2_f = 2.0 * localB->Sum3_kt;

        /* Product: '<S106>/Product8' */
        localB->Product8_pj = localB->Gain2_f * localB->Sum_lt[1];

        /* Product: '<S106>/Product2' */
        localB->Product2_cy = localB->Product_c * localB->Product1_kk;

        /* Product: '<S106>/Product3' */
        localB->Product3_j = localB->Product2_p * localB->Product3_e1;

        /* Sum: '<S106>/Sum2' */
        localB->Sum2_os = localB->Product2_cy + localB->Product3_j;

        /* Gain: '<S106>/Gain1' */
        localB->Gain1_od = 2.0 * localB->Sum2_os;

        /* Product: '<S106>/Product5' */
        localB->Product5_k = localB->Gain1_od * localB->Sum_lt[2];

        /* Sum: '<S106>/Sum' */
        localB->Sum_f = (localB->Product4_o + localB->Product8_pj) +
          localB->Product5_k;

        /* Product: '<S107>/Product' */
        localB->Product_oj = localB->Product1_kk * localB->Product3_e1;

        /* Product: '<S107>/Product1' */
        localB->Product1_gk = localB->Product_c * localB->Product2_p;

        /* Sum: '<S107>/Sum1' */
        localB->Sum1_jw = localB->Product_oj + localB->Product1_gk;

        /* Gain: '<S107>/Gain' */
        localB->Gain_n2 = 2.0 * localB->Sum1_jw;

        /* Product: '<S107>/Product4' */
        localB->Product4_nv = localB->Sum_lt[0] * localB->Gain_n2;

        /* Product: '<S107>/Product2' */
        localB->Product2_pb = localB->Product_c * localB->Product1_kk;

        /* Product: '<S107>/Product3' */
        localB->Product3_hy = localB->Product2_p * localB->Product3_e1;

        /* Sum: '<S107>/Sum2' */
        localB->Sum2_h = localB->Product3_hy - localB->Product2_pb;

        /* Gain: '<S107>/Gain1' */
        localB->Gain1_b = 2.0 * localB->Sum2_h;

        /* Product: '<S107>/Product5' */
        localB->Product5_bm = localB->Gain1_b * localB->Sum_lt[1];

        /* Product: '<S107>/Product6' */
        localB->Product6_pq = localB->Product1_kk * localB->Product1_kk;

        /* Product: '<S107>/Product7' */
        localB->Product7_f = localB->Product2_p * localB->Product2_p;

        /* Sum: '<S107>/Sum3' incorporates:
         *  Constant: '<S107>/Constant'
         */
        localB->Sum3_h = (0.5 - localB->Product6_pq) - localB->Product7_f;

        /* Gain: '<S107>/Gain2' */
        localB->Gain2_g5 = 2.0 * localB->Sum3_h;

        /* Product: '<S107>/Product8' */
        localB->Product8_k = localB->Gain2_g5 * localB->Sum_lt[2];

        /* Sum: '<S107>/Sum' */
        localB->Sum_a = (localB->Product4_nv + localB->Product5_bm) +
          localB->Product8_k;

        /* SignalConversion generated from: '<S126>/Dot Product2' */
        localB->TmpSignalConversionAtDotProdu_p[0] = localB->Sum_jg;
        localB->TmpSignalConversionAtDotProdu_p[1] = localB->Sum_f;
        localB->TmpSignalConversionAtDotProdu_p[2] = localB->Sum_a;

        /* DotProduct: '<S126>/Dot Product3' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_h[0];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_p[0];
        tmpForInput_idx_2 = tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S126>/Dot Product1' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_h[0];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_h[0];
        tmpForInput = tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S126>/Dot Product2' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_p[0];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_p[0];
        tmpForInput_0 = tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S126>/Dot Product3' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_h[1];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_p[1];
        tmpForInput_idx_2 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S126>/Dot Product1' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_h[1];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_h[1];
        tmpForInput += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S126>/Dot Product2' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_p[1];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_p[1];
        tmpForInput_0 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S126>/Dot Product3' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_h[2];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_p[2];
        tmpForInput_idx_2 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S126>/Dot Product1' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_h[2];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_h[2];
        tmpForInput += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S126>/Dot Product2' */
        tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_p[2];
        tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_p[2];
        tmpForInput_0 += tmpForInput_idx_0 * tmpForInput_idx_1;

        /* DotProduct: '<S126>/Dot Product3' */
        localB->DotProduct3_e = tmpForInput_idx_2;

        /* DotProduct: '<S126>/Dot Product1' */
        localB->DotProduct1_m = tmpForInput;

        /* DotProduct: '<S126>/Dot Product2' */
        localB->DotProduct2_a = tmpForInput_0;

        /* Product: '<S126>/Divide1' */
        localB->Divide1_k5 = localB->DotProduct1_m * localB->DotProduct2_a;

        /* Sqrt: '<S126>/Sqrt3' */
        localB->Sqrt3_ar = sqrt(localB->Divide1_k5);

        /* Product: '<S126>/Divide' */
        localB->Divide_e = localB->DotProduct3_e / localB->Sqrt3_ar;

        /* Bias: '<S126>/Bias' */
        localB->Bias_p = localB->Divide_e + -1.0;

        /* Abs: '<S126>/Abs' */
        localB->Abs_g = fabs(localB->Bias_p);

        /* Bias: '<S126>/Bias1' */
        localB->Bias1_k = localB->Divide_e + 1.0;

        /* Abs: '<S126>/Abs1' */
        localB->Abs1_o = fabs(localB->Bias1_k);

        /* If: '<S126>/If' */
        if (localB->Abs_g < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S126>/If Action Subsystem' incorporates:
           *  ActionPort: '<S132>/Action Port'
           */
          asbCubeSatACS_IfActionSubsystem(&localB->Merge_l);

          /* End of Outputs for SubSystem: '<S126>/If Action Subsystem' */
        } else if (localB->Abs1_o < 1.0E-6) {
          /* Outputs for IfAction SubSystem: '<S126>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S133>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem1(&localB->Merge_l);

          /* End of Outputs for SubSystem: '<S126>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S126>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S134>/Action Port'
           */
          asbCubeSat_IfActionSubsystem2_p(&localB->Merge_l);

          /* End of Outputs for SubSystem: '<S126>/If Action Subsystem2' */
        }

        /* Switch: '<S73>/Switch' */
        if (localB->OR) {
          /* Switch: '<S73>/Switch' */
          localB->Switch[0] = localB->Product_pt;
          localB->Switch[1] = localB->Product1_hz;
          localB->Switch[2] = localB->Product2_ki;
          localB->Switch[3] = localB->Product3_n;
        } else {
          /* RelationalOperator: '<S127>/Compare' incorporates:
           *  Constant: '<S127>/Constant'
           */
          localB->Compare_a = (localB->Merge_l != -1.0);

          /* Switch: '<S85>/is 180deg Rot' */
          if (localB->Compare_a) {
            /* Product: '<S131>/j x i' */
            localB->jxi_k = localB->Sum_n1 * localB->Sum_jg;

            /* Product: '<S131>/i x k' */
            localB->ixk_k = localB->Sum_l * localB->Sum_a;

            /* Product: '<S131>/k x j' */
            localB->kxj_jo = localB->Sum_dy * localB->Sum_f;

            /* Product: '<S130>/i x j' */
            localB->ixj_em = localB->Sum_l * localB->Sum_f;

            /* Product: '<S130>/k x i' */
            localB->kxi_a = localB->Sum_dy * localB->Sum_jg;

            /* Product: '<S130>/j x k' */
            localB->jxk_l = localB->Sum_n1 * localB->Sum_a;

            /* Sum: '<S125>/Sum' */
            localB->Sum_jn[0] = localB->jxk_l - localB->kxj_jo;
            localB->Sum_jn[1] = localB->kxi_a - localB->ixk_k;
            localB->Sum_jn[2] = localB->ixj_em - localB->jxi_k;

            /* Switch: '<S85>/is 180deg Rot' */
            localB->is180degRot_o[0] = localB->Sum_jn[0];
            localB->is180degRot_o[1] = localB->Sum_jn[1];
            localB->is180degRot_o[2] = localB->Sum_jn[2];
          } else {
            /* RelationalOperator: '<S128>/x>z' */
            localB->xz = (localB->Sum_l > localB->Sum_dy);

            /* Switch: '<S128>/Switch3' */
            if (localB->xz) {
              /* Gain: '<S128>/Gain' */
              localB->Gain_c = -localB->Sum_n1;

              /* Switch: '<S128>/Switch3' incorporates:
               *  Constant: '<S128>/Constant'
               */
              localB->Switch3[0] = localB->Gain_c;
              localB->Switch3[1] = localB->Sum_l;
              localB->Switch3[2] = 0.0;
            } else {
              /* Gain: '<S128>/Gain2' */
              localB->Gain2_ax = -localB->Sum_dy;

              /* Switch: '<S128>/Switch3' incorporates:
               *  Constant: '<S128>/Constant1'
               */
              localB->Switch3[0] = 0.0;
              localB->Switch3[1] = localB->Gain2_ax;
              localB->Switch3[2] = localB->Sum_n1;
            }

            /* Product: '<S137>/j x i' */
            localB->jxi_o = localB->Sum_n1 * localB->Switch3[0];

            /* Product: '<S137>/i x k' */
            localB->ixk_d = localB->Sum_l * localB->Switch3[2];

            /* Product: '<S137>/k x j' */
            localB->kxj_p = localB->Sum_dy * localB->Switch3[1];

            /* Product: '<S136>/i x j' */
            localB->ixj_o = localB->Sum_l * localB->Switch3[1];

            /* Product: '<S136>/k x i' */
            localB->kxi_g = localB->Sum_dy * localB->Switch3[0];

            /* Product: '<S136>/j x k' */
            localB->jxk_a = localB->Sum_n1 * localB->Switch3[2];

            /* Sum: '<S135>/Sum' */
            localB->Sum_fq[0] = localB->jxk_a - localB->kxj_p;
            localB->Sum_fq[1] = localB->kxi_g - localB->ixk_d;
            localB->Sum_fq[2] = localB->ixj_o - localB->jxi_o;

            /* Switch: '<S85>/is 180deg Rot' */
            localB->is180degRot_o[0] = localB->Sum_fq[0];
            localB->is180degRot_o[1] = localB->Sum_fq[1];
            localB->is180degRot_o[2] = localB->Sum_fq[2];
          }

          /* Product: '<S139>/Product3' */
          localB->Product3_k0 = localB->is180degRot_o[2] * localB->
            is180degRot_o[2];

          /* Product: '<S139>/Product2' */
          localB->Product2_b = localB->is180degRot_o[1] * localB->is180degRot_o
            [1];

          /* Product: '<S139>/Product1' */
          localB->Product1_l2 = localB->is180degRot_o[0] * localB->
            is180degRot_o[0];

          /* DotProduct: '<S85>/Dot Product2' */
          tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_p[0];
          tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_p[0];
          tmpForInput_idx_2 = tmpForInput_idx_0 * tmpForInput_idx_1;

          /* DotProduct: '<S85>/Dot Product1' */
          tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_h[0];
          tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_h[0];
          tmpForInput = tmpForInput_idx_0 * tmpForInput_idx_1;

          /* DotProduct: '<S85>/Dot Product3' */
          tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_h[0];
          tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_p[0];
          tmpForInput_0 = tmpForInput_idx_0 * tmpForInput_idx_1;

          /* DotProduct: '<S85>/Dot Product2' */
          tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_p[1];
          tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_p[1];
          tmpForInput_idx_2 += tmpForInput_idx_0 * tmpForInput_idx_1;

          /* DotProduct: '<S85>/Dot Product1' */
          tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_h[1];
          tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_h[1];
          tmpForInput += tmpForInput_idx_0 * tmpForInput_idx_1;

          /* DotProduct: '<S85>/Dot Product3' */
          tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_h[1];
          tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_p[1];
          tmpForInput_0 += tmpForInput_idx_0 * tmpForInput_idx_1;

          /* DotProduct: '<S85>/Dot Product2' */
          tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_p[2];
          tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_p[2];
          tmpForInput_idx_2 += tmpForInput_idx_0 * tmpForInput_idx_1;

          /* DotProduct: '<S85>/Dot Product1' */
          tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_h[2];
          tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_h[2];
          tmpForInput += tmpForInput_idx_0 * tmpForInput_idx_1;

          /* DotProduct: '<S85>/Dot Product3' */
          tmpForInput_idx_0 = localB->TmpSignalConversionAtDotProdu_h[2];
          tmpForInput_idx_1 = localB->TmpSignalConversionAtDotProdu_p[2];
          tmpForInput_0 += tmpForInput_idx_0 * tmpForInput_idx_1;

          /* DotProduct: '<S85>/Dot Product2' */
          localB->DotProduct2_i = tmpForInput_idx_2;

          /* DotProduct: '<S85>/Dot Product1' */
          localB->DotProduct1_e = tmpForInput;

          /* Product: '<S85>/Divide1' */
          localB->Divide1_c = localB->DotProduct1_e * localB->DotProduct2_i;

          /* Sqrt: '<S85>/Sqrt3' */
          localB->Sqrt3_h = sqrt(localB->Divide1_c);

          /* DotProduct: '<S85>/Dot Product3' */
          localB->DotProduct3_pm = tmpForInput_0;

          /* Sum: '<S85>/Add2' */
          localB->Add2_h = localB->DotProduct3_pm + localB->Sqrt3_h;

          /* Product: '<S139>/Product' */
          localB->Product_ly = localB->Add2_h * localB->Add2_h;

          /* Sum: '<S139>/Sum' */
          localB->Sum_m = ((localB->Product_ly + localB->Product1_l2) +
                           localB->Product2_b) + localB->Product3_k0;

          /* Sqrt: '<S138>/sqrt' */
          localB->sqrt_e = sqrt(localB->Sum_m);

          /* Product: '<S129>/Product3' */
          localB->Product3_jr = localB->is180degRot_o[2] / localB->sqrt_e;

          /* Product: '<S94>/Product3' */
          localB->Product3_e4 = localB->Product3_n * localB->Product3_jr;

          /* Product: '<S129>/Product2' */
          localB->Product2_ky = localB->is180degRot_o[1] / localB->sqrt_e;

          /* Product: '<S94>/Product2' */
          localB->Product2_hy = localB->Product2_ki * localB->Product2_ky;

          /* Product: '<S129>/Product1' */
          localB->Product1_oh = localB->is180degRot_o[0] / localB->sqrt_e;

          /* Product: '<S94>/Product1' */
          localB->Product1_c = localB->Product1_hz * localB->Product1_oh;

          /* Product: '<S129>/Product' */
          localB->Product_lj = localB->Add2_h / localB->sqrt_e;

          /* Product: '<S94>/Product' */
          localB->Product_oe = localB->Product_pt * localB->Product_lj;

          /* Sum: '<S94>/Sum' */
          localB->Sum_c = ((localB->Product_oe - localB->Product1_c) -
                           localB->Product2_hy) - localB->Product3_e4;

          /* Product: '<S95>/Product3' */
          localB->Product3_np = localB->Product3_n * localB->Product2_ky;

          /* Product: '<S95>/Product2' */
          localB->Product2_i = localB->Product2_ki * localB->Product3_jr;

          /* Product: '<S95>/Product1' */
          localB->Product1_hs = localB->Product1_hz * localB->Product_lj;

          /* Product: '<S95>/Product' */
          localB->Product_cw = localB->Product_pt * localB->Product1_oh;

          /* Sum: '<S95>/Sum' */
          localB->Sum_a1 = ((localB->Product_cw + localB->Product1_hs) +
                            localB->Product2_i) - localB->Product3_np;

          /* Product: '<S96>/Product3' */
          localB->Product3_ep = localB->Product3_n * localB->Product1_oh;

          /* Product: '<S96>/Product2' */
          localB->Product2_b4 = localB->Product2_ki * localB->Product_lj;

          /* Product: '<S96>/Product1' */
          localB->Product1_mo = localB->Product1_hz * localB->Product3_jr;

          /* Product: '<S96>/Product' */
          localB->Product_lt = localB->Product_pt * localB->Product2_ky;

          /* Sum: '<S96>/Sum' */
          localB->Sum_b = ((localB->Product_lt - localB->Product1_mo) +
                           localB->Product2_b4) + localB->Product3_ep;

          /* Product: '<S97>/Product3' */
          localB->Product3_ct = localB->Product3_n * localB->Product_lj;

          /* Product: '<S97>/Product2' */
          localB->Product2_bs = localB->Product2_ki * localB->Product1_oh;

          /* Product: '<S97>/Product1' */
          localB->Product1_al = localB->Product1_hz * localB->Product2_ky;

          /* Product: '<S97>/Product' */
          localB->Product_a = localB->Product_pt * localB->Product3_jr;

          /* Sum: '<S97>/Sum' */
          localB->Sum_hf = ((localB->Product_a + localB->Product1_al) -
                            localB->Product2_bs) + localB->Product3_ct;

          /* Switch: '<S73>/Switch' */
          localB->Switch[0] = localB->Sum_c;
          localB->Switch[1] = localB->Sum_a1;
          localB->Switch[2] = localB->Sum_b;
          localB->Switch[3] = localB->Sum_hf;
        }

        /* Product: '<S171>/Product' */
        localB->Product_do = localB->Switch[0] * localB->Switch[0];

        /* Product: '<S171>/Product1' */
        localB->Product1_h4 = localB->Switch[1] * localB->Switch[1];

        /* Product: '<S171>/Product2' */
        localB->Product2_po = localB->Switch[2] * localB->Switch[2];

        /* Product: '<S171>/Product3' */
        localB->Product3_pz = localB->Switch[3] * localB->Switch[3];

        /* Sum: '<S171>/Sum' */
        localB->Sum_aq = ((localB->Product_do + localB->Product1_h4) +
                          localB->Product2_po) + localB->Product3_pz;

        /* Sqrt: '<S170>/sqrt' */
        localB->sqrt_k = sqrt(localB->Sum_aq);

        /* Product: '<S165>/Product' */
        localB->Product_mw = localB->Switch[0] / localB->sqrt_k;

        /* Product: '<S165>/Product1' */
        localB->Product1_lc = localB->Switch[1] / localB->sqrt_k;

        /* Product: '<S165>/Product2' */
        localB->Product2_el = localB->Switch[2] / localB->sqrt_k;

        /* Product: '<S165>/Product3' */
        localB->Product3_e12 = localB->Switch[3] / localB->sqrt_k;

        /* Fcn: '<S76>/fcn3' */
        localB->fcn3 = (localB->Product1_lc * localB->Product3_e12 +
                        localB->Product_mw * localB->Product2_el) * 2.0;

        /* If: '<S166>/If' */
        if (localB->fcn3 > 1.0) {
          /* Outputs for IfAction SubSystem: '<S166>/If Action Subsystem' incorporates:
           *  ActionPort: '<S167>/Action Port'
           */
          /* Merge: '<S166>/Merge' incorporates:
           *  Constant: '<S167>/Constant'
           */
          localB->Merge_j = 1.0;

          /* End of Outputs for SubSystem: '<S166>/If Action Subsystem' */
        } else if (localB->fcn3 < -1.0) {
          /* Outputs for IfAction SubSystem: '<S166>/If Action Subsystem1' incorporates:
           *  ActionPort: '<S168>/Action Port'
           */
          /* Merge: '<S166>/Merge' incorporates:
           *  Constant: '<S168>/Constant'
           */
          localB->Merge_j = 1.0;

          /* End of Outputs for SubSystem: '<S166>/If Action Subsystem1' */
        } else {
          /* Outputs for IfAction SubSystem: '<S166>/If Action Subsystem2' incorporates:
           *  ActionPort: '<S169>/Action Port'
           */
          asbCubeSatAC_IfActionSubsystem2(localB->fcn3, &localB->Merge_j);

          /* End of Outputs for SubSystem: '<S166>/If Action Subsystem2' */
        }

        /* Fcn: '<S76>/fcn1' */
        localB->fcn1 = (localB->Product2_el * localB->Product3_e12 -
                        localB->Product_mw * localB->Product1_lc) * -2.0;

        /* Fcn: '<S76>/fcn2' */
        localB->fcn2 = ((localB->Product_mw * localB->Product_mw -
                         localB->Product1_lc * localB->Product1_lc) -
                        localB->Product2_el * localB->Product2_el) +
          localB->Product3_e12 * localB->Product3_e12;

        /* Trigonometry: '<S164>/Trigonometric Function1' */
        localB->PointingCmd[0] = rt_atan2d_snf(localB->fcn1, localB->fcn2);

        /* Fcn: '<S76>/fcn4' */
        localB->fcn4 = (localB->Product1_lc * localB->Product2_el -
                        localB->Product_mw * localB->Product3_e12) * -2.0;

        /* Fcn: '<S76>/fcn5' */
        localB->fcn5 = ((localB->Product_mw * localB->Product_mw +
                         localB->Product1_lc * localB->Product1_lc) -
                        localB->Product2_el * localB->Product2_el) -
          localB->Product3_e12 * localB->Product3_e12;

        /* Trigonometry: '<S164>/Trigonometric Function3' */
        localB->PointingCmd[2] = rt_atan2d_snf(localB->fcn4, localB->fcn5);

        /* Trigonometry: '<S164>/trigFcn' */
        tmpForInput_idx_0 = localB->Merge_j;
        if (tmpForInput_idx_0 > 1.0) {
          tmpForInput_idx_0 = 1.0;
        } else if (tmpForInput_idx_0 < -1.0) {
          tmpForInput_idx_0 = -1.0;
        }

        localB->PointingCmd[1] = asin(tmpForInput_idx_0);
      }
      break;
    }
  }

  /* End of Chart: '<S1>/Pointing Mode Selection' */

  /* BusCreator generated from: '<Root>/Bus Creator' */
  rty_ACSOut->AttitudeError.Roll = localB->PointingCmd[0];
  rty_ACSOut->AttitudeError.Pitch = localB->PointingCmd[1];
  rty_ACSOut->AttitudeError.Yaw = localB->PointingCmd[2];

  /* BusCreator: '<Root>/Bus Creator' */
  rty_ACSOut->NavMode = *rtu_AttitudeMode;

  /* Gain: '<S210>/Proportional Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  localB->ProportionalGain[0] = 1.0E-5 * localB->PointingCmd[0];

  /* DiscreteIntegrator: '<S205>/Integrator' */
  localB->Integrator[0] = localDW->Integrator_DSTATE[0];

  /* Gain: '<S197>/Derivative Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  localB->DerivativeGain[0] = 0.01 * localB->PointingCmd[0];

  /* SampleTimeMath: '<S200>/Tsamp' incorporates:
   *  Gain: '<S197>/Derivative Gain'
   *
   * About '<S200>/Tsamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  localB->Tsamp[0] = localB->DerivativeGain[0];

  /* Delay: '<S198>/UD' */
  localB->UD[0] = localDW->UD_DSTATE[0];

  /* Sum: '<S198>/Diff' incorporates:
   *  Delay: '<S198>/UD'
   *  SampleTimeMath: '<S200>/Tsamp'
   *
   * About '<S200>/Tsamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  localB->Diff[0] = localB->Tsamp[0] - localB->UD[0];

  /* Sum: '<S214>/Sum' incorporates:
   *  DiscreteIntegrator: '<S205>/Integrator'
   *  Gain: '<S210>/Proportional Gain'
   *  Sum: '<S198>/Diff'
   */
  localB->Sum[0] = (localB->ProportionalGain[0] + localB->Integrator[0]) +
    localB->Diff[0];

  /* BusCreator: '<Root>/Bus Creator' */
  rty_ACSOut->TorqueCmds[0] = localB->Sum[0];

  /* Gain: '<S202>/Integral Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  localB->IntegralGain[0] = 1.0E-10 * localB->PointingCmd[0];

  /* Gain: '<S210>/Proportional Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  localB->ProportionalGain[1] = 1.0E-5 * localB->PointingCmd[1];

  /* DiscreteIntegrator: '<S205>/Integrator' */
  localB->Integrator[1] = localDW->Integrator_DSTATE[1];

  /* Gain: '<S197>/Derivative Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  localB->DerivativeGain[1] = 0.01 * localB->PointingCmd[1];

  /* SampleTimeMath: '<S200>/Tsamp' incorporates:
   *  Gain: '<S197>/Derivative Gain'
   *
   * About '<S200>/Tsamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  localB->Tsamp[1] = localB->DerivativeGain[1];

  /* Delay: '<S198>/UD' */
  localB->UD[1] = localDW->UD_DSTATE[1];

  /* Sum: '<S198>/Diff' incorporates:
   *  Delay: '<S198>/UD'
   *  SampleTimeMath: '<S200>/Tsamp'
   *
   * About '<S200>/Tsamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  localB->Diff[1] = localB->Tsamp[1] - localB->UD[1];

  /* Sum: '<S214>/Sum' incorporates:
   *  DiscreteIntegrator: '<S205>/Integrator'
   *  Gain: '<S210>/Proportional Gain'
   *  Sum: '<S198>/Diff'
   */
  localB->Sum[1] = (localB->ProportionalGain[1] + localB->Integrator[1]) +
    localB->Diff[1];

  /* BusCreator: '<Root>/Bus Creator' */
  rty_ACSOut->TorqueCmds[1] = localB->Sum[1];

  /* Gain: '<S202>/Integral Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  localB->IntegralGain[1] = 1.0E-10 * localB->PointingCmd[1];

  /* Gain: '<S210>/Proportional Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  localB->ProportionalGain[2] = 1.0E-5 * localB->PointingCmd[2];

  /* DiscreteIntegrator: '<S205>/Integrator' */
  localB->Integrator[2] = localDW->Integrator_DSTATE[2];

  /* Gain: '<S197>/Derivative Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  localB->DerivativeGain[2] = 0.01 * localB->PointingCmd[2];

  /* SampleTimeMath: '<S200>/Tsamp' incorporates:
   *  Gain: '<S197>/Derivative Gain'
   *
   * About '<S200>/Tsamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  localB->Tsamp[2] = localB->DerivativeGain[2];

  /* Delay: '<S198>/UD' */
  localB->UD[2] = localDW->UD_DSTATE[2];

  /* Sum: '<S198>/Diff' incorporates:
   *  Delay: '<S198>/UD'
   *  SampleTimeMath: '<S200>/Tsamp'
   *
   * About '<S200>/Tsamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  localB->Diff[2] = localB->Tsamp[2] - localB->UD[2];

  /* Sum: '<S214>/Sum' incorporates:
   *  DiscreteIntegrator: '<S205>/Integrator'
   *  Gain: '<S210>/Proportional Gain'
   *  Sum: '<S198>/Diff'
   */
  localB->Sum[2] = (localB->ProportionalGain[2] + localB->Integrator[2]) +
    localB->Diff[2];

  /* BusCreator: '<Root>/Bus Creator' */
  rty_ACSOut->TorqueCmds[2] = localB->Sum[2];

  /* Gain: '<S202>/Integral Gain' incorporates:
   *  Merge: '<S3>/ Merge '
   */
  localB->IntegralGain[2] = 1.0E-10 * localB->PointingCmd[2];
}

/* Update for referenced model: 'asbCubeSatACS' */
void asbCubeSatACS_Update(B_asbCubeSatACS_c_T *localB, DW_asbCubeSatACS_f_T
  *localDW)
{
  /* Update for DiscreteIntegrator: '<S205>/Integrator' incorporates:
   *  Gain: '<S202>/Integral Gain'
   */
  localDW->Integrator_DSTATE[0] += localB->IntegralGain[0];

  /* Update for Delay: '<S198>/UD' incorporates:
   *  SampleTimeMath: '<S200>/Tsamp'
   *
   * About '<S200>/Tsamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  localDW->UD_DSTATE[0] = localB->Tsamp[0];

  /* Update for DiscreteIntegrator: '<S205>/Integrator' incorporates:
   *  Gain: '<S202>/Integral Gain'
   */
  localDW->Integrator_DSTATE[1] += localB->IntegralGain[1];

  /* Update for Delay: '<S198>/UD' incorporates:
   *  SampleTimeMath: '<S200>/Tsamp'
   *
   * About '<S200>/Tsamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  localDW->UD_DSTATE[1] = localB->Tsamp[1];

  /* Update for DiscreteIntegrator: '<S205>/Integrator' incorporates:
   *  Gain: '<S202>/Integral Gain'
   */
  localDW->Integrator_DSTATE[2] += localB->IntegralGain[2];

  /* Update for Delay: '<S198>/UD' incorporates:
   *  SampleTimeMath: '<S200>/Tsamp'
   *
   * About '<S200>/Tsamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  localDW->UD_DSTATE[2] = localB->Tsamp[2];
}

/* Model initialize function */
void asbCubeSatACS_initialize(const char_T **rt_errorStatus,
  RT_MODEL_asbCubeSatACS_T *const asbCubeSatACS_M, B_asbCubeSatACS_c_T *localB,
  DW_asbCubeSatACS_f_T *localDW)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(asbCubeSatACS_M, rt_errorStatus);

  /* block I/O */
  (void) memset(((void *) localB), 0,
                sizeof(B_asbCubeSatACS_c_T));

  {
    int32_T i;
    for (i = 0; i < 9; i++) {
      localB->ORFtoECEF[i] = 0.0;
    }

    for (i = 0; i < 9; i++) {
      localB->ECEFtoORF[i] = 0.0;
    }

    for (i = 0; i < 9; i++) {
      localB->MathFunction[i] = 0.0;
    }

    for (i = 0; i < 9; i++) {
      localB->Product_mn[i] = 0.0;
    }

    for (i = 0; i < 9; i++) {
      localB->Bias1_e[i] = 0.0;
    }

    for (i = 0; i < 9; i++) {
      localB->Abs2[i] = 0.0;
    }

    localB->BusConversion_InsertedFor_Point = asbCubeSatACS_rtZStatesOutBus;
    localB->BusConversion_InsertedFor_Poi_e = asbCubeSatACS_rtZEnvBus;
    localB->ProportionalGain[0] = 0.0;
    localB->ProportionalGain[1] = 0.0;
    localB->ProportionalGain[2] = 0.0;
    localB->Integrator[0] = 0.0;
    localB->Integrator[1] = 0.0;
    localB->Integrator[2] = 0.0;
    localB->DerivativeGain[0] = 0.0;
    localB->DerivativeGain[1] = 0.0;
    localB->DerivativeGain[2] = 0.0;
    localB->Tsamp[0] = 0.0;
    localB->Tsamp[1] = 0.0;
    localB->Tsamp[2] = 0.0;
    localB->UD[0] = 0.0;
    localB->UD[1] = 0.0;
    localB->UD[2] = 0.0;
    localB->Diff[0] = 0.0;
    localB->Diff[1] = 0.0;
    localB->Diff[2] = 0.0;
    localB->Sum[0] = 0.0;
    localB->Sum[1] = 0.0;
    localB->Sum[2] = 0.0;
    localB->IntegralGain[0] = 0.0;
    localB->IntegralGain[1] = 0.0;
    localB->IntegralGain[2] = 0.0;
    localB->ControlMode = 0.0;
    localB->PointingCmd[0] = 0.0;
    localB->PointingCmd[1] = 0.0;
    localB->PointingCmd[2] = 0.0;
    localB->Merge = 0.0;
    localB->Product = 0.0;
    localB->Product1 = 0.0;
    localB->Product2 = 0.0;
    localB->Product3 = 0.0;
    localB->Sum_n = 0.0;
    localB->sqrt_o = 0.0;
    localB->Product2_f = 0.0;
    localB->Product6 = 0.0;
    localB->Product3_b = 0.0;
    localB->Product7 = 0.0;
    localB->Sum3 = 0.0;
    localB->Gain2 = 0.0;
    localB->Product8 = 0.0;
    localB->Product1_d = 0.0;
    localB->Product_m = 0.0;
    localB->Product_b = 0.0;
    localB->Product1_l = 0.0;
    localB->Sum1 = 0.0;
    localB->Gain = 0.0;
    localB->Product4 = 0.0;
    localB->Product2_e = 0.0;
    localB->Product3_i = 0.0;
    localB->Sum2 = 0.0;
    localB->Gain1 = 0.0;
    localB->Product5 = 0.0;
    localB->Sum_p = 0.0;
    localB->Product_l = 0.0;
    localB->Product1_g = 0.0;
    localB->Sum1_m = 0.0;
    localB->Gain_a = 0.0;
    localB->Product4_k = 0.0;
    localB->Product6_o = 0.0;
    localB->Product7_d = 0.0;
    localB->Sum3_g = 0.0;
    localB->Gain2_n = 0.0;
    localB->Product8_a = 0.0;
    localB->Product2_a = 0.0;
    localB->Product3_h = 0.0;
    localB->Sum2_o = 0.0;
    localB->Gain1_f = 0.0;
    localB->Product5_p = 0.0;
    localB->Sum_o = 0.0;
    localB->Product_p = 0.0;
    localB->Product1_dq = 0.0;
    localB->Sum1_j = 0.0;
    localB->Gain_j = 0.0;
    localB->Product4_g = 0.0;
    localB->Product2_l = 0.0;
    localB->Product3_g = 0.0;
    localB->Sum2_m = 0.0;
    localB->Gain1_o = 0.0;
    localB->Product5_b = 0.0;
    localB->Product6_c = 0.0;
    localB->Product7_g = 0.0;
    localB->Sum3_c = 0.0;
    localB->Gain2_a = 0.0;
    localB->Product8_m = 0.0;
    localB->Sum_j = 0.0;
    localB->TmpSignalConversionAtDotProduct[0] = 0.0;
    localB->TmpSignalConversionAtDotProduct[1] = 0.0;
    localB->TmpSignalConversionAtDotProduct[2] = 0.0;
    localB->Product_bp = 0.0;
    localB->Product1_f = 0.0;
    localB->Product2_j = 0.0;
    localB->Product3_d = 0.0;
    localB->Sum_h = 0.0;
    localB->sqrt_n = 0.0;
    localB->Product2_c = 0.0;
    localB->Product6_b = 0.0;
    localB->Product3_e = 0.0;
    localB->Product7_b = 0.0;
    localB->Sum3_j = 0.0;
    localB->Gain2_k = 0.0;
    localB->Product8_o = 0.0;
    localB->Product1_a = 0.0;
    localB->Product_n = 0.0;
    localB->Product_e = 0.0;
    localB->Product1_k = 0.0;
    localB->Sum1_n = 0.0;
    localB->Gain_m = 0.0;
    localB->Product4_p = 0.0;
    localB->Product2_h = 0.0;
    localB->Product3_m = 0.0;
    localB->Sum2_g = 0.0;
    localB->Gain1_p = 0.0;
    localB->Product5_f = 0.0;
    localB->Sum_oq = 0.0;
    localB->Product_g = 0.0;
    localB->Product1_af = 0.0;
    localB->Sum1_h = 0.0;
    localB->Gain_n = 0.0;
    localB->Product4_c = 0.0;
    localB->Product6_p = 0.0;
    localB->Product7_dp = 0.0;
    localB->Sum3_m = 0.0;
    localB->Gain2_h = 0.0;
    localB->Product8_p = 0.0;
    localB->Product2_k = 0.0;
    localB->Product3_c = 0.0;
    localB->Sum2_e = 0.0;
    localB->Gain1_c = 0.0;
    localB->Product5_i = 0.0;
    localB->Sum_i = 0.0;
    localB->Product_k = 0.0;
    localB->Product1_m = 0.0;
    localB->Sum1_l = 0.0;
    localB->Gain_k = 0.0;
    localB->Product4_i = 0.0;
    localB->Product2_m = 0.0;
    localB->Product3_p = 0.0;
    localB->Sum2_l = 0.0;
    localB->Gain1_g = 0.0;
    localB->Product5_d = 0.0;
    localB->Product6_i = 0.0;
    localB->Product7_bn = 0.0;
    localB->Sum3_g2 = 0.0;
    localB->Gain2_m = 0.0;
    localB->Product8_me = 0.0;
    localB->Sum_d = 0.0;
    localB->TmpSignalConversionAtDotProdu_j[0] = 0.0;
    localB->TmpSignalConversionAtDotProdu_j[1] = 0.0;
    localB->TmpSignalConversionAtDotProdu_j[2] = 0.0;
    localB->DotProduct3 = 0.0;
    localB->DotProduct1 = 0.0;
    localB->DotProduct2 = 0.0;
    localB->Divide1 = 0.0;
    localB->Sqrt3 = 0.0;
    localB->Divide = 0.0;
    localB->Bias = 0.0;
    localB->Abs = 0.0;
    localB->Bias1 = 0.0;
    localB->Abs1 = 0.0;
    localB->Merge_f = 0.0;
    localB->DotProduct3_o = 0.0;
    localB->DotProduct2_c = 0.0;
    localB->Divide1_o = 0.0;
    localB->Sqrt3_a = 0.0;
    localB->Add2 = 0.0;
    localB->Product_i = 0.0;
    localB->DotProduct3_p = 0.0;
    localB->DotProduct2_h = 0.0;
    localB->Divide1_k = 0.0;
    localB->Sqrt3_e = 0.0;
    localB->Divide_b = 0.0;
    localB->Bias_i = 0.0;
    localB->Abs_l = 0.0;
    localB->Bias1_f = 0.0;
    localB->Abs1_n = 0.0;
    localB->Merge_k = 0.0;
    localB->is180degRot[0] = 0.0;
    localB->is180degRot[1] = 0.0;
    localB->is180degRot[2] = 0.0;
    localB->Product1_h = 0.0;
    localB->Product2_o = 0.0;
    localB->Product3_hw = 0.0;
    localB->Sum_ph = 0.0;
    localB->sqrt_b = 0.0;
    localB->Product_pt = 0.0;
    localB->Product2_ki = 0.0;
    localB->Product_kc = 0.0;
    localB->Product1_hz = 0.0;
    localB->Product1_p = 0.0;
    localB->Product2_e0 = 0.0;
    localB->Product3_n = 0.0;
    localB->Product3_k = 0.0;
    localB->Sum_oi = 0.0;
    localB->sqrt_m = 0.0;
    localB->Product2_d = 0.0;
    localB->Product6_l = 0.0;
    localB->Product3_iw = 0.0;
    localB->Product7_o = 0.0;
    localB->Sum3_f = 0.0;
    localB->Gain2_g = 0.0;
    localB->Product8_d = 0.0;
    localB->Product1_pn = 0.0;
    localB->Product_o = 0.0;
    localB->Product_d = 0.0;
    localB->Product1_au = 0.0;
    localB->Sum1_c = 0.0;
    localB->Gain_al = 0.0;
    localB->Product4_pa = 0.0;
    localB->Product2_kz = 0.0;
    localB->Product3_o = 0.0;
    localB->Sum2_gt = 0.0;
    localB->Gain1_fw = 0.0;
    localB->Product5_d2 = 0.0;
    localB->Sum_l = 0.0;
    localB->Product_ii = 0.0;
    localB->Product1_kp = 0.0;
    localB->Sum1_hm = 0.0;
    localB->Gain_mk = 0.0;
    localB->Product4_pz = 0.0;
    localB->Product6_d = 0.0;
    localB->Product7_k = 0.0;
    localB->Sum3_jw = 0.0;
    localB->Gain2_hi = 0.0;
    localB->Product8_i = 0.0;
    localB->Product2_mm = 0.0;
    localB->Product3_k1 = 0.0;
    localB->Sum2_b = 0.0;
    localB->Gain1_j = 0.0;
    localB->Product5_f1 = 0.0;
    localB->Sum_n1 = 0.0;
    localB->Product_oa = 0.0;
    localB->Product1_o = 0.0;
    localB->Sum1_g = 0.0;
    localB->Gain_d = 0.0;
    localB->Product4_n = 0.0;
    localB->Product2_f0 = 0.0;
    localB->Product3_kx = 0.0;
    localB->Sum2_n = 0.0;
    localB->Gain1_h = 0.0;
    localB->Product5_g = 0.0;
    localB->Product6_d3 = 0.0;
    localB->Product7_p = 0.0;
    localB->Sum3_k = 0.0;
    localB->Gain2_n1 = 0.0;
    localB->Product8_h = 0.0;
    localB->Sum_dy = 0.0;
    localB->TmpSignalConversionAtDotProdu_h[0] = 0.0;
    localB->TmpSignalConversionAtDotProdu_h[1] = 0.0;
    localB->TmpSignalConversionAtDotProdu_h[2] = 0.0;
    localB->jxk = 0.0;
    localB->kxi = 0.0;
    localB->ixj = 0.0;
    localB->kxj = 0.0;
    localB->ixk = 0.0;
    localB->jxi = 0.0;
    localB->Sum_hz[0] = 0.0;
    localB->Sum_hz[1] = 0.0;
    localB->Sum_hz[2] = 0.0;
    localB->jxk_h = 0.0;
    localB->kxi_d = 0.0;
    localB->ixj_e = 0.0;
    localB->kxj_j = 0.0;
    localB->ixk_l = 0.0;
    localB->jxi_b = 0.0;
    localB->Sum_lt[0] = 0.0;
    localB->Sum_lt[1] = 0.0;
    localB->Sum_lt[2] = 0.0;
    localB->Product_f = 0.0;
    localB->Product1_gs = 0.0;
    localB->Product2_ah = 0.0;
    localB->Product3_ds = 0.0;
    localB->Sum_e = 0.0;
    localB->sqrt_g = 0.0;
    localB->Product2_p = 0.0;
    localB->Product6_l2 = 0.0;
    localB->Product3_e1 = 0.0;
    localB->Product7_a = 0.0;
    localB->Sum3_ky = 0.0;
    localB->Gain2_j = 0.0;
    localB->Product8_g = 0.0;
    localB->Product1_kk = 0.0;
    localB->Product_og = 0.0;
    localB->Product_c = 0.0;
    localB->Product1_as = 0.0;
    localB->Sum1_mw = 0.0;
    localB->Gain_kn = 0.0;
    localB->Product4_m = 0.0;
    localB->Product2_lw = 0.0;
    localB->Product3_mz = 0.0;
    localB->Sum2_np = 0.0;
    localB->Gain1_e = 0.0;
    localB->Product5_c = 0.0;
    localB->Sum_jg = 0.0;
    localB->Product_gv = 0.0;
    localB->Product1_j = 0.0;
    localB->Sum1_a = 0.0;
    localB->Gain_g = 0.0;
    localB->Product4_o = 0.0;
    localB->Product6_n = 0.0;
    localB->Product7_be = 0.0;
    localB->Sum3_kt = 0.0;
    localB->Gain2_f = 0.0;
    localB->Product8_pj = 0.0;
    localB->Product2_cy = 0.0;
    localB->Product3_j = 0.0;
    localB->Sum2_os = 0.0;
    localB->Gain1_od = 0.0;
    localB->Product5_k = 0.0;
    localB->Sum_f = 0.0;
    localB->Product_oj = 0.0;
    localB->Product1_gk = 0.0;
    localB->Sum1_jw = 0.0;
    localB->Gain_n2 = 0.0;
    localB->Product4_nv = 0.0;
    localB->Product2_pb = 0.0;
    localB->Product3_hy = 0.0;
    localB->Sum2_h = 0.0;
    localB->Gain1_b = 0.0;
    localB->Product5_bm = 0.0;
    localB->Product6_pq = 0.0;
    localB->Product7_f = 0.0;
    localB->Sum3_h = 0.0;
    localB->Gain2_g5 = 0.0;
    localB->Product8_k = 0.0;
    localB->Sum_a = 0.0;
    localB->TmpSignalConversionAtDotProdu_p[0] = 0.0;
    localB->TmpSignalConversionAtDotProdu_p[1] = 0.0;
    localB->TmpSignalConversionAtDotProdu_p[2] = 0.0;
    localB->DotProduct3_e = 0.0;
    localB->DotProduct1_m = 0.0;
    localB->DotProduct2_a = 0.0;
    localB->Divide1_k5 = 0.0;
    localB->Sqrt3_ar = 0.0;
    localB->Divide_e = 0.0;
    localB->Bias_p = 0.0;
    localB->Abs_g = 0.0;
    localB->Bias1_k = 0.0;
    localB->Abs1_o = 0.0;
    localB->Merge_l = 0.0;
    localB->Switch[0] = 0.0;
    localB->Switch[1] = 0.0;
    localB->Switch[2] = 0.0;
    localB->Switch[3] = 0.0;
    localB->Product_do = 0.0;
    localB->Product1_h4 = 0.0;
    localB->Product2_po = 0.0;
    localB->Product3_pz = 0.0;
    localB->Sum_aq = 0.0;
    localB->sqrt_k = 0.0;
    localB->Product_mw = 0.0;
    localB->Product1_lc = 0.0;
    localB->Product2_el = 0.0;
    localB->Product3_e12 = 0.0;
    localB->fcn3 = 0.0;
    localB->Merge_j = 0.0;
    localB->fcn1 = 0.0;
    localB->fcn2 = 0.0;
    localB->fcn4 = 0.0;
    localB->fcn5 = 0.0;
    localB->is180degRot_o[0] = 0.0;
    localB->is180degRot_o[1] = 0.0;
    localB->is180degRot_o[2] = 0.0;
    localB->Product3_k0 = 0.0;
    localB->Product2_b = 0.0;
    localB->Product1_l2 = 0.0;
    localB->DotProduct2_i = 0.0;
    localB->DotProduct1_e = 0.0;
    localB->Divide1_c = 0.0;
    localB->Sqrt3_h = 0.0;
    localB->DotProduct3_pm = 0.0;
    localB->Add2_h = 0.0;
    localB->Product_ly = 0.0;
    localB->Sum_m = 0.0;
    localB->sqrt_e = 0.0;
    localB->Product3_jr = 0.0;
    localB->Product3_e4 = 0.0;
    localB->Product2_ky = 0.0;
    localB->Product2_hy = 0.0;
    localB->Product1_oh = 0.0;
    localB->Product1_c = 0.0;
    localB->Product_lj = 0.0;
    localB->Product_oe = 0.0;
    localB->Sum_c = 0.0;
    localB->Product3_np = 0.0;
    localB->Product2_i = 0.0;
    localB->Product1_hs = 0.0;
    localB->Product_cw = 0.0;
    localB->Sum_a1 = 0.0;
    localB->Product3_ep = 0.0;
    localB->Product2_b4 = 0.0;
    localB->Product1_mo = 0.0;
    localB->Product_lt = 0.0;
    localB->Sum_b = 0.0;
    localB->Product3_ct = 0.0;
    localB->Product2_bs = 0.0;
    localB->Product1_al = 0.0;
    localB->Product_a = 0.0;
    localB->Sum_hf = 0.0;
    localB->Switch3[0] = 0.0;
    localB->Switch3[1] = 0.0;
    localB->Switch3[2] = 0.0;
    localB->jxi_o = 0.0;
    localB->ixk_d = 0.0;
    localB->kxj_p = 0.0;
    localB->ixj_o = 0.0;
    localB->kxi_g = 0.0;
    localB->jxk_a = 0.0;
    localB->Sum_fq[0] = 0.0;
    localB->Sum_fq[1] = 0.0;
    localB->Sum_fq[2] = 0.0;
    localB->Gain2_ax = 0.0;
    localB->Gain_c = 0.0;
    localB->jxi_k = 0.0;
    localB->ixk_k = 0.0;
    localB->kxj_jo = 0.0;
    localB->ixj_em = 0.0;
    localB->kxi_a = 0.0;
    localB->jxk_l = 0.0;
    localB->Sum_jn[0] = 0.0;
    localB->Sum_jn[1] = 0.0;
    localB->Sum_jn[2] = 0.0;
    localB->jxi_n = 0.0;
    localB->ixk_n = 0.0;
    localB->kxj_pe = 0.0;
    localB->ixj_l = 0.0;
    localB->kxi_b = 0.0;
    localB->jxk_e = 0.0;
    localB->Sum_fa[0] = 0.0;
    localB->Sum_fa[1] = 0.0;
    localB->Sum_fa[2] = 0.0;
    localB->jxk_n = 0.0;
    localB->kxi_p = 0.0;
    localB->ixj_k = 0.0;
    localB->kxj_n = 0.0;
    localB->ixk_kv = 0.0;
    localB->jxi_bb = 0.0;
    localB->Sum_ou[0] = 0.0;
    localB->Sum_ou[1] = 0.0;
    localB->Sum_ou[2] = 0.0;
    localB->zr[0] = 0.0;
    localB->zr[1] = 0.0;
    localB->zr[2] = 0.0;
    localB->ixj_i = 0.0;
    localB->jxk_i = 0.0;
    localB->kxi_o = 0.0;
    localB->ixk_g = 0.0;
    localB->jxi_ok = 0.0;
    localB->kxj_g = 0.0;
    localB->Sum_dv[0] = 0.0;
    localB->Sum_dv[1] = 0.0;
    localB->Sum_dv[2] = 0.0;
    localB->DotProduct = 0.0;
    localB->SumofElements = 0.0;
    localB->MathFunction1 = 0.0;
    localB->DotProduct_m = 0.0;
    localB->SumofElements_h = 0.0;
    localB->MathFunction1_n = 0.0;
    localB->DotProduct_b = 0.0;
    localB->SumofElements_g = 0.0;
    localB->MathFunction1_ni = 0.0;
    localB->Add = 0.0;
    localB->Merge_e[0] = 0.0;
    localB->Merge_e[1] = 0.0;
    localB->Merge_e[2] = 0.0;
    localB->Merge_e[3] = 0.0;
    localB->Product_ky = 0.0;
    localB->Product1_li = 0.0;
    localB->Product2_g = 0.0;
    localB->Product3_a = 0.0;
    localB->Sum_hk = 0.0;
    localB->Divide_j = 0.0;
    localB->UnaryMinus = 0.0;
    localB->Divide1_d = 0.0;
    localB->UnaryMinus1 = 0.0;
    localB->Divide2 = 0.0;
    localB->UnaryMinus2 = 0.0;
    localB->Divide3 = 0.0;
    localB->Product_pb = 0.0;
    localB->Product1_pg = 0.0;
    localB->Product2_mw = 0.0;
    localB->Product3_cd = 0.0;
    localB->Sum_fj = 0.0;
    localB->Product_la = 0.0;
    localB->Product1_p5 = 0.0;
    localB->Product2_jd = 0.0;
    localB->Product3_db = 0.0;
    localB->Sum_c3 = 0.0;
    localB->Product_nm = 0.0;
    localB->Product1_od = 0.0;
    localB->Product2_bn = 0.0;
    localB->Product3_gc = 0.0;
    localB->Sum_hn = 0.0;
    localB->Product_m0 = 0.0;
    localB->Product1_e = 0.0;
    localB->Product2_dz = 0.0;
    localB->Product3_ox = 0.0;
    localB->Sum_h4 = 0.0;
    localB->Product_mx = 0.0;
    localB->Product1_fz = 0.0;
    localB->Product2_p4 = 0.0;
    localB->Product3_kb = 0.0;
    localB->Sum_k = 0.0;
    localB->sqrt_j = 0.0;
    localB->Product_j = 0.0;
    localB->Product1_i = 0.0;
    localB->Product2_ev = 0.0;
    localB->Product3_f = 0.0;
    localB->fcn3_l = 0.0;
    localB->Merge_c = 0.0;
    localB->fcn1_l = 0.0;
    localB->fcn2_k = 0.0;
    localB->fcn4_e = 0.0;
    localB->fcn5_p = 0.0;
    localB->Product_f0 = 0.0;
    localB->Product1_ey = 0.0;
    localB->Product2_os = 0.0;
    localB->Product3_bo = 0.0;
    localB->Product4_i1 = 0.0;
    localB->Product5_pt = 0.0;
    localB->detMatrix = 0.0;
    localB->Bias_c = 0.0;
    localB->Abs1_ov = 0.0;
    localB->Add_d = 0.0;
    localB->sqrt_nk = 0.0;
    localB->Switch_f[0] = 0.0;
    localB->Switch_f[1] = 0.0;
    localB->Product_n4 = 0.0;
    localB->Add_de = 0.0;
    localB->Add_i = 0.0;
    localB->Add_m = 0.0;
    localB->Product_i2[0] = 0.0;
    localB->Product_i2[1] = 0.0;
    localB->Product_i2[2] = 0.0;
    localB->Add_h = 0.0;
    localB->sqrt_o2 = 0.0;
    localB->Add_b = 0.0;
    localB->Add_a = 0.0;
    localB->Add_p = 0.0;
    localB->Switch_o[0] = 0.0;
    localB->Switch_o[1] = 0.0;
    localB->Product_ph = 0.0;
    localB->Product_oee[0] = 0.0;
    localB->Product_oee[1] = 0.0;
    localB->Product_oee[2] = 0.0;
    localB->Add_hm = 0.0;
    localB->sqrt_p = 0.0;
    localB->Add_o = 0.0;
    localB->Add_f = 0.0;
    localB->Add_b4 = 0.0;
    localB->Switch_f1[0] = 0.0;
    localB->Switch_f1[1] = 0.0;
    localB->Product_jp = 0.0;
    localB->Product_oi[0] = 0.0;
    localB->Product_oi[1] = 0.0;
    localB->Product_oi[2] = 0.0;
    localB->Sum_dx = 0.0;
    localB->sqrt_be = 0.0;
    localB->Gain1_l = 0.0;
    localB->Add_i5 = 0.0;
    localB->Add_fn = 0.0;
    localB->Add_mp = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)localDW, 0,
                sizeof(DW_asbCubeSatACS_f_T));
  localDW->Integrator_DSTATE[0] = 0.0;
  localDW->Integrator_DSTATE[1] = 0.0;
  localDW->Integrator_DSTATE[2] = 0.0;
  localDW->UD_DSTATE[0] = 0.0;
  localDW->UD_DSTATE[1] = 0.0;
  localDW->UD_DSTATE[2] = 0.0;
}
