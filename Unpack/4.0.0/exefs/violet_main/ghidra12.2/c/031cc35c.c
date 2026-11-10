/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031cc35c; name: FUN_031cc35c
 */


void FUN_031cc35c(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar5 = (float)((ulong)param_1[2] >> 0x20);
  fVar6 = (float)param_1[2];
  fVar10 = (float)param_1[5];
  fVar8 = (float)param_1[4];
  fVar14 = (float)((ulong)param_1[4] >> 0x20);
  fVar2 = (float)*param_1;
  fVar7 = (float)((ulong)*param_1 >> 0x20);
  fVar13 = fVar7 - fVar6;
  fVar15 = fVar8 - (float)param_1[1];
  fVar8 = (float)param_1[1] + fVar8;
  fVar9 = (float)param_1[3] + fVar14;
  fVar7 = fVar7 + fVar6;
  uVar11 = NEON_fmov(0x3f800000,4);
  fVar12 = fVar10 + (float)uVar11;
  fVar6 = (float)uVar11 - fVar10;
  fVar14 = (float)param_1[3] - fVar14;
  uVar11 = CONCAT44(fVar2 + fVar5 + fVar12,fVar13);
  if (fVar2 < -fVar5) {
    uVar11 = CONCAT44(fVar13,fVar12 - (fVar2 + fVar5));
  }
  uVar4 = CONCAT44(fVar15,fVar14);
  if (fVar2 < -fVar5) {
    uVar4 = CONCAT44(fVar9,fVar8);
  }
  uVar3 = CONCAT44(fVar6 - (fVar2 - fVar5),fVar7);
  uVar1 = CONCAT44(fVar15,fVar9);
  if (fVar5 < fVar2) {
    uVar3 = CONCAT44(fVar7,(fVar2 - fVar5) + fVar6);
    uVar1 = CONCAT44(fVar14,fVar8);
  }
  if (fVar10 < 0.0) {
    uVar4 = uVar3;
    uVar11 = uVar1;
  }
  fVar5 = (float)uVar4;
  fVar8 = (float)((ulong)uVar4 >> 0x20);
  fVar14 = (float)uVar11;
  fVar10 = (float)((ulong)uVar11 >> 0x20);
  fVar2 = fVar5 * fVar5 + fVar8 * fVar8;
  fVar6 = fVar14 * fVar14 + fVar10 * fVar10;
  fVar7 = fVar2 + fVar6;
  fVar15 = 0.0;
  fVar9 = 0.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  if (fVar7 != 0.0) {
    fVar7 = SQRT(fVar7);
    fVar9 = SQRT(fVar2 + fVar6);
    fVar12 = fVar5 / fVar7;
    fVar13 = fVar8 / fVar9;
    fVar15 = fVar14 / fVar7;
    fVar9 = fVar10 / fVar9;
  }
  fVar7 = fVar13 + fVar13;
  fVar6 = fVar15 + fVar15;
  fVar5 = (fVar12 + fVar12) * fVar12;
  fVar2 = (fVar12 + fVar12) * fVar9;
  fVar8 = 1.0 - fVar15 * fVar6;
  fVar10 = fVar6 * fVar12 + fVar7 * fVar9;
  fVar14 = fVar6 * fVar13 - fVar2;
  param_1[1] = CONCAT44(fVar14,fVar6 * fVar12 - fVar7 * fVar9);
  *param_1 = CONCAT44(fVar7 * fVar12 + fVar6 * fVar9,fVar8 - fVar7 * fVar13);
  param_1[3] = CONCAT44(fVar10,fVar6 * fVar13 + fVar2);
  param_1[2] = CONCAT44(fVar8 - fVar5,fVar7 * fVar12 - fVar6 * fVar9);
  param_1[5] = (ulong)(uint)((1.0 - fVar5) - fVar7 * fVar13);
  param_1[4] = CONCAT44(fVar14,fVar10);
  return;
}


