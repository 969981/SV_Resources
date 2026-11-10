/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034d62c0; name: FUN_034d62c0
 */


void FUN_034d62c0(float param_1,float param_2,float param_3,uint param_4,ulong param_5,
                 float *param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float *pfVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  float *pfVar14;
  ulong uVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar18;
  float *pfVar19;
  ulong uVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_a0;
  undefined8 local_98;
  
  fVar22 = (float)NEON_fminnm(param_1 * 0.5 + 0.5,0x3f800000);
  if (fVar22 <= 0.0) {
    fVar22 = 0.0;
  }
  fVar23 = (float)NEON_fminnm(param_2 * 0.5 + 0.5,0x3f800000);
  if (fVar23 <= 0.0) {
    fVar23 = 0.0;
  }
  uVar16 = (uint)param_5;
  if ((param_4 - (param_4 >> 0xf & 1) & 0xff) == 1) {
    if ((param_5 & 0xff) != 0) {
      memset(param_6,0,(ulong)((uVar16 & 0xff) << 2));
    }
    uVar13 = uVar16 >> 0xc & 0x637;
    if (uVar13 < 0x607) {
      if (uVar13 == 0) goto LAB_034d6640;
      if (uVar13 == 7) {
        if (fVar22 <= 0.5) {
          fVar23 = fVar22 - fVar22 * param_3;
        }
        else {
          fVar23 = fVar22 + param_3 * (fVar22 + -1.0);
          fVar22 = 1.0 - fVar22;
        }
        param_3 = param_3 * (fVar22 + fVar22);
        *param_6 = SQRT(1.0 - (fVar23 + param_3));
        param_6[1] = SQRT(fVar23);
        param_6[2] = SQRT(param_3);
        return;
      }
      if (uVar13 == 0x603) {
        *param_6 = SQRT((1.0 - fVar22) * fVar23);
        param_6[1] = SQRT(fVar23 * fVar22);
        param_6[2] = SQRT((1.0 - fVar23) * (1.0 - fVar22));
        param_6[3] = SQRT((1.0 - fVar23) * fVar22);
        return;
      }
    }
    else {
      if (uVar13 == 0x607) {
        if (fVar22 <= 0.5) {
          fVar24 = fVar22 - fVar22 * param_3;
          fVar26 = fVar22;
        }
        else {
          fVar24 = fVar22 + param_3 * (fVar22 + -1.0);
          fVar26 = 1.0 - fVar22;
        }
        param_3 = param_3 * (fVar26 + fVar26);
        *param_6 = SQRT(fVar23 - fVar23 * (fVar24 + param_3));
        param_6[1] = SQRT(fVar24 * fVar23);
        param_6[2] = SQRT(param_3 * fVar23);
        param_6[3] = SQRT((1.0 - fVar22) * (1.0 - fVar23));
        param_6[4] = SQRT((1.0 - fVar23) * fVar22);
        return;
      }
      if (uVar13 == 0x633) {
        fVar24 = fVar23 * 1.3333334 + -0.33333334;
        fVar26 = 1.0 - fVar23 * 1.3333334;
        fVar23 = 1.0 - fVar22;
        if (fVar24 <= 0.0) {
          fVar24 = 0.0;
        }
        if (fVar26 <= 0.0) {
          fVar26 = 0.0;
        }
        *param_6 = SQRT(fVar24 * fVar23);
        param_6[1] = SQRT(fVar24 * fVar22);
        fVar24 = 1.0 - (fVar26 + fVar24);
        param_6[2] = SQRT(fVar26 * fVar23);
        param_6[3] = SQRT(fVar26 * fVar22);
        param_6[4] = SQRT(fVar24 * fVar23);
        param_6[5] = SQRT(fVar24 * fVar22);
        return;
      }
      if (uVar13 == 0x637) {
        if (fVar22 <= 0.5) {
          fVar24 = fVar22 - fVar22 * param_3;
          fVar26 = fVar22;
        }
        else {
          fVar24 = fVar22 + param_3 * (fVar22 + -1.0);
          fVar26 = 1.0 - fVar22;
        }
        param_3 = param_3 * (fVar26 + fVar26);
        fVar26 = fVar23 * 1.3333334 + -0.33333334;
        fVar23 = 1.0 - fVar23 * 1.3333334;
        if (fVar26 <= 0.0) {
          fVar26 = 0.0;
        }
        if (fVar23 <= 0.0) {
          fVar23 = 0.0;
        }
        *param_6 = SQRT(fVar26 - fVar26 * (fVar24 + param_3));
        param_6[1] = SQRT(fVar24 * fVar26);
        fVar24 = 1.0 - (fVar23 + fVar26);
        param_6[2] = SQRT(param_3 * fVar26);
        param_6[3] = SQRT((1.0 - fVar22) * fVar23);
        param_6[4] = SQRT(fVar23 * fVar22);
        param_6[5] = SQRT((1.0 - fVar22) * fVar24);
        param_6[6] = SQRT(fVar24 * fVar22);
        return;
      }
    }
    *param_6 = SQRT(1.0 - fVar22);
    param_6[1] = SQRT(fVar22);
    return;
  }
  uVar13 = param_4 >> 0xc & 0x637;
  if (((param_4 >> 0x10 ^ param_4 >> 0x15) & 1) != 0) {
    uVar13 = param_4 >> 0xc & 7 | 0x600;
  }
  if (uVar13 == 0) {
LAB_034d6640:
    uVar13 = (uVar16 & 0xff) + 3 & 0x1fc;
    iVar18 = uVar13 * (param_4 & 0xff);
    if (iVar18 != 0) {
      memset(param_6,0,(ulong)(uint)(iVar18 * 4));
    }
    if ((param_4 >> 0xf & 1) == 0) {
      return;
    }
    iVar18 = (int)(param_5 & 0xff);
    if (iVar18 != 0) {
      memset(param_6 + uVar13 * ((param_4 & 0xff) - 1),0,(ulong)(uint)(iVar18 << 2));
    }
    if ((uVar16 >> 0xf & 1) == 0) {
      return;
    }
    (param_6 + uVar13 * ((param_4 & 0xff) - 1))[(param_5 & 0xff) - 1] = 1.0;
    return;
  }
  uVar5 = uVar13 | uVar16 >> 0xc & 0x637;
  uVar11 = uVar13 - (uVar13 >> 1 & 0x55555555);
  uVar11 = (uVar11 & 0x33333333) + (uVar11 >> 2 & 0x33333333);
  uVar2 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
  uVar11 = uVar5 - (uVar5 >> 1 & 0x55555555);
  uVar11 = (uVar11 & 0x33333333) + (uVar11 >> 2 & 0x33333333);
  uVar3 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
  uVar21 = (ulong)uVar3;
  uVar4 = uVar3 + 3 >> 2;
  puVar17 = (undefined4 *)((long)&local_a0 - (ulong)(uVar2 * uVar4 * 0x10));
  uVar11 = uVar3 + 3 & 0x1c;
  uVar20 = (ulong)uVar11;
  local_a0 = (ulong)uVar2;
  local_98 = puVar17;
  if (uVar11 * uVar2 != 0) {
    memset(puVar17,0,(ulong)(uVar11 * uVar2 * 4));
  }
  pfVar19 = (float *)((long)puVar17 - (ulong)(uVar4 << 4));
  if (uVar11 != 0) {
    memset(pfVar19,0,(ulong)(uVar11 << 2));
  }
  puVar7 = local_98;
  uVar2 = uVar5 >> 2 & 1;
  if (0x606 < uVar13) {
    if (uVar13 == 0x607) {
      *puVar17 = 0x3f800000;
      puVar7[uVar20 + 1] = 0x3f800000;
      puVar7[(ulong)(uVar11 << 1) + 2] = 0x3f800000;
      puVar7[(ulong)(uVar11 * 3) + (ulong)(uVar2 | 2)] = 0x3f800000;
      puVar7[(ulong)(uVar11 << 2) + (ulong)(uVar2 + 3)] = 0x3f800000;
      if (((uVar5 ^ 0xffffffff) & 0x633) != 0) {
        fVar26 = fVar23 * -1.2 + 1.0;
        if (0.5 <= fVar23) {
          fVar26 = 0.8 - fVar23 * 0.8;
        }
        fVar23 = fVar26 - fVar26 * fVar22;
LAB_034d6d0c:
        fVar24 = 1.0 - fVar26;
        *pfVar19 = SQRT(fVar24 * (0.6666667 - fVar22 * 0.6666667));
        pfVar19[1] = SQRT(fVar24 * fVar22 * 0.6666667);
        pfVar19[2] = SQRT(fVar24 * 0.33333334);
        pfVar19[3] = SQRT(fVar23);
        pfVar19[4] = SQRT(fVar26 * fVar22);
        goto LAB_034d6d6c;
      }
      puVar7[(ulong)(uVar11 * 3) + (ulong)(uVar2 | 4)] = 0x3f800000;
      puVar7[(ulong)(uVar11 << 2) + (ulong)(uVar2 + 5)] = 0x3f800000;
      fVar26 = fVar23 * 1.1428572 + -0.14285715;
      fVar23 = fVar23 * -1.4285715 + 1.0;
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      fVar24 = fVar23 + fVar26;
      fVar25 = fVar26 * fVar22 * 0.6666667;
    }
    else {
      if (uVar13 == 0x633) {
        *puVar17 = 0x3f800000;
        puVar7[(ulong)uVar11 + 1] = 0x3f800000;
        puVar7[(ulong)(uVar11 << 1) + (ulong)(uVar2 | 2)] = 0x3f800000;
        puVar7[(ulong)(uVar11 * 3) + (ulong)(uVar2 + 3)] = 0x3f800000;
        puVar7[(ulong)(uVar11 << 2) + (ulong)(uVar2 | 4)] = 0x3f800000;
        puVar7[(ulong)(uVar11 * 5) + (ulong)(uVar2 + 5)] = 0x3f800000;
        goto LAB_034d6a20;
      }
      if (uVar13 != 0x637) goto LAB_034d6d6c;
      fVar26 = fVar23 * 1.1428572 + -0.14285715;
      fVar23 = fVar23 * -1.4285715 + 1.0;
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      fVar24 = fVar23 + fVar26;
      *puVar17 = 0x3f800000;
      puVar7[(ulong)uVar11 + 1] = 0x3f800000;
      puVar7[(ulong)(uVar11 << 1) + 2] = 0x3f800000;
      fVar25 = fVar26 * fVar22 * 0.6666667;
      puVar7[(ulong)(uVar11 * 3) + (ulong)(uVar2 | 2)] = 0x3f800000;
      puVar7[(ulong)(uVar11 << 2) + (ulong)(uVar2 + 3)] = 0x3f800000;
      puVar7[(ulong)(uVar11 * 5) + (ulong)(uVar2 | 4)] = 0x3f800000;
      puVar7[(ulong)(uVar11 * 6) + (ulong)(uVar2 + 5)] = 0x3f800000;
    }
    fVar24 = 1.0 - fVar24;
    *pfVar19 = SQRT(fVar26 * (0.6666667 - fVar22 * 0.6666667));
    pfVar19[1] = SQRT(fVar25);
    pfVar19[2] = SQRT(fVar26 * 0.33333334);
    pfVar19[3] = SQRT(fVar23 * (1.0 - fVar22));
    pfVar19[4] = SQRT(fVar23 * fVar22);
    pfVar19[5] = SQRT(fVar24 * (1.0 - fVar22));
LAB_034d69c0:
    pfVar19[6] = SQRT(fVar24 * fVar22);
    goto LAB_034d6d6c;
  }
  if (uVar13 == 3) {
    *puVar17 = 0x3f800000;
    puVar7[uVar20 + 1] = 0x3f800000;
    if ((uVar5 & 0x633) == 0x603) {
      puVar17[uVar2 | 2] = 0x3f800000;
      puVar7[uVar20 + (uVar2 + 3)] = 0x3f800000;
      goto LAB_034d6c3c;
    }
    if ((uVar5 & 0x633) != 0x633) {
      fVar23 = 1.0 - fVar22;
LAB_034d6d68:
      *pfVar19 = SQRT(fVar23);
      pfVar19[1] = SQRT(fVar22);
      goto LAB_034d6d6c;
    }
    puVar17[uVar2 | 2] = 0x3f800000;
    puVar17[uVar2 | 4] = 0x3f800000;
    puVar7[uVar20 + (uVar2 + 3)] = 0x3f800000;
    puVar7[uVar20 + (uVar2 + 5)] = 0x3f800000;
LAB_034d6a20:
    fVar25 = fVar23 * 1.3333334 + -0.33333334;
    fVar24 = 1.0 - fVar23 * 1.3333334;
    fVar26 = 1.0 - fVar22;
    if (fVar25 <= 0.0) {
      fVar25 = 0.0;
    }
    if (fVar24 <= 0.0) {
      fVar24 = 0.0;
    }
    fVar23 = 1.0 - (fVar24 + fVar25);
    *pfVar19 = SQRT(fVar25 * fVar26);
    pfVar19[1] = SQRT(fVar25 * fVar22);
    bVar1 = (uVar5 >> 2 & 1) != 0;
    if (bVar1) {
      pfVar19[2] = 0.0;
    }
    pfVar19[bVar1 | 2] = SQRT(fVar24 * fVar26);
    pfVar19[bVar1 + 3] = SQRT(fVar24 * fVar22);
    uVar13 = bVar1 + 5;
    pfVar19[bVar1 | 4] = SQRT(fVar23 * fVar26);
  }
  else {
    if (uVar13 == 7) {
      uVar11 = uVar11 << 1;
      *puVar17 = 0x3f800000;
      puVar7[uVar20 + 1] = 0x3f800000;
      puVar7[(ulong)uVar11 + 2] = 0x3f800000;
      if ((uVar5 & 0x633) == 0x603) {
        puVar17[uVar2 | 2] = 0x3f800000;
        puVar7[uVar20 + (uVar2 + 3)] = 0x3f800000;
        puVar7[(ulong)uVar11 + (ulong)(uVar2 | 2)] = 0x3f000000;
        fVar26 = fVar23 * -1.2 + 1.0;
        if (0.5 <= fVar23) {
          fVar26 = 0.8 - fVar23 * 0.8;
        }
        puVar7[(ulong)uVar11 + (ulong)(uVar2 + 3)] = 0x3f000000;
        fVar23 = fVar26 - fVar26 * fVar22;
        goto LAB_034d6d0c;
      }
      if ((uVar5 & 0x633) != 0x633) {
        pfVar19[2] = 0.57735026;
        fVar22 = fVar22 * 0.6666667;
        fVar23 = 0.6666667 - fVar22;
        goto LAB_034d6d68;
      }
      puVar17[uVar2 | 2] = 0x3f800000;
      puVar17[uVar2 | 4] = 0x3f800000;
      puVar7[uVar20 + (uVar2 + 3)] = 0x3f800000;
      puVar7[uVar20 + (uVar2 + 5)] = 0x3f800000;
      puVar7[(ulong)uVar11 + (ulong)(uVar2 | 2)] = 0x3f000000;
      puVar7[(ulong)uVar11 + (ulong)(uVar2 | 4)] = 0x3f000000;
      fVar26 = fVar23 * 1.1428572 + -0.14285715;
      puVar7[(ulong)uVar11 + (ulong)(uVar2 + 3)] = 0x3f000000;
      puVar7[(ulong)uVar11 + (ulong)(uVar2 + 5)] = 0x3f000000;
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      fVar23 = fVar23 * -1.4285715 + 1.0;
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      fVar24 = 1.0 - (fVar23 + fVar26);
      *pfVar19 = SQRT(fVar26 * (0.6666667 - fVar22 * 0.6666667));
      pfVar19[1] = SQRT(fVar26 * fVar22 * 0.6666667);
      pfVar19[2] = SQRT(fVar26 * 0.33333334);
      pfVar19[3] = SQRT(fVar23 * (1.0 - fVar22));
      pfVar19[4] = SQRT(fVar23 * fVar22);
      pfVar19[5] = SQRT(fVar24 * (1.0 - fVar22));
      goto LAB_034d69c0;
    }
    if (uVar13 != 0x603) goto LAB_034d6d6c;
    *puVar17 = 0x3f800000;
    puVar7[uVar20 + 1] = 0x3f800000;
    puVar7[(ulong)(uVar11 << 1) + (ulong)(uVar2 | 2)] = 0x3f800000;
    puVar7[(ulong)(uVar11 * 3) + (ulong)(uVar2 + 3)] = 0x3f800000;
    if (((uVar5 ^ 0xffffffff) & 0x633) == 0) {
      puVar7[(ulong)(uVar11 << 1) + (ulong)(uVar2 | 4)] = 0x3f800000;
      puVar7[(ulong)(uVar11 * 3) + (ulong)(uVar2 + 5)] = 0x3f800000;
      goto LAB_034d6a20;
    }
LAB_034d6c3c:
    *pfVar19 = SQRT((1.0 - fVar22) * fVar23);
    pfVar19[1] = SQRT(fVar23 * fVar22);
    bVar1 = (uVar5 >> 2 & 1) != 0;
    if (bVar1) {
      pfVar19[2] = 0.0;
    }
    fVar23 = 1.0 - fVar23;
    uVar11 = (uint)bVar1;
    uVar13 = uVar11 + 3;
    pfVar19[uVar11 | 2] = SQRT(fVar23 * (1.0 - fVar22));
  }
  pfVar19[uVar13] = SQRT(fVar23 * fVar22);
LAB_034d6d6c:
  uVar13 = (uint)local_a0;
  uVar12 = 0;
  pfVar14 = (float *)(local_98 + 2);
  if (uVar13 < 2) {
    uVar13 = 1;
  }
  do {
    if (uVar21 - 1 < 3) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      pfVar8 = pfVar19 + 2;
      pfVar9 = pfVar14;
      do {
        fVar22 = pfVar8[-1];
        uVar15 = uVar15 + 4;
        fVar23 = *pfVar8;
        fVar26 = pfVar8[1];
        pfVar9[-2] = pfVar9[-2] * pfVar8[-2];
        pfVar9[-1] = pfVar9[-1] * fVar22;
        *pfVar9 = *pfVar9 * fVar23;
        pfVar9[1] = pfVar9[1] * fVar26;
        pfVar8 = pfVar8 + 4;
        pfVar9 = pfVar9 + 4;
      } while ((uVar21 & 0x3c) != uVar15);
    }
    if ((uVar3 & 3) != 0) {
      pfVar8 = (float *)(puVar17 + uVar15);
      uVar10 = uVar21 & 3;
      pfVar9 = pfVar19 + uVar15;
      do {
        uVar10 = uVar10 - 1;
        *pfVar8 = *pfVar8 * *pfVar9;
        pfVar8 = pfVar8 + 1;
        pfVar9 = pfVar9 + 1;
      } while (uVar10 != 0);
    }
    uVar12 = uVar12 + 1;
    pfVar14 = pfVar14 + uVar20;
    puVar17 = puVar17 + uVar20;
  } while (uVar12 != uVar13);
  uVar13 = uVar16 >> 0xc & 0x737;
  uVar16 = uVar16 & 0xff;
  if (uVar13 < 0x603) {
    if (uVar13 == 3) {
      uVar13 = uVar16 + 3 & 0x1fc;
      if ((param_5 & 0xff) == 0) {
        uVar21 = 0;
        do {
          uVar12 = 0;
          uVar15 = 0;
          uVar16 = 1;
          pfVar19 = param_6 + uVar13 * (int)uVar21;
          do {
            if ((uVar16 & uVar5) != 0) {
              fVar22 = (float)local_98[uVar21 * uVar20 + uVar15];
              uVar15 = (ulong)((int)uVar15 + 1);
              fVar23 = (float)(&DAT_03d99fec)[uVar12 * 2];
              *pfVar19 = *pfVar19 + fVar22 * (float)(&DAT_03d99fe8)[uVar12 * 2];
              pfVar19[1] = pfVar19[1] + fVar22 * fVar23;
            }
            uVar16 = uVar16 * 2;
            uVar12 = (ulong)((int)uVar12 + 1);
          } while (uVar16 <= uVar5);
          uVar21 = uVar21 + 1;
        } while (uVar21 != local_a0);
      }
      else {
        uVar21 = 0;
        do {
          puVar17 = local_98;
          pfVar19 = param_6 + uVar13 * (int)uVar21;
          memset(pfVar19,0,(ulong)(uVar16 << 2));
          uVar12 = 0;
          uVar15 = 0;
          uVar11 = 1;
          do {
            if ((uVar11 & uVar5) != 0) {
              fVar22 = (float)puVar17[uVar21 * uVar20 + uVar15];
              uVar15 = (ulong)((int)uVar15 + 1);
              fVar23 = (float)(&DAT_03d99fec)[uVar12 * 2];
              *pfVar19 = *pfVar19 + fVar22 * (float)(&DAT_03d99fe8)[uVar12 * 2];
              pfVar19[1] = pfVar19[1] + fVar22 * fVar23;
            }
            uVar11 = uVar11 * 2;
            uVar12 = (ulong)((int)uVar12 + 1);
          } while (uVar11 <= uVar5);
          uVar21 = uVar21 + 1;
        } while (uVar21 != local_a0);
      }
    }
    else if (uVar13 == 4) {
      uVar20 = (ulong)((uVar3 & 0x3f) + 3) & 0x7c;
      uVar13 = uVar16 + 3 & 0x1fc;
      if ((param_5 & 0xff) == 0) {
        uVar21 = 0;
        do {
          uVar12 = 0;
          uVar15 = 0;
          uVar16 = 1;
          uVar11 = uVar13 * (int)uVar21;
          do {
            if ((uVar16 & uVar5) != 0) {
              lVar6 = uVar21 * uVar20 + uVar12;
              uVar12 = (ulong)((int)uVar12 + 1);
              param_6[uVar11] =
                   param_6[uVar11] + (float)local_98[lVar6] * (float)(&DAT_03d99fa0)[uVar15];
            }
            uVar16 = uVar16 * 2;
            uVar15 = (ulong)((int)uVar15 + 1);
          } while (uVar16 <= uVar5);
          uVar21 = uVar21 + 1;
        } while (uVar21 != local_a0);
      }
      else {
        uVar21 = 0;
        do {
          puVar17 = local_98;
          pfVar19 = param_6 + uVar13 * (int)uVar21;
          memset(pfVar19,0,(ulong)(uVar16 << 2));
          uVar12 = 0;
          uVar15 = 0;
          uVar11 = 1;
          do {
            if ((uVar11 & uVar5) != 0) {
              lVar6 = uVar21 * uVar20 + uVar12;
              uVar12 = (ulong)((int)uVar12 + 1);
              *pfVar19 = *pfVar19 + (float)puVar17[lVar6] * (float)(&DAT_03d99fa0)[uVar15];
            }
            uVar11 = uVar11 * 2;
            uVar15 = (ulong)((int)uVar15 + 1);
          } while (uVar11 <= uVar5);
          uVar21 = uVar21 + 1;
        } while (uVar21 != local_a0);
      }
    }
    else if (uVar13 == 7) {
      uVar20 = (ulong)((uVar3 & 0x3f) + 3) & 0x7c;
      uVar13 = uVar16 + 3 & 0x1fc;
      if ((param_5 & 0xff) == 0) {
        uVar21 = 0;
        do {
          uVar12 = 0;
          uVar15 = 0;
          uVar16 = 1;
          pfVar19 = param_6 + uVar13 * (int)uVar21;
          do {
            if ((uVar16 & uVar5) != 0) {
              fVar22 = (float)local_98[uVar21 * uVar20 + uVar15];
              uVar15 = (ulong)((int)uVar15 + 1);
              fVar23 = (float)(&DAT_03d9a07c)[uVar12 * 3];
              fVar26 = (float)(&DAT_03d9a080)[uVar12 * 3];
              *pfVar19 = *pfVar19 + fVar22 * (float)(&DAT_03d9a078)[uVar12 * 3];
              pfVar19[1] = pfVar19[1] + fVar22 * fVar23;
              pfVar19[2] = pfVar19[2] + fVar22 * fVar26;
            }
            uVar16 = uVar16 * 2;
            uVar12 = (ulong)((int)uVar12 + 1);
          } while (uVar16 <= uVar5);
          uVar21 = uVar21 + 1;
        } while (uVar21 != local_a0);
      }
      else {
        uVar21 = 0;
        do {
          puVar17 = local_98;
          pfVar19 = param_6 + uVar13 * (int)uVar21;
          memset(pfVar19,0,(ulong)(uVar16 << 2));
          uVar12 = 0;
          uVar15 = 0;
          uVar11 = 1;
          do {
            if ((uVar11 & uVar5) != 0) {
              fVar22 = (float)puVar17[uVar21 * uVar20 + uVar15];
              uVar15 = (ulong)((int)uVar15 + 1);
              fVar23 = (float)(&DAT_03d9a078)[uVar12 * 3];
              fVar26 = (float)(&DAT_03d9a080)[uVar12 * 3];
              pfVar19[1] = pfVar19[1] + fVar22 * (float)(&DAT_03d9a07c)[uVar12 * 3];
              *pfVar19 = *pfVar19 + fVar22 * fVar23;
              pfVar19[2] = pfVar19[2] + fVar22 * fVar26;
            }
            uVar11 = uVar11 * 2;
            uVar12 = (ulong)((int)uVar12 + 1);
          } while (uVar11 <= uVar5);
          uVar21 = uVar21 + 1;
        } while (uVar21 != local_a0);
      }
    }
  }
  else if (uVar13 < 0x633) {
    if (uVar13 == 0x603) {
      uVar20 = (ulong)((uVar3 & 0x3f) + 3) & 0x7c;
      uVar13 = uVar16 + 3 & 0x1fc;
      if ((param_5 & 0xff) == 0) {
        uVar21 = 0;
        do {
          uVar12 = 0;
          uVar15 = 0;
          uVar16 = 1;
          pfVar19 = param_6 + uVar13 * (int)uVar21;
          do {
            if ((uVar16 & uVar5) != 0) {
              fVar22 = (float)local_98[uVar21 * uVar20 + uVar12];
              uVar12 = (ulong)((int)uVar12 + 1);
              fVar26 = (float)(&DAT_03d9a154)[uVar15 * 4];
              fVar23 = (float)(&DAT_03d9a158)[uVar15 * 4];
              fVar24 = (float)(&DAT_03d9a15c)[uVar15 * 4];
              *pfVar19 = *pfVar19 + fVar22 * (float)(&DAT_03d9a150)[uVar15 * 4];
              pfVar19[1] = pfVar19[1] + fVar22 * fVar26;
              pfVar19[2] = pfVar19[2] + fVar22 * fVar23;
              pfVar19[3] = pfVar19[3] + fVar22 * fVar24;
            }
            uVar16 = uVar16 * 2;
            uVar15 = (ulong)((int)uVar15 + 1);
          } while (uVar16 <= uVar5);
          uVar21 = uVar21 + 1;
        } while (uVar21 != local_a0);
      }
      else {
        uVar21 = 0;
        do {
          puVar17 = local_98;
          pfVar19 = param_6 + uVar13 * (int)uVar21;
          memset(pfVar19,0,(ulong)(uVar16 << 2));
          uVar12 = 0;
          uVar15 = 0;
          uVar11 = 1;
          do {
            if ((uVar11 & uVar5) != 0) {
              fVar22 = (float)puVar17[uVar21 * uVar20 + uVar12];
              uVar12 = (ulong)((int)uVar12 + 1);
              fVar23 = (float)(&DAT_03d9a150)[uVar15 * 4];
              fVar26 = (float)(&DAT_03d9a158)[uVar15 * 4];
              fVar24 = (float)(&DAT_03d9a15c)[uVar15 * 4];
              pfVar19[1] = pfVar19[1] + fVar22 * (float)(&DAT_03d9a154)[uVar15 * 4];
              *pfVar19 = *pfVar19 + fVar22 * fVar23;
              pfVar19[2] = pfVar19[2] + fVar22 * fVar26;
              pfVar19[3] = pfVar19[3] + fVar22 * fVar24;
            }
            uVar11 = uVar11 * 2;
            uVar15 = (ulong)((int)uVar15 + 1);
          } while (uVar11 <= uVar5);
          uVar21 = uVar21 + 1;
        } while (uVar21 != local_a0);
      }
    }
    else if (uVar13 == 0x607) {
      uVar20 = (ulong)((uVar3 & 0x3f) + 3) & 0x7c;
      uVar13 = uVar16 + 3 & 0x1fc;
      if ((param_5 & 0xff) == 0) {
        uVar21 = 0;
        do {
          uVar12 = 0;
          uVar15 = 0;
          uVar16 = 1;
          pfVar19 = param_6 + uVar13 * (int)uVar21;
          do {
            if ((uVar16 & uVar5) != 0) {
              fVar22 = (float)local_98[uVar21 * uVar20 + uVar12];
              uVar12 = (ulong)((int)uVar12 + 1);
              fVar26 = (float)(&DAT_03d9a270)[uVar15 * 5];
              fVar24 = (float)(&DAT_03d9a278)[uVar15 * 5];
              fVar25 = (float)(&DAT_03d9a27c)[uVar15 * 5];
              pfVar19[1] = pfVar19[1] + fVar22 * (float)(&DAT_03d9a274)[uVar15 * 5];
              fVar23 = (float)(&DAT_03d9a280)[uVar15 * 5];
              *pfVar19 = *pfVar19 + fVar22 * fVar26;
              pfVar19[3] = pfVar19[3] + fVar22 * fVar25;
              pfVar19[2] = pfVar19[2] + fVar22 * fVar24;
              pfVar19[4] = pfVar19[4] + fVar22 * fVar23;
            }
            uVar16 = uVar16 * 2;
            uVar15 = (ulong)((int)uVar15 + 1);
          } while (uVar16 <= uVar5);
          uVar21 = uVar21 + 1;
        } while (uVar21 != local_a0);
      }
      else {
        uVar21 = 0;
        do {
          puVar17 = local_98;
          pfVar19 = param_6 + uVar13 * (int)uVar21;
          memset(pfVar19,0,(ulong)(uVar16 << 2));
          uVar12 = 0;
          uVar15 = 0;
          uVar11 = 1;
          do {
            if ((uVar11 & uVar5) != 0) {
              fVar22 = (float)puVar17[uVar21 * uVar20 + uVar12];
              uVar12 = (ulong)((int)uVar12 + 1);
              fVar23 = (float)(&DAT_03d9a274)[uVar15 * 5];
              fVar26 = (float)(&DAT_03d9a278)[uVar15 * 5];
              fVar24 = (float)(&DAT_03d9a27c)[uVar15 * 5];
              *pfVar19 = *pfVar19 + fVar22 * (float)(&DAT_03d9a270)[uVar15 * 5];
              pfVar19[1] = pfVar19[1] + fVar22 * fVar23;
              fVar23 = (float)(&DAT_03d9a280)[uVar15 * 5];
              pfVar19[2] = pfVar19[2] + fVar22 * fVar26;
              pfVar19[3] = pfVar19[3] + fVar22 * fVar24;
              pfVar19[4] = pfVar19[4] + fVar22 * fVar23;
            }
            uVar11 = uVar11 * 2;
            uVar15 = (ulong)((int)uVar15 + 1);
          } while (uVar11 <= uVar5);
          uVar21 = uVar21 + 1;
        } while (uVar21 != local_a0);
      }
    }
  }
  else if (uVar13 == 0x633) {
    uVar20 = (ulong)((uVar3 & 0x3f) + 3) & 0x7c;
    uVar13 = uVar16 + 3 & 0x1fc;
    if ((param_5 & 0xff) == 0) {
      uVar21 = 0;
      do {
        uVar12 = 0;
        uVar15 = 0;
        uVar16 = 1;
        pfVar19 = param_6 + uVar13 * (int)uVar21;
        do {
          if ((uVar16 & uVar5) != 0) {
            fVar22 = (float)local_98[uVar21 * uVar20 + uVar12];
            uVar12 = (ulong)((int)uVar12 + 1);
            fVar24 = (float)(&DAT_03d9a3dc)[uVar15 * 6];
            fVar23 = (float)(&DAT_03d9a3e0)[uVar15 * 6];
            fVar25 = (float)(&DAT_03d9a3e4)[uVar15 * 6];
            fVar26 = (float)(&DAT_03d9a3e8)[uVar15 * 6];
            fVar27 = (float)(&DAT_03d9a3ec)[uVar15 * 6];
            *pfVar19 = *pfVar19 + fVar22 * (float)(&DAT_03d9a3d8)[uVar15 * 6];
            pfVar19[1] = pfVar19[1] + fVar22 * fVar24;
            pfVar19[2] = pfVar19[2] + fVar22 * fVar23;
            pfVar19[3] = pfVar19[3] + fVar22 * fVar25;
            pfVar19[4] = pfVar19[4] + fVar22 * fVar26;
            pfVar19[5] = pfVar19[5] + fVar22 * fVar27;
          }
          uVar16 = uVar16 * 2;
          uVar15 = (ulong)((int)uVar15 + 1);
        } while (uVar16 <= uVar5);
        uVar21 = uVar21 + 1;
      } while (uVar21 != local_a0);
    }
    else {
      uVar21 = 0;
      do {
        puVar17 = local_98;
        pfVar19 = param_6 + uVar13 * (int)uVar21;
        memset(pfVar19,0,(ulong)(uVar16 << 2));
        uVar12 = 0;
        uVar15 = 0;
        uVar11 = 1;
        do {
          if ((uVar11 & uVar5) != 0) {
            fVar22 = (float)puVar17[uVar21 * uVar20 + uVar12];
            uVar12 = (ulong)((int)uVar12 + 1);
            fVar23 = (float)(&DAT_03d9a3d8)[uVar15 * 6];
            fVar26 = (float)(&DAT_03d9a3e0)[uVar15 * 6];
            fVar25 = (float)(&DAT_03d9a3e4)[uVar15 * 6];
            fVar24 = (float)(&DAT_03d9a3e8)[uVar15 * 6];
            fVar27 = (float)(&DAT_03d9a3ec)[uVar15 * 6];
            pfVar19[1] = pfVar19[1] + fVar22 * (float)(&DAT_03d9a3dc)[uVar15 * 6];
            *pfVar19 = *pfVar19 + fVar22 * fVar23;
            pfVar19[3] = pfVar19[3] + fVar22 * fVar25;
            pfVar19[2] = pfVar19[2] + fVar22 * fVar26;
            pfVar19[4] = pfVar19[4] + fVar22 * fVar24;
            pfVar19[5] = pfVar19[5] + fVar22 * fVar27;
          }
          uVar11 = uVar11 * 2;
          uVar15 = (ulong)((int)uVar15 + 1);
        } while (uVar11 <= uVar5);
        uVar21 = uVar21 + 1;
      } while (uVar21 != local_a0);
    }
  }
  else if (uVar13 == 0x637) {
    uVar20 = (ulong)((uVar3 & 0x3f) + 3) & 0x7c;
    uVar13 = uVar16 + 3 & 0x1fc;
    if ((param_5 & 0xff) == 0) {
      uVar21 = 0;
      do {
        uVar12 = 0;
        uVar15 = 0;
        uVar16 = 1;
        pfVar19 = param_6 + uVar13 * (int)uVar21;
        do {
          if ((uVar16 & uVar5) != 0) {
            fVar22 = (float)local_98[uVar21 * uVar20 + uVar12];
            uVar12 = (ulong)((int)uVar12 + 1);
            fVar23 = (float)(&DAT_03d9a58c)[uVar15 * 7];
            fVar26 = (float)(&DAT_03d9a590)[uVar15 * 7];
            fVar25 = (float)(&DAT_03d9a594)[uVar15 * 7];
            fVar24 = (float)(&DAT_03d9a598)[uVar15 * 7];
            fVar27 = (float)(&DAT_03d9a59c)[uVar15 * 7];
            *pfVar19 = *pfVar19 + fVar22 * (float)(&DAT_03d9a588)[uVar15 * 7];
            pfVar19[1] = pfVar19[1] + fVar22 * fVar23;
            fVar23 = (float)(&DAT_03d9a5a0)[uVar15 * 7];
            pfVar19[2] = pfVar19[2] + fVar22 * fVar26;
            pfVar19[3] = pfVar19[3] + fVar22 * fVar25;
            pfVar19[4] = pfVar19[4] + fVar22 * fVar24;
            pfVar19[5] = pfVar19[5] + fVar22 * fVar27;
            pfVar19[6] = pfVar19[6] + fVar22 * fVar23;
          }
          uVar16 = uVar16 * 2;
          uVar15 = (ulong)((int)uVar15 + 1);
        } while (uVar16 <= uVar5);
        uVar21 = uVar21 + 1;
      } while (uVar21 != local_a0);
    }
    else {
      uVar21 = 0;
      do {
        puVar17 = local_98;
        pfVar19 = param_6 + uVar13 * (int)uVar21;
        memset(pfVar19,0,(ulong)(uVar16 << 2));
        uVar12 = 0;
        uVar15 = 0;
        uVar11 = 1;
        do {
          if ((uVar11 & uVar5) != 0) {
            fVar22 = (float)puVar17[uVar21 * uVar20 + uVar12];
            uVar12 = (ulong)((int)uVar12 + 1);
            fVar23 = (float)(&DAT_03d9a58c)[uVar15 * 7];
            fVar26 = (float)(&DAT_03d9a590)[uVar15 * 7];
            fVar25 = (float)(&DAT_03d9a594)[uVar15 * 7];
            fVar24 = (float)(&DAT_03d9a598)[uVar15 * 7];
            fVar27 = (float)(&DAT_03d9a59c)[uVar15 * 7];
            *pfVar19 = *pfVar19 + fVar22 * (float)(&DAT_03d9a588)[uVar15 * 7];
            pfVar19[1] = pfVar19[1] + fVar22 * fVar23;
            fVar23 = (float)(&DAT_03d9a5a0)[uVar15 * 7];
            pfVar19[2] = pfVar19[2] + fVar22 * fVar26;
            pfVar19[3] = pfVar19[3] + fVar22 * fVar25;
            pfVar19[4] = pfVar19[4] + fVar22 * fVar24;
            pfVar19[5] = pfVar19[5] + fVar22 * fVar27;
            pfVar19[6] = pfVar19[6] + fVar22 * fVar23;
          }
          uVar11 = uVar11 * 2;
          uVar15 = (ulong)((int)uVar15 + 1);
        } while (uVar11 <= uVar5);
        uVar21 = uVar21 + 1;
      } while (uVar21 != local_a0);
    }
  }
  return;
}


