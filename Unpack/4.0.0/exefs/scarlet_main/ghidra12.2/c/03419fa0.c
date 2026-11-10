/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03419fa0; name: FUN_03419fa0
 */


void FUN_03419fa0(float *param_1,int *param_2)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ushort uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
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
  
  *param_2 = 0;
  if ((*(char *)(param_1 + 0x12) == '\0') || (*(char *)(param_1 + 0x18) == '\0')) {
    lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0xc) + 0x38) + 0x30);
    if (lVar12 != 0) {
      do {
        uVar5 = *(ushort *)(lVar12 + 0x36);
        if (uVar5 != 0) {
          lVar11 = 0;
          uVar13 = 0;
          do {
            lVar6 = *(long *)(lVar12 + 0x28);
            if ((long)param_1 - lVar6 != lVar11) {
              *param_2 = *param_2 + 1;
              fVar30 = param_1[6];
              fVar31 = param_1[7];
              pfVar1 = (float *)(lVar6 + lVar11);
              fVar34 = param_1[10];
              fVar35 = param_1[0xb];
              fVar32 = param_1[8];
              fVar33 = param_1[9];
              fVar14 = pfVar1[6];
              fVar15 = pfVar1[7];
              fVar16 = pfVar1[8];
              fVar17 = pfVar1[9];
              fVar18 = pfVar1[10];
              fVar19 = pfVar1[0xb];
              fVar27 = pfVar1[0x1e];
              fVar20 = (fVar33 + fVar30 + fVar14 + fVar17) * 0.001;
              fVar29 = param_1[2];
              fVar26 = *param_1;
              fVar28 = param_1[1];
              fVar21 = (fVar34 + fVar31 + fVar15 + fVar18) * 0.001;
              fVar25 = (fVar35 + fVar32 + fVar16 + fVar19) * 0.001;
              fVar36 = *pfVar1 + fVar20;
              fVar37 = pfVar1[1] + fVar21;
              fVar22 = fVar36 - fVar26;
              fVar38 = pfVar1[2] + fVar25;
              fVar23 = fVar37 - fVar28;
              fVar24 = fVar38 - fVar29;
              fVar39 = (pfVar1[5] * fVar27 + fVar38) - fVar29;
              fVar38 = (pfVar1[3] * fVar27 + fVar36) - fVar26;
              fVar36 = fVar22 * fVar33 + fVar34 * fVar23 + fVar35 * fVar24;
              fVar22 = fVar22 * fVar30 + fVar31 * fVar23 + fVar32 * fVar24;
              fVar24 = (pfVar1[4] * fVar27 + fVar37) - fVar28;
              fVar23 = fVar38 * fVar30 + fVar31 * fVar24 + fVar32 * fVar39;
              bVar2 = false;
              bVar3 = true;
              bVar4 = false;
              if (0.0001 < fVar36) {
                bVar2 = false;
                bVar3 = false;
                bVar4 = true;
                if (!NAN(fVar22)) {
                  bVar2 = fVar22 < 0.0001;
                  bVar3 = fVar22 == 0.0001;
                  bVar4 = false;
                }
              }
              fVar24 = fVar38 * fVar33 + fVar34 * fVar24 + fVar35 * fVar39;
              uVar7 = 0xfffffffe;
              if (!bVar3 && bVar2 == bVar4) {
                uVar7 = 0xffffffff;
              }
              bVar2 = false;
              bVar3 = true;
              bVar4 = false;
              if (fVar22 < 0.0001) {
                bVar2 = false;
                bVar3 = false;
                bVar4 = true;
                if (!NAN(fVar36)) {
                  bVar2 = fVar36 < -0.0001;
                  bVar3 = fVar36 == -0.0001;
                  bVar4 = false;
                }
              }
              uVar8 = 1;
              if (bVar3 || bVar2 != bVar4) {
                uVar8 = uVar7;
              }
              bVar2 = false;
              bVar3 = false;
              if (-0.0001 < fVar22) {
                bVar2 = false;
                bVar3 = true;
                if (!NAN(fVar36)) {
                  bVar2 = fVar36 < 0.0001;
                  bVar3 = false;
                }
              }
              uVar7 = 0;
              if (bVar2 == bVar3) {
                uVar7 = uVar8;
              }
              bVar2 = false;
              bVar3 = false;
              if (-0.0001 < fVar23) {
                bVar2 = false;
                bVar3 = true;
                if (!NAN(fVar24)) {
                  bVar2 = fVar24 < 0.0001;
                  bVar3 = false;
                }
              }
              if (bVar2 == bVar3) {
                bVar2 = false;
                bVar3 = true;
                bVar4 = false;
                if (fVar23 < 0.0001) {
                  bVar2 = false;
                  bVar3 = false;
                  bVar4 = true;
                  if (!NAN(fVar24)) {
                    bVar2 = fVar24 < -0.0001;
                    bVar3 = fVar24 == -0.0001;
                    bVar4 = false;
                  }
                }
                if (bVar3 || bVar2 != bVar4) {
                  bVar2 = false;
                  bVar3 = true;
                  bVar4 = false;
                  if (0.0001 < fVar24) {
                    bVar2 = false;
                    bVar3 = false;
                    bVar4 = true;
                    if (!NAN(fVar23)) {
                      bVar2 = fVar23 < 0.0001;
                      bVar3 = fVar23 == 0.0001;
                      bVar4 = false;
                    }
                  }
                  uVar8 = 0xfffffffe;
                  if (!bVar3 && bVar2 == bVar4) {
                    uVar8 = 0xffffffff;
                  }
                }
                else {
                  uVar8 = 1;
                }
              }
              else {
                uVar8 = 0;
              }
              if (-1 < (int)(uVar8 & uVar7)) {
                fVar26 = (fVar20 - *pfVar1) + fVar26;
                fVar28 = (fVar21 - pfVar1[1]) + fVar28;
                fVar36 = param_1[0x1e];
                fVar29 = (fVar25 - pfVar1[2]) + fVar29;
                fVar20 = param_1[3] * fVar36 + fVar26;
                fVar21 = param_1[4] * fVar36 + fVar28;
                fVar22 = fVar26 * fVar17 + fVar18 * fVar28 + fVar19 * fVar29;
                fVar26 = fVar26 * fVar14 + fVar15 * fVar28 + fVar16 * fVar29;
                fVar29 = param_1[5] * fVar36 + fVar29;
                fVar14 = fVar20 * fVar14 + fVar15 * fVar21 + fVar16 * fVar29;
                bVar2 = false;
                bVar3 = true;
                bVar4 = false;
                if (0.0001 < fVar22) {
                  bVar2 = false;
                  bVar3 = false;
                  bVar4 = true;
                  if (!NAN(fVar26)) {
                    bVar2 = fVar26 < 0.0001;
                    bVar3 = fVar26 == 0.0001;
                    bVar4 = false;
                  }
                }
                fVar15 = fVar20 * fVar17 + fVar18 * fVar21 + fVar19 * fVar29;
                uVar9 = 0xfffffffe;
                if (!bVar3 && bVar2 == bVar4) {
                  uVar9 = 0xffffffff;
                }
                bVar2 = false;
                bVar3 = true;
                bVar4 = false;
                if (fVar26 < 0.0001) {
                  bVar2 = false;
                  bVar3 = false;
                  bVar4 = true;
                  if (!NAN(fVar22)) {
                    bVar2 = fVar22 < -0.0001;
                    bVar3 = fVar22 == -0.0001;
                    bVar4 = false;
                  }
                }
                uVar10 = 1;
                if (bVar3 || bVar2 != bVar4) {
                  uVar10 = uVar9;
                }
                bVar2 = false;
                bVar3 = false;
                if (-0.0001 < fVar26) {
                  bVar2 = false;
                  bVar3 = true;
                  if (!NAN(fVar22)) {
                    bVar2 = fVar22 < 0.0001;
                    bVar3 = false;
                  }
                }
                uVar9 = 0;
                if (bVar2 == bVar3) {
                  uVar9 = uVar10;
                }
                bVar2 = false;
                bVar3 = false;
                if (-0.0001 < fVar14) {
                  bVar2 = false;
                  bVar3 = true;
                  if (!NAN(fVar15)) {
                    bVar2 = fVar15 < 0.0001;
                    bVar3 = false;
                  }
                }
                if (bVar2 == bVar3) {
                  bVar2 = false;
                  bVar3 = true;
                  bVar4 = false;
                  if (fVar14 < 0.0001) {
                    bVar2 = false;
                    bVar3 = false;
                    bVar4 = true;
                    if (!NAN(fVar15)) {
                      bVar2 = fVar15 < -0.0001;
                      bVar3 = fVar15 == -0.0001;
                      bVar4 = false;
                    }
                  }
                  if (bVar3 || bVar2 != bVar4) {
                    bVar2 = false;
                    bVar3 = true;
                    bVar4 = false;
                    if (0.0001 < fVar15) {
                      bVar2 = false;
                      bVar3 = false;
                      bVar4 = true;
                      if (!NAN(fVar14)) {
                        bVar2 = fVar14 < 0.0001;
                        bVar3 = fVar14 == 0.0001;
                        bVar4 = false;
                      }
                    }
                    uVar10 = 0xfffffffe;
                    if (!bVar3 && bVar2 == bVar4) {
                      uVar10 = 0xffffffff;
                    }
                  }
                  else {
                    uVar10 = 1;
                  }
                }
                else {
                  uVar10 = 0;
                }
                if (-1 < (int)(uVar10 & uVar9)) {
                  if (((uVar7 & 0xff) == 0) || ((uVar8 & 0xff) == 0)) {
                    FUN_0341a450(param_1,param_1 + 0xe,pfVar1);
                  }
                  if (((uVar7 & 0xff) == 1) || ((uVar8 & 0xff) == 1)) {
                    FUN_0341a450(param_1,param_1 + 0x14,pfVar1);
                  }
                }
              }
              uVar5 = *(ushort *)(lVar12 + 0x36);
            }
            uVar13 = uVar13 + 1;
            lVar11 = lVar11 + 0x80;
          } while (uVar13 < uVar5);
        }
        lVar12 = *(long *)(lVar12 + 0x48);
      } while (lVar12 != 0);
    }
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}


