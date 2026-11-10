/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f7c88; name: FUN_026f7c88
 */


undefined8 FUN_026f7c88(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,float *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar6 = FUN_026fe444(param_2);
  fVar4 = (float)((ulong)uVar6 >> 0x20);
  uVar7 = FUN_026fe44c(param_2);
  fVar5 = (float)((ulong)uVar7 >> 0x20);
  fVar9 = *(float *)(param_1 + 4);
  fVar10 = (float)param_1[2] * fVar9;
  fVar11 = (float)((ulong)param_1[2] >> 0x20) * fVar9;
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (fVar10 < 1.1920929e-07) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar10)) {
      bVar1 = fVar10 < -1.1920929e-07;
      bVar2 = fVar10 == -1.1920929e-07;
      bVar3 = false;
    }
  }
  fVar8 = (float)*param_1;
  if (bVar2 || bVar1 != bVar3) {
    fVar13 = (1.0 / fVar10) * ((float)uVar6 - fVar8);
    fVar12 = (1.0 / fVar10) * ((float)uVar7 - fVar8);
    fVar14 = fVar13;
    if (fVar13 <= fVar12) {
      fVar14 = fVar12;
      fVar12 = fVar13;
    }
    fVar14 = (float)NEON_fminnm(fVar14,0x7f7fffff);
    if (fVar14 <= fVar12) {
      return 0;
    }
  }
  else {
    if (fVar8 < (float)uVar6 || (float)uVar7 < fVar8) {
      return 0;
    }
    fVar14 = 3.4028235e+38;
    fVar12 = -3.4028235e+38;
  }
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (fVar11 < 1.1920929e-07) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar11)) {
      bVar1 = fVar11 < -1.1920929e-07;
      bVar2 = fVar11 == -1.1920929e-07;
      bVar3 = false;
    }
  }
  fVar13 = (float)((ulong)*param_1 >> 0x20);
  if (bVar2 || bVar1 != bVar3) {
    fVar15 = (fVar4 - fVar13) * (1.0 / fVar11);
    fVar4 = (fVar5 - fVar13) * (1.0 / fVar11);
    fVar5 = fVar15;
    if (fVar15 <= fVar4) {
      fVar5 = fVar4;
      fVar4 = fVar15;
    }
    if (fVar4 <= fVar12) {
      fVar4 = fVar12;
    }
    fVar12 = fVar4;
    if (fVar14 <= fVar5) {
      fVar5 = fVar14;
    }
    if (fVar5 <= fVar12) {
      return 0;
    }
  }
  else {
    if (fVar13 < fVar4) {
      return 0;
    }
    if (fVar5 < fVar13) {
      return 0;
    }
  }
  if (param_3 != (undefined8 *)0x0) {
    param_3[1] = CONCAT44((float)((ulong)param_1[1] >> 0x20) +
                          (float)((ulong)param_1[3] >> 0x20) * fVar9 * fVar12,
                          (float)param_1[1] + (float)param_1[3] * fVar9 * fVar12);
    *param_3 = CONCAT44(fVar13 + fVar11 * fVar12,fVar8 + fVar10 * fVar12);
  }
  if (param_4 != (float *)0x0) {
    *param_4 = fVar12;
  }
  return 1;
}


