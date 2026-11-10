/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03448080; name: FUN_03448080
 */


float FUN_03448080(float param_1,float param_2,float param_3,float param_4,undefined4 param_5)

{
  float fVar1;
  
  fVar1 = 0.0;
  switch(param_5) {
  case 0:
    param_1 = 1.0 - param_1;
    fVar1 = param_3 - param_4 * param_1 * param_1 * param_1;
    break;
  case 1:
    fVar1 = param_1 * param_1 * -0.4052847 + param_1 * 1.2732395;
    fVar1 = param_2 + (fVar1 * 0.225 + 0.775) * fVar1 * param_4;
    break;
  case 2:
    fVar1 = -3.0;
    goto LAB_03448118;
  case 3:
    if (1.5707964 < param_1) {
      param_1 = 3.1415927 - param_1;
      fVar1 = param_1 * param_1;
      return param_2 + param_4 * (param_1 * (fVar1 * (fVar1 * (fVar1 * 9.181827e-05 + -0.0041531627)
                                                     + 0.08332414) + -0.4999983) + 1.0);
    }
    fVar1 = param_1 * param_1;
    fVar1 = fVar1 * (fVar1 * (fVar1 * -9.181827e-05 + 0.0041531627) + -0.08332414) + 0.4999983;
    goto LAB_03448270;
  case 5:
    param_1 = param_1 * param_1;
    param_1 = param_1 * (param_1 * (param_1 * 0.000484834 + -0.01961384) + 0.2476748) +
              0.00069670216;
    goto LAB_03448228;
  case 6:
    fVar1 = 1.0;
LAB_03448118:
    fVar1 = param_1 + fVar1;
LAB_03448270:
    fVar1 = param_2 + fVar1 * param_4 * param_1;
    break;
  case 7:
    param_1 = param_1 * param_1;
    fVar1 = param_3 + param_4 * (param_1 * (param_1 * (param_1 * 0.0012712094 + -0.04148775) +
                                           0.49991244) + -0.9999933);
    break;
  case 8:
    param_1 = param_1 * param_1 * param_1;
LAB_03448228:
    fVar1 = param_2 + param_4 * param_1;
  }
  return fVar1;
}


