/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02eb1648; name: FUN_02eb1648
 */


void FUN_02eb1648(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  undefined8 uVar6;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar2 = (float)*param_1;
  fVar3 = (float)((ulong)*param_1 >> 0x20);
  fVar7 = fVar3 + fVar3;
  fVar4 = (float)param_1[1];
  fVar8 = fVar4 + fVar4;
  fVar9 = (fVar2 + fVar2) * fVar2;
  fVar5 = (float)((ulong)param_1[1] >> 0x20);
  fVar1 = (fVar2 + fVar2) * fVar5;
  fVar10 = 1.0 - fVar4 * fVar8;
  fVar11 = fVar8 * fVar3 - fVar1;
  fVar13 = fVar10 - fVar7 * fVar3;
  fVar10 = fVar10 - fVar9;
  fVar14 = fVar7 * fVar2 + fVar8 * fVar5;
  fVar12 = fVar7 * fVar2 - fVar8 * fVar5;
  fVar1 = fVar8 * fVar3 + fVar1;
  fVar15 = fVar8 * fVar2 - fVar7 * fVar5;
  fVar2 = fVar8 * fVar2 + fVar7 * fVar5;
  fVar3 = (1.0 - fVar9) - fVar7 * fVar3;
  param_2[1] = CONCAT44(fVar11,fVar15);
  *param_2 = CONCAT44(fVar14,fVar13);
  param_2[3] = CONCAT44(fVar2,fVar1);
  param_2[2] = CONCAT44(fVar10,fVar12);
  param_2[5] = (ulong)(uint)fVar3;
  param_2[4] = CONCAT44(fVar11,fVar2);
  fVar4 = *(float *)(param_1 + 4);
  param_2[1] = CONCAT44(fVar11 * fVar4,fVar15 * fVar4);
  *param_2 = CONCAT44(fVar14 * fVar4,fVar13 * fVar4);
  fVar4 = *(float *)((long)param_1 + 0x24);
  param_2[3] = CONCAT44(fVar2 * fVar4,fVar1 * fVar4);
  param_2[2] = CONCAT44(fVar10 * fVar4,fVar12 * fVar4);
  fVar1 = *(float *)(param_1 + 5);
  param_2[5] = CONCAT44(fVar1 * 0.0,fVar3 * fVar1);
  param_2[4] = CONCAT44(fVar11 * fVar1,fVar2 * fVar1);
  uVar6 = param_1[2];
  param_2[7] = CONCAT44(*(undefined4 *)(param_1 + 3),*(undefined4 *)(param_1 + 3));
  param_2[6] = uVar6;
  return;
}


