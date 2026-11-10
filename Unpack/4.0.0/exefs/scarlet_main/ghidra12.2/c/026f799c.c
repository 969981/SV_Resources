/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f799c; name: FUN_026f799c
 */


undefined8 FUN_026f799c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar5 = *(float *)(param_1 + 4);
  fVar6 = (float)param_1[2] * fVar5;
  fVar7 = (float)((ulong)param_1[2] >> 0x20) * fVar5;
  fVar8 = (float)param_1[3] * fVar5;
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (fVar6 < 1.1920929e-07) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar6)) {
      bVar1 = fVar6 < -1.1920929e-07;
      bVar2 = fVar6 == -1.1920929e-07;
      bVar3 = false;
    }
  }
  fVar9 = (float)*param_2;
  fVar11 = (float)param_2[2];
  fVar4 = (float)*param_1;
  if (bVar2 || bVar1 != bVar3) {
    fVar10 = (1.0 / fVar6) * (fVar9 - fVar4);
    fVar9 = (1.0 / fVar6) * (fVar11 - fVar4);
    fVar11 = fVar10;
    if (fVar10 <= fVar9) {
      fVar11 = fVar9;
      fVar9 = fVar10;
    }
    fVar11 = (float)NEON_fminnm(fVar11,0x7f7fffff);
    if (fVar11 <= fVar9) {
      return 0;
    }
  }
  else {
    if (fVar4 < fVar9 || fVar11 < fVar4) {
      return 0;
    }
    fVar11 = 3.4028235e+38;
    fVar9 = -3.4028235e+38;
  }
  fVar15 = (float)((ulong)*param_2 >> 0x20);
  fVar13 = (float)((ulong)param_2[2] >> 0x20);
  fVar10 = (float)((ulong)*param_1 >> 0x20);
  if ((1.1920929e-07 <= fVar7) || (fVar7 <= -1.1920929e-07)) {
    fVar16 = (fVar15 - fVar10) * (1.0 / fVar7);
    fVar15 = (fVar13 - fVar10) * (1.0 / fVar7);
    fVar12 = fVar16;
    if (fVar16 <= fVar15) {
      fVar12 = fVar15;
      fVar15 = fVar16;
    }
    if (fVar15 <= fVar9) {
      fVar15 = fVar9;
    }
    fVar9 = fVar15;
    if (fVar11 <= fVar12) {
      fVar12 = fVar11;
    }
    if (fVar12 <= fVar9) {
      return 0;
    }
  }
  else {
    if (fVar10 < fVar15) {
      return 0;
    }
    fVar12 = fVar11;
    if (fVar13 < fVar10) {
      return 0;
    }
  }
  fVar11 = (float)param_1[1];
  if ((1.1920929e-07 <= fVar8) || (fVar8 <= -1.1920929e-07)) {
    fVar16 = ((float)param_2[1] - fVar11) * (1.0 / fVar8);
    fVar13 = ((float)param_2[3] - fVar11) * (1.0 / fVar8);
    fVar15 = fVar16;
    if (fVar16 <= fVar13) {
      fVar15 = fVar13;
      fVar13 = fVar16;
    }
    if (fVar13 <= fVar9) {
      fVar13 = fVar9;
    }
    fVar9 = fVar13;
    if (fVar12 <= fVar15) {
      fVar15 = fVar12;
    }
    if (fVar15 <= fVar9) {
      return 0;
    }
  }
  else {
    if (fVar11 < (float)param_2[1]) {
      return 0;
    }
    fVar15 = fVar12;
    if ((float)param_2[3] < fVar11) {
      return 0;
    }
  }
  fVar13 = 1.0;
  if (0.0 <= fVar9) {
    fVar13 = 0.0;
  }
  fVar12 = 1.0;
  if (0.0 > fVar9) {
    fVar12 = 0.0;
  }
  fVar16 = 1.0;
  if (0.0 <= fVar15) {
    fVar16 = 0.0;
  }
  fVar14 = 1.0;
  if (0.0 > fVar15) {
    fVar14 = 0.0;
  }
  if (fVar15 * fVar14 - fVar15 * fVar16 <= fVar9 * fVar12 - fVar9 * fVar13) {
    fVar9 = fVar15;
  }
  if (param_3 != (undefined8 *)0x0) {
    param_3[1] = CONCAT44((float)((ulong)param_1[1] >> 0x20) +
                          (float)((ulong)param_1[3] >> 0x20) * fVar5 * fVar9,fVar11 + fVar8 * fVar9)
    ;
    *param_3 = CONCAT44(fVar10 + fVar7 * fVar9,fVar4 + fVar6 * fVar9);
  }
  if (param_4 != (float *)0x0) {
    *param_4 = fVar9;
  }
  return 1;
}


