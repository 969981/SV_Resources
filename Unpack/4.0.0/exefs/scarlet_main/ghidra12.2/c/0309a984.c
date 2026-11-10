/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0309a984; name: FUN_0309a984
 */


void FUN_0309a984(long param_1,ulong param_2,undefined1 (*param_3) [16],long *param_4,
                 undefined8 param_5,float *param_6,long *param_7)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  ulong uVar16;
  int *piVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  uint *puVar27;
  int *piVar28;
  long lVar29;
  int iVar30;
  ulong uVar31;
  long lVar32;
  long *plVar33;
  long lVar34;
  long lVar35;
  byte *pbVar36;
  long lVar37;
  float fVar38;
  float fVar43;
  float fVar44;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar45;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 uVar46;
  undefined8 uVar47;
  float fVar54;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar53;
  undefined1 auVar52 [16];
  int iVar55;
  float fVar56;
  undefined1 auVar58 [12];
  undefined8 uVar57;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  int iVar67;
  int iVar69;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar59 [12];
  undefined1 auVar64 [16];
  float fVar68;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  int iVar79;
  undefined8 uVar80;
  int iVar85;
  int iVar86;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar96;
  undefined8 uVar95;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  undefined4 *local_d8;
  int local_d0;
  uint local_cc;
  int local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long *local_90;
  undefined8 local_78;
  
  lVar32 = tpidr_el0;
  lVar19 = *(long *)(lVar32 + 0x1000b8);
  if (lVar19 == 0) {
    lVar19 = FUN_00e5d3b4();
    *(long *)(lVar32 + 0x1000b8) = lVar19;
  }
  plVar33 = *(long **)(lVar19 + 0x3e0);
  if (plVar33 != (long *)0x0) {
    lVar19 = *plVar33;
    if (*(code **)(lVar19 + 0x18) != (code *)0x0) {
      (**(code **)(lVar19 + 0x18))("getNearbyBoundariesFlood",0x18,*(undefined8 *)(lVar19 + 0x28));
    }
    puVar3 = (undefined8 *)plVar33[2];
    uVar20 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar20 <= (ulong)plVar33[3]) && (plVar33[2] = uVar20, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = "TtgetNearbyBoundariesFlood";
      uVar14 = nn::os::GetSystemTick();
      puVar3[1] = uVar14;
    }
    if (((*(byte *)(lVar19 + 0x38) & 1) != 0) && (plVar33[6] != 0)) {
      puVar3 = (undefined8 *)plVar33[2];
      uVar20 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar20 <= (ulong)plVar33[3]) && (plVar33[2] = uVar20, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = &DAT_03c4e575;
        puVar3[1] = *(undefined8 *)(plVar33[6] + 8);
      }
    }
  }
  local_90 = plVar33;
  if ((int)param_2 == -1) goto LAB_0309b730;
  auVar49 = param_3[1];
  local_b8 = 0;
  local_b0 = 0x8000000000000000;
  fVar99 = (float)*(undefined8 *)*param_3;
  fVar100 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
  fVar101 = (float)*(undefined8 *)(*param_3 + 8);
  fVar102 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  auVar48._0_8_ = CONCAT44((auVar49._4_4_ - fVar100) * 0.5,(auVar49._0_4_ - fVar99) * 0.5);
  auVar48._8_4_ = (auVar49._8_4_ - fVar101) * 0.5;
  auVar48._12_4_ = (auVar49._12_4_ - fVar102) * 0.5;
  lVar19 = *(long *)(lVar32 + 0x1000b8);
  if (lVar19 == 0) {
    lVar19 = FUN_00e5d3b4();
    auVar48._8_8_ = auVar48._8_8_;
    *(long *)(lVar32 + 0x1000b8) = lVar19;
  }
  auVar39._0_8_ = CONCAT44(auVar48._4_4_ * auVar48._4_4_,auVar48._0_4_ * auVar48._0_4_);
  auVar39._8_4_ = auVar48._8_4_ * auVar48._8_4_;
  auVar39._12_4_ = auVar48._12_4_ * auVar48._12_4_;
  local_a8 = *(long *)(*(long *)(lVar19 + 0x3d0) + 0x10);
  if (*(long *)(local_a8 + 8) == 0) {
    local_98 = 0x200;
    local_78 = 0x200;
    if (local_a8 == 0) goto LAB_0309ab90;
    local_d8 = (undefined4 *)0x200;
    if (*(ulong *)(local_a8 + 0x28) < 0x200) {
LAB_0309ab08:
      local_a0 = FUN_031cf3b4(local_a8,&local_d8);
      goto LAB_0309abb8;
    }
    local_a0 = *(long *)(local_a8 + 0x38);
    if (*(ulong *)(local_a8 + 0x40) < local_a0 + 0x200U) goto LAB_0309ab08;
    *(ulong *)(local_a8 + 0x38) = local_a0 + 0x200U;
  }
  else {
    local_a8 = 0;
LAB_0309ab90:
    local_78 = 0x200;
    local_98 = 0x200;
    local_a0 = (**(code **)PTR_DAT_047d1a08)(1,&local_78,0x40);
LAB_0309abb8:
    auVar39._8_8_ = auVar39._8_8_;
  }
  auVar48 = NEON_ext(auVar39,auVar39,8,1);
  local_b0 = CONCAT44(0x80000040,(int)local_b0);
  lVar19 = *(long *)(lVar32 + 0x1000b8);
  local_b8 = local_a0;
  if (lVar19 == 0) {
    lVar19 = FUN_00e5d3b4();
    *(long *)(lVar32 + 0x1000b8) = lVar19;
  }
  auVar60._0_8_ = CONCAT44(auVar49._4_4_ + fVar100,auVar49._0_4_ + fVar99);
  auVar60._8_4_ = auVar49._8_4_ + fVar101;
  auVar60._12_4_ = auVar49._12_4_ + fVar102;
  lVar32 = *(long *)(*(long *)(lVar19 + 0x3d0) + 0x10);
  if (*(long *)(lVar32 + 8) == 0) {
    local_c0 = 0x200;
    local_78 = 0x200;
    if (lVar32 == 0) goto LAB_0309ac6c;
    local_d8 = (undefined4 *)0x200;
    if (*(ulong *)(lVar32 + 0x28) < 0x200) {
LAB_0309ac44:
      puVar15 = (undefined4 *)FUN_031cf3b4(lVar32,&local_d8);
      auVar60._8_8_ = auVar60._8_8_;
    }
    else {
      puVar15 = *(undefined4 **)(lVar32 + 0x38);
      if (*(undefined4 **)(lVar32 + 0x40) < puVar15 + 0x80) goto LAB_0309ac44;
      *(undefined4 **)(lVar32 + 0x38) = puVar15 + 0x80;
    }
  }
  else {
    lVar32 = 0;
LAB_0309ac6c:
    local_78 = 0x200;
    local_c0 = 0x200;
    puVar15 = (undefined4 *)(**(code **)PTR_DAT_047d1a08)(1,&local_78,0x40);
    auVar60._8_8_ = auVar60._8_8_;
  }
  local_d0 = 0x80;
  local_cc = 0x80000080;
  local_c8 = 0;
  *puVar15 = 0xffffffff;
  lVar19 = 0;
  while( true ) {
    *(undefined4 *)((long)puVar15 + lVar19 + 4) = 0xffffffff;
    *(undefined4 *)((long)puVar15 + lVar19 + 8) = 0xffffffff;
    *(undefined4 *)((long)puVar15 + lVar19 + 0xc) = 0xffffffff;
    if (lVar19 == 0x1f0) break;
    *(undefined4 *)((long)puVar15 + lVar19 + 0x10) = 0xffffffff;
    lVar19 = lVar19 + 0x10;
  }
  uVar20 = (long)(int)local_b0 + 1;
  local_d8 = puVar15;
  if ((int)(local_b0._4_4_ & 0x7fffffff) <= (int)local_b0) {
    FUN_0309cd64(&local_b8,uVar20);
  }
  lVar19 = local_b8;
  *(ulong *)(local_b8 + (long)(int)local_b0 * 8) = param_2 | 0xffffffff00000000;
  local_b0 = CONCAT44(local_b0._4_4_,(int)uVar20);
  if ((int)uVar20 != 0) {
    uVar14 = NEON_fmov(0x3f800000,4);
    do {
      uVar20 = (long)(int)uVar20 - 1;
      puVar27 = (uint *)(lVar19 + uVar20 * 8);
      uVar18 = *puVar27;
      uVar25 = (ulong)uVar18;
      uVar2 = puVar27[1];
      if (1 < local_d0) {
        uVar22 = (uVar18 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar18 * -0x61c8864f & 0xff00ff) << 8;
        uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
        while( true ) {
          uVar22 = local_d0 - 1U & uVar22;
          if (local_d8[(int)uVar22] == 0xffffffff) break;
          if (local_d8[(int)uVar22] == uVar18) {
            if ((int)uVar22 < local_d0) goto LAB_0309b520;
            break;
          }
          uVar22 = uVar22 + 1;
        }
      }
      iVar21 = local_c8 * 2;
      if (local_d0 <= iVar21) break;
      uVar31 = uVar25 & 0x3fffff;
      lVar35 = *(long *)(*(long *)(param_1 + 0x38) + ((ulong)(uVar18 >> 0xe) & 0x3ff00));
      lVar24 = *(long *)(lVar35 + 0x20);
      iVar6 = *(int *)(lVar24 + 0x50);
      iVar30 = (int)uVar31;
      iVar23 = iVar30 - *(int *)(lVar24 + 0x20);
      if (iVar30 < *(int *)(lVar24 + 0x20)) {
        if (*(int *)(lVar24 + 0x98) == 0) {
          iVar23 = iVar30;
LAB_0309ae6c:
          lVar26 = *(long *)(lVar24 + 0x120) + (long)(iVar23 * iVar6) * 4;
          lVar24 = *(long *)(lVar24 + 0xb0);
          goto LAB_0309ae7c;
        }
        iVar23 = *(int *)(*(long *)(lVar24 + 0x90) + uVar31 * 4);
        if (iVar23 != -1) goto LAB_0309ae6c;
        lVar26 = *(long *)(lVar24 + 0x48) + (long)(iVar6 * iVar30) * 4;
        piVar28 = (int *)(*(long *)(lVar24 + 0x18) + uVar31 * 0x10);
        lVar34 = lVar26 + (long)iVar6 * 4;
        if (param_4 != (long *)0x0) goto LAB_0309ae88;
LAB_0309aeb8:
        if (local_d0 <= iVar21) {
          FUN_0309cedc(&local_d8,local_d0 << 1);
        }
        uVar22 = (uVar18 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar18 * -0x61c8864f & 0xff00ff) << 8;
        uVar22 = local_d0 - 1U & (uVar22 >> 0x10 | uVar22 << 0x10);
        puVar27 = local_d8 + (int)uVar22;
        if (*puVar27 == 0xffffffff) {
          iVar21 = 1;
        }
        else if (*puVar27 == uVar18) {
          iVar21 = 0;
        }
        else {
          do {
            uVar22 = uVar22 + 1 & local_d0 - 1U;
            if (local_d8[(int)uVar22] == 0xffffffff) {
              iVar21 = 1;
              goto LAB_0309afbc;
            }
          } while (local_d8[(int)uVar22] != uVar18);
          iVar21 = 0;
LAB_0309afbc:
          puVar27 = local_d8 + (int)uVar22;
        }
        local_c8 = local_c8 + iVar21;
        *puVar27 = uVar18;
        if (0 < (short)piVar28[2]) {
          iVar21 = 0;
          do {
            lVar24 = *(long *)(lVar35 + 0x20);
            uVar18 = *piVar28 + iVar21;
            iVar23 = *(int *)(lVar24 + 0x30);
            iVar6 = *(int *)(lVar24 + 0x60);
            uVar22 = uVar18 - iVar23;
            if ((int)uVar18 < iVar23) {
              lVar34 = *(long *)(lVar24 + 0x28);
              uVar22 = uVar18;
              if (*(int *)(lVar24 + 0x78) != 0) {
                uVar22 = *(uint *)(*(long *)(lVar24 + 0x70) + (long)(int)uVar18 * 4);
              }
              if (uVar22 == 0xffffffff) {
                lVar26 = *(long *)(lVar24 + 0x58) + (long)(int)(iVar6 * uVar18) * 4;
                uVar22 = uVar18;
              }
              else {
                lVar26 = *(long *)(lVar24 + 0x130) + (long)(int)(uVar22 * iVar6) * 4;
                lVar34 = *(long *)(lVar24 + 0xc0);
              }
            }
            else {
              lVar34 = *(long *)(lVar24 + 0xe0);
              lVar26 = *(long *)(lVar24 + 0x150) +
                       (long)(iVar6 * ((iVar21 + *piVar28) - iVar23)) * 4;
            }
            lVar37 = (long)(int)uVar22;
            if (uVar2 == 0xffffffff) {
LAB_0309b0a4:
              piVar17 = (int *)(lVar34 + (long)(int)uVar22 * 0x14);
              iVar23 = *(int *)(lVar24 + 0x40);
              iVar30 = *piVar17;
              lVar29 = 0x38;
              if (iVar23 <= iVar30) {
                lVar29 = 0xf0;
              }
              iVar55 = 0;
              if (iVar23 <= iVar30) {
                iVar55 = iVar23;
              }
              pfVar7 = (float *)(*(long *)(lVar24 + lVar29) + (long)(iVar30 - iVar55) * 0x10);
              fVar98 = *pfVar7;
              fVar38 = pfVar7[1];
              fVar43 = pfVar7[2];
              iVar30 = *(int *)(lVar34 + lVar37 * 0x14 + 4);
              fVar99 = (float)*(undefined8 *)(lVar35 + 0x70);
              fVar100 = (float)((ulong)*(undefined8 *)(lVar35 + 0x70) >> 0x20);
              fVar101 = (float)*(undefined8 *)(lVar35 + 0x78);
              fVar102 = (float)((ulong)*(undefined8 *)(lVar35 + 0x78) >> 0x20);
              lVar29 = 0x38;
              if (iVar23 <= iVar30) {
                lVar29 = 0xf0;
              }
              iVar55 = 0;
              if (iVar23 <= iVar30) {
                iVar55 = iVar23;
              }
              fVar92 = (float)*(undefined8 *)(lVar35 + 0x80);
              fVar93 = (float)((ulong)*(undefined8 *)(lVar35 + 0x80) >> 0x20);
              fVar53 = (float)*(undefined8 *)(lVar35 + 0x88);
              fVar54 = (float)((ulong)*(undefined8 *)(lVar35 + 0x88) >> 0x20);
              pfVar7 = (float *)(*(long *)(lVar24 + lVar29) + (long)(iVar30 - iVar55) * 0x10);
              fVar44 = *pfVar7;
              fVar45 = pfVar7[1];
              fVar91 = pfVar7[2];
              fVar87 = (float)*(undefined8 *)(lVar35 + 0x90);
              fVar94 = fVar87 + fVar92 * fVar43 +
                                *(float *)(lVar35 + 0x60) * fVar98 + fVar99 * fVar38;
              fVar88 = (float)((ulong)*(undefined8 *)(lVar35 + 0x90) >> 0x20);
              fVar96 = fVar88 + fVar93 * fVar43 +
                                *(float *)(lVar35 + 100) * fVar98 + fVar100 * fVar38;
              uVar95 = CONCAT44(fVar96,fVar94);
              fVar89 = (float)*(undefined8 *)(lVar35 + 0x98);
              fVar97 = fVar89 + fVar53 * fVar43 +
                                *(float *)(lVar35 + 0x68) * fVar98 + fVar101 * fVar38;
              fVar90 = (float)((ulong)*(undefined8 *)(lVar35 + 0x98) >> 0x20);
              fVar98 = fVar90 + fVar54 * fVar43 +
                                *(float *)(lVar35 + 0x6c) * fVar98 + fVar102 * fVar38;
              uVar80 = CONCAT44(fVar98,fVar97);
              fVar87 = fVar87 + fVar92 * fVar91 +
                                *(float *)(lVar35 + 0x60) * fVar44 + fVar99 * fVar45;
              fVar88 = fVar88 + fVar93 * fVar91 +
                                *(float *)(lVar35 + 100) * fVar44 + fVar100 * fVar45;
              uVar47 = CONCAT44(fVar88,fVar87);
              fVar89 = fVar89 + fVar53 * fVar91 +
                                *(float *)(lVar35 + 0x68) * fVar44 + fVar101 * fVar45;
              fVar90 = fVar90 + fVar54 * fVar91 +
                                *(float *)(lVar35 + 0x6c) * fVar44 + fVar102 * fVar45;
              uVar57 = CONCAT44(fVar90,fVar89);
              auVar40._0_4_ = fVar94 - auVar60._0_4_ * 0.5;
              auVar40._4_4_ = fVar96 - auVar60._4_4_ * 0.5;
              auVar40._8_4_ = fVar97 - auVar60._8_4_ * 0.5;
              auVar40._12_4_ = fVar98 - auVar60._12_4_ * 0.5;
              auVar49 = NEON_ext(auVar40,auVar40,4,1);
              fVar99 = fVar87 - fVar94;
              fVar100 = fVar88 - fVar96;
              fVar101 = fVar89 - fVar97;
              fVar102 = fVar90 - fVar98;
              auVar81._4_4_ = fVar100;
              auVar81._0_4_ = fVar99;
              auVar81._8_4_ = fVar101;
              auVar81._12_4_ = fVar102;
              auVar84._4_4_ = fVar100;
              auVar84._0_4_ = fVar99;
              auVar84._8_4_ = fVar101;
              auVar84._12_4_ = fVar102;
              auVar61 = NEON_ext(auVar81,auVar84,4,1);
              auVar50._0_4_ = auVar40._0_4_ * auVar61._0_4_ - fVar99 * auVar49._0_4_;
              auVar50._4_4_ = auVar40._4_4_ * auVar61._4_4_ - fVar100 * auVar49._4_4_;
              auVar50._8_4_ = auVar40._8_4_ * fVar99 - fVar101 * auVar40._0_4_;
              auVar50._12_4_ = auVar40._12_4_ * fVar100 - fVar102 * auVar40._4_4_;
              auVar49 = NEON_ext(auVar50,auVar50,4,1);
              auVar51._0_4_ = *param_6 * auVar49._0_4_;
              auVar51._4_4_ = param_6[1] * auVar49._4_4_;
              auVar51._8_4_ = param_6[2] * auVar50._0_4_;
              auVar51._12_4_ = param_6[3] * 0.0;
              auVar49 = NEON_ext(auVar51,auVar51,8,1);
              if (0.0 <= auVar51._0_4_ + auVar51._4_4_ + auVar49._0_4_) {
                fVar91 = fVar94 - fVar87;
                fVar92 = fVar96 - fVar88;
                fVar93 = fVar97 - fVar89;
                uVar46 = NEON_fminnm(CONCAT44((auVar40._8_4_ * fVar93 +
                                              auVar40._0_4_ * fVar91 + auVar40._4_4_ * fVar92) /
                                              (fVar93 * fVar93 + fVar91 * fVar91 + fVar92 * fVar92),
                                              (auVar40._8_4_ * fVar93 +
                                              auVar40._0_4_ * fVar91 + auVar40._4_4_ * fVar92) /
                                              (fVar93 * fVar93 + fVar91 * fVar91 + fVar92 * fVar92))
                                     ,uVar14,4);
                uVar46 = NEON_fmax(uVar46,0,4);
                fVar45 = (float)((ulong)uVar46 >> 0x20);
                fVar38 = auVar40._0_4_ - fVar91 * (float)uVar46;
                fVar43 = auVar40._4_4_ - fVar92 * fVar45;
                fVar44 = auVar40._8_4_ - fVar93 * (float)uVar46;
                fVar45 = auVar40._12_4_ - (fVar98 - fVar90) * fVar45;
                auVar41._0_4_ = fVar38 * fVar38;
                auVar41._4_4_ = fVar43 * fVar43;
                auVar41._8_4_ = fVar44 * fVar44;
                auVar41._12_4_ = fVar45 * fVar45;
                auVar49 = NEON_ext(auVar41,auVar41,8,1);
                if ((bool)(~(auVar39._0_4_ + auVar39._4_4_ + auVar48._0_4_ <=
                            auVar41._0_4_ + auVar41._4_4_ + auVar49._0_4_) & 1)) {
                  if (*(int *)(lVar34 + lVar37 * 0x14 + 8) != -1) {
                    uVar31 = (ulong)uVar18 | uVar25 & 0xffc00000;
                    pbVar36 = (byte *)(lVar34 + lVar37 * 0x14 + 0x10);
                    bVar5 = *pbVar36;
                    if ((param_4 == (long *)0x0) || ((bVar5 >> 5 & 1) != 0)) {
                      if ((bVar5 >> 5 & 1) == 0) goto LAB_0309b34c;
                    }
                    else {
                      uVar16 = (**(code **)(*param_4 + 0x28))
                                         (param_4,param_1,uVar31,piVar17,lVar26,
                                          lVar26 + (long)iVar6 * 4);
                      if ((uVar16 & 1) != 0) {
LAB_0309b34c:
                        iVar23 = (int)uVar20;
                        if (iVar23 < 0x40) {
                          uVar18 = *(uint *)(lVar34 + lVar37 * 0x14 + 0xc);
                          if ((*pbVar36 >> 6 & 1) == 0) {
                            if (uVar18 == 0xffffffff) {
                              uVar18 = 0xffffffff;
                            }
                            else {
                              uVar18 = uVar18 & 0x3fffff |
                                       *(int *)(*(long *)(lVar35 + 0x20) + 0x17c) << 0x16;
                            }
                          }
                          *(ulong *)(lVar19 + (long)iVar23 * 8) = (ulong)uVar18 | uVar31 << 0x20;
                          uVar20 = (ulong)(iVar23 + 1);
                        }
                        goto LAB_0309b460;
                      }
                    }
                  }
                  auVar49 = *param_3;
                  auVar61 = param_3[1];
                  fVar45 = auVar61._0_4_;
                  iVar23 = -(uint)(fVar94 <= fVar45);
                  fVar53 = auVar61._4_4_;
                  iVar6 = -(uint)(fVar96 <= fVar53);
                  fVar54 = auVar61._8_4_;
                  iVar30 = -(uint)(fVar97 <= fVar54);
                  fVar38 = auVar49._0_4_;
                  iVar55 = -(uint)(fVar38 <= fVar94);
                  fVar43 = auVar49._4_4_;
                  iVar67 = -(uint)(fVar43 <= fVar96);
                  fVar44 = auVar49._8_4_;
                  iVar69 = -(uint)(fVar44 <= fVar97);
                  iVar79 = -(uint)(fVar38 <= fVar87);
                  iVar85 = -(uint)(fVar43 <= fVar88);
                  iVar86 = -(uint)(fVar44 <= fVar89);
                  iVar55 = CONCAT13((byte)((uint)iVar6 >> 0x18) & (byte)((uint)iVar67 >> 0x18) &
                                    (byte)((uint)iVar23 >> 0x18) & (byte)((uint)iVar55 >> 0x18) &
                                    (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar69 >> 0x18),
                                    CONCAT12((byte)((uint)iVar6 >> 0x10) &
                                             (byte)((uint)iVar67 >> 0x10) &
                                             (byte)((uint)iVar23 >> 0x10) &
                                             (byte)((uint)iVar55 >> 0x10) &
                                             (byte)((uint)iVar30 >> 0x10) &
                                             (byte)((uint)iVar69 >> 0x10),
                                             CONCAT11((byte)((uint)iVar6 >> 8) &
                                                      (byte)((uint)iVar67 >> 8) &
                                                      (byte)((uint)iVar23 >> 8) &
                                                      (byte)((uint)iVar55 >> 8) &
                                                      (byte)((uint)iVar30 >> 8) &
                                                      (byte)((uint)iVar69 >> 8),
                                                      (byte)iVar6 & (byte)iVar67 &
                                                      (byte)iVar23 & (byte)iVar55 &
                                                      (byte)iVar30 & (byte)iVar69)));
                  iVar23 = -(uint)(fVar87 <= fVar45);
                  iVar6 = -(uint)(fVar88 <= fVar53);
                  iVar30 = -(uint)(fVar89 <= fVar54);
                  iVar23 = CONCAT13((byte)((uint)iVar6 >> 0x18) & (byte)((uint)iVar85 >> 0x18) &
                                    (byte)((uint)iVar23 >> 0x18) & (byte)((uint)iVar79 >> 0x18) &
                                    (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar86 >> 0x18),
                                    CONCAT12((byte)((uint)iVar6 >> 0x10) &
                                             (byte)((uint)iVar85 >> 0x10) &
                                             (byte)((uint)iVar23 >> 0x10) &
                                             (byte)((uint)iVar79 >> 0x10) &
                                             (byte)((uint)iVar30 >> 0x10) &
                                             (byte)((uint)iVar86 >> 0x10),
                                             CONCAT11((byte)((uint)iVar6 >> 8) &
                                                      (byte)((uint)iVar85 >> 8) &
                                                      (byte)((uint)iVar23 >> 8) &
                                                      (byte)((uint)iVar79 >> 8) &
                                                      (byte)((uint)iVar30 >> 8) &
                                                      (byte)((uint)iVar86 >> 8),
                                                      (byte)iVar6 & (byte)iVar85 &
                                                      (byte)iVar23 & (byte)iVar79 &
                                                      (byte)iVar30 & (byte)iVar86)));
                  if (iVar55 == 0 || iVar23 == 0) {
                    if (iVar55 == 0) {
                      iVar6 = -(uint)(fVar99 == 0.0);
                      iVar30 = -(uint)(fVar100 == 0.0);
                      iVar55 = -(uint)(fVar101 == 0.0);
                      fVar56 = (float)CONCAT13((byte)((uint)fVar99 >> 0x18) &
                                               ~(byte)((uint)iVar6 >> 0x18),
                                               CONCAT12((byte)((uint)fVar99 >> 0x10) &
                                                        ~(byte)((uint)iVar6 >> 0x10),
                                                        CONCAT11((byte)((uint)fVar99 >> 8) &
                                                                 ~(byte)((uint)iVar6 >> 8),
                                                                 SUB41(fVar99,0) & ~(byte)iVar6)));
                      auVar59._0_8_ =
                           CONCAT17((byte)((uint)fVar100 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                                    CONCAT16((byte)((uint)fVar100 >> 0x10) &
                                             ~(byte)((uint)iVar30 >> 0x10),
                                             CONCAT15((byte)((uint)fVar100 >> 8) &
                                                      ~(byte)((uint)iVar30 >> 8),
                                                      CONCAT14(SUB41(fVar100,0) & ~(byte)iVar30,
                                                               fVar56))));
                      auVar59[8] = SUB41(fVar101,0) & ~(byte)iVar55;
                      auVar59[9] = (byte)((uint)fVar101 >> 8) & ~(byte)((uint)iVar55 >> 8);
                      auVar59[10] = (byte)((uint)fVar101 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10);
                      auVar59[0xb] = (byte)((uint)fVar101 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18);
                      auVar64._12_2_ = 0;
                      auVar64._0_12_ = auVar59;
                      auVar64[0xe] = 0x80;
                      auVar64[0xf] = 0x3f;
                      auVar81 = NEON_fmov(0x3f800000,4);
                      iVar6 = -(uint)(fVar56 == 0.0);
                      fVar68 = (float)((ulong)auVar59._0_8_ >> 0x20);
                      iVar30 = -(uint)(fVar68 == 0.0);
                      iVar55 = -(uint)(auVar59._8_4_ == 0.0);
                      iVar67 = -(uint)(auVar64._12_4_ == 0.0);
                      auVar65._0_4_ = auVar81._0_4_ / fVar56;
                      auVar65._4_4_ = auVar81._4_4_ / fVar68;
                      auVar65._8_4_ = auVar81._8_4_ / auVar59._8_4_;
                      auVar65._12_4_ = auVar81._12_4_ / auVar64._12_4_;
                      auVar83._8_4_ = 0x7f7fffee;
                      auVar83._0_8_ = 0x7f7fffee7f7fffee;
                      auVar83._12_4_ = 0x7f7fffee;
                      auVar9[1] = ~(byte)((uint)iVar6 >> 8);
                      auVar9[0] = ~(byte)iVar6;
                      auVar9[2] = ~(byte)((uint)iVar6 >> 0x10);
                      auVar9[3] = ~(byte)((uint)iVar6 >> 0x18);
                      auVar9[4] = ~(byte)iVar30;
                      auVar9[5] = ~(byte)((uint)iVar30 >> 8);
                      auVar9[6] = ~(byte)((uint)iVar30 >> 0x10);
                      auVar9[7] = ~(byte)((uint)iVar30 >> 0x18);
                      auVar9[8] = ~(byte)iVar55;
                      auVar9[9] = ~(byte)((uint)iVar55 >> 8);
                      auVar9[10] = ~(byte)((uint)iVar55 >> 0x10);
                      auVar9[0xb] = ~(byte)((uint)iVar55 >> 0x18);
                      auVar9[0xc] = ~(byte)iVar67;
                      auVar9[0xd] = ~(byte)((uint)iVar67 >> 8);
                      auVar9[0xe] = ~(byte)((uint)iVar67 >> 0x10);
                      auVar9[0xf] = ~(byte)((uint)iVar67 >> 0x18);
                      auVar65 = auVar65 ^ (auVar65 ^ auVar83) & ~auVar9;
                      fVar56 = auVar65._0_4_ * (fVar38 - fVar94);
                      fVar68 = auVar65._4_4_ * (fVar43 - fVar96);
                      uVar70 = (undefined1)((uint)fVar68 >> 8);
                      uVar71 = (undefined1)((uint)fVar68 >> 0x10);
                      uVar72 = (undefined1)((uint)fVar68 >> 0x18);
                      fVar12 = auVar65._8_4_ * (fVar44 - fVar97);
                      uVar73 = (undefined1)((uint)fVar12 >> 8);
                      uVar74 = (undefined1)((uint)fVar12 >> 0x10);
                      uVar75 = (undefined1)((uint)fVar12 >> 0x18);
                      fVar13 = auVar65._12_4_ * (auVar49._12_4_ - fVar98);
                      uVar76 = (undefined1)((uint)fVar13 >> 8);
                      uVar77 = (undefined1)((uint)fVar13 >> 0x10);
                      uVar78 = (undefined1)((uint)fVar13 >> 0x18);
                      auVar66._0_4_ = auVar65._0_4_ * (fVar45 - fVar94);
                      auVar66._4_4_ = auVar65._4_4_ * (fVar53 - fVar96);
                      auVar66._8_4_ = auVar65._8_4_ * (fVar54 - fVar97);
                      auVar66._12_4_ = auVar65._12_4_ * (auVar61._12_4_ - fVar98);
                      auVar10[4] = SUB41(fVar68,0);
                      auVar10._0_4_ = fVar56;
                      auVar10[5] = uVar70;
                      auVar10[6] = uVar71;
                      auVar10[7] = uVar72;
                      auVar10[8] = SUB41(fVar12,0);
                      auVar10[9] = uVar73;
                      auVar10[10] = uVar74;
                      auVar10[0xb] = uVar75;
                      auVar10[0xc] = SUB41(fVar13,0);
                      auVar10[0xd] = uVar76;
                      auVar10[0xe] = uVar77;
                      auVar10[0xf] = uVar78;
                      auVar84 = NEON_fmin(auVar10,auVar66,4);
                      auVar11[4] = SUB41(fVar68,0);
                      auVar11._0_4_ = fVar56;
                      auVar11[5] = uVar70;
                      auVar11[6] = uVar71;
                      auVar11[7] = uVar72;
                      auVar11[8] = SUB41(fVar12,0);
                      auVar11[9] = uVar73;
                      auVar11[10] = uVar74;
                      auVar11[0xb] = uVar75;
                      auVar11[0xc] = SUB41(fVar13,0);
                      auVar11[0xd] = uVar76;
                      auVar11[0xe] = uVar77;
                      auVar11[0xf] = uVar78;
                      auVar81 = NEON_fmax(auVar11,auVar66,4);
                      uVar95 = NEON_fmaxp(auVar84._0_8_,auVar84._0_8_,4);
                      uVar95 = NEON_fmax(CONCAT44(auVar84._8_4_,auVar84._8_4_),uVar95,4);
                      uVar80 = NEON_fminp(auVar81._0_8_,auVar81._0_8_,4);
                      uVar46 = NEON_fmin(CONCAT44(auVar81._8_4_,auVar81._8_4_),uVar80,4);
                      uVar80 = NEON_fmax(uVar95,0,4);
                      uVar95 = NEON_fmin(uVar46,uVar14,4);
                      fVar56 = (float)uVar80;
                      if ((bool)(~(fVar56 <= (float)uVar95) & 1)) goto LAB_0309b460;
                      fVar68 = (float)((ulong)uVar80 >> 0x20);
                      uVar95 = CONCAT44(fVar96 + fVar100 * fVar68,fVar94 + fVar99 * fVar56);
                      uVar80 = CONCAT44(fVar98 + fVar102 * fVar68,fVar97 + fVar101 * fVar56);
                    }
                    if (iVar23 == 0) {
                      auVar81 = NEON_fmov(0x3f800000,4);
                      iVar23 = -(uint)(fVar91 == 0.0);
                      iVar6 = -(uint)(fVar92 == 0.0);
                      iVar30 = -(uint)(fVar93 == 0.0);
                      fVar99 = (float)CONCAT13((byte)((uint)fVar91 >> 0x18) &
                                               ~(byte)((uint)iVar23 >> 0x18),
                                               CONCAT12((byte)((uint)fVar91 >> 0x10) &
                                                        ~(byte)((uint)iVar23 >> 0x10),
                                                        CONCAT11((byte)((uint)fVar91 >> 8) &
                                                                 ~(byte)((uint)iVar23 >> 8),
                                                                 SUB41(fVar91,0) & ~(byte)iVar23)));
                      auVar58._0_8_ =
                           CONCAT17((byte)((uint)fVar92 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18),
                                    CONCAT16((byte)((uint)fVar92 >> 0x10) &
                                             ~(byte)((uint)iVar6 >> 0x10),
                                             CONCAT15((byte)((uint)fVar92 >> 8) &
                                                      ~(byte)((uint)iVar6 >> 8),
                                                      CONCAT14(SUB41(fVar92,0) & ~(byte)iVar6,fVar99
                                                              ))));
                      auVar58[8] = SUB41(fVar93,0) & ~(byte)iVar30;
                      auVar58[9] = (byte)((uint)fVar93 >> 8) & ~(byte)((uint)iVar30 >> 8);
                      auVar58[10] = (byte)((uint)fVar93 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
                      auVar58[0xb] = (byte)((uint)fVar93 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
                      auVar62._12_2_ = 0;
                      auVar62._0_12_ = auVar58;
                      auVar62[0xe] = 0x80;
                      auVar62[0xf] = 0x3f;
                      iVar23 = -(uint)(fVar99 == 0.0);
                      fVar100 = (float)((ulong)auVar58._0_8_ >> 0x20);
                      iVar6 = -(uint)(fVar100 == 0.0);
                      iVar30 = -(uint)(auVar58._8_4_ == 0.0);
                      iVar55 = -(uint)(auVar62._12_4_ == 0.0);
                      auVar63._0_4_ = auVar81._0_4_ / fVar99;
                      auVar63._4_4_ = auVar81._4_4_ / fVar100;
                      auVar63._8_4_ = auVar81._8_4_ / auVar58._8_4_;
                      auVar63._12_4_ = auVar81._12_4_ / auVar62._12_4_;
                      auVar82._8_4_ = 0x7f7fffee;
                      auVar82._0_8_ = 0x7f7fffee7f7fffee;
                      auVar82._12_4_ = 0x7f7fffee;
                      auVar8[1] = ~(byte)((uint)iVar23 >> 8);
                      auVar8[0] = ~(byte)iVar23;
                      auVar8[2] = ~(byte)((uint)iVar23 >> 0x10);
                      auVar8[3] = ~(byte)((uint)iVar23 >> 0x18);
                      auVar8[4] = ~(byte)iVar6;
                      auVar8[5] = ~(byte)((uint)iVar6 >> 8);
                      auVar8[6] = ~(byte)((uint)iVar6 >> 0x10);
                      auVar8[7] = ~(byte)((uint)iVar6 >> 0x18);
                      auVar8[8] = ~(byte)iVar30;
                      auVar8[9] = ~(byte)((uint)iVar30 >> 8);
                      auVar8[10] = ~(byte)((uint)iVar30 >> 0x10);
                      auVar8[0xb] = ~(byte)((uint)iVar30 >> 0x18);
                      auVar8[0xc] = ~(byte)iVar55;
                      auVar8[0xd] = ~(byte)((uint)iVar55 >> 8);
                      auVar8[0xe] = ~(byte)((uint)iVar55 >> 0x10);
                      auVar8[0xf] = ~(byte)((uint)iVar55 >> 0x18);
                      auVar63 = auVar63 ^ (auVar63 ^ auVar82) & ~auVar8;
                      auVar42._0_4_ = auVar63._0_4_ * (fVar38 - fVar87);
                      auVar42._4_4_ = auVar63._4_4_ * (fVar43 - fVar88);
                      auVar42._8_4_ = auVar63._8_4_ * (fVar44 - fVar89);
                      auVar42._12_4_ = auVar63._12_4_ * (auVar49._12_4_ - fVar90);
                      auVar52._0_4_ = auVar63._0_4_ * (fVar45 - fVar87);
                      auVar52._4_4_ = auVar63._4_4_ * (fVar53 - fVar88);
                      auVar52._8_4_ = auVar63._8_4_ * (fVar54 - fVar89);
                      auVar52._12_4_ = auVar63._12_4_ * (auVar61._12_4_ - fVar90);
                      auVar61 = NEON_fmin(auVar42,auVar52,4);
                      auVar49 = NEON_fmax(auVar42,auVar52,4);
                      uVar47 = NEON_fmaxp(auVar61._0_8_,auVar61._0_8_,4);
                      uVar47 = NEON_fmax(CONCAT44(auVar61._8_4_,auVar61._8_4_),uVar47,4);
                      uVar57 = NEON_fminp(auVar49._0_8_,auVar49._0_8_,4);
                      uVar57 = NEON_fmin(CONCAT44(auVar49._8_4_,auVar49._8_4_),uVar57,4);
                      uVar47 = NEON_fmax(uVar47,0,4);
                      uVar57 = NEON_fmin(uVar57,uVar14,4);
                      fVar99 = (float)uVar47;
                      fVar100 = (float)((ulong)uVar47 >> 0x20);
                      if ((bool)(~(fVar99 <= (float)uVar57) & 1)) goto LAB_0309b460;
                      uVar47 = CONCAT44(fVar88 + fVar92 * fVar100,fVar87 + fVar91 * fVar99);
                      uVar57 = CONCAT44(fVar90 + (fVar98 - fVar90) * fVar100,
                                        fVar89 + fVar93 * fVar99);
                    }
                  }
                  iVar23 = (int)param_7[1];
                  puVar3 = (undefined8 *)(*param_7 + (long)iVar23 * 0x10);
                  puVar3[1] = uVar80;
                  *puVar3 = uVar95;
                  puVar3 = (undefined8 *)(*param_7 + (long)(iVar23 + 1) * 0x10);
                  puVar3[1] = uVar57;
                  *puVar3 = uVar47;
                  *(uint *)(param_7 + 1) = iVar23 + 2U;
                  if (iVar23 + 2U == (*(uint *)((long)param_7 + 0xc) & 0x7fffffff))
                  goto LAB_0309b534;
                }
              }
            }
            else {
              lVar29 = lVar34 + lVar37 * 0x14;
              uVar4 = *(uint *)(lVar29 + 8);
              uVar1 = 0xffffffff;
              if (uVar4 != 0xffffffff) {
                uVar1 = uVar4 & 0x3fffff | *(int *)(lVar24 + 0x17c) << 0x16;
              }
              if ((*(byte *)(lVar29 + 0x10) & 0x40) == 0) {
                uVar4 = uVar1;
              }
              if (uVar4 != uVar2) goto LAB_0309b0a4;
            }
LAB_0309b460:
            iVar21 = iVar21 + 1;
          } while (iVar21 < (short)piVar28[2]);
        }
      }
      else {
        lVar26 = *(long *)(lVar24 + 0x140) + (long)(iVar6 * iVar23) * 4;
        lVar24 = *(long *)(lVar24 + 0xd0);
LAB_0309ae7c:
        lVar34 = lVar26 + (long)iVar6 * 4;
        piVar28 = (int *)(lVar24 + (long)iVar23 * 0x10);
        if (param_4 == (long *)0x0) goto LAB_0309aeb8;
LAB_0309ae88:
        uVar31 = (**(code **)(*param_4 + 0x20))(param_4,param_1,uVar25,piVar28,lVar26,lVar34);
        if ((uVar31 & 1) != 0) {
          iVar21 = local_c8 << 1;
          goto LAB_0309aeb8;
        }
        if (uVar2 != 0xffffffff) {
          uVar25 = (ulong)uVar2 & 0x3fffff;
          lVar24 = *(long *)(*(long *)(param_1 + 0x38) + ((ulong)(uVar2 >> 0xe) & 0x3ff00));
          lVar35 = *(long *)(lVar24 + 0x20);
          iVar23 = (int)uVar25;
          iVar21 = iVar23 - *(int *)(lVar35 + 0x30);
          if (iVar23 < *(int *)(lVar35 + 0x30)) {
            iVar21 = iVar23;
            if ((*(int *)(lVar35 + 0x78) == 0) ||
               (iVar21 = *(int *)(*(long *)(lVar35 + 0x70) + uVar25 * 4), iVar21 != -1)) {
              lVar26 = *(long *)(lVar35 + 0xc0);
              goto LAB_0309b478;
            }
            piVar28 = (int *)(*(long *)(lVar35 + 0x28) + uVar25 * 0x14);
          }
          else {
            lVar26 = *(long *)(lVar35 + 0xe0);
LAB_0309b478:
            piVar28 = (int *)(lVar26 + (long)iVar21 * 0x14);
          }
          iVar6 = *(int *)(lVar35 + 0x40);
          iVar21 = *piVar28;
          iVar23 = piVar28[1];
          lVar26 = 0x38;
          if (iVar6 <= iVar21) {
            lVar26 = 0xf0;
          }
          iVar30 = 0;
          if (iVar6 <= iVar21) {
            iVar30 = iVar6;
          }
          pfVar7 = (float *)(*(long *)(lVar35 + lVar26) + (long)(iVar21 - iVar30) * 0x10);
          fVar99 = *pfVar7;
          fVar100 = pfVar7[1];
          fVar101 = pfVar7[2];
          lVar26 = 0x38;
          if (iVar6 <= iVar23) {
            lVar26 = 0xf0;
          }
          fVar102 = (float)*(undefined8 *)(lVar24 + 0x70);
          fVar98 = (float)((ulong)*(undefined8 *)(lVar24 + 0x70) >> 0x20);
          fVar38 = (float)*(undefined8 *)(lVar24 + 0x78);
          fVar43 = (float)((ulong)*(undefined8 *)(lVar24 + 0x78) >> 0x20);
          iVar21 = 0;
          if (iVar6 <= iVar23) {
            iVar21 = iVar6;
          }
          pfVar7 = (float *)(*(long *)(lVar35 + lVar26) + (long)(iVar23 - iVar21) * 0x10);
          fVar44 = *pfVar7;
          fVar45 = pfVar7[1];
          fVar91 = pfVar7[2];
          iVar21 = (int)param_7[1];
          fVar92 = (float)*(undefined8 *)(lVar24 + 0x80);
          fVar87 = (float)((ulong)*(undefined8 *)(lVar24 + 0x80) >> 0x20);
          fVar93 = (float)*(undefined8 *)(lVar24 + 0x88);
          fVar88 = (float)((ulong)*(undefined8 *)(lVar24 + 0x88) >> 0x20);
          fVar53 = (float)*(undefined8 *)(lVar24 + 0x90);
          fVar89 = (float)((ulong)*(undefined8 *)(lVar24 + 0x90) >> 0x20);
          auVar49._0_8_ =
               CONCAT44(fVar89 + fVar87 * fVar101 +
                                 *(float *)(lVar24 + 100) * fVar99 + fVar98 * fVar100,
                        fVar53 + fVar92 * fVar101 +
                                 *(float *)(lVar24 + 0x60) * fVar99 + fVar102 * fVar100);
          fVar54 = (float)*(undefined8 *)(lVar24 + 0x98);
          auVar49._8_4_ =
               fVar54 + fVar93 * fVar101 + *(float *)(lVar24 + 0x68) * fVar99 + fVar38 * fVar100;
          fVar90 = (float)((ulong)*(undefined8 *)(lVar24 + 0x98) >> 0x20);
          auVar49._12_4_ =
               fVar90 + fVar88 * fVar101 + *(float *)(lVar24 + 0x6c) * fVar99 + fVar43 * fVar100;
          auVar61._0_8_ =
               CONCAT44(fVar89 + fVar87 * fVar91 +
                                 *(float *)(lVar24 + 100) * fVar44 + fVar98 * fVar45,
                        fVar53 + fVar92 * fVar91 +
                                 *(float *)(lVar24 + 0x60) * fVar44 + fVar102 * fVar45);
          auVar61._8_4_ =
               fVar54 + fVar93 * fVar91 + *(float *)(lVar24 + 0x68) * fVar44 + fVar38 * fVar45;
          auVar61._12_4_ =
               fVar90 + fVar88 * fVar91 + *(float *)(lVar24 + 0x6c) * fVar44 + fVar43 * fVar45;
          puVar3 = (undefined8 *)(*param_7 + (long)iVar21 * 0x10);
          puVar3[1] = auVar49._8_8_;
          *puVar3 = auVar49._0_8_;
          puVar3 = (undefined8 *)(*param_7 + (long)(iVar21 + 1) * 0x10);
          puVar3[1] = auVar61._8_8_;
          *puVar3 = auVar61._0_8_;
          *(uint *)(param_7 + 1) = iVar21 + 2U;
          if (iVar21 + 2U == (*(uint *)((long)param_7 + 0xc) & 0x7fffffff)) break;
        }
      }
LAB_0309b520:
    } while ((int)uVar20 != 0);
LAB_0309b534:
    local_b0 = CONCAT44(local_b0._4_4_,(int)uVar20);
  }
  local_d0 = 0;
  if ((-1 < (int)local_cc) && (local_d8 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_d8,(ulong)local_cc << 2);
  }
  if (lVar32 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,puVar15);
  }
  else {
    uVar20 = local_c0 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(lVar32 + 0x28) < uVar20) || (*(long *)(lVar32 + 0x38) != uVar20 + (long)puVar15)
       ) {
      if (puVar15 != (undefined4 *)0x0) {
        if (*(ulong *)(lVar32 + 0x28) < uVar20 + 0x40) {
          *(int *)(*(long *)(lVar32 + 0x30) + 0x20) = *(int *)(*(long *)(lVar32 + 0x30) + 0x20) + -1
          ;
          (**(code **)(**(long **)(lVar32 + 0x10) + 0x18))
                    (*(long **)(lVar32 + 0x10),(long)puVar15 - (long)(int)puVar15[-1],uVar20 + 0x44)
          ;
        }
        else {
          if (*(long *)(lVar32 + 0x38) == uVar20 + (long)puVar15) {
            *(undefined4 **)(lVar32 + 0x38) = puVar15;
            goto LAB_0309b628;
          }
          FUN_031cf778(lVar32,puVar15);
        }
      }
    }
    else {
      *(undefined4 **)(lVar32 + 0x38) = puVar15;
      if (*(undefined4 **)(lVar32 + 0x48) == puVar15) {
LAB_0309b628:
        FUN_031cf578(lVar32);
      }
    }
  }
  if (local_a0 == lVar19) {
    local_b0 = local_b0 & 0xffffffff00000000;
  }
  if (local_a8 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar20 = local_98 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(local_a8 + 0x28) < uVar20) || (*(long *)(local_a8 + 0x38) != uVar20 + local_a0))
    {
      if (local_a0 != 0) {
        if (*(ulong *)(local_a8 + 0x28) < uVar20 + 0x40) {
          *(int *)(*(long *)(local_a8 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_a8 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_a8 + 0x10) + 0x18))
                    (*(long **)(local_a8 + 0x10),local_a0 - *(int *)(local_a0 + -4),uVar20 + 0x44);
        }
        else {
          if (*(long *)(local_a8 + 0x38) == uVar20 + local_a0) {
            *(long *)(local_a8 + 0x38) = local_a0;
            goto LAB_0309b6f8;
          }
          FUN_031cf778();
        }
      }
    }
    else {
      *(long *)(local_a8 + 0x38) = local_a0;
      if (*(long *)(local_a8 + 0x48) == local_a0) {
LAB_0309b6f8:
        FUN_031cf578();
      }
    }
  }
  uVar25 = local_b0;
  uVar20 = local_b0 >> 0x20;
  local_b0 = uVar20 << 0x20;
  if ((lVar19 != 0) && (-1 < (long)uVar25)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar19,uVar20 << 3);
  }
LAB_0309b730:
  if (local_90 != (long *)0x0) {
    lVar32 = *local_90;
    if (((*(byte *)(lVar32 + 0x38) & 1) != 0) && (local_90[6] != 0)) {
      puVar3 = (undefined8 *)local_90[2];
      uVar20 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar20 <= (ulong)local_90[3]) && (local_90[2] = uVar20, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = &DAT_03c4e575;
        puVar3[1] = *(undefined8 *)(local_90[6] + 8);
      }
    }
    puVar3 = (undefined8 *)local_90[2];
    uVar20 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar20 <= (ulong)local_90[3]) && (local_90[2] = uVar20, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = &DAT_03c2d363;
      uVar14 = nn::os::GetSystemTick();
      puVar3[1] = uVar14;
    }
    if (*(code **)(lVar32 + 0x20) != (code *)0x0) {
      (**(code **)(lVar32 + 0x20))(*(undefined8 *)(lVar32 + 0x28));
    }
  }
  return;
}


