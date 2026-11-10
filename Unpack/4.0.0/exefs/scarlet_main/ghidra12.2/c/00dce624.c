/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dce624; name: FUN_00dce624
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dce624(long param_1,undefined8 param_2,undefined1 (*param_3) [16],long param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined1 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  char *pcVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  uint uVar20;
  long *plVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar27;
  float fVar28;
  undefined1 auVar26 [16];
  float fVar29;
  float fVar30;
  int iVar31;
  float fVar32;
  float fVar33;
  int iVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  ulong local_170 [2];
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  char *local_148;
  ulong local_140 [3];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long lStack_f8;
  uint local_f0;
  undefined8 *local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 *local_c8;
  ulong local_c0;
  char *local_b8;
  undefined8 local_b0;
  long local_a8;
  char *local_a0;
  ulong local_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  ulong local_70;
  
  lVar15 = tpidr_el0;
  lVar13 = *(long *)(lVar15 + 0x1000b8);
  if (lVar13 == 0) {
    lVar13 = FUN_00e5d3b4();
    *(long *)(lVar15 + 0x1000b8) = lVar13;
  }
  plVar21 = *(long **)(lVar13 + 0x3e0);
  if (plVar21 == (long *)0x0) {
    uVar14 = _DAT_00000010;
    uVar22 = _DAT_00000020;
  }
  else {
    lVar13 = *plVar21;
    if (*(code **)(lVar13 + 0x18) != (code *)0x0) {
      (**(code **)(lVar13 + 0x18))("checkSupport",0xc,*(undefined8 *)(lVar13 + 0x28));
    }
    puVar19 = (undefined8 *)plVar21[2];
    uVar14 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar21[3]) && (plVar21[2] = uVar14, puVar19 != (undefined8 *)0x0)) {
      *puVar19 = "TtcheckSupport";
      uVar10 = nn::os::GetSystemTick();
      puVar19[1] = uVar10;
    }
    if (((*(byte *)(lVar13 + 0x38) & 1) != 0) && (plVar21[6] != 0)) {
      puVar19 = (undefined8 *)plVar21[2];
      uVar14 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar21[3]) && (plVar21[2] = uVar14, puVar19 != (undefined8 *)0x0)) {
        *puVar19 = &DAT_03c4e575;
        puVar19[1] = *(undefined8 *)(plVar21[6] + 8);
      }
    }
    uVar14 = plVar21[2];
    uVar22 = plVar21[4];
  }
  if ((uVar14 < uVar22) && (*(int *)(param_1 + 0x100) != 0)) {
    lVar13 = (long)*(int *)(param_1 + 0x100) << 3;
    puVar19 = *(undefined8 **)(param_1 + 0xf8);
    do {
      (**(code **)(*(long *)*puVar19 + 0x60))((long *)*puVar19,param_1);
      lVar13 = lVar13 + -8;
      puVar19 = puVar19 + 1;
    } while (lVar13 != 0);
  }
  if (*(char *)(param_1 + 0x164) != '\0') {
    FUN_02ffcc04(param_1,param_5);
  }
  uVar20 = *(uint *)(param_1 + 0x20);
  if (uVar20 == 0) {
    *(undefined1 *)(param_4 + 1) = 0;
    if (plVar21 == (long *)0x0) {
      return;
    }
    lVar15 = *plVar21;
    if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (plVar21[6] != 0)) {
      puVar19 = (undefined8 *)plVar21[2];
      uVar14 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar21[3]) && (plVar21[2] = uVar14, puVar19 != (undefined8 *)0x0)) {
        *puVar19 = &DAT_03c4e575;
        puVar19[1] = *(undefined8 *)(plVar21[6] + 8);
      }
    }
    puVar19 = (undefined8 *)plVar21[2];
    uVar14 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar21[3]) && (plVar21[2] = uVar14, puVar19 != (undefined8 *)0x0)) {
      *puVar19 = &DAT_03c2d363;
      uVar10 = nn::os::GetSystemTick();
      puVar19[1] = uVar10;
    }
    if (*(code **)(lVar15 + 0x20) == (code *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00dce95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar15 + 0x20))(*(undefined8 *)(lVar15 + 0x28));
    return;
  }
  if ((*(char *)(param_1 + 0x164) == '\0') && (uVar14 = (ulong)uVar20, 0 < (int)uVar20)) {
    do {
      uVar22 = uVar14 - 1;
      iVar9 = (**(code **)(**(long **)(param_1 + 0x48) + 0x78))
                        (*(long **)(param_1 + 0x48),
                         *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar22 * 0x40 + 0x28));
      if (iVar9 == 0) {
        lVar13 = *(long *)(param_1 + 0x18);
        if (0 < (int)*(uint *)(param_1 + 0x100)) {
          uVar6 = (ulong)*(uint *)(param_1 + 0x100);
          do {
            plVar11 = *(long **)(*(long *)(param_1 + 0xf8) + (uVar6 - 1) * 8);
            (**(code **)(*plVar11 + 0x30))(plVar11,param_1,lVar13 + uVar22 * 0x40);
            bVar1 = 1 < (long)uVar6;
            uVar6 = uVar6 - 1;
          } while (bVar1);
          lVar13 = *(long *)(param_1 + 0x18);
        }
        iVar9 = *(int *)(param_1 + 0x20);
        lVar16 = (long)iVar9 + -1;
        *(int *)(param_1 + 0x20) = (int)lVar16;
        if (iVar9 != (int)uVar14) {
          memcpy((void *)(lVar13 + uVar22 * 0x40),(void *)(lVar13 + lVar16 * 0x40),0x38);
        }
      }
      bVar1 = 1 < (long)uVar14;
      uVar14 = uVar22;
    } while (bVar1);
    uVar20 = *(uint *)(param_1 + 0x20);
  }
  iVar9 = *(int *)(param_1 + 0x14c);
  local_90 = 0;
  local_88 = 0x8000000000000000;
  lVar13 = *(long *)(lVar15 + 0x1000b8);
  if (lVar13 == 0) {
    lVar13 = FUN_00e5d3b4();
    *(long *)(lVar15 + 0x1000b8) = lVar13;
  }
  iVar9 = uVar20 + iVar9 + 10;
  local_80 = *(long *)(*(long *)(lVar13 + 0x3d0) + 0x10);
  if (*(long *)(local_80 + 8) != 0) {
    local_80 = 0;
  }
  local_170[0] = (long)iVar9 * 0x50;
  local_70 = local_170[0];
  if (local_80 == 0) {
    local_78 = (**(code **)PTR_DAT_047d1a08)(1,local_170,0x40);
  }
  else {
    local_140[0] = local_170[0] + 0x3f & 0xffffffffffffffc0;
    if (local_140[0] <= *(ulong *)(local_80 + 0x28)) {
      local_78 = *(long *)(local_80 + 0x38);
      if (local_140[0] + local_78 <= *(ulong *)(local_80 + 0x40)) {
        *(ulong *)(local_80 + 0x38) = local_140[0] + local_78;
        goto LAB_00dce980;
      }
    }
    local_78 = FUN_031cf3b4(local_80,local_140);
  }
LAB_00dce980:
  local_88 = CONCAT44(iVar9,(uint)local_88) | 0x8000000000000000;
  local_90 = local_78;
  FUN_02ffdb84(0,param_1,param_2,&local_90);
  iVar31 = (uint)local_88;
  iVar9 = *(int *)(param_1 + 0x14c);
  local_b8 = (char *)0x0;
  local_b0 = 0x8000000000000000;
  lVar13 = *(long *)(lVar15 + 0x1000b8);
  if (lVar13 == 0) {
    lVar13 = FUN_00e5d3b4();
    *(long *)(lVar15 + 0x1000b8) = lVar13;
  }
  uVar20 = iVar9 + iVar31;
  local_a8 = *(long *)(*(long *)(lVar13 + 0x3d0) + 0x10);
  if (*(long *)(local_a8 + 8) != 0) {
    local_a8 = 0;
  }
  local_170[0] = -(ulong)(uVar20 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar20 << 4;
  local_98 = local_170[0];
  if (local_a8 == 0) {
    local_a0 = (char *)(**(code **)PTR_DAT_047d1a08)(1,local_170,0x40);
  }
  else {
    local_140[0] = local_170[0] + 0x3f & 0xffffffffffffffc0;
    if (local_140[0] <= *(ulong *)(local_a8 + 0x28)) {
      local_a0 = *(char **)(local_a8 + 0x38);
      if (local_a0 + local_140[0] <= *(char **)(local_a8 + 0x40)) {
        *(char **)(local_a8 + 0x38) = local_a0 + local_140[0];
        goto LAB_00dcea48;
      }
    }
    local_a0 = (char *)FUN_031cf3b4(local_a8,local_140);
  }
LAB_00dcea48:
  iVar31 = (uint)local_88;
  local_b0 = CONCAT44(uVar20,(uint)local_b0) | 0x8000000000000000;
  iVar9 = *(int *)(param_1 + 0x14c);
  local_e0 = (undefined8 *)0x0;
  local_d8 = 0x8000000000000000;
  lVar13 = *(long *)(lVar15 + 0x1000b8);
  local_b8 = local_a0;
  if (lVar13 == 0) {
    lVar13 = FUN_00e5d3b4();
    *(long *)(lVar15 + 0x1000b8) = lVar13;
  }
  uVar20 = iVar9 + iVar31;
  local_d0 = *(long *)(*(long *)(lVar13 + 0x3d0) + 0x10);
  if (*(long *)(local_d0 + 8) != 0) {
    local_d0 = 0;
  }
  local_170[0] = -(ulong)(uVar20 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar20 << 4;
  local_c0 = local_170[0];
  if (local_d0 == 0) {
    local_c8 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(1,local_170,0x40);
  }
  else {
    local_140[0] = local_170[0] + 0x3f & 0xffffffffffffffc0;
    if (local_140[0] <= *(ulong *)(local_d0 + 0x28)) {
      local_c8 = *(undefined8 **)(local_d0 + 0x38);
      if (local_140[0] + (long)local_c8 <= *(ulong *)(local_d0 + 0x40)) {
        *(ulong *)(local_d0 + 0x38) = local_140[0] + (long)local_c8;
        goto LAB_00dceafc;
      }
    }
    local_c8 = (undefined8 *)FUN_031cf3b4(local_d0,local_140);
  }
LAB_00dceafc:
  local_d8 = CONCAT44(uVar20,(uint)local_d8) | 0x8000000000000000;
  local_140[0] = 0;
  local_140[1] = 0;
  local_f0 = (uint)local_88;
  local_100 = 0x3c8888893c888889;
  lStack_f8 = local_90;
  uStack_108 = *(undefined8 *)(param_1 + 0x138);
  local_110 = *(undefined8 *)(param_1 + 0x130);
  uVar2 = *(undefined4 *)(param_1 + 0x150);
  uStack_128 = SUB168(*param_3,8);
  local_140[2] = SUB168(*param_3,0);
  uStack_118 = CONCAT44(uVar2,uVar2);
  uStack_120 = CONCAT44(uVar2,uVar2);
  lVar15 = (long)*(int *)(param_1 + 0x14c) + (long)(int)(uint)local_88;
  uVar20 = (uint)lVar15;
  local_e0 = local_c8;
  if ((int)(local_88._4_4_ & 0x7fffffff) < (int)uVar20) {
    FUN_02ffbc8c(&local_90,PTR_PTR_047d1a50,lVar15);
  }
  if ((uint)local_88 != uVar20) {
    local_88 = CONCAT44(local_88._4_4_,uVar20);
  }
  if (0 < (int)*(uint *)(param_1 + 0x100)) {
    uVar14 = (ulong)*(uint *)(param_1 + 0x100);
    do {
      plVar11 = *(long **)(*(long *)(param_1 + 0xf8) + (uVar14 - 1) * 8);
      (**(code **)(*plVar11 + 0x20))(plVar11,param_1,param_1 + 0x18,local_140);
      bVar1 = 1 < (long)uVar14;
      uVar14 = uVar14 - 1;
    } while (bVar1);
  }
  uVar20 = local_f0;
  if ((int)(local_d8._4_4_ & 0x7fffffff) < (int)local_f0) {
    FUN_02e8df28(&local_e0,PTR_PTR_047d1a50,(long)(int)local_f0);
  }
  uVar8 = local_f0;
  if ((uint)local_d8 != uVar20) {
    local_d8 = CONCAT44(local_d8._4_4_,uVar20);
  }
  if ((int)(local_b0._4_4_ & 0x7fffffff) < (int)local_f0) {
    FUN_02ffbe08(&local_b8,PTR_PTR_047d1a50,(long)(int)local_f0);
  }
  uVar20 = local_f0;
  if ((uint)local_b0 != uVar8) {
    local_b0 = CONCAT44(local_b0._4_4_,uVar8);
  }
  if ((int)(local_88._4_4_ & 0x7fffffff) < (int)local_f0) {
    FUN_02ffbc8c(&local_90,PTR_PTR_047d1a50,(long)(int)local_f0);
  }
  if ((uint)local_88 != uVar20) {
    local_88 = CONCAT44(local_88._4_4_,uVar20);
  }
  if (0 < (int)local_f0) {
    lVar15 = 0;
    lVar13 = 0x10;
    do {
      uVar10 = *(undefined8 *)(local_90 + lVar13);
      (local_e0 + lVar15 * 2)[1] = ((undefined8 *)(local_90 + lVar13))[1];
      local_e0[lVar15 * 2] = uVar10;
      lVar15 = lVar15 + 1;
      *(undefined8 *)(local_90 + lVar13) = 0;
      ((undefined8 *)(local_90 + lVar13))[1] = 0;
      lVar13 = lVar13 + 0x50;
    } while (lVar15 < (int)local_f0);
  }
  local_148 = local_b8;
  FUN_0325c9d0(local_140,local_170);
  *(undefined4 *)(param_4 + 4) = 0;
  *(undefined8 *)(param_4 + 0x10) = 0;
  *(undefined8 *)(param_4 + 0x18) = 0;
  *(undefined8 *)(param_4 + 0x20) = 0;
  *(undefined8 *)(param_4 + 0x28) = 0;
  *(undefined8 *)(param_4 + 0x30) = 0;
  *(undefined8 *)(param_4 + 0x38) = 0;
  fVar25 = (float)*(undefined8 *)(*param_3 + 8);
  fVar23 = (float)*(undefined8 *)*param_3;
  fVar24 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
  iVar9 = -(uint)(ABS(local_160 - fVar23) <= 0.001);
  iVar31 = -(uint)(ABS(fStack_15c - fVar24) <= 0.001);
  iVar34 = -(uint)(ABS(fStack_158 - fVar25) <= 0.001);
  if (CONCAT13((byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar9 >> 0x18) &
               (byte)((uint)iVar34 >> 0x18),
               CONCAT12((byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar9 >> 0x10) &
                        (byte)((uint)iVar34 >> 0x10),
                        CONCAT11((byte)((uint)iVar31 >> 8) & (byte)((uint)iVar9 >> 8) &
                                 (byte)((uint)iVar34 >> 8),(byte)iVar31 & (byte)iVar9 & (byte)iVar34
                                ))) == 0) {
    fVar30 = fStack_158 * fStack_158 + local_160 * local_160 + fStack_15c * fStack_15c;
    if (fVar30 < 0.001) {
LAB_00dceea4:
      uVar12 = 2;
    }
    else {
      if (fVar30 == 0.0) {
        local_160 = 0.0;
        fStack_15c = 0.0;
        fStack_158 = 0.0;
        fStack_154 = 0.0;
      }
      else {
        fVar32 = SQRT(fStack_158 * fStack_158 + local_160 * local_160 + fStack_15c * fStack_15c);
        local_160 = local_160 / SQRT(fVar30);
        fStack_15c = fStack_15c / fVar32;
        fStack_158 = fStack_158 / SQRT(fVar30);
        fStack_154 = fStack_154 / fVar32;
      }
      fVar23 = fVar23 * local_160;
      fVar24 = fVar24 * fStack_15c;
      fVar25 = fVar25 * fStack_158;
      fVar30 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20) * fStack_154;
      auVar26._4_4_ = fVar24;
      auVar26._0_4_ = fVar23;
      auVar26._8_4_ = fVar25;
      auVar26._12_4_ = fVar30;
      auVar3._4_4_ = fVar24;
      auVar3._0_4_ = fVar23;
      auVar3._8_4_ = fVar25;
      auVar3._12_4_ = fVar30;
      auVar26 = NEON_ext(auVar26,auVar3,8,1);
      fVar23 = fVar23 + fVar24 + auVar26._0_4_;
      if (*(float *)(param_1 + 0x118) * *(float *)(param_1 + 0x118) <= 1.0 - fVar23 * fVar23)
      goto LAB_00dceea4;
      uVar12 = 1;
    }
    *(undefined1 *)(param_4 + 1) = uVar12;
    uVar14 = (ulong)local_f0;
    if ((int)local_f0 < 1) goto LAB_00dced0c;
    fVar23 = 0.0;
    fVar24 = 0.0;
    fVar25 = 0.0;
    fVar30 = 0.0;
    uVar36 = 0;
    uVar10 = 0;
    fVar32 = 0.0;
    fVar27 = 0.0;
    fVar28 = 0.0;
    fVar29 = 0.0;
    iVar9 = 0;
    puVar19 = (undefined8 *)(local_90 + 0x20);
    pcVar17 = local_b8;
    puVar18 = local_e0;
    do {
      if (*pcVar17 != '\0') {
        fVar38 = (float)puVar19[-4];
        fVar39 = fVar38 * (float)*(undefined8 *)*param_3;
        fVar33 = (float)((ulong)puVar19[-4] >> 0x20);
        fVar40 = fVar33 * (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
        fVar35 = (float)puVar19[-3];
        fVar41 = fVar35 * (float)*(undefined8 *)(*param_3 + 8);
        fVar37 = (float)((ulong)puVar19[-3] >> 0x20);
        fVar42 = fVar37 * (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
        auVar4._4_4_ = fVar40;
        auVar4._0_4_ = fVar39;
        auVar4._8_4_ = fVar41;
        auVar4._12_4_ = fVar42;
        auVar5._4_4_ = fVar40;
        auVar5._0_4_ = fVar39;
        auVar5._8_4_ = fVar41;
        auVar5._12_4_ = fVar42;
        auVar26 = NEON_ext(auVar4,auVar5,8,1);
        if (fVar39 + fVar40 + auVar26._0_4_ < -0.08) {
          uVar10 = CONCAT44((float)((ulong)uVar10 >> 0x20) + fVar33,(float)uVar10 + fVar38);
          uVar36 = CONCAT44((float)((ulong)uVar36 >> 0x20) + fVar37,(float)uVar36 + fVar35);
          iVar9 = iVar9 + 1;
          *(undefined8 *)(param_4 + 0x18) = uVar36;
          *(undefined8 *)(param_4 + 0x10) = uVar10;
          fVar32 = fVar32 + (float)*puVar18;
          fVar27 = fVar27 + (float)((ulong)*puVar18 >> 0x20);
          fVar28 = fVar28 + (float)puVar18[1];
          fVar29 = fVar29 + (float)((ulong)puVar18[1] >> 0x20);
          *(float *)(param_4 + 0x28) = fVar28;
          *(float *)(param_4 + 0x2c) = fVar29;
          *(float *)(param_4 + 0x20) = fVar32;
          *(float *)(param_4 + 0x24) = fVar27;
          fVar23 = fVar23 + (float)*puVar19;
          fVar24 = fVar24 + (float)((ulong)*puVar19 >> 0x20);
          fVar25 = fVar25 + (float)puVar19[1];
          fVar30 = fVar30 + (float)((ulong)puVar19[1] >> 0x20);
          *(ulong *)(param_4 + 0x38) = CONCAT44(fVar30,fVar25);
          *(ulong *)(param_4 + 0x30) = CONCAT44(fVar24,fVar23);
        }
      }
      uVar14 = uVar14 - 1;
      puVar19 = puVar19 + 10;
      puVar18 = puVar18 + 2;
      pcVar17 = pcVar17 + 0x10;
    } while (uVar14 != 0);
    if (iVar9 < 1) goto LAB_00dced0c;
    fVar38 = (float)uVar10;
    fVar33 = (float)((ulong)uVar10 >> 0x20);
    fVar35 = (float)uVar36;
    fVar37 = fVar35 * fVar35 + fVar38 * fVar38 + fVar33 * fVar33;
    if (fVar37 == 0.0) {
      uVar10 = 0;
      uVar36 = 0;
    }
    else {
      fVar37 = SQRT(fVar37);
      fVar39 = SQRT(fVar35 * fVar35 + fVar38 * fVar38 + fVar33 * fVar33);
      uVar10 = CONCAT44(fVar33 / fVar39,fVar38 / fVar37);
      uVar36 = CONCAT44((float)((ulong)uVar36 >> 0x20) / fVar39,fVar35 / fVar37);
    }
    fVar38 = 1.0 / (float)iVar9;
    *(undefined8 *)(param_4 + 0x18) = uVar36;
    *(undefined8 *)(param_4 + 0x10) = uVar10;
    *(float *)(param_4 + 0x28) = fVar28 * fVar38;
    *(float *)(param_4 + 0x2c) = fVar29 * fVar38;
    *(float *)(param_4 + 0x20) = fVar32 * fVar38;
    *(float *)(param_4 + 0x24) = fVar27 * fVar38;
    *(ulong *)(param_4 + 0x38) = CONCAT44(fVar30 * fVar38,fVar25 * fVar38);
    *(ulong *)(param_4 + 0x30) = CONCAT44(fVar24 * fVar38,fVar23 * fVar38);
  }
  else {
LAB_00dced0c:
    *(undefined1 *)(param_4 + 1) = 0;
  }
  if (plVar21 != (long *)0x0) {
    lVar15 = *plVar21;
    if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (plVar21[6] != 0)) {
      puVar19 = (undefined8 *)plVar21[2];
      uVar14 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar21[3]) && (plVar21[2] = uVar14, puVar19 != (undefined8 *)0x0)) {
        *puVar19 = &DAT_03c4e575;
        puVar19[1] = *(undefined8 *)(plVar21[6] + 8);
      }
    }
    puVar19 = (undefined8 *)plVar21[2];
    uVar14 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar21[3]) && (plVar21[2] = uVar14, puVar19 != (undefined8 *)0x0)) {
      *puVar19 = &DAT_03c2d363;
      uVar10 = nn::os::GetSystemTick();
      puVar19[1] = uVar10;
    }
    if (*(code **)(lVar15 + 0x20) != (code *)0x0) {
      (**(code **)(lVar15 + 0x20))(*(undefined8 *)(lVar15 + 0x28));
    }
  }
  if (local_c8 == local_e0) {
    local_d8 = local_d8 & 0xffffffff00000000;
  }
  if (local_d0 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar14 = local_c0 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(local_d0 + 0x28) < uVar14) ||
       (*(long *)(local_d0 + 0x38) != uVar14 + (long)local_c8)) {
      if (local_c8 != (undefined8 *)0x0) {
        if (*(ulong *)(local_d0 + 0x28) < uVar14 + 0x40) {
          *(int *)(*(long *)(local_d0 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_d0 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_d0 + 0x10) + 0x18))
                    (*(long **)(local_d0 + 0x10),
                     (long)local_c8 - (long)*(int *)((long)local_c8 + -4),uVar14 + 0x44);
        }
        else {
          if (*(long *)(local_d0 + 0x38) == uVar14 + (long)local_c8) {
            *(undefined8 **)(local_d0 + 0x38) = local_c8;
            goto LAB_00dcefdc;
          }
          FUN_031cf778();
        }
      }
    }
    else {
      *(undefined8 **)(local_d0 + 0x38) = local_c8;
      if (*(undefined8 **)(local_d0 + 0x48) == local_c8) {
LAB_00dcefdc:
        FUN_031cf578();
      }
    }
  }
  uVar22 = local_d8;
  puVar7 = PTR_PTR_047d1a50;
  uVar14 = local_d8 >> 0x20;
  local_d8 = uVar14 << 0x20;
  if ((-1 < (long)uVar22) && (local_e0 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_e0,uVar14 << 4);
  }
  if (local_a0 == local_b8) {
    local_b0 = local_b0 & 0xffffffff00000000;
  }
  if (local_a8 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar14 = local_98 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(local_a8 + 0x28) < uVar14) || (*(char **)(local_a8 + 0x38) != local_a0 + uVar14)
       ) {
      if (local_a0 != (char *)0x0) {
        if (*(ulong *)(local_a8 + 0x28) < uVar14 + 0x40) {
          *(int *)(*(long *)(local_a8 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_a8 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_a8 + 0x10) + 0x18))
                    (*(long **)(local_a8 + 0x10),(long)local_a0 - (long)*(int *)(local_a0 + -4),
                     uVar14 + 0x44);
        }
        else {
          if (*(char **)(local_a8 + 0x38) == local_a0 + uVar14) {
            *(char **)(local_a8 + 0x38) = local_a0;
            goto LAB_00dcf0d8;
          }
          FUN_031cf778();
        }
      }
    }
    else {
      *(char **)(local_a8 + 0x38) = local_a0;
      if (*(char **)(local_a8 + 0x48) == local_a0) {
LAB_00dcf0d8:
        FUN_031cf578();
      }
    }
  }
  uVar14 = local_b0;
  uVar22 = (ulong)local_b0._4_4_;
  local_b0 = (ulong)local_b0._4_4_ << 0x20;
  if ((-1 < (long)uVar14) && (local_b8 != (char *)0x0)) {
    (**(code **)(*(long *)puVar7 + 0x20))(puVar7,local_b8,uVar22 << 4);
  }
  if (local_78 == local_90) {
    local_88 = local_88 & 0xffffffff00000000;
  }
  if (local_80 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_00dcf1d0;
  }
  uVar14 = local_70 + 0x3f & 0xffffffffffffffc0;
  if ((*(ulong *)(local_80 + 0x28) < uVar14) || (*(long *)(local_80 + 0x38) != uVar14 + local_78)) {
    if (local_78 == 0) goto LAB_00dcf1d0;
    if (*(ulong *)(local_80 + 0x28) < uVar14 + 0x40) {
      *(int *)(*(long *)(local_80 + 0x30) + 0x20) = *(int *)(*(long *)(local_80 + 0x30) + 0x20) + -1
      ;
      (**(code **)(**(long **)(local_80 + 0x10) + 0x18))
                (*(long **)(local_80 + 0x10),local_78 - *(int *)(local_78 + -4),uVar14 + 0x44);
      goto LAB_00dcf1d0;
    }
    if (*(long *)(local_80 + 0x38) != uVar14 + local_78) {
      FUN_031cf778();
      goto LAB_00dcf1d0;
    }
    *(long *)(local_80 + 0x38) = local_78;
  }
  else {
    *(long *)(local_80 + 0x38) = local_78;
    if (*(long *)(local_80 + 0x48) != local_78) goto LAB_00dcf1d0;
  }
  FUN_031cf578();
LAB_00dcf1d0:
  uVar14 = local_88;
  uVar22 = (ulong)local_88._4_4_;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < (long)uVar14) && (local_90 != 0)) {
    (**(code **)(*(long *)puVar7 + 0x20))(puVar7,local_90,uVar22 * 0x50);
  }
  return;
}


