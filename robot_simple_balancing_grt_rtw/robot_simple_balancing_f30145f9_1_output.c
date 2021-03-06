/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'robot_simple_balancing/Solver Configuration'.
 */

#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "robot_simple_balancing_f30145f9_1_geometries.h"

PmfMessageId robot_simple_balancing_f30145f9_1_output(const
  RuntimeDerivedValuesBundle *rtdv, const double *state, const int *modeVector,
  const double *input, const double *inputDot, const double *inputDdot, const
  double *discreteState, double *output, NeuDiagnosticManager *neDiagMgr)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  double xx[127];
  (void) rtdvd;
  (void) rtdvi;
  (void) modeVector;
  (void) inputDdot;
  (void) discreteState;
  (void) neDiagMgr;
  xx[0] = 0.5;
  xx[1] = xx[0] * input[3];
  xx[2] = cos(xx[1]);
  xx[3] = - state[3];
  xx[4] = - state[4];
  xx[5] = - state[5];
  xx[6] = - state[6];
  xx[7] = xx[0] * input[6];
  xx[8] = cos(xx[7]);
  xx[9] = xx[0] * input[5];
  xx[10] = cos(xx[9]);
  xx[11] = xx[0] * input[4];
  xx[12] = sin(xx[11]);
  xx[13] = xx[10] * xx[12];
  xx[14] = cos(xx[11]);
  xx[11] = sin(xx[9]);
  xx[9] = xx[14] * xx[11];
  xx[15] = sin(xx[7]);
  xx[7] = xx[8] * xx[13] + xx[9] * xx[15];
  xx[16] = xx[12] * xx[11];
  xx[11] = xx[14] * xx[10];
  xx[10] = xx[16] * xx[15] - xx[8] * xx[11];
  xx[12] = xx[8] * xx[16] + xx[11] * xx[15];
  xx[11] = xx[13] * xx[15] - xx[8] * xx[9];
  xx[16] = xx[7];
  xx[17] = xx[10];
  xx[18] = xx[12];
  xx[19] = xx[11];
  pm_math_Quaternion_compose_ra(xx + 3, xx + 16, xx + 20);
  xx[9] = sin(xx[1]);
  xx[1] = xx[2] * xx[20] + xx[22] * xx[9];
  xx[13] = xx[1] * xx[1];
  xx[14] = xx[2] * xx[21] - xx[23] * xx[9];
  xx[24] = 2.0;
  xx[25] = 1.0;
  xx[26] = xx[2] * xx[22] - xx[20] * xx[9];
  xx[27] = xx[14] * xx[26];
  xx[28] = xx[2] * xx[23] + xx[21] * xx[9];
  xx[29] = xx[1] * xx[28];
  xx[30] = xx[28] * xx[14];
  xx[31] = xx[1] * xx[26];
  xx[32] = xx[28] * xx[26];
  xx[33] = xx[1] * xx[14];
  xx[34] = xx[1];
  xx[35] = xx[14];
  xx[36] = xx[26];
  xx[37] = xx[28];
  xx[38] = state[10];
  xx[39] = state[11];
  xx[40] = state[12];
  pm_math_Quaternion_inverseXform_ra(xx + 16, xx + 38, xx + 41);
  xx[1] = (xx[25] - (xx[12] * xx[12] + xx[11] * xx[11]) * xx[24]) * inputDot[4]
    + xx[24] * xx[8] * xx[15] * inputDot[5];
  xx[8] = xx[41] + xx[1];
  xx[44] = xx[24] * (xx[12] * xx[10] - xx[7] * xx[11]) * inputDot[4] + (xx[25] -
    xx[24] * xx[15] * xx[15]) * inputDot[5];
  xx[15] = xx[42] + xx[44];
  xx[45] = xx[8];
  xx[46] = xx[15];
  xx[47] = xx[43] + xx[24] * (xx[7] * xx[12] + xx[11] * xx[10]) * inputDot[4] +
    inputDot[6];
  pm_math_Quaternion_xform_ra(xx + 34, xx + 45, xx + 41);
  xx[43] = 0.05;
  xx[45] = input[7] - xx[43];
  xx[46] = xx[45] * xx[22];
  xx[47] = xx[45] * xx[21];
  xx[48] = 0.3;
  xx[49] = xx[12] * xx[43];
  xx[50] = xx[43] * xx[10];
  xx[51] = 0.2;
  xx[52] = xx[48] - (xx[7] * xx[49] + xx[50] * xx[11]) * xx[24];
  xx[53] = - (xx[51] + xx[24] * (xx[49] * xx[11] - xx[7] * xx[50]));
  xx[54] = - (xx[43] - (xx[50] * xx[10] + xx[12] * xx[49]) * xx[24]);
  pm_math_Quaternion_xform_ra(xx + 3, xx + 52, xx + 10);
  xx[7] = (xx[20] * xx[46] + xx[23] * xx[47]) * xx[24] + xx[10] + state[0];
  xx[49] = state[2] + 0.8;
  xx[50] = xx[45] - (xx[21] * xx[47] + xx[22] * xx[46]) * xx[24] + xx[12] + xx
    [49];
  xx[21] = xx[50] * xx[9];
  xx[22] = xx[7] * xx[9];
  xx[55] = xx[7] - (xx[2] * xx[21] + xx[22] * xx[9]) * xx[24];
  xx[7] = xx[50] + xx[24] * (xx[2] * xx[22] - xx[21] * xx[9]);
  pm_math_Vector3_cross_ra(xx + 38, xx + 52, xx + 56);
  xx[52] = state[7];
  xx[53] = state[8];
  xx[54] = state[9];
  pm_math_Quaternion_inverseXform_ra(xx + 3, xx + 52, xx + 59);
  xx[52] = xx[56] + xx[59];
  xx[53] = xx[57] + xx[60];
  xx[54] = xx[58] + xx[61];
  pm_math_Quaternion_inverseXform_ra(xx + 16, xx + 52, xx + 56);
  xx[16] = xx[15] * xx[45] + xx[56] - xx[44] * xx[43];
  xx[17] = xx[57] + xx[1] * xx[43] - xx[8] * xx[45];
  xx[18] = xx[58] + inputDot[7];
  pm_math_Quaternion_xform_ra(xx + 34, xx + 16, xx + 52);
  xx[1] = xx[0] * input[10];
  xx[8] = cos(xx[1]);
  xx[10] = xx[0] * input[9];
  xx[12] = cos(xx[10]);
  xx[15] = xx[0] * input[8];
  xx[16] = sin(xx[15]);
  xx[17] = xx[12] * xx[16];
  xx[18] = cos(xx[15]);
  xx[15] = sin(xx[10]);
  xx[10] = xx[18] * xx[15];
  xx[19] = sin(xx[1]);
  xx[1] = xx[8] * xx[17] + xx[10] * xx[19];
  xx[21] = xx[16] * xx[15];
  xx[15] = xx[18] * xx[12];
  xx[12] = xx[21] * xx[19] - xx[8] * xx[15];
  xx[16] = xx[8] * xx[21] + xx[15] * xx[19];
  xx[15] = xx[17] * xx[19] - xx[8] * xx[10];
  xx[34] = xx[1];
  xx[35] = xx[12];
  xx[36] = xx[16];
  xx[37] = xx[15];
  pm_math_Quaternion_compose_ra(xx + 3, xx + 34, xx + 62);
  xx[10] = xx[2] * xx[62] + xx[64] * xx[9];
  xx[17] = xx[10] * xx[10];
  xx[18] = xx[2] * xx[63] - xx[65] * xx[9];
  xx[21] = xx[2] * xx[64] - xx[62] * xx[9];
  xx[22] = xx[18] * xx[21];
  xx[44] = xx[2] * xx[65] + xx[63] * xx[9];
  xx[45] = xx[10] * xx[44];
  xx[50] = xx[44] * xx[18];
  xx[56] = xx[10] * xx[21];
  xx[57] = xx[44] * xx[21];
  xx[58] = xx[10] * xx[18];
  xx[66] = xx[10];
  xx[67] = xx[18];
  xx[68] = xx[21];
  xx[69] = xx[44];
  pm_math_Quaternion_inverseXform_ra(xx + 34, xx + 38, xx + 70);
  xx[10] = (xx[25] - (xx[16] * xx[16] + xx[15] * xx[15]) * xx[24]) * inputDot[8]
    + xx[24] * xx[8] * xx[19] * inputDot[9];
  xx[8] = xx[70] + xx[10];
  xx[73] = xx[24] * (xx[16] * xx[12] - xx[1] * xx[15]) * inputDot[8] + (xx[25] -
    xx[24] * xx[19] * xx[19]) * inputDot[9];
  xx[19] = xx[71] + xx[73];
  xx[74] = xx[8];
  xx[75] = xx[19];
  xx[76] = xx[72] + xx[24] * (xx[1] * xx[16] + xx[15] * xx[12]) * inputDot[8] +
    inputDot[10];
  pm_math_Quaternion_xform_ra(xx + 66, xx + 74, xx + 70);
  xx[72] = input[11] - xx[43];
  xx[74] = xx[72] * xx[64];
  xx[75] = xx[72] * xx[63];
  xx[76] = xx[16] * xx[43];
  xx[77] = xx[43] * xx[12];
  xx[78] = xx[48] - (xx[1] * xx[76] + xx[77] * xx[15]) * xx[24];
  xx[79] = xx[51] - xx[24] * (xx[76] * xx[15] - xx[1] * xx[77]);
  xx[80] = - (xx[43] - (xx[77] * xx[12] + xx[16] * xx[76]) * xx[24]);
  pm_math_Quaternion_xform_ra(xx + 3, xx + 78, xx + 81);
  xx[1] = (xx[62] * xx[74] + xx[65] * xx[75]) * xx[24] + xx[81] + state[0];
  xx[12] = xx[72] - (xx[63] * xx[75] + xx[64] * xx[74]) * xx[24] + xx[83] + xx
    [49];
  xx[15] = xx[12] * xx[9];
  xx[16] = xx[1] * xx[9];
  xx[63] = xx[1] - (xx[2] * xx[15] + xx[16] * xx[9]) * xx[24];
  xx[1] = xx[12] + xx[24] * (xx[2] * xx[16] - xx[15] * xx[9]);
  pm_math_Vector3_cross_ra(xx + 38, xx + 78, xx + 83);
  xx[76] = xx[83] + xx[59];
  xx[77] = xx[84] + xx[60];
  xx[78] = xx[85] + xx[61];
  pm_math_Quaternion_inverseXform_ra(xx + 34, xx + 76, xx + 79);
  xx[34] = xx[19] * xx[72] + xx[79] - xx[73] * xx[43];
  xx[35] = xx[80] + xx[10] * xx[43] - xx[8] * xx[72];
  xx[36] = xx[81] + inputDot[11];
  pm_math_Quaternion_xform_ra(xx + 66, xx + 34, xx + 76);
  xx[8] = xx[0] * input[14];
  xx[10] = cos(xx[8]);
  xx[12] = xx[0] * input[13];
  xx[15] = cos(xx[12]);
  xx[16] = xx[0] * input[12];
  xx[19] = sin(xx[16]);
  xx[34] = xx[15] * xx[19];
  xx[35] = cos(xx[16]);
  xx[16] = sin(xx[12]);
  xx[12] = xx[35] * xx[16];
  xx[36] = sin(xx[8]);
  xx[8] = xx[10] * xx[34] + xx[12] * xx[36];
  xx[37] = xx[19] * xx[16];
  xx[16] = xx[35] * xx[15];
  xx[15] = xx[37] * xx[36] - xx[10] * xx[16];
  xx[19] = xx[10] * xx[37] + xx[16] * xx[36];
  xx[16] = xx[34] * xx[36] - xx[10] * xx[12];
  xx[66] = xx[8];
  xx[67] = xx[15];
  xx[68] = xx[19];
  xx[69] = xx[16];
  pm_math_Quaternion_compose_ra(xx + 3, xx + 66, xx + 83);
  xx[12] = xx[2] * xx[83] + xx[85] * xx[9];
  xx[34] = xx[12] * xx[12];
  xx[35] = xx[2] * xx[84] - xx[86] * xx[9];
  xx[37] = xx[2] * xx[85] - xx[83] * xx[9];
  xx[64] = xx[35] * xx[37];
  xx[72] = xx[2] * xx[86] + xx[84] * xx[9];
  xx[73] = xx[12] * xx[72];
  xx[79] = xx[72] * xx[35];
  xx[80] = xx[12] * xx[37];
  xx[81] = xx[72] * xx[37];
  xx[87] = xx[12] * xx[35];
  xx[88] = xx[12];
  xx[89] = xx[35];
  xx[90] = xx[37];
  xx[91] = xx[72];
  pm_math_Quaternion_inverseXform_ra(xx + 66, xx + 38, xx + 92);
  xx[12] = (xx[25] - (xx[19] * xx[19] + xx[16] * xx[16]) * xx[24]) * inputDot[12]
    + xx[24] * xx[10] * xx[36] * inputDot[13];
  xx[10] = xx[92] + xx[12];
  xx[95] = xx[24] * (xx[19] * xx[15] - xx[8] * xx[16]) * inputDot[12] + (xx[25]
    - xx[24] * xx[36] * xx[36]) * inputDot[13];
  xx[36] = xx[93] + xx[95];
  xx[96] = xx[10];
  xx[97] = xx[36];
  xx[98] = xx[94] + xx[24] * (xx[8] * xx[19] + xx[16] * xx[15]) * inputDot[12] +
    inputDot[14];
  pm_math_Quaternion_xform_ra(xx + 88, xx + 96, xx + 92);
  xx[94] = input[15] - xx[43];
  xx[96] = xx[94] * xx[85];
  xx[97] = xx[94] * xx[84];
  xx[98] = xx[19] * xx[43];
  xx[99] = xx[43] * xx[15];
  xx[100] = - (xx[48] + (xx[8] * xx[98] + xx[99] * xx[16]) * xx[24]);
  xx[101] = - (xx[51] + xx[24] * (xx[98] * xx[16] - xx[8] * xx[99]));
  xx[102] = - (xx[43] - (xx[99] * xx[15] + xx[19] * xx[98]) * xx[24]);
  pm_math_Quaternion_xform_ra(xx + 3, xx + 100, xx + 103);
  xx[8] = (xx[83] * xx[96] + xx[86] * xx[97]) * xx[24] + xx[103] + state[0];
  xx[15] = xx[94] - (xx[84] * xx[97] + xx[85] * xx[96]) * xx[24] + xx[105] + xx
    [49];
  xx[16] = xx[15] * xx[9];
  xx[19] = xx[8] * xx[9];
  xx[84] = xx[8] - (xx[2] * xx[16] + xx[19] * xx[9]) * xx[24];
  xx[8] = xx[15] + xx[24] * (xx[2] * xx[19] - xx[16] * xx[9]);
  pm_math_Vector3_cross_ra(xx + 38, xx + 100, xx + 105);
  xx[98] = xx[105] + xx[59];
  xx[99] = xx[106] + xx[60];
  xx[100] = xx[107] + xx[61];
  pm_math_Quaternion_inverseXform_ra(xx + 66, xx + 98, xx + 101);
  xx[66] = xx[36] * xx[94] + xx[101] - xx[95] * xx[43];
  xx[67] = xx[102] + xx[12] * xx[43] - xx[10] * xx[94];
  xx[68] = xx[103] + inputDot[15];
  pm_math_Quaternion_xform_ra(xx + 88, xx + 66, xx + 98);
  xx[10] = xx[0] * input[18];
  xx[12] = cos(xx[10]);
  xx[15] = xx[0] * input[17];
  xx[16] = cos(xx[15]);
  xx[19] = xx[0] * input[16];
  xx[0] = sin(xx[19]);
  xx[36] = xx[16] * xx[0];
  xx[66] = cos(xx[19]);
  xx[19] = sin(xx[15]);
  xx[15] = xx[66] * xx[19];
  xx[67] = sin(xx[10]);
  xx[10] = xx[12] * xx[36] + xx[15] * xx[67];
  xx[68] = xx[0] * xx[19];
  xx[0] = xx[66] * xx[16];
  xx[16] = xx[68] * xx[67] - xx[12] * xx[0];
  xx[19] = xx[12] * xx[68] + xx[0] * xx[67];
  xx[0] = xx[36] * xx[67] - xx[12] * xx[15];
  xx[88] = xx[10];
  xx[89] = xx[16];
  xx[90] = xx[19];
  xx[91] = xx[0];
  pm_math_Quaternion_compose_ra(xx + 3, xx + 88, xx + 105);
  xx[15] = xx[2] * xx[105] + xx[107] * xx[9];
  xx[36] = xx[15] * xx[15];
  xx[66] = xx[2] * xx[106] - xx[108] * xx[9];
  xx[68] = xx[2] * xx[107] - xx[105] * xx[9];
  xx[69] = xx[66] * xx[68];
  xx[85] = xx[2] * xx[108] + xx[106] * xx[9];
  xx[94] = xx[15] * xx[85];
  xx[95] = xx[85] * xx[66];
  xx[101] = xx[15] * xx[68];
  xx[102] = xx[85] * xx[68];
  xx[103] = xx[15] * xx[66];
  xx[109] = xx[15];
  xx[110] = xx[66];
  xx[111] = xx[68];
  xx[112] = xx[85];
  pm_math_Quaternion_inverseXform_ra(xx + 88, xx + 38, xx + 113);
  xx[15] = (xx[25] - (xx[19] * xx[19] + xx[0] * xx[0]) * xx[24]) * inputDot[16]
    + xx[24] * xx[12] * xx[67] * inputDot[17];
  xx[12] = xx[113] + xx[15];
  xx[116] = xx[24] * (xx[19] * xx[16] - xx[10] * xx[0]) * inputDot[16] + (xx[25]
    - xx[24] * xx[67] * xx[67]) * inputDot[17];
  xx[67] = xx[114] + xx[116];
  xx[117] = xx[12];
  xx[118] = xx[67];
  xx[119] = xx[115] + xx[24] * (xx[10] * xx[19] + xx[0] * xx[16]) * inputDot[16]
    + inputDot[18];
  pm_math_Quaternion_xform_ra(xx + 109, xx + 117, xx + 113);
  xx[115] = input[19] - xx[43];
  xx[117] = xx[115] * xx[107];
  xx[118] = xx[115] * xx[106];
  xx[119] = xx[19] * xx[43];
  xx[120] = xx[43] * xx[16];
  xx[121] = - (xx[48] + (xx[10] * xx[119] + xx[120] * xx[0]) * xx[24]);
  xx[122] = xx[51] - xx[24] * (xx[119] * xx[0] - xx[10] * xx[120]);
  xx[123] = - (xx[43] - (xx[120] * xx[16] + xx[19] * xx[119]) * xx[24]);
  pm_math_Quaternion_xform_ra(xx + 3, xx + 121, xx + 124);
  xx[0] = (xx[105] * xx[117] + xx[108] * xx[118]) * xx[24] + xx[124] + state[0];
  xx[3] = xx[115] - (xx[106] * xx[118] + xx[107] * xx[117]) * xx[24] + xx[126] +
    xx[49];
  xx[4] = xx[3] * xx[9];
  xx[5] = xx[0] * xx[9];
  xx[6] = xx[0] - (xx[2] * xx[4] + xx[5] * xx[9]) * xx[24];
  xx[0] = xx[3] + xx[24] * (xx[2] * xx[5] - xx[4] * xx[9]);
  pm_math_Vector3_cross_ra(xx + 38, xx + 121, xx + 2);
  xx[38] = xx[2] + xx[59];
  xx[39] = xx[3] + xx[60];
  xx[40] = xx[4] + xx[61];
  pm_math_Quaternion_inverseXform_ra(xx + 88, xx + 38, xx + 2);
  xx[38] = xx[67] * xx[115] + xx[2] - xx[116] * xx[43];
  xx[39] = xx[3] + xx[15] * xx[43] - xx[12] * xx[115];
  xx[40] = xx[4] + inputDot[19];
  pm_math_Quaternion_xform_ra(xx + 109, xx + 38, xx + 2);
  xx[5] = state[3] * state[3];
  xx[9] = state[4] * state[5];
  xx[10] = state[3] * state[6];
  xx[12] = state[4] * state[6];
  xx[15] = state[3] * state[5];
  xx[16] = state[5] * state[6];
  xx[19] = state[3] * state[4];
  output[0] = (xx[13] + xx[14] * xx[14]) * xx[24] - xx[25];
  output[1] = (xx[27] + xx[29]) * xx[24];
  output[2] = xx[24] * (xx[30] - xx[31]);
  output[3] = xx[24] * (xx[27] - xx[29]);
  output[4] = (xx[13] + xx[26] * xx[26]) * xx[24] - xx[25];
  output[5] = (xx[32] + xx[33]) * xx[24];
  output[6] = (xx[30] + xx[31]) * xx[24];
  output[7] = xx[24] * (xx[32] - xx[33]);
  output[8] = (xx[13] + xx[28] * xx[28]) * xx[24] - xx[25];
  output[9] = xx[41];
  output[10] = xx[42] - inputDot[3];
  output[11] = xx[55];
  output[12] = xx[24] * (xx[23] * xx[46] - xx[20] * xx[47]) + xx[11] + state[1];
  output[13] = xx[7];
  output[14] = xx[52] - xx[7] * inputDot[3];
  output[15] = xx[53];
  output[16] = xx[54] + xx[55] * inputDot[3];
  output[17] = (xx[17] + xx[18] * xx[18]) * xx[24] - xx[25];
  output[18] = (xx[22] + xx[45]) * xx[24];
  output[19] = xx[24] * (xx[50] - xx[56]);
  output[20] = xx[24] * (xx[22] - xx[45]);
  output[21] = (xx[17] + xx[21] * xx[21]) * xx[24] - xx[25];
  output[22] = (xx[57] + xx[58]) * xx[24];
  output[23] = (xx[50] + xx[56]) * xx[24];
  output[24] = xx[24] * (xx[57] - xx[58]);
  output[25] = (xx[17] + xx[44] * xx[44]) * xx[24] - xx[25];
  output[26] = xx[70];
  output[27] = xx[71] - inputDot[3];
  output[28] = xx[63];
  output[29] = xx[24] * (xx[65] * xx[74] - xx[62] * xx[75]) + xx[82] + state[1];
  output[30] = xx[1];
  output[31] = xx[76] - xx[1] * inputDot[3];
  output[32] = xx[77];
  output[33] = xx[78] + xx[63] * inputDot[3];
  output[34] = (xx[34] + xx[35] * xx[35]) * xx[24] - xx[25];
  output[35] = (xx[64] + xx[73]) * xx[24];
  output[36] = xx[24] * (xx[79] - xx[80]);
  output[37] = xx[24] * (xx[64] - xx[73]);
  output[38] = (xx[34] + xx[37] * xx[37]) * xx[24] - xx[25];
  output[39] = (xx[81] + xx[87]) * xx[24];
  output[40] = (xx[79] + xx[80]) * xx[24];
  output[41] = xx[24] * (xx[81] - xx[87]);
  output[42] = (xx[34] + xx[72] * xx[72]) * xx[24] - xx[25];
  output[43] = xx[92];
  output[44] = xx[93] - inputDot[3];
  output[45] = xx[84];
  output[46] = xx[24] * (xx[86] * xx[96] - xx[83] * xx[97]) + xx[104] + state[1];
  output[47] = xx[8];
  output[48] = xx[98] - xx[8] * inputDot[3];
  output[49] = xx[99];
  output[50] = xx[100] + xx[84] * inputDot[3];
  output[51] = (xx[36] + xx[66] * xx[66]) * xx[24] - xx[25];
  output[52] = (xx[69] + xx[94]) * xx[24];
  output[53] = xx[24] * (xx[95] - xx[101]);
  output[54] = xx[24] * (xx[69] - xx[94]);
  output[55] = (xx[36] + xx[68] * xx[68]) * xx[24] - xx[25];
  output[56] = (xx[102] + xx[103]) * xx[24];
  output[57] = (xx[95] + xx[101]) * xx[24];
  output[58] = xx[24] * (xx[102] - xx[103]);
  output[59] = (xx[36] + xx[85] * xx[85]) * xx[24] - xx[25];
  output[60] = xx[113];
  output[61] = xx[114] - inputDot[3];
  output[62] = xx[6];
  output[63] = xx[24] * (xx[108] * xx[117] - xx[105] * xx[118]) + xx[125] +
    state[1];
  output[64] = xx[0];
  output[65] = xx[2] - xx[0] * inputDot[3];
  output[66] = xx[3];
  output[67] = xx[4] + xx[6] * inputDot[3];
  output[68] = (xx[5] + state[4] * state[4]) * xx[24] - xx[25];
  output[69] = (xx[9] + xx[10]) * xx[24];
  output[70] = xx[24] * (xx[12] - xx[15]);
  output[71] = xx[24] * (xx[9] - xx[10]);
  output[72] = (xx[5] + state[5] * state[5]) * xx[24] - xx[25];
  output[73] = (xx[16] + xx[19]) * xx[24];
  output[74] = (xx[12] + xx[15]) * xx[24];
  output[75] = xx[24] * (xx[16] - xx[19]);
  output[76] = (xx[5] + state[6] * state[6]) * xx[24] - xx[25];
  output[77] = state[0];
  output[78] = state[1];
  output[79] = xx[49];
  return NULL;
}
