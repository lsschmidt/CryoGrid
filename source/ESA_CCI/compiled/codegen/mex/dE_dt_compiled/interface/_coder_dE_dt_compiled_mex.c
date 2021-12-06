/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_dE_dt_compiled_mex.c
 *
 * Code generation for function '_coder_dE_dt_compiled_mex'
 *
 */

/* Include files */
#include "_coder_dE_dt_compiled_mex.h"
#include "_coder_dE_dt_compiled_api.h"
#include "dE_dt_compiled_data.h"
#include "dE_dt_compiled_initialize.h"
#include "dE_dt_compiled_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void dE_dt_compiled_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
  const mxArray *prhs[4])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *outputs[1];
  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 4, 4,
                        14, "dE_dt_compiled");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 14,
                        "dE_dt_compiled");
  }

  /* Call the function. */
  dE_dt_compiled_api(prhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(&dE_dt_compiled_atexit);

  /* Module initialization. */
  dE_dt_compiled_initialize();

  /* Dispatch the entry-point. */
  dE_dt_compiled_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  dE_dt_compiled_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_dE_dt_compiled_mex.c) */
