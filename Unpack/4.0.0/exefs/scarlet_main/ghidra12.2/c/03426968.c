/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03426968; name: FUN_03426968
 */


void FUN_03426968(float *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar12 = param_1[0x1d];
  fVar5 = param_1[0x1b];
  fVar6 = param_1[0x1c];
  param_1[0x1f] = 0.0;
  param_1[0x20] = 0.0;
  uVar7 = (int)param_1[0x1e] - 1;
  if ((int)uVar7 < 0) {
    fVar20 = 0.0;
  }
  else {
    fVar21 = 0.0;
    fVar20 = 0.0;
    pfVar8 = param_1 + (long)((int)param_1[0x1e] + -2) * 3 + 5;
    pfVar9 = param_1 + (ulong)uVar7 * 3 + 5;
    do {
      fVar11 = pfVar9[-2];
      fVar1 = pfVar9[-1];
      fVar2 = *pfVar9;
      fVar10 = fVar11 - fVar5;
      fVar15 = pfVar8[-2] - fVar11;
      fVar13 = fVar1 - fVar6;
      fVar14 = fVar2 - fVar12;
      fVar16 = pfVar8[-1] - fVar1;
      fVar17 = *pfVar8 - fVar2;
      fVar18 = SQRT(fVar10 * fVar10 + fVar13 * fVar13 + fVar14 * fVar14);
      fVar19 = SQRT(fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17) * fVar18;
      if (0.001 < fVar19) {
        fVar19 = (fVar15 * fVar10 + fVar13 * fVar16 + fVar14 * fVar17) / fVar19;
        fVar20 = fVar18 + fVar20;
        param_1[0x20] = fVar20;
        bVar3 = false;
        bVar4 = false;
        if (-1.0 < fVar19) {
          bVar3 = false;
          bVar4 = true;
          if (!NAN(fVar19)) {
            bVar3 = fVar19 < 0.999998;
            bVar4 = false;
          }
        }
        fVar12 = fVar2;
        fVar5 = fVar11;
        fVar6 = fVar1;
        if (bVar3 != bVar4) {
          fVar11 = (float)NEON_fminnm(fVar19,0x3f800000);
          if (fVar11 <= -1.0) {
            fVar11 = -1.0;
          }
          fVar11 = acosf(fVar11);
          fVar21 = (float)NEON_fminnm(fVar21 + fVar11 * 0.31830987,0x3f800000);
          param_1[0x1f] = fVar21;
        }
      }
      uVar7 = uVar7 - 1;
      pfVar8 = pfVar8 + -3;
      pfVar9 = pfVar9 + -3;
    } while (-1 < (int)uVar7);
  }
  fVar12 = SQRT((fVar5 - *param_1) * (fVar5 - *param_1) +
                (fVar6 - param_1[1]) * (fVar6 - param_1[1]) +
                (fVar12 - param_1[2]) * (fVar12 - param_1[2]));
  if (0.0 < fVar12) {
    param_1[0x20] = fVar12 + fVar20;
  }
  return;
}


