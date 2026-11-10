/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03168620; name: FUN_03168620
 */


undefined8
FUN_03168620(undefined8 *param_1,undefined8 *param_2,undefined1 (*param_3) [12],long param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  float *pfVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int iVar31;
  undefined4 uVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  int iVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  long local_60;
  ulong local_58;
  
  fVar46 = (float)*(undefined8 *)(*param_3 + 8);
  fVar47 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  auVar10 = *param_3;
  auVar9 = *param_3;
  fVar42 = (float)*(undefined8 *)*param_3;
  fVar44 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
  uVar24 = (long)param_2 - (long)param_1;
  iVar31 = (int)(uVar24 >> 4);
  if (iVar31 == 3) {
    if (*(int *)(param_4 + 0x50) == 0) {
      return 1;
    }
    fVar30 = (float)*param_1;
    auVar34._0_4_ = *(float *)(param_1 + 2) - fVar30;
    fVar25 = (float)((ulong)*param_1 >> 0x20);
    auVar34._4_4_ = *(float *)((long)param_1 + 0x14) - fVar25;
    fVar26 = (float)param_1[1];
    auVar34._8_4_ = *(float *)(param_1 + 3) - fVar26;
    fVar27 = (float)((ulong)param_1[1] >> 0x20);
    auVar34._12_4_ = *(float *)((long)param_1 + 0x1c) - fVar27;
    auVar51._0_4_ = *(float *)(param_1 + 4) - fVar30;
    auVar51._4_4_ = *(float *)((long)param_1 + 0x24) - fVar25;
    auVar51._8_4_ = *(float *)(param_1 + 5) - fVar26;
    auVar51._12_4_ = *(float *)((long)param_1 + 0x2c) - fVar27;
    auVar40 = NEON_ext(auVar51,auVar51,4,1);
    auVar39 = NEON_ext(auVar34,auVar34,4,1);
    lVar13 = (long)*(int *)(param_4 + 0x50) << 4;
    auVar48._0_4_ = auVar34._0_4_ * auVar40._0_4_ - auVar51._0_4_ * auVar39._0_4_;
    auVar48._4_4_ = auVar34._4_4_ * auVar40._4_4_ - auVar51._4_4_ * auVar39._4_4_;
    auVar48._8_4_ = auVar34._8_4_ * auVar51._0_4_ - auVar51._8_4_ * auVar34._0_4_;
    auVar48._12_4_ = auVar34._12_4_ * auVar51._4_4_ - auVar51._12_4_ * auVar34._4_4_;
    auVar34 = NEON_ext(auVar48,auVar48,4,1);
    fVar29 = auVar34._0_4_;
    fVar43 = auVar34._4_4_;
    fVar27 = fVar42 * fVar29 + fVar44 * fVar43 + fVar46 * auVar48._0_4_;
    iVar31 = -(uint)(fVar27 == 0.0);
    uVar38 = NEON_fmov(0xbf800000,4);
    uVar32 = CONCAT13(~(byte)((uint)iVar31 >> 0x18),
                      CONCAT12(~(byte)((uint)iVar31 >> 0x10),
                               CONCAT11(~(byte)((uint)iVar31 >> 8),~(byte)iVar31)));
    uVar24 = CONCAT44((float)((ulong)uVar38 >> 0x20) /
                      (fVar42 * fVar29 + fVar44 * fVar43 + fVar46 * auVar48._0_4_),
                      (float)uVar38 / fVar27) & CONCAT44(uVar32,uVar32);
    fVar27 = (float)uVar24;
    fVar28 = (float)(uVar24 >> 0x20);
    fVar30 = -(fVar30 * fVar29 + fVar25 * fVar43 + fVar26 * auVar48._0_4_) * fVar28;
    pfVar19 = *(float **)(param_4 + 0x48);
    do {
      auVar39._0_4_ = fVar29 * fVar27 * *pfVar19;
      auVar39._4_4_ = fVar43 * fVar28 * pfVar19[1];
      auVar39._8_4_ = auVar48._0_4_ * fVar27 * pfVar19[2];
      auVar39._12_4_ = fVar30 * pfVar19[3];
      auVar34 = NEON_ext(auVar39,auVar39,8,1);
      fVar26 = auVar34._0_4_ + fVar30;
      fVar25 = auVar39._0_4_ + auVar39._4_4_ + fVar26;
      fVar26 = auVar39._0_4_ + auVar39._4_4_ + fVar26;
      lVar13 = lVar13 + -0x10;
      pfVar19[2] = pfVar19[2] + fVar46 * fVar25;
      pfVar19[3] = pfVar19[3] + fVar47 * fVar26;
      *pfVar19 = *pfVar19 + fVar42 * fVar25;
      pfVar19[1] = pfVar19[1] + fVar44 * fVar26;
      pfVar19 = pfVar19 + 4;
    } while (lVar13 != 0);
    return 1;
  }
  auVar40 = ZEXT816(0);
  if (param_1 != param_2) {
    puVar17 = param_1;
    auVar34 = auVar40;
    do {
      puVar16 = puVar17 + 2;
      auVar40._0_4_ = auVar34._0_4_ + (float)*puVar17;
      auVar40._4_4_ = auVar34._4_4_ + (float)((ulong)*puVar17 >> 0x20);
      auVar40._8_4_ = auVar34._8_4_ + (float)puVar17[1];
      auVar40._12_4_ = auVar34._12_4_ + (float)((ulong)puVar17[1] >> 0x20);
      puVar17 = puVar16;
      auVar34 = auVar40;
    } while (param_2 != puVar16);
  }
  lVar13 = tpidr_el0;
  lVar14 = *(long *)(lVar13 + 0x1000b8);
  if (lVar14 == 0) {
    lVar14 = FUN_00e5d3b4();
    *(long *)(lVar13 + 0x1000b8) = lVar14;
  }
  lVar23 = ((long)(uVar24 * 0x10000000) >> 0x20) * 0x10;
  lVar11 = *(long *)(*(long *)(lVar14 + 0x3d0) + 0x10);
  lVar14 = lVar11;
  if (*(long *)(lVar11 + 8) != 0) {
    lVar14 = 0;
  }
  local_60 = lVar23;
  if ((lVar11 == 0) || (*(long *)(lVar11 + 8) != 0)) {
    lVar12 = (**(code **)PTR_DAT_047d1a08)(1,&local_60,0x40);
LAB_031687e0:
  }
  else {
    local_58 = lVar23 + 0x3fU & 0xffffffffffffffc0;
    if (*(ulong *)(lVar11 + 0x28) < local_58) {
LAB_031687b8:
      lVar12 = FUN_031cf3b4(lVar11,&local_58);
      goto LAB_031687e0;
    }
    lVar12 = *(long *)(lVar11 + 0x38);
    if (*(ulong *)(lVar11 + 0x40) < local_58 + lVar12) goto LAB_031687b8;
    *(ulong *)(lVar11 + 0x38) = local_58 + lVar12;
  }
  lVar11 = *(long *)(lVar13 + 0x1000b8);
  if (lVar11 == 0) {
    lVar11 = FUN_00e5d3b4();
    *(long *)(lVar13 + 0x1000b8) = lVar11;
  }
  lVar13 = *(long *)(*(long *)(lVar11 + 0x3d0) + 0x10);
  if (*(long *)(lVar13 + 8) == 0) {
    if (lVar13 == 0) goto LAB_031688a4;
    local_58 = lVar23 + 0x3fU & 0xffffffffffffffc0;
    if (*(ulong *)(lVar13 + 0x28) < local_58) {
LAB_0316883c:
      local_60 = lVar23;
      lVar11 = FUN_031cf3b4(lVar13,&local_58);
      goto LAB_031688c0;
    }
    lVar11 = *(long *)(lVar13 + 0x38);
    if (*(ulong *)(lVar13 + 0x40) < local_58 + lVar11) goto LAB_0316883c;
    *(ulong *)(lVar13 + 0x38) = local_58 + lVar11;
    local_60 = lVar23;
  }
  else {
    lVar13 = 0;
LAB_031688a4:
    local_60 = lVar23;
    lVar11 = (**(code **)PTR_DAT_047d1a08)(1,&local_60,0x40);
LAB_031688c0:
  }
  if (0 < iVar31) {
    uVar33 = NEON_fmov(0x3f800000,4);
    uVar38 = NEON_scvtf(CONCAT44(iVar31,iVar31),4);
    fVar26 = (float)uVar33 / (float)uVar38;
    fVar29 = (float)((ulong)uVar33 >> 0x20) / (float)((ulong)uVar38 >> 0x20);
    local_90 = auVar40._0_4_;
    fStack_8c = auVar40._4_4_;
    fStack_88 = auVar40._8_4_;
    fStack_84 = auVar40._12_4_;
    uVar20 = (long)iVar31 - 1;
    local_90 = fVar26 * local_90;
    fStack_8c = fVar29 * fStack_8c;
    fVar26 = fVar26 * fStack_88;
    fVar29 = fVar29 * fStack_84;
    uVar38 = NEON_fmov(0xbf800000,4);
    pfVar19 = (float *)(param_1 + uVar20 * 2);
    uVar15 = 0;
    auVar7._12_4_ = fVar47;
    auVar7._0_12_ = auVar9;
    auVar8._12_4_ = fVar47;
    auVar8._0_12_ = auVar10;
    auVar34 = NEON_ext(auVar7,auVar8,4,1);
    fVar30 = *pfVar19 - local_90;
    fVar27 = pfVar19[1] - fStack_8c;
    fVar25 = pfVar19[2] - fVar26;
    fVar28 = pfVar19[3] - fVar29;
    do {
      auVar2._4_4_ = fVar27;
      auVar2._0_4_ = fVar30;
      auVar2._8_4_ = fVar25;
      auVar2._12_4_ = fVar28;
      auVar3._4_4_ = fVar27;
      auVar3._0_4_ = fVar30;
      auVar3._8_4_ = fVar25;
      auVar3._12_4_ = fVar28;
      auVar48 = NEON_ext(auVar2,auVar3,4,1);
      pfVar19 = (float *)(param_1 + uVar15 * 2);
      auVar50._0_4_ = fVar42 * auVar48._0_4_ - auVar34._0_4_ * fVar30;
      auVar50._4_4_ = fVar44 * auVar48._4_4_ - auVar34._4_4_ * fVar27;
      auVar50._8_4_ = fVar46 * fVar30 - fVar42 * fVar25;
      auVar50._12_4_ = fVar47 * fVar27 - fVar44 * fVar28;
      auVar51 = NEON_ext(auVar50,auVar50,4,1);
      auVar41._0_4_ = *pfVar19 - local_90;
      auVar41._4_4_ = pfVar19[1] - fStack_8c;
      auVar41._8_4_ = pfVar19[2] - fVar26;
      auVar41._12_4_ = pfVar19[3] - fVar29;
      auVar52._0_8_ = auVar51._0_8_;
      auVar52._8_4_ = auVar50._0_4_;
      auVar52._12_4_ =
           -(local_90 * auVar51._0_4_ + fStack_8c * auVar51._4_4_ + fVar26 * auVar50._0_4_);
      auVar51 = NEON_ext(auVar41,auVar41,4,1);
      puVar17 = (undefined8 *)(lVar12 + (long)(int)uVar20 * 0x10);
      puVar17[1] = auVar52._8_8_;
      *puVar17 = auVar52._0_8_;
      fVar43 = fVar30 * auVar51._0_4_ - auVar48._0_4_ * auVar41._0_4_;
      fVar45 = fVar27 * auVar51._4_4_ - auVar48._4_4_ * auVar41._4_4_;
      fVar30 = fVar25 * auVar41._0_4_ - fVar30 * auVar41._8_4_;
      fVar27 = fVar28 * auVar41._4_4_ - fVar27 * auVar41._12_4_;
      auVar4._4_4_ = fVar45;
      auVar4._0_4_ = fVar43;
      auVar4._8_4_ = fVar30;
      auVar4._12_4_ = fVar27;
      auVar5._4_4_ = fVar45;
      auVar5._0_4_ = fVar43;
      auVar5._8_4_ = fVar30;
      auVar5._12_4_ = fVar27;
      auVar48 = NEON_ext(auVar4,auVar5,4,1);
      fVar25 = auVar48._0_4_;
      fVar28 = auVar48._4_4_;
      fVar30 = fVar42 * fVar25 + fVar44 * fVar28 + fVar46 * fVar43;
      iVar49 = -(uint)(fVar30 == 0.0);
      uVar32 = CONCAT13(~(byte)((uint)iVar49 >> 0x18),
                        CONCAT12(~(byte)((uint)iVar49 >> 0x10),
                                 CONCAT11(~(byte)((uint)iVar49 >> 8),~(byte)iVar49)));
      uVar6 = CONCAT44((float)((ulong)uVar38 >> 0x20) /
                       (fVar42 * fVar25 + fVar44 * fVar28 + fVar46 * fVar43),(float)uVar38 / fVar30)
              & CONCAT44(uVar32,uVar32);
      fVar30 = (float)uVar6;
      fVar27 = (float)(uVar6 >> 0x20);
      puVar17 = (undefined8 *)(lVar11 + (long)(int)uVar20 * 0x10);
      puVar17[1] = CONCAT44(-(local_90 * fVar25 + fStack_8c * fVar28 + fVar26 * fVar43) * fVar27,
                            fVar43 * fVar30);
      *puVar17 = CONCAT44(fVar28 * fVar27,fVar25 * fVar30);
      uVar20 = uVar15 & 0xffffffff;
      uVar15 = uVar15 + 1;
      fVar30 = auVar41._0_4_;
      fVar27 = auVar41._4_4_;
      fVar25 = auVar41._8_4_;
      fVar28 = auVar41._12_4_;
    } while ((uVar24 >> 4 & 0xffffffff) != uVar15);
  }
  iVar49 = *(int *)(param_4 + 0x50);
  if (iVar49 != 0) {
    puVar16 = *(undefined8 **)(param_4 + 0x48);
    iVar21 = 0;
    puVar17 = puVar16;
    do {
      iVar22 = iVar21;
      do {
        iVar1 = 0;
        if (iVar22 + 1 != iVar31) {
          iVar1 = iVar22 + 1;
        }
        pfVar19 = (float *)(lVar12 + (long)iVar1 * 0x10);
        fVar27 = (float)*puVar17;
        auVar35._0_4_ = fVar27 * *pfVar19;
        fVar25 = (float)((ulong)*puVar17 >> 0x20);
        auVar35._4_4_ = fVar25 * pfVar19[1];
        fVar28 = (float)puVar17[1];
        auVar35._8_4_ = fVar28 * pfVar19[2];
        fVar26 = (float)((ulong)puVar17[1] >> 0x20);
        auVar35._12_4_ = fVar26 * pfVar19[3];
        auVar34 = NEON_ext(auVar35,auVar35,8,1);
        fVar30 = auVar35._0_4_ + auVar35._4_4_ + auVar34._0_4_ + pfVar19[3];
        if (0.0 <= fVar30) {
          iVar22 = iVar1;
        }
      } while ((iVar1 != iVar21) && (0.0 <= fVar30));
      iVar21 = iVar22;
      do {
        pfVar19 = (float *)(lVar12 + (long)iVar21 * 0x10);
        auVar36._0_4_ = fVar27 * *pfVar19;
        auVar36._4_4_ = fVar25 * pfVar19[1];
        auVar36._8_4_ = fVar28 * pfVar19[2];
        auVar36._12_4_ = fVar26 * pfVar19[3];
        auVar34 = NEON_ext(auVar36,auVar36,8,1);
        if (0.0 <= auVar36._0_4_ + auVar36._4_4_ + auVar34._0_4_ + pfVar19[3]) goto LAB_03168a8c;
        iVar1 = iVar31;
        if (iVar21 != 0) {
          iVar1 = iVar21;
        }
        iVar21 = iVar1 + -1;
      } while (iVar21 != iVar22);
      iVar21 = iVar22;
LAB_03168a8c:
      pfVar19 = (float *)(lVar11 + (long)iVar21 * 0x10);
      auVar37._0_4_ = fVar27 * *pfVar19;
      auVar37._4_4_ = fVar25 * pfVar19[1];
      auVar37._8_4_ = fVar28 * pfVar19[2];
      auVar37._12_4_ = fVar26 * pfVar19[3];
      auVar34 = NEON_ext(auVar37,auVar37,8,1);
      fVar29 = auVar34._0_4_ + pfVar19[3];
      fVar30 = auVar37._0_4_ + auVar37._4_4_ + fVar29;
      fVar29 = auVar37._0_4_ + auVar37._4_4_ + fVar29;
      puVar18 = puVar17 + 2;
      puVar17[1] = CONCAT44(fVar26 + fVar47 * fVar29,fVar28 + fVar46 * fVar30);
      *puVar17 = CONCAT44(fVar25 + fVar44 * fVar29,fVar27 + fVar42 * fVar30);
      puVar17 = puVar18;
    } while (puVar18 != puVar16 + (long)iVar49 * 2);
  }
  if (lVar13 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto joined_r0x03168b24;
  }
  uVar24 = lVar23 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar13 + 0x28) < uVar24) || (*(long *)(lVar13 + 0x38) != uVar24 + lVar11)) {
    if (lVar11 == 0) goto joined_r0x03168b24;
    if (*(ulong *)(lVar13 + 0x28) < uVar24 + 0x40) {
      *(int *)(*(long *)(lVar13 + 0x30) + 0x20) = *(int *)(*(long *)(lVar13 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar13 + 0x10) + 0x18))
                (*(long **)(lVar13 + 0x10),lVar11 - *(int *)(lVar11 + -4),uVar24 + 0x44);
      goto joined_r0x03168b24;
    }
    if (*(long *)(lVar13 + 0x38) != uVar24 + lVar11) {
      FUN_031cf778(lVar13);
      goto joined_r0x03168b24;
    }
    *(long *)(lVar13 + 0x38) = lVar11;
  }
  else {
    *(long *)(lVar13 + 0x38) = lVar11;
    if (*(long *)(lVar13 + 0x48) != lVar11) goto joined_r0x03168b24;
  }
  FUN_031cf578(lVar13);
joined_r0x03168b24:
  if (lVar14 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar12,lVar23);
    return 1;
  }
  uVar24 = lVar23 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar14 + 0x28) < uVar24) || (*(long *)(lVar14 + 0x38) != uVar24 + lVar12)) {
    if (lVar12 == 0) {
      return 1;
    }
    if (*(ulong *)(lVar14 + 0x28) < uVar24 + 0x40) {
      *(int *)(*(long *)(lVar14 + 0x30) + 0x20) = *(int *)(*(long *)(lVar14 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar14 + 0x10) + 0x18))
                (*(long **)(lVar14 + 0x10),lVar12 - *(int *)(lVar12 + -4),uVar24 + 0x44);
      return 1;
    }
    if (*(long *)(lVar14 + 0x38) != uVar24 + lVar12) {
      FUN_031cf778(lVar14,lVar12);
      return 1;
    }
    *(long *)(lVar14 + 0x38) = lVar12;
  }
  else {
    *(long *)(lVar14 + 0x38) = lVar12;
    if (*(long *)(lVar14 + 0x48) != lVar12) {
      return 1;
    }
  }
  FUN_031cf578(lVar14);
  return 1;
}


