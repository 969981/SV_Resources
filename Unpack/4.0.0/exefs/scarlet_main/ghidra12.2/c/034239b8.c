/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034239b8; name: FUN_034239b8
 */


float FUN_034239b8(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = param_2[1] - param_1[1];
  fVar3 = *param_2 - *param_1;
  fVar5 = param_2[2] - param_1[2];
  fVar6 = param_1[3] * fVar3 + fVar4 * param_1[4] + fVar5 * param_1[5];
  fVar1 = param_1[0xc];
  fVar2 = -fVar1;
  if ((-fVar1 <= fVar6) && (fVar2 = fVar1, fVar6 <= fVar1)) {
    fVar2 = fVar6;
  }
  fVar5 = param_1[6] * fVar3 + fVar4 * param_1[7] + fVar5 * param_1[8];
  fVar4 = param_1[0xd];
  fVar3 = -fVar4;
  if ((-fVar4 <= fVar5) && (fVar3 = fVar4, fVar5 <= fVar4)) {
    fVar3 = fVar5;
  }
  fVar5 = (*param_1 - *param_2) + fVar2 * param_1[3] + param_1[6] * fVar3;
  fVar6 = (param_1[1] - param_2[1]) + fVar2 * param_1[4] + param_1[7] * fVar3;
  fVar2 = (param_1[2] - param_2[2]) + fVar2 * param_1[5] + param_1[8] * fVar3;
  fVar2 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar2 * fVar2);
  if (fVar2 == 0.0) {
    fVar2 = 3.1415927;
  }
  else {
    fVar2 = atanf(SQRT(fVar1 * 1.2732395 * fVar4) / fVar2);
    fVar2 = fVar2 + fVar2;
  }
  return fVar2;
}


