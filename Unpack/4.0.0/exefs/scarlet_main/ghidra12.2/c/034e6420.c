/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034e6420; name: FUN_034e6420
 */


float FUN_034e6420(float param_1,float param_2,float param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  
  switch(param_4) {
  case 0:
    param_1 = 1.0 - param_1;
    return param_3 + (param_2 - param_3) * param_1 * param_1 * param_1;
  case 1:
    param_1 = (2.0 - param_1) * param_1;
    return param_2 + (param_1 * 0.225 + 0.775) * (param_3 - param_2) * param_1;
  case 2:
    param_3 = param_2 - param_3;
    param_1 = param_1 * 0.5 * (param_1 + -3.0);
    goto LAB_034e6608;
  case 3:
    if (param_1 <= 0.5) {
      param_1 = param_1 * 3.1415927;
      fVar1 = param_1 * param_1;
      return param_2 + (fVar1 * (fVar1 * (fVar1 * -9.181827e-05 + 0.0041531627) + -0.08332414) +
                       0.4999983) * (param_3 - param_2) * param_1;
    }
    fVar1 = 3.1415927 - param_1 * 3.1415927;
    fVar2 = fVar1 * fVar1;
    param_1 = fVar1 * (fVar2 * (fVar2 * (fVar2 * 9.181827e-05 + -0.0041531627) + 0.08332414) +
                      -0.4999983) + 1.0;
    break;
  case 4:
    return param_2 + param_1 * (param_3 - param_2);
  case 5:
    fVar1 = param_1 * 3.1415927 * param_1 * 3.1415927;
    return param_2 + (param_3 - param_2) *
                     (fVar1 * (fVar1 * (fVar1 * 0.000484834 + -0.01961384) + 0.2476748) +
                     0.00069670216);
  case 6:
    param_3 = param_3 - param_2;
    param_1 = param_1 * 0.5 + param_1 * 0.5 * param_1;
    goto LAB_034e6608;
  case 7:
    fVar1 = param_1 * 1.5707964 * param_1 * 1.5707964;
    return param_3 + (param_2 - param_3) *
                     (fVar1 * (fVar1 * (fVar1 * -0.0012712094 + 0.04148775) + -0.49991244) +
                     0.9999933);
  case 8:
    param_1 = param_1 * param_1 * param_1;
    break;
  default:
    return 0.0;
  }
  param_3 = param_3 - param_2;
LAB_034e6608:
  return param_2 + param_3 * param_1;
}


