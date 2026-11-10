/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03431400; name: FUN_03431400
 */


undefined8 FUN_03431400(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
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
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar7 = param_2[1] - param_1[1];
  fVar9 = *param_2 - *param_1;
  fVar10 = param_1[6];
  fVar11 = param_1[7];
  fVar12 = param_1[8];
  fVar8 = param_2[2] - param_1[2];
  fVar13 = param_3[1] - param_1[1];
  fVar18 = param_1[9] * fVar9 + fVar7 * param_1[10] + fVar8 * param_1[0xb];
  fVar14 = fVar10 * fVar9 + fVar7 * fVar11 + fVar8 * fVar12;
  bVar2 = false;
  bVar3 = true;
  bVar4 = false;
  if (0.0001 < fVar18) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar14)) {
      bVar2 = fVar14 < 0.0001;
      bVar3 = fVar14 == 0.0001;
      bVar4 = false;
    }
  }
  iVar6 = -2;
  if (!bVar3 && bVar2 == bVar4) {
    iVar6 = -1;
  }
  bVar2 = false;
  bVar3 = true;
  bVar4 = false;
  if (fVar14 < 0.0001) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar18)) {
      bVar2 = fVar18 < -0.0001;
      bVar3 = fVar18 == -0.0001;
      bVar4 = false;
    }
  }
  iVar1 = 1;
  if (bVar3 || bVar2 != bVar4) {
    iVar1 = iVar6;
  }
  bVar2 = false;
  bVar3 = false;
  if (-0.0001 < fVar14) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar18)) {
      bVar2 = fVar18 < 0.0001;
      bVar3 = false;
    }
  }
  fVar18 = *param_3 - *param_1;
  fVar14 = param_3[2] - param_1[2];
  fVar15 = fVar10 * fVar18 + fVar13 * fVar11 + fVar14 * fVar12;
  fVar16 = param_1[9] * fVar18 + fVar13 * param_1[10] + fVar14 * param_1[0xb];
  iVar6 = 0;
  if (bVar2 == bVar3) {
    iVar6 = iVar1;
  }
  bVar2 = false;
  bVar3 = false;
  if (-0.0001 < fVar15) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar16)) {
      bVar2 = fVar16 < 0.0001;
      bVar3 = false;
    }
  }
  if (bVar2 == bVar3) {
    bVar2 = false;
    bVar3 = true;
    bVar4 = false;
    if (fVar15 < 0.0001) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar16)) {
        bVar2 = fVar16 < -0.0001;
        bVar3 = fVar16 == -0.0001;
        bVar4 = false;
      }
    }
    if ((!bVar3 && bVar2 == bVar4) && iVar6 == 0) {
      fVar17 = param_1[4];
      fVar16 = param_1[5];
      fVar19 = param_1[3];
      fVar15 = fVar19 * fVar12 - fVar16 * fVar10;
      fVar12 = fVar16 * fVar11 - fVar17 * fVar12;
      fVar10 = fVar17 * fVar10 - fVar19 * fVar11;
      fVar11 = fVar16 * fVar8 + fVar7 * fVar17 + fVar9 * fVar19;
      fVar9 = fVar9 - fVar19 * fVar11;
      fVar7 = fVar7 - fVar17 * fVar11;
      fVar8 = fVar8 - fVar16 * fVar11;
      fVar11 = fVar16 * fVar14 + fVar13 * fVar17 + fVar18 * fVar19;
      fVar18 = fVar18 - fVar19 * fVar11;
      fVar13 = fVar13 - fVar17 * fVar11;
      fVar14 = fVar14 - fVar16 * fVar11;
      if ((-(fVar8 * fVar10) - (fVar9 * fVar12 + fVar15 * fVar7)) /
          SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8) <
          (fVar18 * fVar12 + fVar15 * fVar13 + fVar10 * fVar14) /
          SQRT(fVar18 * fVar18 + fVar13 * fVar13 + fVar14 * fVar14)) {
LAB_0343166c:
        fVar8 = param_2[1] - param_4[1];
        fVar11 = param_4[1] - param_3[1];
        fVar7 = *param_2 - *param_4;
        fVar10 = *param_4 - *param_3;
        fVar9 = param_2[2] - param_4[2];
        fVar12 = param_4[2] - param_3[2];
        fVar13 = SQRT((fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12) *
                      (fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9));
        if (fVar13 == 0.0) {
          uVar5 = 0;
          fVar7 = 0.0;
        }
        else {
          fVar7 = (float)NEON_fminnm((fVar10 * fVar7 + fVar8 * fVar11 + fVar9 * fVar12) / fVar13,
                                     0x3f800000);
          if (fVar7 <= -1.0) {
            fVar7 = -1.0;
          }
          fVar7 = acosf(fVar7);
          fVar7 = fVar7 * 0.63661975;
          uVar5 = 1;
        }
        *param_5 = fVar7;
        return uVar5;
      }
    }
  }
  else if (iVar6 == 1) {
    fVar17 = param_1[4];
    fVar16 = param_1[5];
    fVar19 = param_1[3];
    fVar15 = fVar19 * fVar12 - fVar16 * fVar10;
    fVar12 = fVar16 * fVar11 - fVar17 * fVar12;
    fVar10 = fVar17 * fVar10 - fVar19 * fVar11;
    fVar11 = fVar16 * fVar14 + fVar13 * fVar17 + fVar18 * fVar19;
    fVar18 = fVar18 - fVar19 * fVar11;
    fVar13 = fVar13 - fVar17 * fVar11;
    fVar14 = fVar14 - fVar16 * fVar11;
    fVar11 = fVar16 * fVar8 + fVar7 * fVar17 + fVar9 * fVar19;
    fVar9 = fVar9 - fVar19 * fVar11;
    fVar8 = fVar8 - fVar16 * fVar11;
    fVar7 = fVar7 - fVar17 * fVar11;
    if ((-(fVar14 * fVar10) - (fVar18 * fVar12 + fVar15 * fVar13)) /
        SQRT(fVar18 * fVar18 + fVar13 * fVar13 + fVar14 * fVar14) <
        (fVar9 * fVar12 + fVar15 * fVar7 + fVar10 * fVar8) /
        SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8)) goto LAB_0343166c;
  }
  return 0;
}


