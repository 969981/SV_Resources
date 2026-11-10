/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0341acc0; name: FUN_0341acc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0341acc0(float param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 *puVar8;
  char cVar9;
  float *pfVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  long lVar14;
  undefined1 uVar15;
  float *pfVar16;
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
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined8 local_b0;
  float local_a8;
  
  pfVar10 = param_5;
  if (param_4 != (float *)0x0) {
    pfVar10 = param_4 + 3;
  }
  fVar28 = *pfVar10;
  fVar29 = pfVar10[1];
  fVar17 = fVar28 - *param_3;
  fVar18 = fVar29 - param_3[1];
  fVar30 = pfVar10[2];
  fVar21 = fVar30 - param_3[2];
  fVar19 = param_3[6] * fVar17 + fVar18 * param_3[7] + fVar21 * param_3[8];
  fVar17 = param_3[9] * fVar17 + fVar18 * param_3[10] + fVar21 * param_3[0xb];
  bVar4 = false;
  bVar5 = false;
  if (-0.0001 < fVar19) {
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar17)) {
      bVar4 = fVar17 < 0.0001;
      bVar5 = false;
    }
  }
  if (bVar4 == bVar5) {
    bVar4 = false;
    bVar5 = true;
    bVar6 = false;
    if (fVar19 < 0.0001) {
      bVar4 = false;
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar17)) {
        bVar4 = fVar17 < -0.0001;
        bVar5 = fVar17 == -0.0001;
        bVar6 = false;
      }
    }
    if (bVar5 || bVar4 != bVar6) {
      return;
    }
    uVar15 = 1;
  }
  else {
    uVar15 = 0;
  }
  local_b0 = 0;
  local_a8 = 0.0;
  local_c0 = *param_6 - *param_5;
  fStack_bc = param_6[1] - param_5[1];
  local_b8 = param_6[2] - param_5[2];
  uVar7 = FUN_0341a340(param_3,param_5,&local_c0,&local_b0);
  fVar17 = local_a8;
  if ((uVar7 & 1) == 0) {
    return;
  }
  fVar18 = (float)local_b0;
  fVar19 = local_b0._4_4_;
  if (param_4 != (float *)0x0) {
    pfVar10 = *(float **)(param_4 + 6);
    fVar24 = ((float)local_b0 + (pfVar10[9] + pfVar10[6]) * 0.001) - *pfVar10;
    fVar31 = (local_b0._4_4_ + (pfVar10[10] + pfVar10[7]) * 0.001) - pfVar10[1];
    fVar26 = (local_a8 + (pfVar10[0xb] + pfVar10[8]) * 0.001) - pfVar10[2];
    fVar21 = fVar24 * pfVar10[6] + pfVar10[7] * fVar31 + pfVar10[8] * fVar26;
    fVar24 = fVar24 * pfVar10[9] + pfVar10[10] * fVar31 + pfVar10[0xb] * fVar26;
    bVar4 = false;
    bVar5 = false;
    if (-0.0001 < fVar21) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar24)) {
        bVar4 = fVar24 < 0.0001;
        bVar5 = false;
      }
    }
    if (bVar4 == bVar5) {
      bVar4 = false;
      bVar5 = true;
      bVar6 = false;
      if (fVar21 < 0.0001) {
        bVar4 = false;
        bVar5 = false;
        bVar6 = true;
        if (!NAN(fVar24)) {
          bVar4 = fVar24 < -0.0001;
          bVar5 = fVar24 == -0.0001;
          bVar6 = false;
        }
      }
      if (bVar5 || bVar4 != bVar6) {
        return;
      }
    }
  }
  fVar30 = fVar30 - local_a8;
  fVar29 = fVar29 - local_b0._4_4_;
  fVar28 = fVar28 - (float)local_b0;
  fVar21 = SQRT(fVar30 * fVar30 + fVar29 * fVar29 + fVar28 * fVar28);
  if (fVar21 < 0.001) {
    return;
  }
  fVar24 = 1.0 / fVar21;
  fVar28 = fVar24 * fVar28;
  fVar29 = fVar24 * fVar29;
  fVar24 = fVar24 * fVar30;
  if (param_4 == (float *)0x0) {
    fVar31 = 0.0;
    fVar30 = 0.0;
    fVar26 = fVar21;
  }
  else {
    lVar11 = *(long *)(param_4 + 6);
    fVar22 = *(float *)(lVar11 + 0xc);
    fVar20 = *(float *)(lVar11 + 0x10);
    fVar23 = *(float *)(lVar11 + 0x14);
    fVar27 = fVar23 * *(float *)(lVar11 + 0x1c) - fVar20 * *(float *)(lVar11 + 0x20);
    fVar32 = fVar22 * *(float *)(lVar11 + 0x20) - *(float *)(lVar11 + 0x18) * fVar23;
    fVar31 = param_4[2];
    fVar25 = *(float *)(lVar11 + 0x18) * fVar20 - fVar22 * *(float *)(lVar11 + 0x1c);
    fVar30 = *param_4;
    fVar26 = param_4[1];
    fVar33 = fVar30 * fVar22 + fVar20 * fVar26 + fVar23 * fVar31;
    fVar36 = fVar23 * fVar24 + fVar29 * fVar20 + fVar28 * fVar22;
    fVar34 = fVar30 - fVar22 * fVar33;
    fVar35 = fVar26 - fVar20 * fVar33;
    fVar22 = fVar36 * fVar22 - fVar28;
    fVar33 = fVar31 - fVar23 * fVar33;
    fVar20 = fVar36 * fVar20 - fVar29;
    fVar23 = fVar36 * fVar23 - fVar24;
    if ((fVar22 * fVar27 + fVar32 * fVar20 + fVar25 * fVar23) /
        SQRT(fVar22 * fVar22 + fVar20 * fVar20 + fVar23 * fVar23) <=
        (-(fVar33 * fVar25) - (fVar34 * fVar27 + fVar32 * fVar35)) /
        SQRT(fVar34 * fVar34 + fVar35 * fVar35 + fVar33 * fVar33)) {
      return;
    }
    fVar30 = (float)NEON_fminnm(fVar30 * fVar28 + fVar29 * fVar26 + fVar24 * fVar31,0x3f800000);
    if (fVar30 <= -1.0) {
      fVar30 = -1.0;
    }
    fVar30 = acosf(fVar30);
    fVar31 = param_4[0x11] + fVar30 * 0.31830987;
    if (1.0 < fVar31) {
      return;
    }
    fVar26 = param_4[0xd] + fVar21;
  }
  fVar18 = fVar18 - *param_6;
  fVar19 = fVar19 - param_6[1];
  fVar17 = fVar17 - param_6[2];
  fVar20 = SQRT(fVar18 * fVar18 + fVar19 * fVar19 + fVar17 * fVar17);
  if (fVar20 < 0.001) {
    return;
  }
  fVar22 = fVar20 + fVar26;
  if (param_1 < fVar22) {
    return;
  }
  fVar17 = (float)NEON_fminnm((fVar18 * fVar28 + fVar29 * fVar19 + fVar24 * fVar17) / fVar20,
                              0x3f800000);
  if (fVar17 <= -1.0) {
    fVar17 = -1.0;
  }
  fVar17 = acosf(fVar17);
  fVar18 = fVar31 + fVar17 * 0.31830987;
  if (1.0 < fVar18) {
    return;
  }
  fVar19 = param_2[4];
  pfVar10 = param_2 + 2;
  if (fVar19 != 0.0) {
    uVar3 = 0;
    if (fVar19 != 0.0) {
      uVar3 = (uint)param_3 / (uint)fVar19;
    }
    for (pfVar16 = *(float **)(*(long *)pfVar10 + (ulong)((uint)param_3 - uVar3 * (int)fVar19) * 8);
        pfVar16 != (float *)0x0; pfVar16 = *(float **)(pfVar16 + 10)) {
      if (*(float **)(pfVar16 + 6) == param_3) goto LAB_0341b414;
    }
  }
  for (puVar8 = *(undefined8 **)param_2; puVar8 != (undefined8 *)0x0;
      puVar8 = (undefined8 *)puVar8[0x50]) {
    if (puVar8[0x52] != 0) goto LAB_0341b1d8;
  }
  puVar8 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0xb,0x298);
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
  puVar8[0x50] = 0;
  *puVar8 = 0;
  puVar8[10] = puVar8;
  puVar8[0x14] = puVar8 + 10;
  puVar8[0x1e] = puVar8 + 0x14;
  puVar8[0x28] = puVar8 + 0x1e;
  puVar8[0x3c] = puVar8 + 0x32;
  puVar8[0x32] = puVar8 + 0x28;
  puVar8[0x52] = puVar8 + 0x46;
  puVar8[0x46] = puVar8 + 0x3c;
  *(undefined4 *)(puVar8 + 0x51) = 8;
  if (*(long *)param_2 == 0) {
    *(undefined8 **)param_2 = puVar8;
    puVar8[0x50] = 0;
  }
  else {
    puVar8[0x50] = *(long *)param_2;
    *(undefined8 **)param_2 = puVar8;
  }
LAB_0341b1d8:
  pfVar16 = (float *)puVar8[0x52];
  if (pfVar16 == (float *)0x0) {
    return;
  }
  if (*(long *)pfVar16 == 0) {
    puVar8[0x52] = 0;
  }
  else {
    puVar8[0x52] = *(long *)pfVar16;
  }
  *(int *)(puVar8 + 0x51) = *(int *)(puVar8 + 0x51) + -1;
  pfVar16[0xc] = 0.0;
  pfVar16[0] = 0.0;
  pfVar16[1] = 0.0;
  pfVar16[2] = 0.0;
  pfVar16[3] = 0.0;
  pfVar16[0xf] = 0.0;
  pfVar16[0x10] = 0.0;
  pfVar16[4] = 0.0;
  pfVar16[5] = 0.0;
  *(float **)(pfVar16 + 6) = param_3;
  *(undefined1 *)(pfVar16 + 0x13) = 1;
  pfVar16[0xd] = 3.4028235e+38;
  pfVar16[0xe] = 3.4028235e+38;
  pfVar16[0x11] = 0.0;
  pfVar16[0x12] = 9.403954e-38;
  pfVar16[8] = 0.0;
  pfVar16[9] = 0.0;
  pfVar16[10] = 0.0;
  pfVar16[0xb] = 0.0;
  fVar19 = param_2[4];
  if (fVar19 == 0.0) {
LAB_0341b264:
    uVar7 = 0x1d;
    goto LAB_0341b268;
  }
  fVar23 = (float)NEON_ucvtf(param_2[6]);
  if (fVar23 / (float)(uint)fVar19 <= 0.9) {
    pfVar10 = param_3;
    goto LAB_0341b3e8;
  }
  if ((uint)fVar19 < 0x1d) goto LAB_0341b264;
  if ((uint)fVar19 < 0x35) {
    uVar7 = 0x35;
LAB_0341b268:
    lVar14 = *(long *)(param_2 + 2);
    fVar23 = param_2[5];
    pfVar10[0] = 0.0;
    pfVar10[1] = 0.0;
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    lVar11 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0xb,0,uVar7 << 3);
    if (lVar11 != 0) {
      *(long *)(param_2 + 2) = lVar11;
      fVar25 = (float)uVar7;
      param_2[5] = fVar25;
      fVar23 = fVar25;
      while( true ) {
        fVar23 = (float)((int)fVar23 - 1);
        fVar27 = param_2[4];
        if ((uint)fVar27 < (uint)(float)uVar7) {
          param_2[4] = (float)((int)fVar27 + 1);
          if (*(long *)(param_2 + 2) != 0) {
            *(undefined8 *)(*(long *)(param_2 + 2) + (ulong)(uint)fVar27 * 8) = 0;
          }
        }
        if (fVar23 == 0.0) break;
        uVar7 = (ulong)(uint)param_2[5];
      }
      if (fVar19 != 0.0) {
        uVar7 = 0;
        do {
          lVar11 = *(long *)(lVar14 + uVar7 * 8);
          while (lVar11 != 0) {
            uVar3 = 0;
            if (fVar25 != 0.0) {
              uVar3 = *(uint *)(lVar11 + 0x18) / (uint)fVar25;
            }
            lVar13 = *(long *)(lVar11 + 0x28);
            uVar3 = *(uint *)(lVar11 + 0x18) - uVar3 * (int)fVar25;
            *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(*(long *)pfVar10 + (ulong)uVar3 * 8);
            *(long *)(*(long *)pfVar10 + (ulong)uVar3 * 8) = lVar11;
            lVar11 = lVar13;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != (uint)fVar19);
      }
      if (lVar14 != 0) {
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0xb,lVar14);
      }
      goto LAB_0341b380;
    }
    if (*(long *)pfVar10 != 0) {
      param_2[4] = 0.0;
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0xb);
      param_2[2] = 0.0;
      param_2[3] = 0.0;
      param_2[5] = 0.0;
    }
    *(long *)(param_2 + 2) = lVar14;
    param_2[4] = fVar19;
    param_2[5] = fVar23;
  }
  else {
    if ((uint)fVar19 < 0x61) {
      uVar7 = 0x61;
      goto LAB_0341b268;
    }
    if ((uint)fVar19 < 0xc1) {
      uVar7 = 0xc1;
      goto LAB_0341b268;
    }
    if ((uint)fVar19 < 0x185) {
      uVar7 = 0x185;
      goto LAB_0341b268;
    }
    if ((uint)fVar19 < 0x301) {
      uVar7 = 0x301;
      goto LAB_0341b268;
    }
    if ((uint)fVar19 < 0x607) {
      uVar7 = 0x607;
      goto LAB_0341b268;
    }
    if ((uint)fVar19 < 0xc07) {
      uVar7 = 0xc07;
      goto LAB_0341b268;
    }
    uVar7 = 0x1807;
    if ((uint)fVar19 < 0x1807) goto LAB_0341b268;
    if ((uint)fVar19 < 0x3001) {
      uVar7 = 0x3001;
      goto LAB_0341b268;
    }
    uVar7 = 0x6011;
    if (((((uint)fVar19 < 0x6011) || (uVar7 = 0xc005, (uint)fVar19 < 0xc005)) ||
        (uVar7 = 0x1800d, (uint)fVar19 < 0x1800d)) ||
       ((uVar7 = 0x30005, (uint)fVar19 < 0x30005 || (uVar7 = 0x60019, (uint)fVar19 < 0x60019))))
    goto LAB_0341b268;
    if ((uint)fVar19 < 0xc0001) {
      uVar7 = 0xc0001;
      goto LAB_0341b268;
    }
    uVar7 = 0x180005;
    if ((((((uint)fVar19 < 0x180005) || (uVar7 = 0x30000b, (uint)fVar19 < 0x30000b)) ||
         ((uVar7 = 0x60000d, (uint)fVar19 < 0x60000d ||
          (((uVar7 = 0xc00005, (uint)fVar19 < 0xc00005 ||
            (uVar7 = 0x1800013, (uint)fVar19 < 0x1800013)) ||
           (uVar7 = 0x3000005, (uint)fVar19 < 0x3000005)))))) ||
        ((uVar7 = 0x6000017, (uint)fVar19 < 0x6000017 ||
         (uVar7 = 0xc000013, (uint)fVar19 < 0xc000013)))) ||
       ((uVar7 = 0x18000005, (uint)fVar19 < 0x18000005 ||
        ((uVar7 = 0x30000059, (uint)fVar19 < 0x30000059 ||
         (uVar7 = 0x60000005, (uint)fVar19 < 0x60000005)))))) goto LAB_0341b268;
LAB_0341b380:
    fVar19 = param_2[4];
  }
  if (fVar19 == 0.0) {
    pfVar10 = *(float **)param_2;
    if (pfVar10 == (float *)0x0) {
LAB_0341b520:
      if (_DAT_00000290 == (float *)0x0) {
        _DAT_00000290 = pfVar16;
        pfVar16[0] = 0.0;
        pfVar16[1] = 0.0;
      }
      else {
        *(float **)pfVar16 = _DAT_00000290;
        _DAT_00000290 = pfVar16;
      }
      _DAT_00000288 = _DAT_00000288 + 1;
      return;
    }
    if ((pfVar16 < pfVar10) || (pfVar10 + 0xa0 <= pfVar16)) {
      do {
        pfVar12 = pfVar10;
        pfVar10 = *(float **)(pfVar12 + 0xa0);
        if (pfVar10 == (float *)0x0) goto LAB_0341b520;
      } while ((pfVar16 < pfVar10) || (pfVar10 + 0xa0 <= pfVar16));
    }
    else {
      pfVar12 = (float *)0x0;
    }
    if (*(long *)(pfVar10 + 0xa4) == 0) {
      *(float **)(pfVar10 + 0xa4) = pfVar16;
      pfVar16[0] = 0.0;
      pfVar16[1] = 0.0;
    }
    else {
      *(long *)pfVar16 = *(long *)(pfVar10 + 0xa4);
      *(float **)(pfVar10 + 0xa4) = pfVar16;
    }
    fVar17 = pfVar10[0xa2];
    pfVar10[0xa2] = (float)((int)fVar17 + 1);
    if ((float)((int)fVar17 + 1) != 1.12104e-44) {
      return;
    }
    if (*(float **)param_2 != pfVar10) {
      param_2 = pfVar12 + 0xa0;
    }
    *(long *)param_2 = *(long *)(pfVar10 + 0xa0);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0xb);
    return;
  }
  pfVar10 = *(float **)(pfVar16 + 6);
LAB_0341b3e8:
  uVar3 = 0;
  if (fVar19 != 0.0) {
    uVar3 = (uint)pfVar10 / (uint)fVar19;
  }
  uVar3 = (uint)pfVar10 - uVar3 * (int)fVar19;
  *(long *)(pfVar16 + 10) = *(long *)(*(long *)(param_2 + 2) + (ulong)uVar3 * 8);
  *(float **)(*(long *)(param_2 + 2) + (ulong)uVar3 * 8) = pfVar16;
  param_2[6] = (float)((int)param_2[6] + 1);
  *(float **)(pfVar16 + 6) = param_3;
LAB_0341b414:
  if ((*(char *)(pfVar16 + 0x13) != '\0') && (*(char *)((long)pfVar16 + 0x4a) != '\0')) {
    if (*(char *)((long)pfVar16 + 0x49) == '\0') {
      fVar27 = param_2[0xc];
      fVar19 = (float)NEON_fminnm(fVar22,fVar27);
      fVar23 = (float)NEON_fminnm(pfVar16[0x11] + pfVar16[0x10] * 0.31830987,0x3f800000);
      fVar25 = (float)NEON_fminnm(pfVar16[0xd] + pfVar16[0xe],fVar27);
      if ((fVar25 / fVar27 + fVar23 * 2.0) * 0.33333334 <
          (fVar19 / fVar27 + fVar18 * 2.0) * 0.33333334) {
        return;
      }
    }
    *pfVar16 = fVar28;
    pfVar16[1] = fVar29;
    pfVar16[2] = fVar24;
    pfVar16[3] = (float)local_b0;
    pfVar16[4] = local_b0._4_4_;
    *(float **)(pfVar16 + 8) = param_4;
    pfVar16[0xc] = fVar21;
    pfVar16[0xd] = fVar26;
    pfVar16[0xe] = fVar20;
    pfVar16[0xf] = fVar30;
    pfVar16[5] = local_a8;
    pfVar16[0x10] = fVar17;
    pfVar16[0x11] = fVar31;
    *(undefined1 *)(pfVar16 + 0x12) = uVar15;
    *(undefined1 *)((long)pfVar16 + 0x49) = 0;
    if (param_4 == (float *)0x0) {
      cVar9 = '\x01';
    }
    else {
      cVar9 = *(char *)((long)param_4 + 0x4b) + '\x01';
    }
    *(char *)((long)pfVar16 + 0x4b) = cVar9;
    fVar19 = param_2[0xc];
    fVar28 = param_2[10];
    fVar17 = param_2[0xb];
    if ((uint)fVar17 <= (uint)fVar28) {
      iVar1 = (int)fVar17 + ((uint)fVar17 >> 1);
      if (fVar17 == 0.0) {
        iVar1 = 1;
      }
      fVar17 = (float)(iVar1 + (int)fVar17);
      lVar11 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))
                         (9,*(long *)(param_2 + 8),(ulong)(uint)fVar17 << 4);
      if (lVar11 == 0) {
        return;
      }
      *(long *)(param_2 + 8) = lVar11;
      param_2[0xb] = fVar17;
    }
    if ((uint)fVar28 < (uint)fVar17) {
      fVar17 = param_2[10];
      uVar7 = (ulong)(uint)fVar17;
      pfVar10 = *(float **)(param_2 + 8);
      param_2[10] = (float)((int)fVar17 + 1);
      if (pfVar10 != (float *)0x0) {
        fVar28 = (float)NEON_fminnm(fVar22,fVar19);
        fVar28 = (fVar28 / fVar19 + fVar18 * 2.0) * 0.33333334;
        if (fVar17 == 0.0) {
          lVar11 = 0;
          *pfVar10 = fVar28;
        }
        else {
          do {
            uVar3 = (int)uVar7 - 1U >> 1;
            pfVar12 = pfVar10 + (ulong)uVar3 * 4;
            if (*pfVar12 <= fVar28) break;
            uVar2 = *(undefined8 *)(pfVar12 + 2);
            *(undefined8 *)(pfVar10 + (long)(int)uVar7 * 4) = *(undefined8 *)pfVar12;
            *(undefined8 *)(pfVar10 + (long)(int)uVar7 * 4 + 2) = uVar2;
            pfVar10 = *(float **)(param_2 + 8);
            uVar7 = (ulong)uVar3;
          } while (uVar3 != 0);
          *(float *)((long)pfVar10 + (-(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4)) = fVar28;
          if (pfVar10 == (float *)0x0) {
            return;
          }
          lVar11 = (long)(int)uVar7;
        }
        *(float **)(pfVar10 + lVar11 * 4 + 2) = pfVar16;
      }
    }
  }
  return;
}


