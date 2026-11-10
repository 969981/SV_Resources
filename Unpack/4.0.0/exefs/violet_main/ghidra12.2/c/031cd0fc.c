/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031cd0fc; name: FUN_031cd0fc
 */


void FUN_031cd0fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar4 = (float)((ulong)param_2[2] >> 0x20);
  fVar3 = (float)param_2[2];
  fVar2 = (float)*param_2;
  fVar8 = (float)((ulong)*param_2 >> 0x20);
  fVar7 = (float)param_2[5];
  fVar9 = (float)param_2[4];
  fVar14 = (float)((ulong)param_2[4] >> 0x20);
  fVar13 = fVar8 - fVar3;
  fVar15 = fVar9 - (float)param_2[1];
  fVar9 = (float)param_2[1] + fVar9;
  fVar10 = (float)param_2[3] + fVar14;
  fVar8 = fVar8 + fVar3;
  uVar11 = NEON_fmov(0x3f800000,4);
  fVar12 = fVar7 + (float)uVar11;
  fVar14 = (float)param_2[3] - fVar14;
  fVar3 = (float)uVar11 - fVar7;
  uVar11 = CONCAT44(fVar2 + fVar4 + fVar12,fVar13);
  if (fVar2 < -fVar4) {
    uVar11 = CONCAT44(fVar13,fVar12 - (fVar2 + fVar4));
  }
  uVar6 = CONCAT44(fVar15,fVar14);
  if (fVar2 < -fVar4) {
    uVar6 = CONCAT44(fVar10,fVar9);
  }
  uVar5 = CONCAT44(fVar3 - (fVar2 - fVar4),fVar8);
  uVar1 = CONCAT44(fVar15,fVar10);
  if (fVar4 < fVar2) {
    uVar5 = CONCAT44(fVar8,(fVar2 - fVar4) + fVar3);
    uVar1 = CONCAT44(fVar14,fVar9);
  }
  if (fVar7 < 0.0) {
    uVar6 = uVar5;
    uVar11 = uVar1;
  }
  fVar4 = (float)uVar6;
  fVar9 = (float)((ulong)uVar6 >> 0x20);
  fVar14 = (float)uVar11;
  fVar7 = (float)((ulong)uVar11 >> 0x20);
  fVar2 = fVar4 * fVar4 + fVar9 * fVar9;
  fVar8 = fVar14 * fVar14 + fVar7 * fVar7;
  fVar3 = fVar2 + fVar8;
  if (fVar3 == 0.0) {
    uVar11 = 0;
    uVar6 = 0;
  }
  else {
    fVar3 = SQRT(fVar3);
    fVar2 = SQRT(fVar2 + fVar8);
    uVar11 = CONCAT44(fVar9 / fVar2,fVar4 / fVar3);
    uVar6 = CONCAT44(fVar7 / fVar2,fVar14 / fVar3);
  }
  param_1[1] = uVar6;
  *param_1 = uVar11;
  return;
}


