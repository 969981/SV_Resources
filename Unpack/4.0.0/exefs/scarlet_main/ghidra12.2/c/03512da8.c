/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03512da8; name: FUN_03512da8
 */


void FUN_03512da8(long *param_1,long param_2,long param_3,long param_4,uint param_5,uint param_6)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  float *pfVar15;
  float *pfVar16;
  ulong uVar17;
  long lVar18;
  float *pfVar19;
  float fVar20;
  undefined8 uVar21;
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
  
  if (param_5 != 0) {
    uVar12 = (uint)*(byte *)(param_1 + 1);
    uVar5 = 0;
    do {
      pfVar19 = (float *)(param_2 + uVar5 * 8);
      fVar20 = *pfVar19;
      if (uVar12 != 0) {
        fVar22 = pfVar19[1];
        uVar6 = 0;
        puVar7 = *(undefined8 **)(param_4 + uVar5 * 8);
        do {
          puVar9 = (undefined8 *)(*param_1 + uVar6 * *(ushort *)(param_1 + 2) * 4);
          uVar17 = (ulong)(*(ushort *)(param_1 + 2) >> 2);
          puVar1 = puVar9 + uVar17 * 2;
          if (puVar9 < puVar1) {
            uVar17 = uVar17 * 0x10 - 1;
            uVar12 = ((uint)(uVar17 >> 4) & 0xfffffff) + 1;
            if ((uVar12 & 3) == 0) {
              puVar14 = puVar7;
            }
            else {
              lVar18 = -((ulong)uVar12 & 3);
              puVar8 = puVar9;
              puVar13 = puVar7;
              do {
                puVar14 = puVar13 + 2;
                uVar21 = *puVar13;
                bVar4 = lVar18 != -1;
                lVar18 = lVar18 + 1;
                puVar9 = puVar8 + 2;
                puVar8[1] = CONCAT44((fVar20 + fVar22 * (float)((ulong)puVar13[1] >> 0x20)) *
                                     (float)((ulong)puVar8[1] >> 0x20),
                                     (fVar20 + fVar22 * (float)puVar13[1]) * (float)puVar8[1]);
                *puVar8 = CONCAT44((fVar20 + fVar22 * (float)((ulong)uVar21 >> 0x20)) *
                                   (float)((ulong)*puVar8 >> 0x20),
                                   (fVar20 + fVar22 * (float)uVar21) * (float)*puVar8);
                puVar8 = puVar9;
                puVar13 = puVar14;
              } while (bVar4);
            }
            if (0x2f < uVar17) {
              do {
                uVar21 = *puVar14;
                puVar9[1] = CONCAT44((fVar20 + fVar22 * (float)((ulong)puVar14[1] >> 0x20)) *
                                     (float)((ulong)puVar9[1] >> 0x20),
                                     (fVar20 + fVar22 * (float)puVar14[1]) * (float)puVar9[1]);
                *puVar9 = CONCAT44((fVar20 + fVar22 * (float)((ulong)uVar21 >> 0x20)) *
                                   (float)((ulong)*puVar9 >> 0x20),
                                   (fVar20 + fVar22 * (float)uVar21) * (float)*puVar9);
                uVar21 = puVar14[2];
                puVar9[3] = CONCAT44((fVar20 + fVar22 * (float)((ulong)puVar14[3] >> 0x20)) *
                                     (float)((ulong)puVar9[3] >> 0x20),
                                     (fVar20 + fVar22 * (float)puVar14[3]) * (float)puVar9[3]);
                puVar9[2] = CONCAT44((fVar20 + fVar22 * (float)((ulong)uVar21 >> 0x20)) *
                                     (float)((ulong)puVar9[2] >> 0x20),
                                     (fVar20 + fVar22 * (float)uVar21) * (float)puVar9[2]);
                uVar21 = puVar14[4];
                puVar9[5] = CONCAT44((fVar20 + fVar22 * (float)((ulong)puVar14[5] >> 0x20)) *
                                     (float)((ulong)puVar9[5] >> 0x20),
                                     (fVar20 + fVar22 * (float)puVar14[5]) * (float)puVar9[5]);
                puVar9[4] = CONCAT44((fVar20 + fVar22 * (float)((ulong)uVar21 >> 0x20)) *
                                     (float)((ulong)puVar9[4] >> 0x20),
                                     (fVar20 + fVar22 * (float)uVar21) * (float)puVar9[4]);
                puVar8 = puVar14 + 7;
                uVar21 = puVar14[6];
                puVar14 = puVar14 + 8;
                puVar9[7] = CONCAT44((fVar20 + fVar22 * (float)((ulong)*puVar8 >> 0x20)) *
                                     (float)((ulong)puVar9[7] >> 0x20),
                                     (fVar20 + fVar22 * (float)*puVar8) * (float)puVar9[7]);
                puVar9[6] = CONCAT44((fVar20 + fVar22 * (float)((ulong)uVar21 >> 0x20)) *
                                     (float)((ulong)puVar9[6] >> 0x20),
                                     (fVar20 + fVar22 * (float)uVar21) * (float)puVar9[6]);
                puVar9 = puVar9 + 8;
              } while (puVar9 < puVar1);
            }
            uVar12 = (uint)*(byte *)(param_1 + 1);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar12);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != param_5);
  }
  if (param_6 != 0) {
    uVar5 = 0;
    do {
      pfVar19 = (float *)(param_3 + uVar5 * 8);
      fVar20 = *pfVar19;
      fVar22 = pfVar19[1];
      bVar2 = *(byte *)(param_1 + 1);
      uVar6 = (ulong)bVar2;
      uVar3 = *(ushort *)((long)param_1 + 0x12);
      uVar17 = (ulong)uVar3;
      if (fVar22 == fVar20) {
        if ((bVar2 != 0) && (fVar20 != 1.0)) {
          if (uVar3 < 4) {
            uVar11 = uVar17 * 4 - 1;
            uVar12 = ((uint)(uVar11 >> 2) & 0x3fffffff) + 1;
            uVar10 = 0;
            do {
              pfVar19 = (float *)(*param_1 + uVar10 * *(ushort *)(param_1 + 2) * 4);
              pfVar15 = pfVar19 + uVar17;
              if (pfVar19 < pfVar15) {
                if ((uVar12 & 7) != 0) {
                  pfVar16 = pfVar19;
                  lVar18 = -((ulong)uVar12 & 7);
                  do {
                    bVar4 = lVar18 != -1;
                    lVar18 = lVar18 + 1;
                    pfVar19 = pfVar16 + 1;
                    *pfVar16 = *pfVar16 * fVar20;
                    pfVar16 = pfVar19;
                  } while (bVar4);
                }
                if (0x1b < uVar11) {
                  do {
                    *pfVar19 = *pfVar19 * fVar20;
                    pfVar19[1] = pfVar19[1] * fVar20;
                    pfVar19[2] = pfVar19[2] * fVar20;
                    pfVar19[3] = pfVar19[3] * fVar20;
                    pfVar19[4] = pfVar19[4] * fVar20;
                    pfVar19[5] = pfVar19[5] * fVar20;
                    pfVar19[6] = pfVar19[6] * fVar20;
                    pfVar19[7] = pfVar19[7] * fVar20;
                    pfVar19 = pfVar19 + 8;
                  } while (pfVar19 < pfVar15);
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 != uVar6);
          }
          else if ((int)(uVar17 & 0xfffc) == 0) {
            uVar11 = uVar17 * 4 - 1;
            uVar12 = ((uint)(uVar11 >> 2) & 0x3fffffff) + 1;
            uVar10 = 0;
            do {
              pfVar19 = (float *)(*param_1 + uVar10 * *(ushort *)(param_1 + 2) * 4);
              pfVar15 = pfVar19 + uVar17;
              if (pfVar19 < pfVar15) {
                if ((uVar12 & 7) != 0) {
                  pfVar16 = pfVar19;
                  lVar18 = -((ulong)uVar12 & 7);
                  do {
                    bVar4 = lVar18 != -1;
                    lVar18 = lVar18 + 1;
                    pfVar19 = pfVar16 + 1;
                    *pfVar16 = *pfVar16 * fVar20;
                    pfVar16 = pfVar19;
                  } while (bVar4);
                }
                if (0x1b < uVar11) {
                  do {
                    *pfVar19 = *pfVar19 * fVar20;
                    pfVar19[1] = pfVar19[1] * fVar20;
                    pfVar19[2] = pfVar19[2] * fVar20;
                    pfVar19[3] = pfVar19[3] * fVar20;
                    pfVar19[4] = pfVar19[4] * fVar20;
                    pfVar19[5] = pfVar19[5] * fVar20;
                    pfVar19[6] = pfVar19[6] * fVar20;
                    pfVar19[7] = pfVar19[7] * fVar20;
                    pfVar19 = pfVar19 + 8;
                  } while (pfVar19 < pfVar15);
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 != uVar6);
          }
          else {
            uVar10 = 0;
            do {
              pfVar19 = (float *)(*param_1 + uVar10 * *(ushort *)(param_1 + 2) * 4);
              pfVar15 = pfVar19;
              do {
                pfVar16 = pfVar15 + 4;
                *(ulong *)(pfVar15 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20) * fVar20,
                              (float)*(undefined8 *)(pfVar15 + 2) * fVar20);
                *(ulong *)pfVar15 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar15 >> 0x20) * fVar20,
                              (float)*(undefined8 *)pfVar15 * fVar20);
                pfVar15 = pfVar16;
              } while (pfVar16 < pfVar19 + (uVar17 & 0xfffc));
              for (; pfVar16 < pfVar19 + uVar17; pfVar16 = pfVar16 + 1) {
                *pfVar16 = *pfVar16 * fVar20;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 != uVar6);
          }
        }
      }
      else if (bVar2 != 0) {
        fVar22 = fVar22 - fVar20;
        fVar23 = fVar22 / (float)uVar17;
        if (uVar3 < 4) {
          uVar11 = uVar17 * 4 - 1;
          uVar12 = ((uint)(uVar11 >> 2) & 0x3fffffff) + 1;
          uVar10 = 0;
          do {
            pfVar19 = (float *)(*param_1 + uVar10 * *(ushort *)(param_1 + 2) * 4);
            pfVar15 = pfVar19 + uVar17;
            if (pfVar19 < pfVar15) {
              fVar22 = fVar20;
              if ((uVar12 & 3) != 0) {
                pfVar16 = pfVar19;
                lVar18 = -((ulong)uVar12 & 3);
                do {
                  fVar25 = *pfVar16 * fVar22;
                  fVar22 = fVar22 + fVar23;
                  pfVar19 = pfVar16 + 1;
                  *pfVar16 = fVar25;
                  bVar4 = lVar18 != -1;
                  lVar18 = lVar18 + 1;
                  pfVar16 = pfVar19;
                } while (bVar4);
              }
              if (0xb < uVar11) {
                do {
                  fVar25 = fVar22 + fVar23 + fVar23;
                  *pfVar19 = *pfVar19 * fVar22;
                  pfVar19[1] = pfVar19[1] * (fVar22 + fVar23);
                  fVar24 = fVar25 + fVar23;
                  fVar22 = fVar24 + fVar23;
                  pfVar19[2] = pfVar19[2] * fVar25;
                  pfVar19[3] = pfVar19[3] * fVar24;
                  pfVar19 = pfVar19 + 4;
                } while (pfVar19 < pfVar15);
              }
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 != uVar6);
        }
        else {
          uVar10 = uVar17 & 0xfffc;
          if ((int)uVar10 == 0) {
            uVar11 = uVar17 * 4 - 1;
            uVar12 = ((uint)(uVar11 >> 2) & 0x3fffffff) + 1;
            uVar10 = 0;
            do {
              pfVar19 = (float *)(*param_1 + uVar10 * *(ushort *)(param_1 + 2) * 4);
              pfVar15 = pfVar19 + uVar17;
              if (pfVar19 < pfVar15) {
                fVar22 = fVar20;
                if ((uVar12 & 3) != 0) {
                  pfVar16 = pfVar19;
                  lVar18 = -((ulong)uVar12 & 3);
                  do {
                    fVar25 = *pfVar16 * fVar22;
                    fVar22 = fVar22 + fVar23;
                    pfVar19 = pfVar16 + 1;
                    *pfVar16 = fVar25;
                    bVar4 = lVar18 != -1;
                    lVar18 = lVar18 + 1;
                    pfVar16 = pfVar19;
                  } while (bVar4);
                }
                if (0xb < uVar11) {
                  do {
                    fVar25 = fVar22 + fVar23 + fVar23;
                    *pfVar19 = *pfVar19 * fVar22;
                    pfVar19[1] = pfVar19[1] * (fVar22 + fVar23);
                    fVar24 = fVar25 + fVar23;
                    fVar22 = fVar24 + fVar23;
                    pfVar19[2] = pfVar19[2] * fVar25;
                    pfVar19[3] = pfVar19[3] * fVar24;
                    pfVar19 = pfVar19 + 4;
                  } while (pfVar19 < pfVar15);
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 != uVar6);
          }
          else {
            fVar22 = fVar22 / (float)uVar10;
            fVar25 = fVar22 * 4.0;
            fVar24 = fVar22 + fVar20 + fVar22;
            uVar11 = 0;
            do {
              pfVar19 = (float *)(*param_1 + uVar11 * *(ushort *)(param_1 + 2) * 4);
              pfVar15 = pfVar19;
              fVar26 = fVar20;
              fVar27 = fVar22 + fVar20;
              fVar28 = fVar24;
              fVar29 = fVar24 + fVar22;
              do {
                fVar30 = (float)*(undefined8 *)pfVar15 * fVar26;
                fVar31 = (float)((ulong)*(undefined8 *)pfVar15 >> 0x20) * fVar27;
                fVar32 = (float)*(undefined8 *)(pfVar15 + 2) * fVar28;
                fVar33 = (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20) * fVar29;
                fVar26 = fVar26 + fVar25;
                fVar27 = fVar27 + fVar25;
                fVar28 = fVar28 + fVar25;
                fVar29 = fVar29 + fVar25;
                pfVar16 = pfVar15 + 4;
                *(ulong *)(pfVar15 + 2) = CONCAT44(fVar33,fVar32);
                *(ulong *)pfVar15 = CONCAT44(fVar31,fVar30);
                pfVar15 = pfVar16;
              } while (pfVar16 < pfVar19 + uVar10);
              if (pfVar16 < pfVar19 + uVar17) {
                fVar26 = fVar20;
                do {
                  fVar27 = *pfVar16 * fVar26;
                  fVar26 = fVar26 + fVar23;
                  pfVar15 = pfVar16 + 1;
                  *pfVar16 = fVar27;
                  pfVar16 = pfVar15;
                } while (pfVar15 < pfVar19 + uVar17);
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 != uVar6);
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != param_6);
  }
  return;
}


