/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031637ac; name: FUN_031637ac
 */


void FUN_031637ac(undefined8 *param_1,long param_2,undefined8 *param_3,uint param_4,ulong param_5,
                 long *param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  short sVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  bool bVar17;
  int iVar18;
  long *plVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
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
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  int local_6c;
  undefined8 local_68;
  
  lVar20 = tpidr_el0;
  lVar8 = *(long *)(lVar20 + 0x1000b8);
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar20 + 0x1000b8) = lVar8;
  }
  plVar19 = *(long **)(lVar8 + 0x3e0);
  if (plVar19 != (long *)0x0) {
    lVar20 = *plVar19;
    if (*(code **)(lVar20 + 0x18) != (code *)0x0) {
      (**(code **)(lVar20 + 0x18))("addFaceLoop",0xb,*(undefined8 *)(lVar20 + 0x28));
    }
    puVar11 = (undefined8 *)plVar19[2];
    uVar9 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar19[3]) && (plVar19[2] = uVar9, puVar11 != (undefined8 *)0x0)) {
      *puVar11 = "TtaddFaceLoop";
      uVar5 = nn::os::GetSystemTick();
      puVar11[1] = uVar5;
    }
    if (((*(byte *)(lVar20 + 0x38) & 1) != 0) && (plVar19[6] != 0)) {
      puVar11 = (undefined8 *)plVar19[2];
      uVar9 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar19[3]) && (plVar19[2] = uVar9, puVar11 != (undefined8 *)0x0)) {
        *puVar11 = &DAT_03c4e575;
        puVar11[1] = *(undefined8 *)(plVar19[6] + 8);
      }
    }
  }
  uVar5 = *param_3;
  param_5 = param_5 & 0x3fffff;
  param_1[1] = param_3[1];
  *param_1 = uVar5;
  puVar2 = (undefined4 *)(*(long *)(param_2 + 0x18) + param_5 * 0x10);
  local_70 = *puVar2;
  local_6c = puVar2[1];
  local_68 = *(undefined8 *)(puVar2 + 2);
  iVar18 = (short)local_68 + 1;
  if ((int)param_6[1] <= (int)(short)local_68 || iVar18 < (int)param_6[1]) {
    *(int *)(param_6 + 1) = iVar18;
  }
  FUN_03095f54(param_2,&local_70,param_6);
  local_80 = 0;
  fVar21 = 0.0;
  fVar27 = 0.0;
  fVar25 = 0.0;
  fVar26 = 0.0;
  fVar24 = 0.0;
  fVar22 = 0.0;
  fVar23 = 0.0;
  uVar7 = (int)param_6[1] - 1;
  uVar9 = (ulong)uVar7;
  if (1 < (int)param_6[1]) {
    puVar11 = (undefined8 *)*param_6;
    fVar22 = 0.0;
    fVar23 = 0.0;
    fVar24 = 0.0;
    fVar37 = (float)puVar11[1];
    fVar40 = (float)((ulong)puVar11[1] >> 0x20);
    fVar30 = (float)*puVar11;
    fVar33 = (float)((ulong)*puVar11 >> 0x20);
    fVar27 = 0.0;
    fVar25 = 0.0;
    fVar26 = 0.0;
    fVar28 = fVar30;
    fVar34 = fVar33;
    fVar38 = fVar37;
    fVar41 = fVar40;
    do {
      uVar5 = puVar11[2];
      uVar9 = uVar9 - 1;
      fVar22 = fVar28 + fVar22;
      fVar23 = fVar34 + fVar23;
      fVar24 = fVar38 + fVar24;
      fVar31 = fVar28 - fVar30;
      fVar35 = fVar34 - fVar33;
      fVar39 = fVar38 - fVar37;
      fVar42 = fVar41 - fVar40;
      auVar44._4_4_ = fVar35;
      auVar44._0_4_ = fVar31;
      auVar44._8_4_ = fVar39;
      auVar44._12_4_ = fVar42;
      auVar45._4_4_ = fVar35;
      auVar45._0_4_ = fVar31;
      auVar45._8_4_ = fVar39;
      auVar45._12_4_ = fVar42;
      auVar44 = NEON_ext(auVar44,auVar45,4,1);
      fVar28 = (float)uVar5;
      auVar43._0_4_ = fVar28 - fVar30;
      fVar34 = (float)((ulong)uVar5 >> 0x20);
      auVar43._4_4_ = fVar34 - fVar33;
      fVar38 = (float)puVar11[3];
      auVar43._8_4_ = fVar38 - fVar37;
      fVar41 = (float)((ulong)puVar11[3] >> 0x20);
      auVar43._12_4_ = fVar41 - fVar40;
      auVar45 = NEON_ext(auVar43,auVar43,4,1);
      fVar32 = fVar31 * auVar45._0_4_ - auVar44._0_4_ * auVar43._0_4_;
      fVar36 = fVar35 * auVar45._4_4_ - auVar44._4_4_ * auVar43._4_4_;
      fVar31 = fVar39 * auVar43._0_4_ - fVar31 * auVar43._8_4_;
      fVar35 = fVar42 * auVar43._4_4_ - fVar35 * auVar43._12_4_;
      auVar3._4_4_ = fVar36;
      auVar3._0_4_ = fVar32;
      auVar3._8_4_ = fVar31;
      auVar3._12_4_ = fVar35;
      auVar4._4_4_ = fVar36;
      auVar4._0_4_ = fVar32;
      auVar4._8_4_ = fVar31;
      auVar4._12_4_ = fVar35;
      auVar44 = NEON_ext(auVar3,auVar4,4,1);
      fVar25 = fVar25 + auVar44._0_4_;
      fVar26 = fVar26 + auVar44._4_4_;
      fVar27 = fVar27 + fVar32;
      puVar11 = puVar11 + 2;
    } while (uVar9 != 0);
  }
  fVar28 = fVar27 * fVar27 + fVar25 * fVar25 + fVar26 * fVar26;
  if (fVar28 != 0.0) {
    fVar28 = SQRT(fVar28);
    local_80 = CONCAT44(fVar26 / SQRT(fVar27 * fVar27 + fVar25 * fVar25 + fVar26 * fVar26),
                        fVar25 / fVar28);
    fVar21 = fVar27 / fVar28;
  }
  uVar29 = NEON_fmov(0x3f800000,4);
  uVar5 = NEON_scvtf(CONCAT44(uVar7,uVar7),4);
  fVar25 = (float)uVar29 / (float)uVar5;
  uStack_78 = CONCAT44(-(fVar25 * fVar22 * (float)local_80 +
                         ((float)((ulong)uVar29 >> 0x20) / (float)((ulong)uVar5 >> 0x20)) * fVar23 *
                         (float)((ulong)local_80 >> 0x20) + fVar25 * fVar24 * fVar21),fVar21);
  if ((param_4 & 1) != 0) {
    param_1[1] = uStack_78;
    *param_1 = local_80;
    uVar7 = (int)param_6[1] - 1;
  }
  *(uint *)(param_6 + 1) = uVar7;
  FUN_03166650(*(undefined4 *)((long)param_1 + 0x144),param_1,&local_80,param_6);
  FUN_031668a0(param_1,param_6);
  local_88[0] = (undefined4)param_5;
  iVar18 = (int)local_68._2_2_;
  if ((*(int *)(param_2 + 0x108) == 0) ||
     ((*(byte *)(*(long *)(param_2 + 0x100) + param_5) >> 3 & 1) == 0)) {
    puVar11 = (undefined8 *)0x0;
    bVar17 = true;
  }
  else {
    lVar20 = FUN_03095288((long *)(param_2 + 0x188),local_88);
    if (lVar20 == 0) {
      uVar10 = 0;
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = *(uint *)(lVar20 + 4);
      uVar10 = ((int)lVar20 - (int)*(undefined8 *)(param_2 + 0x198)) * 0x20000000;
    }
    lVar20 = *(long *)(param_2 + 0x188) + (long)(int)(uVar7 | uVar10) * 0x38;
    puVar11 = (undefined8 *)(lVar20 + 8);
    bVar17 = false;
    iVar18 = *(int *)(lVar20 + 0x10) + iVar18;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((int)(*(uint *)((long)param_1 + 0x164) & 0x7fffffff) < iVar18) {
    FUN_03164d38(param_1 + 0x2b,(long)iVar18);
  }
  if (0 < local_68._2_2_) {
    iVar18 = 0;
    do {
      iVar1 = iVar18 + local_6c;
      iVar13 = iVar1 - *(int *)(param_2 + 0x30);
      if (iVar1 < *(int *)(param_2 + 0x30)) {
        if (*(int *)(param_2 + 0x78) == 0) {
          iVar12 = iVar1;
        }
        else {
          iVar12 = *(int *)(*(long *)(param_2 + 0x70) + (long)iVar1 * 4);
        }
        lVar20 = *(long *)(param_2 + 0x28);
        iVar13 = iVar1;
        if (iVar12 != -1) {
          lVar20 = *(long *)(param_2 + 0xc0);
          iVar13 = iVar12;
        }
      }
      else {
        lVar20 = *(long *)(param_2 + 0xe0);
      }
      iVar1 = *(int *)(param_1 + 0x2c);
      piVar14 = (int *)(lVar20 + (long)iVar13 * 0x14);
      *(int *)(param_1 + 0x2c) = iVar1 + 1;
      iVar13 = *piVar14;
      puVar16 = (undefined8 *)(*(long *)(param_2 + 0x38) + (long)iVar13 * 0x10);
      if (*(int *)(param_2 + 0x40) <= iVar13) {
        puVar16 = (undefined8 *)
                  (*(long *)(param_2 + 0xf0) + (long)(iVar13 - *(int *)(param_2 + 0x40)) * 0x10);
      }
      uVar5 = *puVar16;
      puVar15 = (undefined8 *)(param_1[0x2b] + (long)iVar1 * 0x30);
      puVar15[1] = puVar16[1];
      *puVar15 = uVar5;
      iVar1 = piVar14[1];
      puVar16 = (undefined8 *)(*(long *)(param_2 + 0x38) + (long)iVar1 * 0x10);
      if (*(int *)(param_2 + 0x40) <= iVar1) {
        puVar16 = (undefined8 *)
                  (*(long *)(param_2 + 0xf0) + (long)(iVar1 - *(int *)(param_2 + 0x40)) * 0x10);
      }
      uVar5 = *puVar16;
      puVar15[3] = puVar16[1];
      puVar15[2] = uVar5;
      *(short *)(puVar15 + 4) = (short)iVar18;
      iVar18 = iVar18 + 1;
    } while (iVar18 < local_68._2_2_);
  }
  if ((!bVar17) && (*(int *)(puVar11 + 1) != 0)) {
    piVar14 = (int *)*puVar11;
    lVar20 = (long)*(int *)(puVar11 + 1) * 0x14;
    sVar6 = local_68._2_2_;
    do {
      if ((*(byte *)(piVar14 + 4) >> 3 & 1) == 0) {
        puVar16 = (undefined8 *)(param_1[0x2b] + (long)*(int *)(param_1 + 0x2c) * 0x30);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        iVar18 = *piVar14;
        puVar11 = (undefined8 *)(*(long *)(param_2 + 0x38) + (long)iVar18 * 0x10);
        if (*(int *)(param_2 + 0x40) <= iVar18) {
          puVar11 = (undefined8 *)
                    (*(long *)(param_2 + 0xf0) + (long)(iVar18 - *(int *)(param_2 + 0x40)) * 0x10);
        }
        uVar5 = *puVar11;
        puVar16[1] = puVar11[1];
        *puVar16 = uVar5;
        iVar18 = piVar14[1];
        puVar11 = (undefined8 *)(*(long *)(param_2 + 0x38) + (long)iVar18 * 0x10);
        if (*(int *)(param_2 + 0x40) <= iVar18) {
          puVar11 = (undefined8 *)
                    (*(long *)(param_2 + 0xf0) + (long)(iVar18 - *(int *)(param_2 + 0x40)) * 0x10);
        }
        uVar5 = *puVar11;
        puVar16[3] = puVar11[1];
        puVar16[2] = uVar5;
        *(short *)(puVar16 + 4) = sVar6;
      }
      sVar6 = sVar6 + 1;
      piVar14 = piVar14 + 5;
      lVar20 = lVar20 + -0x14;
    } while (lVar20 != 0);
  }
  if (plVar19 != (long *)0x0) {
    lVar20 = *plVar19;
    if (((*(byte *)(lVar20 + 0x38) & 1) != 0) && (plVar19[6] != 0)) {
      puVar11 = (undefined8 *)plVar19[2];
      uVar9 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar19[3]) && (plVar19[2] = uVar9, puVar11 != (undefined8 *)0x0)) {
        *puVar11 = &DAT_03c4e575;
        puVar11[1] = *(undefined8 *)(plVar19[6] + 8);
      }
    }
    puVar11 = (undefined8 *)plVar19[2];
    uVar9 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar19[3]) && (plVar19[2] = uVar9, puVar11 != (undefined8 *)0x0)) {
      *puVar11 = &DAT_03c2d363;
      uVar5 = nn::os::GetSystemTick();
      puVar11[1] = uVar5;
    }
    if (*(code **)(lVar20 + 0x20) != (code *)0x0) {
      (**(code **)(lVar20 + 0x20))(*(undefined8 *)(lVar20 + 0x28));
    }
  }
  return;
}


