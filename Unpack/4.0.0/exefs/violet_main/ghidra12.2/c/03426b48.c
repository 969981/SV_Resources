/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03426b48; name: FUN_03426b48
 */


void FUN_03426b48(float param_1,float param_2,float *param_3,float *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  float *pfVar6;
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
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  
  fVar40 = *param_4;
  fVar38 = param_4[1];
  fVar35 = param_4[2];
  fVar20 = param_4[3];
  fVar33 = param_4[4];
  fVar34 = param_4[5];
  param_3[0x1f] = 0.0;
  param_3[0x20] = 0.0;
  fVar12 = param_4[6];
  param_3[0x1b] = fVar12;
  fVar14 = param_4[7];
  param_3[0x1c] = fVar14;
  fVar16 = param_4[8];
  uVar7 = (int)param_3[0x1e] - 1;
  param_3[0x1d] = fVar16;
  fVar32 = fVar12;
  fVar11 = fVar16;
  fVar13 = fVar14;
  if ((int)uVar7 < 0) {
    fVar36 = 0.0;
  }
  else {
    fVar36 = 0.0;
    fVar15 = 0.0;
    pfVar9 = param_3 + (ulong)uVar7 + 0x25;
    pfVar8 = param_3 + (long)((int)param_3[0x1e] + -2) * 3 + 5;
    pfVar6 = param_3 + (ulong)uVar7 * 3 + 5;
    do {
      fVar25 = pfVar6[-2];
      fVar27 = pfVar6[-1];
      fVar30 = fVar25 - fVar32;
      fVar29 = *pfVar6;
      fVar26 = pfVar8[-2] - fVar25;
      fVar24 = *pfVar8 - fVar29;
      fVar28 = fVar27 - fVar13;
      fVar31 = fVar29 - fVar11;
      fVar23 = pfVar8[-1] - fVar27;
      fVar10 = SQRT(fVar30 * fVar30 + fVar28 * fVar28 + fVar31 * fVar31);
      fVar22 = SQRT(fVar26 * fVar26 + fVar23 * fVar23 + fVar24 * fVar24) * fVar10;
      if (0.001 < fVar22) {
        fVar36 = fVar10 + fVar36;
        fVar32 = (fVar26 * fVar30 + fVar28 * fVar23 + fVar31 * fVar24) / fVar22;
        bVar3 = false;
        bVar4 = false;
        if (-1.0 < fVar32) {
          bVar3 = false;
          bVar4 = true;
          if (!NAN(fVar32)) {
            bVar3 = fVar32 < 0.999998;
            bVar4 = false;
          }
        }
        param_3[0x20] = fVar36;
        if (bVar3 != bVar4) {
          fVar11 = (float)NEON_fminnm(fVar32,0x3f800000);
          if (fVar11 <= -1.0) {
            fVar11 = -1.0;
          }
          fVar11 = acosf(fVar11);
          *pfVar9 = fVar11;
          fVar22 = 1.0 / fVar22;
          fVar15 = (float)NEON_fminnm(fVar15 + fVar11 * 0.31830987,0x3f800000);
          fVar17 = fVar22 * (fVar26 * fVar31 - fVar24 * fVar30);
          fVar26 = fVar22 * (fVar23 * fVar30 - fVar26 * fVar28);
          fVar13 = 1.0;
          param_3[0x1f] = fVar15;
          fVar22 = fVar22 * (fVar24 * fVar28 - fVar23 * fVar31);
          fVar10 = SQRT(fVar22 * fVar22 + fVar17 * fVar17 + fVar26 * fVar26);
          fVar23 = 0.0;
          fVar11 = 0.0;
          if (0.0 < fVar10) {
            fVar23 = 1.0 / fVar10;
            fVar11 = fVar23 * fVar22;
            fVar13 = fVar23 * fVar17;
            fVar23 = fVar23 * fVar26;
          }
          fVar17 = 1.0 - fVar32;
          fVar37 = fVar30 + fVar40;
          fVar39 = fVar31 + fVar35;
          fVar26 = fVar23 * fVar11 * fVar17;
          fVar19 = fVar32 + fVar17 * fVar11 * fVar11;
          fVar24 = fVar11 * fVar17 * fVar13;
          fVar22 = fVar17 * fVar13 * fVar23;
          fVar18 = fVar26 + fVar13 * fVar10;
          fVar26 = fVar26 - fVar13 * fVar10;
          fVar21 = fVar32 + fVar17 * fVar13 * fVar13;
          fVar32 = fVar32 + fVar17 * fVar23 * fVar23;
          fVar13 = fVar22 - fVar11 * fVar10;
          fVar22 = fVar22 + fVar11 * fVar10;
          fVar11 = fVar23 * fVar10 + fVar24;
          fVar24 = fVar24 - fVar23 * fVar10;
          fVar10 = fVar30 + fVar20;
          fVar23 = fVar28 + fVar33;
          fVar34 = fVar31 + fVar34;
          fVar38 = fVar28 + fVar38;
          fVar20 = fVar19 * fVar30 + fVar28 * fVar24 + fVar31 * fVar18;
          fVar40 = (fVar19 * fVar37 + fVar38 * fVar24 + fVar39 * fVar18) - fVar20;
          fVar33 = fVar11 * fVar30 + fVar28 * fVar21 + fVar31 * fVar13;
          fVar28 = fVar26 * fVar30 + fVar28 * fVar22 + fVar31 * fVar32;
          fVar35 = (fVar26 * fVar37 + fVar38 * fVar22 + fVar39 * fVar32) - fVar28;
          fVar38 = (fVar11 * fVar37 + fVar38 * fVar21 + fVar39 * fVar13) - fVar33;
          fVar20 = (fVar19 * fVar10 + fVar23 * fVar24 + fVar34 * fVar18) - fVar20;
          fVar33 = (fVar11 * fVar10 + fVar23 * fVar21 + fVar34 * fVar13) - fVar33;
          fVar34 = (fVar26 * fVar10 + fVar23 * fVar22 + fVar34 * fVar32) - fVar28;
        }
        fVar32 = fVar25;
        fVar11 = fVar29;
        fVar13 = fVar27;
      }
      uVar7 = uVar7 - 1;
      pfVar8 = pfVar8 + -3;
      pfVar6 = pfVar6 + -3;
      pfVar9 = pfVar9 + -1;
    } while (-1 < (int)uVar7);
  }
  fVar27 = *param_3;
  fVar29 = param_3[1];
  fVar32 = fVar32 - fVar27;
  fVar25 = param_3[2];
  fVar13 = fVar13 - fVar29;
  fVar11 = fVar11 - fVar25;
  fVar15 = SQRT(fVar32 * fVar32 + fVar13 * fVar13 + fVar11 * fVar11);
  fVar36 = fVar15 + fVar36;
  param_3[0x20] = fVar36;
  if (fVar15 <= 0.0) {
    uVar1 = *(undefined8 *)param_4;
    uVar2 = *(undefined8 *)(param_4 + 2);
    uVar5 = *(undefined8 *)(param_4 + 4);
    param_3[0x54] = fVar12;
    *(undefined8 *)(param_3 + 0x50) = uVar2;
    *(undefined8 *)(param_3 + 0x52) = uVar5;
    *(undefined8 *)(param_3 + 0x4e) = uVar1;
    param_3[0x55] = fVar14;
    param_3[0x56] = fVar16;
    if (0.0 < param_1) {
      param_3[0x22] = 100.0;
    }
  }
  else {
    if (PTR_DAT_047e6e68[0x1a] == '\0') {
      fVar12 = fVar12 - fVar27;
      fVar14 = fVar14 - fVar29;
      fVar16 = fVar16 - fVar25;
      fVar36 = SQRT(fVar12 * fVar12 + fVar14 * fVar14 + fVar16 * fVar16);
      fVar15 = 1.0 / fVar36;
      fVar32 = fVar15 * fVar12;
      fVar13 = fVar15 * fVar14;
      fVar15 = fVar15 * fVar16;
      param_3[0x20] = fVar36;
    }
    else {
      fVar15 = 1.0 / fVar15;
      fVar32 = fVar15 * fVar32;
      fVar13 = fVar15 * fVar13;
      fVar15 = fVar15 * fVar11;
    }
    if (0.0 < param_1) {
      if (fVar36 <= param_1) {
        if (fVar36 <= param_2) {
          fVar36 = 0.0;
          param_3[0x22] = 100.0;
        }
        else {
          fVar36 = fVar36 - param_2;
          param_3[0x22] = (fVar36 * -50.0) / (param_1 - param_2) + 100.0;
        }
      }
      else {
        fVar12 = asinf(param_1 / fVar36);
        param_3[0x22] = fVar12 * 31.830988;
        fVar36 = fVar36 - param_2;
      }
      param_3[0x20] = fVar36;
    }
    param_3[0x4e] = fVar40;
    param_3[0x4f] = fVar38;
    param_3[0x50] = fVar35;
    param_3[0x51] = fVar20;
    param_3[0x56] = fVar25 + fVar15 * fVar36;
    param_3[0x54] = fVar27 + fVar32 * fVar36;
    param_3[0x55] = fVar29 + fVar13 * fVar36;
    param_3[0x52] = fVar33;
    param_3[0x53] = fVar34;
  }
  return;
}


