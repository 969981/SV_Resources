/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03423ba8; name: FUN_03423ba8
 */


void FUN_03423ba8(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar6 = fVar2 - param_2[1];
  fVar5 = fVar1 - *param_2;
  fVar7 = fVar3 - param_2[2];
  fVar8 = param_2[3] * fVar5 + fVar6 * param_2[4] + fVar7 * param_2[5];
  fVar9 = param_2[0xc];
  fVar4 = -fVar9;
  if ((-fVar9 <= fVar8) && (fVar4 = fVar9, fVar8 <= fVar9)) {
    fVar4 = fVar8;
  }
  fVar6 = param_2[6] * fVar5 + fVar6 * param_2[7] + fVar7 * param_2[8];
  fVar7 = param_2[0xd];
  fVar5 = -fVar7;
  if ((-fVar7 <= fVar6) && (fVar5 = fVar7, fVar6 <= fVar7)) {
    fVar5 = fVar6;
  }
  fVar7 = fVar1 - (*param_2 + param_2[3] * fVar4 + param_2[6] * fVar5);
  fVar6 = fVar2 - (param_2[1] + param_2[4] * fVar4 + param_2[7] * fVar5);
  fVar5 = fVar3 - (param_2[2] + param_2[5] * fVar4 + param_2[8] * fVar5);
  fVar4 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  if (fVar4 == 0.0) {
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar4 = 0.0;
  }
  else {
    fVar4 = 1.0 / fVar4;
    fVar7 = fVar7 * 0.01 * fVar4;
    fVar6 = fVar6 * 0.01 * fVar4;
    fVar4 = fVar5 * 0.01 * fVar4;
  }
  *param_1 = fVar7 + fVar1;
  param_1[1] = fVar6 + fVar2;
  param_1[2] = fVar4 + fVar3;
  return;
}


