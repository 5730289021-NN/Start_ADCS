/*
 * Code generation for system model 'start2R2'
 * For more details, see corresponding source file start2R2.c
 *
 */

#ifndef RTW_HEADER_start2R2_h_
#define RTW_HEADER_start2R2_h_
#ifndef start2R2_COMMON_INCLUDES_
#define start2R2_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* start2R2_COMMON_INCLUDES_ */

#include "start2R2_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Real-time Model Data Structure */
struct tag_RTM_start2R2_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_start2R2_T rtm;
} MdlrefDW_start2R2_T;

/* Model reference registration function */
extern void start2R2_initialize(const char_T **rt_errorStatus,
  RT_MODEL_start2R2_T *const start2R2_M);
extern void start2R2(const real_T rtu_Reference[3], real_T rty_RotatedReference
                     [3]);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'start2R2'
 */
#endif                                 /* RTW_HEADER_start2R2_h_ */
