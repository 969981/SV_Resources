/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030741d0; name: FUN_030741d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_030741d0(long param_1,undefined8 param_2,undefined1 (*param_3) [16],ulong param_4,long param_5,
            undefined8 param_6,undefined8 param_7,undefined1 (*param_8) [16],
            undefined1 (*param_9) [16],undefined8 *param_10,long param_11)

{
  short sVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar36;
  float fVar39;
  float fVar40;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar41;
  float fVar42;
  float fVar45;
  undefined8 uVar43;
  undefined1 auVar44 [16];
  undefined8 uVar46;
  undefined1 auVar47 [16];
  undefined8 uVar48;
  float fVar49;
  undefined1 auVar50 [16];
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  ulong uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  uint uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar72;
  int iVar73;
  float fVar74;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar75;
  undefined1 auVar71 [16];
  float fVar76;
  float fVar78;
  float fVar79;
  undefined1 auVar77 [16];
  int iVar80;
  float fVar82;
  undefined1 auVar81 [16];
  ulong uVar83;
  undefined4 uVar84;
  float fVar85;
  float fVar88;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  int iVar89;
  int iVar91;
  undefined1 auVar90 [16];
  float fStack_180;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  ulong local_118;
  ulong local_110;
  long local_108;
  ulong local_100;
  ulong local_f8;
  undefined8 local_f0;
  float fStack_e8;
  float fStack_e4;
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  char local_98;
  undefined4 local_90 [4];
  ulong local_78;
  
  local_90[0] = (undefined4)param_4;
  lVar7 = nn::os::GetSystemTick();
  FUN_0306d784(&local_a0,param_1,local_90);
  uStack_a8 = *(undefined8 *)(*param_9 + 8);
  local_b0 = *(undefined8 *)*param_9;
  auVar47 = *param_9;
  auVar44 = *param_3;
  fVar29 = *(float *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) +
                                                   (param_4 >> 0x16 & 0x3ff) * 0x100) + 0x20) + 0x68
                               ) + 0xb0);
  fVar49 = (float)*param_10 - fVar29;
  local_b8 = CONCAT44((float)((ulong)*param_10 >> 0x20) - fVar29,fVar49);
  auVar30 = *param_8;
  local_e0 = 0;
  local_d8 = 0x8000000000000000;
  lVar19 = tpidr_el0;
  lVar11 = *(long *)(lVar19 + 0x1000b8);
  fStack_158 = auVar47._8_4_;
  fStack_154 = auVar47._12_4_;
  local_160 = auVar47._0_4_;
  fStack_15c = auVar47._4_4_;
  fStack_148 = auVar44._8_4_;
  fStack_144 = auVar44._12_4_;
  local_150 = auVar44._0_4_;
  fStack_14c = auVar44._4_4_;
  if (lVar11 == 0) {
    lVar11 = FUN_00e5d3b4();
    *(long *)(lVar19 + 0x1000b8) = lVar11;
  }
  fVar36 = local_160 * auVar30._0_4_;
  fVar39 = fStack_15c * auVar30._4_4_;
  fVar40 = fStack_158 * auVar30._8_4_;
  local_d0 = *(long *)(*(long *)(lVar11 + 0x3d0) + 0x10);
  if (*(long *)(local_d0 + 8) == 0) {
    local_c0 = 0x1000;
    local_f0 = 0x1000;
    if (local_d0 == 0) goto LAB_03074340;
    local_118 = 0x1000;
    if (*(ulong *)(local_d0 + 0x28) < 0x1000) {
LAB_030742f0:
      local_c8 = FUN_031cf3b4(local_d0,&local_118);
    }
    else {
      local_c8 = *(long *)(local_d0 + 0x38);
      if (*(ulong *)(local_d0 + 0x40) < local_c8 + 0x1000U) goto LAB_030742f0;
      *(ulong *)(local_d0 + 0x38) = local_c8 + 0x1000U;
    }
  }
  else {
    local_d0 = 0;
LAB_03074340:
    local_c0 = 0x1000;
    local_f0 = 0x1000;
    local_c8 = (**(code **)PTR_DAT_047d1a08)(1,&local_f0,0x40);
  }
  local_d8 = CONCAT44(0x80000080,(int)local_d8);
  sVar1 = *(short *)(param_5 + 8);
  local_118 = 0;
  local_110 = 0x8000000000000000;
  lVar11 = *(long *)(lVar19 + 0x1000b8);
  local_e0 = local_c8;
  if (lVar11 == 0) {
    lVar11 = FUN_00e5d3b4();
    *(long *)(lVar19 + 0x1000b8) = lVar11;
  }
  local_108 = *(long *)(*(long *)(lVar11 + 0x3d0) + 0x10);
  if (*(long *)(local_108 + 8) != 0) {
    local_108 = 0;
  }
  fVar21 = local_150 * local_160 + fStack_14c * fStack_15c + fStack_148 * fStack_158;
  fVar25 = local_150 * local_160 + fStack_14c * fStack_15c + fStack_148 * fStack_158;
  local_f8 = -((ulong)(long)sVar1 >> 0x1f & 1) & 0xffffffe000000000 |
             ((long)sVar1 & 0xffffffffU) << 5;
  fVar22 = fVar36 + fVar39 + fVar40;
  fVar40 = fVar36 + fVar39 + fVar40;
  local_78 = local_f8;
  if (local_108 == 0) {
    local_100 = (**(code **)PTR_DAT_047d1a08)(1,&local_78,0x40);
  }
  else {
    local_f0 = local_f8 + 0x3f & 0xffffffffffffffc0;
    if (local_f0 <= *(ulong *)(local_108 + 0x28)) {
      local_100 = *(ulong *)(local_108 + 0x38);
      if (local_f0 + local_100 <= *(ulong *)(local_108 + 0x40)) {
        *(ulong *)(local_108 + 0x38) = local_f0 + local_100;
        goto LAB_0307443c;
      }
    }
    local_100 = FUN_031cf3b4(local_108,&local_f0);
  }
LAB_0307443c:
  local_110 = CONCAT44((int)sVar1,(undefined4)local_110) | 0x8000000000000000;
  local_118 = local_100;
  FUN_0306a200(param_1,param_2,param_4 & 0xffffffff,param_5);
  uVar18 = local_118;
  if (local_100 == local_118) {
    local_110 = local_110 & 0xffffffff00000000;
  }
  auVar47._8_8_ = CONCAT44(fVar40,fVar22);
  auVar47._0_8_ = CONCAT44(fVar40,fVar22);
  auVar44._8_8_ = CONCAT44(fVar25,fVar21);
  auVar44._0_8_ = CONCAT44(fVar25,fVar21);
  if (local_108 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
LAB_0307452c:
    auVar44._4_4_ = fVar25;
    auVar44._0_4_ = fVar21;
    auVar44._8_4_ = fVar21;
    auVar44._12_4_ = fVar25;
    auVar47._4_4_ = fVar40;
    auVar47._0_4_ = fVar22;
    auVar47._8_4_ = fVar22;
    auVar47._12_4_ = fVar40;
  }
  else {
    uVar10 = local_f8 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(local_108 + 0x28) < uVar10) ||
       (*(long *)(local_108 + 0x38) != uVar10 + local_100)) {
      if (local_100 != 0) {
        if (*(ulong *)(local_108 + 0x28) < uVar10 + 0x40) {
          *(int *)(*(long *)(local_108 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_108 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_108 + 0x10) + 0x18))
                    (*(long **)(local_108 + 0x10),local_100 - (long)*(int *)(local_100 - 4),
                     uVar10 + 0x44);
          goto LAB_0307452c;
        }
        if (*(long *)(local_108 + 0x38) == uVar10 + local_100) {
          *(ulong *)(local_108 + 0x38) = local_100;
          FUN_031cf578();
        }
        else {
          FUN_031cf778();
        }
        auVar44._4_4_ = fVar25;
        auVar44._0_4_ = fVar21;
        auVar44._8_4_ = fVar21;
        auVar44._12_4_ = fVar25;
        auVar47._4_4_ = fVar40;
        auVar47._0_4_ = fVar22;
        auVar47._8_4_ = fVar22;
        auVar47._12_4_ = fVar40;
      }
    }
    else {
      *(ulong *)(local_108 + 0x38) = local_100;
      if (*(ulong *)(local_108 + 0x48) == local_100) {
        FUN_031cf578();
        goto LAB_0307452c;
      }
    }
  }
  uVar55 = local_110;
  auVar57._0_4_ = local_160 * auVar44._0_4_;
  auVar57._4_4_ = fStack_15c * auVar44._4_4_;
  auVar57._8_4_ = fStack_158 * auVar44._8_4_;
  auVar57._12_4_ = fStack_154 * auVar44._12_4_;
  uVar10 = local_110 >> 0x20;
  local_110 = uVar10 << 0x20;
  auVar53._0_4_ = local_160 * auVar47._0_4_;
  auVar53._4_4_ = fStack_15c * auVar47._4_4_;
  auVar53._8_4_ = fStack_158 * auVar47._8_4_;
  auVar53._12_4_ = fStack_154 * auVar47._12_4_;
  if ((uVar18 != 0) && (-1 < (long)uVar55)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,uVar18,uVar10 << 5);
  }
  uVar10 = local_d8;
  local_150 = local_150 - auVar57._0_4_;
  fStack_14c = fStack_14c - auVar57._4_4_;
  fStack_148 = fStack_148 - auVar57._8_4_;
  fStack_144 = fStack_144 - auVar57._12_4_;
  fVar40 = auVar30._0_4_ - auVar53._0_4_;
  fVar36 = auVar30._4_4_ - auVar53._4_4_;
  fVar39 = auVar30._8_4_ - auVar53._8_4_;
  fVar21 = auVar30._12_4_ - auVar53._12_4_;
  iVar80 = (int)local_d8;
  uVar18 = local_d8 & 0xffffffff;
  uVar48 = NEON_fmov(0x3f800000,4);
  if (0 < (int)local_d8) {
    pfVar12 = (float *)(local_e0 + 0x10);
    do {
      fVar22 = pfVar12[-4];
      fVar25 = pfVar12[-3];
      fVar34 = pfVar12[-2];
      fVar41 = pfVar12[-1];
      fVar28 = *pfVar12 - fVar22;
      fVar32 = pfVar12[1] - fVar25;
      fVar33 = pfVar12[2] - fVar34;
      fVar35 = pfVar12[3] - fVar41;
      auVar30._0_4_ = fVar28 * fVar28;
      auVar30._4_4_ = fVar32 * fVar32;
      auVar30._8_4_ = fVar33 * fVar33;
      auVar30._12_4_ = fVar35 * fVar35;
      auVar58._0_4_ = (local_150 - fVar22) * fVar28;
      auVar58._4_4_ = (fStack_14c - fVar25) * fVar32;
      auVar58._8_4_ = (fStack_148 - fVar34) * fVar33;
      auVar58._12_4_ = (fStack_144 - fVar41) * fVar35;
      auVar44 = NEON_ext(auVar30,auVar30,8,1);
      auVar47 = NEON_ext(auVar58,auVar58,8,1);
      fVar42 = auVar44._0_4_ + auVar30._0_4_ + auVar30._4_4_;
      fVar45 = auVar47._0_4_ + auVar58._0_4_ + auVar58._4_4_;
      uVar43 = 0;
      uVar46 = 0;
      if (fVar42 != 0.0) {
        auVar62._0_4_ = (fVar40 - fVar22) * fVar28;
        auVar62._4_4_ = (fVar36 - fVar25) * fVar32;
        auVar62._8_4_ = (fVar39 - fVar34) * fVar33;
        auVar62._12_4_ = (fVar21 - fVar41) * fVar35;
        auVar44 = NEON_ext(auVar62,auVar62,8,1);
        uVar43 = CONCAT44(fVar45 / fVar42,fVar45 / fVar42);
        fVar42 = (auVar44._0_4_ + auVar62._0_4_ + auVar62._4_4_) / fVar42;
        uVar46 = CONCAT44(fVar42,fVar42);
      }
      uVar43 = NEON_fminnm(uVar43,uVar48,4);
      uVar43 = NEON_fmax(uVar43,0,4);
      uVar46 = NEON_fminnm(uVar46,uVar48,4);
      fVar41 = (local_150 - fVar22) - fVar28 * (float)uVar43;
      fVar35 = (fStack_14c - fVar25) - fVar32 * (float)((ulong)uVar43 >> 0x20);
      fVar42 = (fStack_148 - fVar34) - fVar33 * (float)uVar43;
      uVar46 = NEON_fmax(uVar46,0,4);
      fVar22 = (fVar40 - fVar22) - fVar28 * (float)uVar46;
      fVar25 = (fVar36 - fVar25) - fVar32 * (float)((ulong)uVar46 >> 0x20);
      fVar34 = (fVar39 - fVar34) - fVar33 * (float)uVar46;
      fVar41 = fVar41 * fVar41;
      fVar35 = fVar35 * fVar35;
      fVar42 = fVar42 * fVar42;
      fVar22 = fVar22 * fVar22;
      fVar25 = fVar25 * fVar25;
      fVar34 = fVar34 * fVar34;
      uVar46 = NEON_fmin(CONCAT44(fVar41 + fVar35 + fVar42,fVar41 + fVar35 + fVar42),
                         CONCAT44(fVar22 + fVar25 + fVar34,fVar22 + fVar25 + fVar34),4);
      if (!(bool)(~((float)uVar46 < fVar49 * fVar49) & 1)) {
        uVar46 = 0;
        goto LAB_03075064;
      }
      uVar18 = uVar18 - 1;
      pfVar12 = pfVar12 + 8;
    } while (uVar18 != 0);
  }
  lVar11 = *(long *)(lVar19 + 0x1000b8);
  if (lVar11 == 0) {
    lVar11 = FUN_00e5d3b4();
    *(long *)(lVar19 + 0x1000b8) = lVar11;
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0x3d0) + 0x10);
  if (*(long *)(lVar11 + 8) == 0) {
    uVar18 = (long)iVar80 * 0x20;
    local_78 = uVar18;
    if (lVar11 == 0) goto LAB_030747c0;
    local_118 = uVar18 + 0x3f & 0xffffffffffffffc0;
    if (*(ulong *)(lVar11 + 0x28) < local_118) {
LAB_03074738:
      lVar8 = FUN_031cf3b4(lVar11,&local_118);
    }
    else {
      lVar8 = *(long *)(lVar11 + 0x38);
      if (*(ulong *)(lVar11 + 0x40) < local_118 + lVar8) goto LAB_03074738;
      *(ulong *)(lVar11 + 0x38) = local_118 + lVar8;
    }
  }
  else {
    local_78 = (long)iVar80 << 5;
LAB_030747c0:
    uVar18 = local_78;
    lVar8 = (**(code **)PTR_DAT_047d1a08)(1,&local_78,0x40);
    lVar11 = 0;
  }
  lVar13 = *(long *)(lVar19 + 0x1000b8);
  if (lVar13 == 0) {
    lVar13 = FUN_00e5d3b4();
    *(long *)(lVar19 + 0x1000b8) = lVar13;
  }
  lVar19 = *(long *)(*(long *)(lVar13 + 0x3d0) + 0x10);
  local_78 = uVar18;
  if ((*(long *)(lVar19 + 8) == 0) && (lVar19 != 0)) {
    local_118 = uVar18 + 0x3f & 0xffffffffffffffc0;
    if (local_118 <= *(ulong *)(lVar19 + 0x28)) {
      lVar13 = *(long *)(lVar19 + 0x38);
      if (local_118 + lVar13 <= *(ulong *)(lVar19 + 0x40)) {
        *(ulong *)(lVar19 + 0x38) = local_118 + lVar13;
        goto LAB_030748a0;
      }
    }
    lVar13 = FUN_031cf3b4(lVar19,&local_118);
  }
  else {
    lVar13 = (**(code **)PTR_DAT_047d1a08)(1,&local_78,0x40);
    lVar19 = 0;
  }
LAB_030748a0:
  auVar5._8_8_ = uStack_a8;
  auVar5._0_8_ = local_b0;
  fVar41 = (float)local_b0;
  fVar49 = (fVar40 - local_150) * fVar41;
  fVar28 = (float)((ulong)local_b0 >> 0x20);
  fVar22 = (fVar36 - fStack_14c) * fVar28;
  fVar32 = (float)uStack_a8;
  fVar34 = (fVar39 - fStack_148) * fVar32;
  fVar33 = (float)((ulong)uStack_a8 >> 0x20);
  fVar25 = fVar49 + fVar22 + fVar34;
  fVar34 = fVar49 + fVar22 + fVar34;
  fVar49 = (fVar40 - local_150) - fVar41 * fVar25;
  fVar22 = (fVar36 - fStack_14c) - fVar28 * fVar34;
  fVar25 = (fVar39 - fStack_148) - fVar32 * fVar25;
  fVar34 = (fVar21 - fStack_144) - fVar33 * fVar34;
  auVar44 = NEON_ext(auVar5,auVar5,8,1);
  uVar46 = NEON_ext(local_b0,auVar44._0_8_,4,1);
  auVar65._4_4_ = fVar22;
  auVar65._0_4_ = fVar49;
  auVar65._8_4_ = fVar25;
  auVar65._12_4_ = fVar34;
  auVar3._4_4_ = fVar22;
  auVar3._0_4_ = fVar49;
  auVar3._8_4_ = fVar25;
  auVar3._12_4_ = fVar34;
  auVar44 = NEON_ext(auVar65,auVar3,4,1);
  auVar37._0_4_ = fVar41 * auVar44._0_4_ - (float)uVar46 * fVar49;
  auVar37._4_4_ = fVar28 * auVar44._4_4_ - (float)((ulong)uVar46 >> 0x20) * fVar22;
  auVar37._8_4_ = fVar32 * fVar49 - fVar41 * fVar25;
  auVar37._12_4_ = fVar33 * fVar22 - fVar28 * fVar34;
  auVar44 = NEON_ext(auVar37,auVar37,4,1);
  fVar41 = auVar44._0_4_;
  fVar28 = auVar44._4_4_;
  fVar32 = fVar41 * fVar41 + fVar28 * fVar28 + auVar37._0_4_ * auVar37._0_4_;
  if (fVar32 == 0.0) {
    fVar33 = 0.0;
    fVar28 = 0.0;
    fVar32 = 0.0;
  }
  else {
    fVar32 = SQRT(fVar32);
    fVar33 = fVar41 / fVar32;
    fVar28 = fVar28 / SQRT(fVar41 * fVar41 + fVar28 * fVar28 + auVar37._0_4_ * auVar37._0_4_);
    fVar32 = auVar37._0_4_ / fVar32;
  }
  fVar41 = fVar49 * fVar49 + fVar22 * fVar22 + fVar25 * fVar25;
  fVar35 = fVar49 * fVar49 + fVar22 * fVar22 + fVar25 * fVar25;
  uVar46 = *param_10;
  lVar9 = nn::os::GetSystemTick();
  puVar6 = PTR_DAT_047d19e0;
  fVar42 = (float)uVar48;
  if (iVar80 < 1) {
    uVar17 = 0;
    uVar20 = 0;
  }
  else {
    auVar86._4_4_ = fVar28;
    auVar86._0_4_ = fVar33;
    auVar86._8_4_ = fVar32;
    fStack_180 = (float)uVar46;
    auVar23._0_4_ = fVar49 / fVar41;
    auVar23._4_4_ = fVar22 / fVar35;
    auVar23._8_4_ = fVar25 / fVar41;
    fVar45 = -(local_150 * auVar23._0_4_ + fStack_14c * auVar23._4_4_ + fStack_148 * auVar23._8_4_);
    auVar23._12_4_ = fVar45;
    fVar26 = -(local_150 * fVar33 + fStack_14c * fVar28 + fStack_148 * fVar32);
    lVar14 = 0;
    auVar86._12_4_ = fVar26;
    uVar17 = 0;
    auVar38._0_4_ = (float)local_f0 * fVar33;
    auVar38._4_4_ = local_f0._4_4_ * fVar28;
    auVar38._8_4_ = fStack_e8 * fVar32;
    auVar38._12_4_ = fStack_e4 * fVar26;
    auVar30 = NEON_ext(auVar38,auVar38,8,1);
    auVar31._8_8_ = _UNK_03caad18;
    auVar31._0_8_ = _DAT_03caad10;
    auVar44 = a64_TBL(ZEXT816(0),auVar86,auVar31);
    auVar47 = a64_TBL(ZEXT816(0),auVar23,auVar31);
    uVar20 = 0;
    do {
      pfVar12 = (float *)(local_e0 + lVar14);
      fVar85 = *pfVar12;
      fVar88 = pfVar12[1];
      fVar4 = pfVar12[2];
      fVar76 = pfVar12[4];
      fVar78 = pfVar12[5];
      fVar79 = pfVar12[6];
      fVar82 = pfVar12[7];
      auVar56._0_4_ = fVar33 * fVar76;
      auVar56._4_4_ = fVar28 * fVar78;
      auVar56._8_4_ = fVar32 * fVar79;
      auVar56._12_4_ = fVar26 * fVar82;
      auVar64._0_4_ = auVar23._0_4_ * fVar76;
      auVar64._4_4_ = auVar23._4_4_ * fVar78;
      auVar64._8_4_ = auVar23._8_4_ * fVar79;
      auVar64._12_4_ = fVar45 * fVar82;
      auVar52._0_4_ = fVar33 * fVar85;
      auVar52._4_4_ = fVar28 * fVar88;
      auVar52._8_4_ = fVar32 * fVar4;
      auVar52._12_4_ = fVar26 * pfVar12[3];
      auVar61._0_4_ = auVar23._0_4_ * fVar85;
      auVar61._4_4_ = auVar23._4_4_ * fVar88;
      auVar61._8_4_ = auVar23._8_4_ * fVar4;
      auVar61._12_4_ = fVar45 * pfVar12[3];
      auVar53 = NEON_ext(auVar52,auVar52,8,1);
      auVar57 = NEON_ext(auVar56,auVar56,8,1);
      auVar62 = NEON_ext(auVar61,auVar61,8,1);
      auVar65 = NEON_ext(auVar64,auVar64,8,1);
      auVar58 = auVar47 ^ (auVar47 ^ auVar44) & *(undefined1 (*) [16])(puVar6 + 0x30);
      auVar70._0_4_ = auVar53._0_4_ + auVar52._0_4_ + auVar52._4_4_ + auVar58._0_4_;
      auVar70._4_4_ = auVar57._0_4_ + auVar56._0_4_ + auVar56._4_4_ + auVar58._4_4_;
      auVar70._8_4_ = auVar62._0_4_ + auVar61._0_4_ + auVar61._4_4_ + auVar58._8_4_;
      auVar70._12_4_ = auVar65._0_4_ + auVar64._0_4_ + auVar64._4_4_ + auVar58._12_4_;
      auVar53 = NEON_rev64(auVar70,4);
      uVar55 = CONCAT44(-(uint)(auVar70._12_4_ < auVar70._8_4_),
                        -(uint)(auVar70._12_4_ < auVar70._8_4_)) & 0x100000001;
      iVar80 = (int)uVar55;
      iVar73 = (int)(uVar55 >> 0x20);
      auVar59._0_8_ = CONCAT44((iVar73 << 0x1f) >> 0x1f,(iVar80 << 0x1f) >> 0x1f);
      auVar59._8_4_ = (iVar80 << 0x1f) >> 0x1f;
      auVar59._12_4_ = (iVar73 << 0x1f) >> 0x1f;
      auVar69._8_8_ = auVar59._8_8_;
      auVar69._0_8_ = auVar59._0_8_;
      auVar70 = auVar70 ^ (auVar70 ^ auVar53) & auVar69;
      fVar72 = auVar70._4_4_;
      uVar55 = CONCAT44(fVar72,fVar72);
      fVar75 = auVar70._12_4_;
      fVar51 = fVar72;
      if (0.0 <= fVar75) {
        fVar74 = auVar70._8_4_;
        fVar51 = auVar70._0_4_;
        uVar83 = CONCAT44(fVar51,fVar51);
        if (fVar74 <= 1.0) {
          iVar80 = -(uint)(fVar75 - fVar74 == 0.0);
          fVar68 = (float)((uint)(fVar42 / (fVar75 - fVar74)) &
                          CONCAT13(~(byte)((uint)iVar80 >> 0x18),
                                   CONCAT12(~(byte)((uint)iVar80 >> 0x10),
                                            CONCAT11(~(byte)((uint)iVar80 >> 8),~(byte)iVar80))));
          if (fVar74 < 0.0) {
            uVar83 = (ulong)(uint)(fVar51 - (fVar72 - fVar51) * fVar68 * fVar74);
          }
          if (1.0 < fVar75) {
            uVar55 = (ulong)(uint)(fVar51 + (fVar72 - fVar51) * (fVar42 - fVar74) * fVar68);
          }
          uVar16 = uVar83 & 0x7fffffff7fffffff;
          uVar60 = -(uint)((float)(uVar55 & 0x7fffffff7fffffff) < (float)uVar16);
          uVar16 = uVar16 ^ (uVar16 ^ uVar55 & 0x7fffffff7fffffff) & (ulong)uVar60;
          fVar51 = (float)CONCAT13((byte)(-(uint)((float)((uint)uVar83 ^
                                                         ((uint)uVar83 ^ (uint)uVar55) & ~uVar60) <
                                                 0.0) >> 0x18) & 0x80 | (byte)(uVar16 >> 0x18),
                                   (int3)uVar16);
        }
      }
      if (0.0 < (float)((uint)fVar51 ^
                       ((uint)fVar51 ^
                       (uint)(fVar51 - (auVar38._0_4_ + auVar38._4_4_ + auVar30._0_4_ + fVar26))) &
                       -(uint)(ABS(fVar51) < fStack_180 * 0.007874016))) {
        lVar15 = (long)(int)uVar20;
        uVar20 = uVar20 + 1;
        pfVar12 = (float *)(lVar8 + lVar15 * 0x20);
      }
      else {
        lVar15 = (long)(int)uVar17;
        uVar17 = uVar17 + 1;
        pfVar12 = (float *)(lVar13 + lVar15 * 0x20);
      }
      lVar14 = lVar14 + 0x20;
      pfVar12[2] = fVar4;
      pfVar12[3] = ABS(fVar51);
      *pfVar12 = fVar85;
      pfVar12[1] = fVar88;
      pfVar12[6] = fVar79;
      pfVar12[7] = fVar82;
      pfVar12[4] = fVar76;
      pfVar12[5] = fVar78;
    } while ((uVar10 & 0xffffffff) * 0x20 != lVar14);
  }
  lVar14 = nn::os::GetSystemTick();
  *(long *)(param_11 + 0x78) = (lVar14 - lVar9) + *(long *)(param_11 + 0x78);
  *(int *)(param_11 + 0x80) = *(int *)(param_11 + 0x80) + 1;
  if (uVar20 - 1 != 0 && 0 < (int)uVar20) {
    FUN_03076680(lVar8,0,uVar20 - 1);
  }
  if (1 < (int)uVar17) {
    FUN_03076680(lVar13,0,uVar17 - 1);
  }
  if (fVar41 == 0.0) {
    fVar49 = 0.0;
    fVar22 = 0.0;
    fVar25 = 0.0;
    fVar34 = 0.0;
  }
  else {
    fVar35 = SQRT(fVar35);
    fVar49 = fVar49 / SQRT(fVar41);
    fVar22 = fVar22 / fVar35;
    fVar25 = fVar25 / SQRT(fVar41);
    fVar34 = fVar34 / fVar35;
  }
  lVar9 = nn::os::GetSystemTick();
  uVar46 = 1;
  if ((uVar17 != 0) && (uVar20 != 0)) {
    if (0 < (int)uVar20) {
      auVar24._0_4_ = local_150 * fVar49;
      auVar24._4_4_ = fStack_14c * fVar22;
      auVar24._8_4_ = fStack_148 * fVar25;
      auVar24._12_4_ = fStack_144 * fVar34;
      auVar44 = NEON_ext(auVar24,auVar24,8,1);
      auVar27._0_4_ = fVar40 * fVar49;
      auVar27._4_4_ = fVar36 * fVar22;
      auVar27._8_4_ = fVar39 * fVar25;
      auVar27._12_4_ = fVar21 * fVar34;
      auVar30 = NEON_ext(auVar27,auVar27,8,1);
      auVar47 = NEON_fmov(0x3f800000,4);
      fVar29 = (float)*param_10 - fVar29;
      fVar29 = fVar29 + fVar29;
      uVar10 = 0;
      do {
        puVar2 = (undefined8 *)(lVar8 + uVar10 * 0x20);
        uVar43 = puVar2[1];
        uVar46 = *puVar2;
        fVar40 = (float)((ulong)uVar43 >> 0x20);
        if (fVar29 < fVar40) break;
        if (0 < (int)uVar17) {
          lVar14 = lVar8 + uVar10 * 0x20;
          fVar36 = (float)uVar46;
          auVar50._0_4_ = *(float *)(lVar14 + 0x10) - fVar36;
          fVar39 = (float)((ulong)uVar46 >> 0x20);
          auVar50._4_4_ = *(float *)(lVar14 + 0x14) - fVar39;
          fVar21 = (float)uVar43;
          auVar50._8_4_ = *(float *)(lVar14 + 0x18) - fVar21;
          auVar50._12_4_ = *(float *)(lVar14 + 0x1c) - fVar40;
          auVar53 = NEON_ext(auVar50,auVar50,4,1);
          auVar54._0_4_ = auVar50._0_4_ * auVar50._0_4_;
          auVar54._4_4_ = auVar50._4_4_ * auVar50._4_4_;
          auVar54._8_4_ = auVar50._8_4_ * auVar50._8_4_;
          auVar54._12_4_ = auVar50._12_4_ * auVar50._12_4_;
          auVar57 = NEON_ext(auVar54,auVar54,8,1);
          pfVar12 = (float *)(lVar13 + 0x10);
          uVar55 = (ulong)uVar17;
          do {
            auVar58 = *(undefined1 (*) [16])(pfVar12 + -4);
            fVar41 = auVar58._4_4_;
            fVar28 = auVar58._8_4_;
            fVar32 = auVar58._12_4_;
            if (fVar29 < fVar40 + fVar32) break;
            fVar35 = auVar58._0_4_;
            auVar66._0_4_ = *pfVar12 - fVar35;
            auVar66._4_4_ = pfVar12[1] - fVar41;
            auVar66._8_4_ = pfVar12[2] - fVar28;
            auVar66._12_4_ = pfVar12[3] - fVar32;
            auVar58 = NEON_ext(auVar66,auVar66,4,1);
            fVar76 = fVar35 - fVar36;
            fVar78 = fVar41 - fVar39;
            fVar79 = fVar28 - fVar21;
            fVar33 = auVar53._0_4_ * auVar66._0_4_ - auVar50._0_4_ * auVar58._0_4_;
            auVar71._0_8_ =
                 CONCAT44(auVar53._4_4_ * auVar66._4_4_ - auVar50._4_4_ * auVar58._4_4_,fVar33);
            auVar71._8_4_ = auVar50._0_4_ * auVar66._8_4_ - auVar50._8_4_ * auVar66._0_4_;
            auVar71._12_4_ = auVar50._4_4_ * auVar66._12_4_ - auVar50._12_4_ * auVar66._4_4_;
            auVar62 = NEON_ext(auVar71,auVar71,4,1);
            uVar46 = NEON_ext(auVar62._0_8_,auVar71._0_8_,4,1);
            fVar82 = auVar62._0_4_;
            fVar85 = auVar62._4_4_;
            auVar90._0_4_ = auVar66._0_4_ * auVar66._0_4_;
            auVar90._4_4_ = auVar66._4_4_ * auVar66._4_4_;
            auVar90._8_4_ = auVar66._8_4_ * auVar66._8_4_;
            auVar90._12_4_ = auVar66._12_4_ * auVar66._12_4_;
            fVar45 = fVar82 * fVar82 + fVar85 * fVar85 + fVar33 * fVar33;
            fVar26 = fVar82 * fVar82 + fVar85 * fVar85 + fVar33 * fVar33;
            iVar80 = -(uint)(fVar45 == 0.0);
            uVar84 = CONCAT13(~(byte)((uint)iVar80 >> 0x18),
                              CONCAT12(~(byte)((uint)iVar80 >> 0x10),
                                       CONCAT11(~(byte)((uint)iVar80 >> 8),~(byte)iVar80)));
            auVar81._0_4_ = auVar58._0_4_ * fVar82 - auVar66._0_4_ * (float)uVar46;
            auVar81._4_4_ = auVar58._4_4_ * fVar85 - auVar66._4_4_ * (float)((ulong)uVar46 >> 0x20);
            auVar81._8_4_ = auVar66._0_4_ * fVar33 - auVar66._8_4_ * fVar82;
            auVar81._12_4_ = auVar66._4_4_ * 0.0 - auVar66._12_4_ * fVar85;
            auVar58 = NEON_ext(auVar81,auVar81,4,1);
            iVar80 = -(uint)(fVar45 == 0.0);
            iVar73 = -(uint)(fVar26 == 0.0);
            uVar83 = CONCAT44((float)((ulong)uVar48 >> 0x20) / fVar26,fVar42 / fVar45) &
                     CONCAT44(uVar84,uVar84);
            fVar45 = fVar76 * auVar58._0_4_;
            fVar82 = fVar78 * auVar58._4_4_;
            auVar87._0_4_ = auVar50._0_4_ * fVar76;
            auVar87._4_4_ = auVar50._4_4_ * fVar78;
            auVar87._8_4_ = auVar50._8_4_ * fVar79;
            auVar87._12_4_ = auVar50._12_4_ * (fVar32 - fVar40);
            auVar77._0_4_ = fVar76 * auVar66._0_4_;
            auVar77._4_4_ = fVar78 * auVar66._4_4_;
            auVar77._8_4_ = fVar79 * auVar66._8_4_;
            auVar77._12_4_ = (fVar32 - fVar40) * auVar66._12_4_;
            auVar62 = NEON_ext(auVar90,auVar90,8,1);
            auVar58 = NEON_ext(auVar77,auVar77,8,1);
            fVar33 = auVar62._0_4_ + auVar90._0_4_ + auVar90._4_4_;
            fVar26 = auVar58._0_4_ + auVar77._0_4_ + auVar77._4_4_;
            fVar76 = auVar50._8_4_ * auVar66._8_4_ +
                     auVar50._0_4_ * auVar66._0_4_ + auVar50._4_4_ * auVar66._4_4_;
            fVar78 = auVar50._8_4_ * auVar66._8_4_ +
                     auVar50._0_4_ * auVar66._0_4_ + auVar50._4_4_ * auVar66._4_4_;
            auVar58 = NEON_ext(auVar87,auVar87,8,1);
            fVar85 = auVar57._0_4_ + auVar54._0_4_ + auVar54._4_4_;
            fVar88 = auVar58._0_4_ + auVar87._0_4_ + auVar87._4_4_;
            uVar46 = NEON_fminnm(CONCAT44((float)(uVar83 >> 0x20) *
                                          (fVar45 + fVar82 + fVar79 * auVar81._0_4_),
                                          (float)uVar83 * (fVar45 + fVar82 + fVar79 * auVar81._0_4_)
                                         ),uVar48,4);
            uVar83 = NEON_fmax(uVar46,0,4);
            iVar89 = -(uint)(fVar85 == 0.0);
            iVar91 = -(uint)(fVar33 == 0.0);
            fVar85 = auVar47._0_4_ / fVar85;
            fVar33 = auVar47._8_4_ / fVar33;
            fVar79 = (float)CONCAT13((byte)((uint)fVar85 >> 0x18) & ~(byte)((uint)iVar89 >> 0x18),
                                     CONCAT12((byte)((uint)fVar85 >> 0x10) &
                                              ~(byte)((uint)iVar89 >> 0x10),
                                              CONCAT11((byte)((uint)fVar85 >> 8) &
                                                       ~(byte)((uint)iVar89 >> 8),
                                                       SUB41(fVar85,0) & ~(byte)iVar89)));
            fVar33 = (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar91 >> 0x18),
                                     CONCAT12((byte)((uint)fVar33 >> 0x10) &
                                              ~(byte)((uint)iVar91 >> 0x10),
                                              CONCAT11((byte)((uint)fVar33 >> 8) &
                                                       ~(byte)((uint)iVar91 >> 8),
                                                       SUB41(fVar33,0) & ~(byte)iVar91)));
            fVar45 = ((float)uVar83 * fVar76 - fVar26) * fVar33;
            fVar33 = ((float)(uVar83 >> 0x20) * fVar78 - fVar26) * fVar33;
            uVar46 = NEON_fminnm(CONCAT44(fVar33,fVar45),uVar48,4);
            uVar46 = NEON_fmax(uVar46,0,4);
            fVar82 = (float)uVar46;
            fVar85 = (float)((ulong)uVar46 >> 0x20);
            iVar89 = -(uint)(fVar82 == fVar45);
            iVar91 = -(uint)(fVar85 == fVar33);
            uVar46 = NEON_fminnm(CONCAT44((fVar88 + fVar85 * fVar78) * fVar79,
                                          (fVar88 + fVar82 * fVar76) * fVar79),uVar48,4);
            uVar16 = NEON_fmax(uVar46,0,4);
            uVar83 = uVar83 ^ (uVar83 ^ uVar16) &
                              CONCAT17(~(byte)((uint)iVar91 >> 0x18) | (byte)((uint)iVar73 >> 0x18),
                                       CONCAT16(~(byte)((uint)iVar91 >> 0x10) |
                                                (byte)((uint)iVar73 >> 0x10),
                                                CONCAT15(~(byte)((uint)iVar91 >> 8) |
                                                         (byte)((uint)iVar73 >> 8),
                                                         CONCAT14(~(byte)iVar91 | (byte)iVar73,
                                                                  CONCAT13(~(byte)((uint)iVar89 >>
                                                                                  0x18) |
                                                                           (byte)((uint)iVar80 >>
                                                                                 0x18),
                                                                           CONCAT12(~(byte)((uint)
                                                  iVar89 >> 0x10) | (byte)((uint)iVar80 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar89 >> 8) |
                                                           (byte)((uint)iVar80 >> 8),
                                                           ~(byte)iVar89 | (byte)iVar80)))))));
            fVar33 = (float)uVar83;
            fVar26 = (float)(uVar83 >> 0x20);
            fVar45 = fVar36 + auVar50._0_4_ * fVar33;
            fVar76 = fVar39 + auVar50._4_4_ * fVar26;
            fVar78 = fVar21 + auVar50._8_4_ * fVar33;
            fVar26 = fVar40 + auVar50._12_4_ * fVar26;
            fVar33 = fVar45 - (fVar35 + auVar66._0_4_ * fVar82);
            fVar41 = fVar76 - (fVar41 + auVar66._4_4_ * fVar85);
            fVar28 = fVar78 - (fVar28 + auVar66._8_4_ * fVar82);
            fVar32 = fVar26 - (fVar32 + auVar66._12_4_ * fVar85);
            auVar67._0_4_ = fVar33 * fVar33;
            auVar67._4_4_ = fVar41 * fVar41;
            auVar67._8_4_ = fVar28 * fVar28;
            auVar67._12_4_ = fVar32 * fVar32;
            auVar58 = NEON_ext(auVar67,auVar67,8,1);
            if ((auVar67._0_4_ + auVar67._4_4_ + auVar58._0_4_ < fVar29 * fVar29) &&
               (auVar63._0_4_ = fVar49 * (fVar45 + fVar33 * -0.5),
               auVar63._4_4_ = fVar22 * (fVar76 + fVar41 * -0.5),
               auVar63._8_4_ = fVar25 * (fVar78 + fVar28 * -0.5),
               auVar63._12_4_ = fVar34 * (fVar26 + fVar32 * -0.5),
               auVar58 = NEON_ext(auVar63,auVar63,8,1),
               fVar41 = auVar58._0_4_ + auVar63._0_4_ + auVar63._4_4_,
               !(bool)((~(auVar24._0_4_ + auVar24._4_4_ + auVar44._0_4_ < fVar41) |
                       ~(fVar41 < auVar27._0_4_ + auVar27._4_4_ + auVar30._0_4_)) & 1))) {
              uVar46 = 0;
              goto LAB_03074ea0;
            }
            uVar55 = uVar55 - 1;
            pfVar12 = pfVar12 + 8;
          } while (uVar55 != 0);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar20);
    }
    uVar46 = 1;
  }
LAB_03074ea0:
  lVar14 = nn::os::GetSystemTick();
  *(long *)(param_11 + 0x90) = (lVar14 - lVar9) + *(long *)(param_11 + 0x90);
  *(int *)(param_11 + 0x98) = *(int *)(param_11 + 0x98) + 1;
  if (lVar19 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar13,uVar18);
joined_r0x03075050:
    if (lVar11 != 0) goto LAB_03074fac;
LAB_03074f54:
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar8,uVar18);
  }
  else {
    uVar10 = uVar18 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(lVar19 + 0x28) < uVar10) || (*(long *)(lVar19 + 0x38) != uVar10 + lVar13)) {
      if (lVar13 != 0) {
        if (*(ulong *)(lVar19 + 0x28) < uVar10 + 0x40) {
          *(int *)(*(long *)(lVar19 + 0x30) + 0x20) = *(int *)(*(long *)(lVar19 + 0x30) + 0x20) + -1
          ;
          (**(code **)(**(long **)(lVar19 + 0x10) + 0x18))
                    (*(long **)(lVar19 + 0x10),lVar13 - *(int *)(lVar13 + -4),uVar10 + 0x44);
        }
        else {
          if (*(long *)(lVar19 + 0x38) == uVar10 + lVar13) {
            *(long *)(lVar19 + 0x38) = lVar13;
            goto LAB_03075048;
          }
          FUN_031cf778(lVar19,lVar13);
        }
        goto joined_r0x03075050;
      }
    }
    else {
      *(long *)(lVar19 + 0x38) = lVar13;
      if (*(long *)(lVar19 + 0x48) == lVar13) {
LAB_03075048:
        FUN_031cf578(lVar19);
        goto joined_r0x03075050;
      }
    }
    if (lVar11 == 0) goto LAB_03074f54;
LAB_03074fac:
    uVar18 = uVar18 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(lVar11 + 0x28) < uVar18) || (*(long *)(lVar11 + 0x38) != uVar18 + lVar8)) {
      if (lVar8 != 0) {
        if (*(ulong *)(lVar11 + 0x28) < uVar18 + 0x40) {
          *(int *)(*(long *)(lVar11 + 0x30) + 0x20) = *(int *)(*(long *)(lVar11 + 0x30) + 0x20) + -1
          ;
          (**(code **)(**(long **)(lVar11 + 0x10) + 0x18))
                    (*(long **)(lVar11 + 0x10),lVar8 - *(int *)(lVar8 + -4),uVar18 + 0x44);
        }
        else {
          if (*(long *)(lVar11 + 0x38) == uVar18 + lVar8) {
            *(long *)(lVar11 + 0x38) = lVar8;
            goto LAB_0307505c;
          }
          FUN_031cf778(lVar11,lVar8);
        }
      }
    }
    else {
      *(long *)(lVar11 + 0x38) = lVar8;
      if (*(long *)(lVar11 + 0x48) == lVar8) {
LAB_0307505c:
        FUN_031cf578(lVar11);
      }
    }
  }
LAB_03075064:
  lVar19 = local_e0;
  if (local_c8 == local_e0) {
    local_d8 = local_d8 & 0xffffffff00000000;
  }
  if (local_d0 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_03075130;
  }
  uVar18 = local_c0 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_d0 + 0x28) < uVar18) || (*(long *)(local_d0 + 0x38) != uVar18 + local_c8)) {
    if (local_c8 == 0) goto LAB_03075130;
    if (*(ulong *)(local_d0 + 0x28) < uVar18 + 0x40) {
      *(int *)(*(long *)(local_d0 + 0x30) + 0x20) = *(int *)(*(long *)(local_d0 + 0x30) + 0x20) + -1
      ;
      (**(code **)(**(long **)(local_d0 + 0x10) + 0x18))
                (*(long **)(local_d0 + 0x10),local_c8 - *(int *)(local_c8 + -4),uVar18 + 0x44);
      goto LAB_03075130;
    }
    if (*(long *)(local_d0 + 0x38) != uVar18 + local_c8) {
      FUN_031cf778();
      goto LAB_03075130;
    }
    *(long *)(local_d0 + 0x38) = local_c8;
  }
  else {
    *(long *)(local_d0 + 0x38) = local_c8;
    if (*(long *)(local_d0 + 0x48) != local_c8) goto LAB_03075130;
  }
  FUN_031cf578();
LAB_03075130:
  uVar10 = local_d8;
  uVar18 = local_d8 >> 0x20;
  local_d8 = uVar18 << 0x20;
  if ((lVar19 != 0) && (-1 < (long)uVar10)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar19,uVar18 << 5);
  }
  if ((local_a0 != (long *)0x0) && (local_98 != '\0')) {
    lVar19 = *local_a0;
    if (((*(byte *)(lVar19 + 0x38) & 1) != 0) && (local_a0[6] != 0)) {
      puVar2 = (undefined8 *)local_a0[2];
      uVar18 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar18 <= (ulong)local_a0[3]) && (local_a0[2] = uVar18, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(local_a0[6] + 8);
      }
    }
    puVar2 = (undefined8 *)local_a0[2];
    uVar18 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar18 <= (ulong)local_a0[3]) && (local_a0[2] = uVar18, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c2d363;
      uVar48 = nn::os::GetSystemTick();
      puVar2[1] = uVar48;
    }
    if (*(code **)(lVar19 + 0x20) != (code *)0x0) {
      (**(code **)(lVar19 + 0x20))(*(undefined8 *)(lVar19 + 0x28));
    }
  }
  lVar19 = nn::os::GetSystemTick();
  *(long *)(param_11 + 8) = (lVar19 - lVar7) + *(long *)(param_11 + 8);
  *(int *)(param_11 + 0x10) = *(int *)(param_11 + 0x10) + 1;
  return uVar46;
}


