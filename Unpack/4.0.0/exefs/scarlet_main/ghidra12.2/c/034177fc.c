/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034177fc; name: FUN_034177fc
 */


undefined8 FUN_034177fc(float *param_1,float *param_2,float *param_3,float *param_4)

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
  float fVar10;
  float fVar11;
  
  fVar2 = *param_3 - *param_2;
  fVar1 = param_3[1] - param_2[1];
  fVar3 = param_3[2] - param_2[2];
  fVar7 = *param_4 - *param_2;
  fVar8 = param_4[1] - param_2[1];
  fVar9 = param_4[2] - param_2[2];
  fVar4 = fVar9 * fVar1 - fVar8 * fVar3;
  fVar5 = fVar7 * fVar3 - fVar9 * fVar2;
  fVar6 = fVar8 * fVar2 - fVar7 * fVar1;
  *param_1 = fVar4;
  param_1[1] = fVar5;
  param_1[2] = fVar6;
  fVar10 = fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5;
  param_1[3] = *param_2 * fVar4 + fVar5 * param_2[1] + fVar6 * param_2[2];
  if ((~(uint)fVar10 & 0x7f800000) == 0) {
    return 2;
  }
  fVar10 = 1.0 / fVar10;
  fVar11 = fVar10 * (fVar6 * fVar8 - fVar5 * fVar9);
  fVar9 = fVar10 * (fVar4 * fVar9 - fVar6 * fVar7);
  fVar8 = fVar10 * (fVar5 * fVar7 - fVar4 * fVar8);
  param_1[4] = fVar11;
  param_1[5] = fVar9;
  param_1[6] = fVar8;
  fVar7 = fVar10 * (fVar5 * fVar3 - fVar6 * fVar1);
  fVar3 = fVar10 * (fVar6 * fVar2 - fVar4 * fVar3);
  fVar10 = fVar10 * (fVar4 * fVar1 - fVar5 * fVar2);
  param_1[7] = -(param_2[2] * fVar8) - (*param_2 * fVar11 + fVar9 * param_2[1]);
  param_1[8] = fVar7;
  param_1[9] = fVar3;
  param_1[10] = fVar10;
  param_1[0xb] = -(param_2[2] * fVar10) - (*param_2 * fVar7 + fVar3 * param_2[1]);
  return 1;
}


