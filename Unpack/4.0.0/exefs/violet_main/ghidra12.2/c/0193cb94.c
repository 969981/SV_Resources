/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0193cb94; name: FUN_0193cb94
 */


void FUN_0193cb94(undefined8 *param_1,long param_2,uint param_3,long param_4)

{
  float *pfVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar15 [16];
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  if ((param_3 & 1) == 0) {
    *(undefined1 *)(param_2 + 0xa0) = 1;
    pfVar1 = (float *)(param_2 + 0x40);
    if (*(char *)(*(long *)(param_2 + 8) + param_4 * 0x60 + 0x50) == '\0') {
      *(undefined1 *)(param_2 + 0x90) = 1;
      *(undefined4 *)(param_2 + 0x50) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      uVar3 = *(undefined8 *)(param_2 + 0x50);
      uVar20 = *(undefined8 *)(param_2 + 0x58);
      uVar21 = *(undefined8 *)(param_2 + 0x48);
      *param_1 = *(undefined8 *)pfVar1;
      param_1[1] = uVar21;
      param_1[2] = uVar3;
      param_1[3] = uVar20;
      return;
    }
    puVar4 = (undefined8 *)(*(long *)(param_2 + 8) + param_4 * 0x60);
    fVar17 = *(float *)(param_2 + 0x50);
    fVar14 = *(float *)(puVar4 + 2);
    if (0.0 < fVar17) {
      if (0.0 < fVar14) {
        uVar3 = *(undefined8 *)pfVar1;
        fVar18 = *(float *)(param_2 + 0x48);
        fVar12 = *(float *)(param_2 + 0x4c);
        uVar21 = puVar4[1];
        uVar20 = *puVar4;
        fVar24 = fVar14 - fVar17;
        fVar19 = (float)uVar20 - *pfVar1;
        fVar22 = (float)((ulong)uVar20 >> 0x20) - *(float *)(param_2 + 0x44);
        fVar9 = (float)uVar21 - fVar18;
        fVar23 = (float)((ulong)uVar21 >> 0x20) - fVar12;
        auVar15._0_4_ = fVar19 * fVar19 + fVar22 * fVar22;
        auVar15._4_4_ = fVar9 * fVar9 + fVar23 * fVar23;
        auVar15._8_4_ = fVar19 * fVar19 + fVar22 * fVar22;
        auVar15._12_4_ = fVar9 * fVar9 + fVar23 * fVar23;
        auVar15 = NEON_ext(auVar15,auVar15,4,1);
        fVar16 = auVar15._0_4_ + auVar15._4_4_;
        if (fVar16 <= fVar24 * fVar24) {
          if (fVar24 < 0.0) {
            uVar20 = uVar3;
            uVar21 = *(undefined8 *)(param_2 + 0x48);
            fVar14 = fVar17;
          }
        }
        else {
          fVar25 = SQRT(fVar16);
          if (NAN(fVar25)) {
            fVar25 = sqrtf(fVar16);
          }
          fVar16 = (fVar24 + fVar25) / (fVar25 + fVar25);
          fVar17 = (fVar14 + fVar17 + fVar25) * 0.5;
          fVar14 = 1.0;
          if (0.0 <= fVar17) {
            fVar14 = 0.0;
          }
          fVar24 = 1.0;
          if (0.0 > fVar17) {
            fVar24 = 0.0;
          }
          uVar20 = CONCAT44((float)((ulong)uVar3 >> 0x20) + fVar22 * fVar16,
                            (float)uVar3 + fVar19 * fVar16);
          uVar21 = CONCAT44(fVar12 + fVar23 * fVar16,fVar18 + fVar9 * fVar16);
          fVar14 = fVar17 * fVar24 - fVar17 * fVar14;
        }
      }
      else {
        uVar20 = *(undefined8 *)(param_2 + 0x40);
        uVar21 = *(undefined8 *)(param_2 + 0x48);
        fVar14 = fVar17;
      }
    }
    else {
      uVar20 = *puVar4;
      uVar21 = puVar4[1];
    }
    *(undefined1 *)(param_2 + 0x90) = 1;
    *(float *)(param_2 + 0x50) = fVar14;
    *(undefined8 *)(param_2 + 0x48) = uVar21;
    *(undefined8 *)(param_2 + 0x40) = uVar20;
  }
  else {
    fVar14 = 0.0;
    fVar12 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar18 = 0.0;
    uVar20 = 0;
    uVar3 = 0;
    fVar19 = 0.0;
    if (*(char *)(param_2 + 0x90) != '\0') {
      uVar20 = *(undefined8 *)(param_2 + 0x48);
      uVar3 = *(undefined8 *)(param_2 + 0x40);
      fVar19 = *(float *)(param_2 + 0x50);
    }
    *(undefined1 *)(param_2 + 0x90) = 1;
    *(undefined4 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    lVar8 = *(long *)(param_2 + 8);
    lVar7 = *(long *)(param_2 + 0x10);
    if (lVar7 != lVar8) {
      fVar12 = 0.0;
      fVar16 = 0.0;
      fVar17 = 0.0;
      fVar18 = 0.0;
      lVar5 = 0;
      uVar6 = 0;
      fVar14 = 0.0;
      do {
        if (*(char *)(lVar8 + lVar5 + 0x50) != '\0') {
          fVar22 = *(float *)(lVar8 + lVar5 + 0x10);
          if (0.0 < fVar14) {
            if (0.0 < fVar22) {
              pfVar1 = (float *)(lVar8 + lVar5);
              fVar23 = fVar22 - fVar14;
              fVar24 = *pfVar1 - fVar12;
              fVar25 = pfVar1[1] - fVar16;
              fVar26 = pfVar1[2] - fVar17;
              fVar27 = pfVar1[3] - fVar18;
              auVar11._0_4_ = fVar24 * fVar24 + fVar25 * fVar25;
              auVar11._4_4_ = fVar26 * fVar26 + fVar27 * fVar27;
              auVar11._8_4_ = fVar24 * fVar24 + fVar25 * fVar25;
              auVar11._12_4_ = fVar26 * fVar26 + fVar27 * fVar27;
              auVar15 = NEON_ext(auVar11,auVar11,4,1);
              fVar9 = auVar15._0_4_ + auVar15._4_4_;
              if (fVar9 <= fVar23 * fVar23) {
                if (0.0 <= fVar23) {
                  fVar14 = fVar22;
                  fVar17 = pfVar1[2];
                  fVar18 = pfVar1[3];
                  fVar12 = *pfVar1;
                  fVar16 = pfVar1[1];
                }
              }
              else {
                fVar13 = SQRT(fVar9);
                if (NAN(fVar13)) {
                  fVar13 = sqrtf(fVar9);
                }
                lVar8 = *(long *)(param_2 + 8);
                lVar7 = *(long *)(param_2 + 0x10);
                fVar9 = (fVar23 + fVar13) / (fVar13 + fVar13);
                fVar14 = (fVar22 + fVar14 + fVar13) * 0.5;
                fVar22 = 1.0;
                if (fVar14 < 0.0) {
                  fVar22 = 0.0;
                }
                fVar23 = 1.0;
                if (fVar14 >= 0.0) {
                  fVar23 = 0.0;
                }
                fVar14 = fVar14 * fVar22 - fVar14 * fVar23;
                fVar17 = fVar17 + fVar26 * fVar9;
                fVar18 = fVar18 + fVar27 * fVar9;
                fVar12 = fVar12 + fVar24 * fVar9;
                fVar16 = fVar16 + fVar25 * fVar9;
              }
            }
            else {
            }
          }
          else {
            pfVar1 = (float *)(lVar8 + lVar5);
            fVar14 = fVar22;
            fVar17 = pfVar1[2];
            fVar18 = pfVar1[3];
            fVar12 = *pfVar1;
            fVar16 = pfVar1[1];
          }
          *(undefined1 *)(param_2 + 0x90) = 1;
          *(float *)(param_2 + 0x50) = fVar14;
          *(float *)(param_2 + 0x48) = fVar17;
          *(float *)(param_2 + 0x4c) = fVar18;
          *(float *)(param_2 + 0x40) = fVar12;
          *(float *)(param_2 + 0x44) = fVar16;
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x60;
      } while (uVar6 < (ulong)((lVar7 - lVar8 >> 5) * -0x5555555555555555));
    }
    if (*(char *)(param_2 + 0xa0) == '\0') {
      bVar2 = true;
      if ((fVar19 - fVar14 <= 1.1920929e-07) && (-1.1920929e-07 <= fVar19 - fVar14)) {
        fVar12 = (float)uVar3 - fVar12;
        fVar16 = (float)((ulong)uVar3 >> 0x20) - fVar16;
        fVar17 = (float)uVar20 - fVar17;
        fVar18 = (float)((ulong)uVar20 >> 0x20) - fVar18;
        fVar12 = fVar12 * fVar12;
        fVar16 = fVar16 * fVar16;
        fVar17 = fVar17 * fVar17;
        fVar18 = fVar18 * fVar18;
        auVar10._0_4_ = fVar12 + fVar16;
        auVar10._4_4_ = fVar17 + fVar18;
        auVar10._8_4_ = fVar12 + fVar16;
        auVar10._12_4_ = fVar17 + fVar18;
        auVar15 = NEON_ext(auVar10,auVar10,4,1);
        bVar2 = 1.1920929e-07 < auVar15._0_4_ + auVar15._4_4_;
      }
      *(bool *)(param_2 + 0xa0) = bVar2;
    }
  }
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  param_1[1] = *(undefined8 *)(param_2 + 0x48);
  param_1[3] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  param_1[2] = *(undefined8 *)(param_2 + 0x50);
  *param_1 = uVar3;
  return;
}


