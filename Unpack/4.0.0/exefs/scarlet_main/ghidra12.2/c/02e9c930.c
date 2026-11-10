/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e9c930; name: FUN_02e9c930
 */


void FUN_02e9c930(long *param_1,long *param_2,undefined8 *param_3,long param_4,undefined2 *param_5,
                 undefined8 *param_6,undefined8 param_7,uint param_8,undefined8 param_9)

{
  int *piVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  int iVar19;
  undefined8 *puVar20;
  float *pfVar21;
  undefined1 uVar22;
  undefined4 uVar23;
  float *pfVar24;
  float *pfVar25;
  long *plVar26;
  long lVar27;
  int iVar28;
  long lVar29;
  float *pfVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [12];
  undefined1 auVar46 [16];
  undefined8 uVar47;
  float fVar48;
  undefined4 local_218;
  undefined1 auStack_1e0 [8];
  long *local_1d8;
  undefined2 local_1d0 [2];
  undefined8 local_1cc;
  undefined4 local_1c4;
  long local_1a8;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  uint local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130 [2];
  float local_120 [4];
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100 [6];
  undefined2 local_e8 [8];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  long local_b8;
  undefined2 local_b0 [8];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  uint local_88;
  long local_80;
  
  lVar16 = param_2[7];
  plVar26 = *(long **)(lVar16 + 0x50);
  iVar10 = (**(code **)(*plVar26 + 0x60))(plVar26);
  iVar11 = (**(code **)(*plVar26 + 0x20))(plVar26);
  if (iVar10 < 1) {
    return;
  }
  uVar47 = NEON_fmov(0x3f800000,4);
  iVar28 = 0;
LAB_02e9ca18:
  (**(code **)(*plVar26 + 0x68))(plVar26,iVar28,local_130);
  if (iVar28 < iVar11) {
    bVar9 = false;
    uVar12 = 1;
  }
  else {
    uVar12 = (**(code **)(*plVar26 + 0x78))(plVar26,iVar28);
    bVar9 = (uVar12 & 7) == 7;
    uVar12 = 1;
    if (!bVar9) {
      uVar12 = 2;
    }
  }
  local_218 = 0;
  uVar31 = 0;
  lVar27 = param_1[2];
  *(undefined4 *)(lVar27 + 0x20) = *(undefined4 *)(lVar16 + 0x20);
  local_190 = *param_3;
  uStack_188 = param_3[1];
  local_180 = param_3[2];
  uVar15 = *(uint *)(param_3 + 3);
  iVar19 = *(int *)((long)param_3 + 0x1c);
  local_170 = param_3[4];
  uStack_168 = 0;
  local_160 = *(undefined1 *)(param_3 + 6);
  local_15c = *(undefined4 *)((long)param_3 + 0x34);
  uStack_148 = param_3[9];
  local_150 = param_3[8];
  uStack_138 = param_3[0xb];
  uStack_140 = param_3[10];
  local_158 = *(undefined4 *)(param_3 + 7);
  piVar1 = (int *)(lVar27 + 0x40);
  piVar2 = (int *)(lVar27 + 0x48);
  pfVar30 = &local_110;
  do {
    local_178 = ((iVar28 << 1 | (uint)uVar31) + 1 <<
                (ulong)(-(iVar19 + (uint)*(byte *)(lVar16 + 0x1c)) & 0x1f)) - 1 |
                *(uint *)(PTR_DAT_047d1a60 + (long)iVar19 * 4) & uVar15;
    local_174 = 0x20;
    fVar48 = (float)((ulong)uVar47 >> 0x20);
    fVar41 = (float)local_130[0];
    fVar32 = (float)((ulong)local_130[0] >> 0x20);
    fVar33 = (float)local_130[1];
    fVar36 = (float)((ulong)local_130[1] >> 0x20);
    if (bVar9) {
      fVar35 = local_120[0] - fVar41;
      fVar37 = local_120[1] - fVar32;
      fVar39 = local_120[2] - fVar33;
      fVar40 = local_120[3] - fVar36;
      auVar42._0_4_ = local_110 - fVar41;
      auVar42._4_4_ = fStack_10c - fVar32;
      auVar42._8_4_ = fStack_108 - fVar33;
      auVar42._12_4_ = fStack_104 - fVar36;
      auVar3._4_4_ = fVar37;
      auVar3._0_4_ = fVar35;
      auVar3._8_4_ = fVar39;
      auVar3._12_4_ = fVar40;
      auVar4._4_4_ = fVar37;
      auVar4._0_4_ = fVar35;
      auVar4._8_4_ = fVar39;
      auVar4._12_4_ = fVar40;
      auVar44 = NEON_ext(auVar3,auVar4,4,1);
      auVar46 = NEON_ext(auVar42,auVar42,4,1);
      fVar36 = fVar35 * auVar46._0_4_ - auVar42._0_4_ * auVar44._0_4_;
      fVar38 = fVar37 * auVar46._4_4_ - auVar42._4_4_ * auVar44._4_4_;
      fVar35 = fVar39 * auVar42._0_4_ - auVar42._8_4_ * fVar35;
      fVar37 = fVar40 * auVar42._4_4_ - auVar42._12_4_ * fVar37;
      auVar5._4_4_ = fVar38;
      auVar5._0_4_ = fVar36;
      auVar5._8_4_ = fVar35;
      auVar5._12_4_ = fVar37;
      auVar6._4_4_ = fVar38;
      auVar6._0_4_ = fVar36;
      auVar6._8_4_ = fVar35;
      auVar6._12_4_ = fVar37;
      auVar44 = NEON_ext(auVar5,auVar6,4,1);
      fVar35 = auVar44._0_4_;
      fVar37 = auVar44._4_4_;
      puVar17 = (undefined8 *)0x0;
      if (*piVar1 != 0) {
        puVar17 = (undefined8 *)((long)*piVar1 + (long)piVar1);
      }
      fVar38 = fVar35 * fVar35 + fVar37 * fVar37 + fVar36 * fVar36;
      puVar20 = (undefined8 *)0x0;
      if (*piVar2 != 0) {
        puVar20 = (undefined8 *)((long)*piVar2 + (long)piVar2);
      }
      uVar18 = 0;
      if (fVar38 != 0.0) {
        uVar18 = CONCAT44(fVar48 / SQRT(fVar35 * fVar35 + fVar37 * fVar37 + fVar36 * fVar36),
                          (float)uVar47 / SQRT(fVar38));
      }
      auVar45._0_4_ = fVar41 * fVar35;
      auVar45._4_4_ = fVar32 * fVar37;
      auVar45._8_4_ = fVar33 * fVar36;
      uVar22 = 3;
      uVar23 = 4;
      pfVar21 = local_120;
      pfVar24 = local_100;
      pfVar25 = &local_110;
    }
    else {
      pfVar21 = pfVar30 + -4;
      puVar17 = (undefined8 *)0x0;
      if (*piVar1 != 0) {
        puVar17 = (undefined8 *)((long)*piVar1 + (long)piVar1);
      }
      fVar35 = (float)*(undefined8 *)pfVar21 - fVar41;
      fVar37 = (float)((ulong)*(undefined8 *)pfVar21 >> 0x20) - fVar32;
      fVar38 = (float)*(undefined8 *)(pfVar30 + -2) - fVar33;
      fVar39 = (float)((ulong)*(undefined8 *)(pfVar30 + -2) >> 0x20) - fVar36;
      auVar44._4_4_ = fVar37;
      auVar44._0_4_ = fVar35;
      auVar44._8_4_ = fVar38;
      auVar44._12_4_ = fVar39;
      auVar46._4_4_ = fVar37;
      auVar46._0_4_ = fVar35;
      auVar46._8_4_ = fVar38;
      auVar46._12_4_ = fVar39;
      auVar44 = NEON_ext(auVar44,auVar46,4,1);
      auVar43._0_4_ = *pfVar30 - fVar41;
      auVar43._4_4_ = pfVar30[1] - fVar32;
      auVar43._8_4_ = pfVar30[2] - fVar33;
      auVar43._12_4_ = pfVar30[3] - fVar36;
      auVar46 = NEON_ext(auVar43,auVar43,4,1);
      puVar20 = (undefined8 *)0x0;
      if (*piVar2 != 0) {
        puVar20 = (undefined8 *)((long)*piVar2 + (long)piVar2);
      }
      fVar36 = fVar35 * auVar46._0_4_ - auVar43._0_4_ * auVar44._0_4_;
      fVar40 = fVar37 * auVar46._4_4_ - auVar43._4_4_ * auVar44._4_4_;
      fVar35 = fVar38 * auVar43._0_4_ - auVar43._8_4_ * fVar35;
      fVar37 = fVar39 * auVar43._4_4_ - auVar43._12_4_ * fVar37;
      auVar7._4_4_ = fVar40;
      auVar7._0_4_ = fVar36;
      auVar7._8_4_ = fVar35;
      auVar7._12_4_ = fVar37;
      auVar8._4_4_ = fVar40;
      auVar8._0_4_ = fVar36;
      auVar8._8_4_ = fVar35;
      auVar8._12_4_ = fVar37;
      auVar44 = NEON_ext(auVar7,auVar8,4,1);
      fVar35 = auVar44._0_4_;
      fVar37 = auVar44._4_4_;
      fVar38 = fVar35 * fVar35 + fVar37 * fVar37 + fVar36 * fVar36;
      uVar18 = 0;
      if (fVar38 != 0.0) {
        uVar18 = CONCAT44(fVar48 / SQRT(fVar35 * fVar35 + fVar37 * fVar37 + fVar36 * fVar36),
                          (float)uVar47 / SQRT(fVar38));
      }
      auVar45._0_4_ = fVar41 * fVar35;
      auVar45._4_4_ = fVar32 * fVar37;
      auVar45._8_4_ = fVar33 * fVar36;
      uVar22 = 0;
      uVar23 = 3;
      pfVar24 = pfVar30;
      pfVar25 = pfVar30;
    }
    *puVar17 = local_130[0];
    *(float *)(puVar17 + 1) = fVar33;
    uVar34 = *(undefined8 *)(pfVar21 + 2);
    *(undefined8 *)((long)puVar17 + 0xc) = *(undefined8 *)pfVar21;
    *(int *)((long)puVar17 + 0x14) = (int)uVar34;
    uVar34 = *(undefined8 *)(pfVar25 + 2);
    puVar17[3] = *(undefined8 *)pfVar25;
    *(int *)(puVar17 + 4) = (int)uVar34;
    uVar34 = *(undefined8 *)(pfVar24 + 2);
    fVar35 = (float)uVar18 * fVar35;
    fVar41 = (float)((ulong)uVar18 >> 0x20);
    fVar37 = fVar41 * fVar37;
    fVar36 = (float)uVar18 * fVar36;
    fVar41 = fVar41 * -(auVar45._8_4_ + auVar45._0_4_ + auVar45._4_4_);
    *(undefined8 *)((long)puVar17 + 0x24) = *(undefined8 *)pfVar24;
    *(int *)((long)puVar17 + 0x2c) = (int)uVar34;
    lVar29 = 0;
    if (*(int *)(lVar27 + 0x58) != 0) {
      lVar29 = (long)*(int *)(lVar27 + 0x58) + lVar27 + 0x58;
    }
    *(undefined4 *)(lVar27 + 0x44) = uVar23;
    *(undefined1 *)(lVar29 + 3) = uVar22;
    *(undefined1 *)(lVar29 + 7) = uVar22;
    puVar20[1] = CONCAT44(fVar41,fVar36);
    *puVar20 = CONCAT44(fVar37,fVar35);
    puVar20[3] = CONCAT44(-fVar41,-fVar36);
    puVar20[2] = CONCAT44(-fVar37,-fVar35);
    puVar20[5] = CONCAT44(fVar41,fVar36);
    puVar20[4] = CONCAT44(fVar37,fVar35);
    puVar20[7] = CONCAT44(fVar41,fVar36);
    puVar20[6] = CONCAT44(fVar37,fVar35);
    memcpy(auStack_1e0,param_2,0x50);
    plVar13 = (long *)*param_2;
    local_1a8 = lVar27;
    if (plVar13 != (long *)0x0) {
      if (uVar31 == 0) {
        local_218 = (**(code **)(*plVar26 + 0x70))(plVar26,iVar28);
        plVar13 = (long *)*param_2;
      }
      (**(code **)(*plVar13 + 0x40))
                (plVar13,local_218,5,*param_3,param_3[1],lVar16,local_178,lVar27,local_1d0);
    }
    lVar29 = *param_1;
    if (local_1d8 == (long *)0x0) {
LAB_02e9ce34:
      (**(code **)(lVar29 + (ulong)*(byte *)(local_1a8 + 0x18) * 0xf8 +
                   (ulong)*(byte *)(param_4 + 0x18) * 8 + 0xa0))
                (param_1,auStack_1e0,&local_190,param_4,param_5,param_6,param_7,param_8 & 1,param_9)
      ;
    }
    else {
      local_b0[0] = local_1d0[0];
      *(undefined4 *)((undefined8 *)((ulong)local_b0 | 4) + 1) = local_1c4;
      *(undefined8 *)((ulong)local_b0 | 4) = local_1cc;
      local_a0 = local_190;
      uStack_98 = uStack_188;
      local_90 = local_180;
      local_88 = local_178;
      local_80 = local_1a8;
      local_e8[0] = *param_5;
      uVar18 = *(undefined8 *)(param_5 + 2);
      *(undefined4 *)((undefined8 *)((ulong)local_e8 | 4) + 1) = *(undefined4 *)(param_5 + 6);
      *(undefined8 *)((ulong)local_e8 | 4) = uVar18;
      local_d8 = *param_6;
      uStack_d0 = param_6[1];
      local_c8 = param_6[2];
      local_c0 = *(undefined4 *)(param_6 + 3);
      local_b8 = param_4;
      uVar14 = (**(code **)(*local_1d8 + 0x40))(local_1d8,5,(param_8 ^ 1) & 1,local_b0,local_e8);
      if ((uVar14 & 1) != 0) goto LAB_02e9ce34;
    }
    if (1 < uVar12 == uVar31) break;
    uVar15 = *(uint *)(param_3 + 3);
    iVar19 = *(int *)((long)param_3 + 0x1c);
    uVar31 = uVar31 + 1;
    pfVar30 = pfVar30 + 4;
  } while( true );
  iVar28 = iVar28 + 1;
  if (iVar28 == iVar10) {
    return;
  }
  goto LAB_02e9ca18;
}


