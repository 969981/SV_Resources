/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031cc2c4; name: FUN_031cc2c4
 */


void FUN_031cc2c4(undefined8 *param_1,undefined8 *param_2)

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
  
  fVar1 = (float)*param_2;
  fVar3 = (float)((ulong)*param_2 >> 0x20);
  fVar5 = fVar3 + fVar3;
  fVar7 = (float)param_2[1];
  fVar6 = fVar7 + fVar7;
  fVar9 = (fVar1 + fVar1) * fVar1;
  fVar4 = (float)((ulong)param_2[1] >> 0x20);
  fVar2 = (fVar1 + fVar1) * fVar4;
  fVar7 = 1.0 - fVar7 * fVar6;
  fVar10 = fVar6 * fVar1 + fVar5 * fVar4;
  fVar8 = fVar6 * fVar3 - fVar2;
  param_1[1] = CONCAT44(fVar8,fVar6 * fVar1 - fVar5 * fVar4);
  *param_1 = CONCAT44(fVar5 * fVar1 + fVar6 * fVar4,fVar7 - fVar5 * fVar3);
  param_1[3] = CONCAT44(fVar10,fVar6 * fVar3 + fVar2);
  param_1[2] = CONCAT44(fVar7 - fVar9,fVar5 * fVar1 - fVar6 * fVar4);
  param_1[5] = (ulong)(uint)((1.0 - fVar9) - fVar5 * fVar3);
  param_1[4] = CONCAT44(fVar8,fVar10);
  return;
}


