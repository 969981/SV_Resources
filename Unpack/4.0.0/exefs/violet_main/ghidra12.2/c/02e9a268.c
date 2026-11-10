/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e9a268; name: FUN_02e9a268
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e9a268(long param_1,long *param_2,long *param_3,float *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined *puVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  float *pfVar26;
  undefined8 *puVar27;
  float *pfVar28;
  int iVar29;
  int iVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long *plVar34;
  uint uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar44;
  float fVar45;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  float fVar50;
  float fVar51;
  undefined1 auVar49 [16];
  float fVar52;
  float fVar53;
  float fVar59;
  float fVar61;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar60;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar62 [16];
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar75;
  byte bVar76;
  float fVar73;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  undefined8 uVar74;
  byte bVar81;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  undefined8 uVar82;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  undefined8 uVar86;
  byte bVar93;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  undefined8 uVar94;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auVar104 [12];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [12];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [12];
  undefined1 auVar127 [16];
  float local_3b0;
  undefined8 *local_330;
  undefined8 local_328;
  undefined8 local_320 [2];
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  float *local_d8;
  undefined8 local_d0;
  long local_c8;
  float *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  lVar33 = tpidr_el0;
  lVar23 = *(long *)(lVar33 + 0x1000b8);
  if (lVar23 == 0) {
    lVar23 = FUN_00e5d3b4();
    *(long *)(lVar33 + 0x1000b8) = lVar23;
  }
  plVar34 = *(long **)(lVar23 + 0x3e0);
  if (plVar34 != (long *)0x0) {
    lVar23 = *plVar34;
    if (*(code **)(lVar23 + 0x18) != (code *)0x0) {
      (**(code **)(lVar23 + 0x18))("CalcMassProperties",0x12,*(undefined8 *)(lVar23 + 0x28));
    }
    puVar1 = (undefined8 *)plVar34[2];
    uVar24 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar24 <= (ulong)plVar34[3]) && (plVar34[2] = uVar24, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtCalcMassProperties";
      uVar22 = nn::os::GetSystemTick();
      puVar1[1] = uVar22;
    }
    if (((*(byte *)(lVar23 + 0x38) & 1) != 0) && (plVar34[6] != 0)) {
      puVar1 = (undefined8 *)plVar34[2];
      uVar24 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar24 <= (ulong)plVar34[3]) && (plVar34[2] = uVar24, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar34[6] + 8);
      }
    }
    lVar23 = *(long *)(lVar33 + 0x1000b8);
  }
  iVar30 = (int)param_3[1] + (int)param_3[2];
  uVar3 = iVar30 * 0x20;
  uVar2 = iVar30 * 0x20 | 3;
  if (-1 < (int)uVar3) {
    uVar2 = uVar3;
  }
  local_d8 = (float *)0x0;
  local_d0 = 0x8000000000000000;
  if (lVar23 == 0) {
    lVar23 = FUN_00e5d3b4();
    *(long *)(lVar33 + 0x1000b8) = lVar23;
  }
  local_c8 = *(long *)(*(long *)(lVar23 + 0x3d0) + 0x10);
  if (*(long *)(local_c8 + 8) != 0) {
    local_c8 = 0;
  }
  local_b8 = (undefined8 *)((long)((int)uVar2 >> 2) * 0x50);
  local_b0 = local_b8;
  if (local_c8 == 0) {
    local_c0 = (float *)(**(code **)PTR_DAT_047d1a08)(1,&local_b0,0x40);
LAB_02e9a414:
  }
  else {
    local_330 = local_b8;
    if (*(undefined8 **)(local_c8 + 0x28) < local_b8) {
LAB_02e9a3ec:
      local_c0 = (float *)FUN_031cf3b4(local_c8,&local_330);
      goto LAB_02e9a414;
    }
    local_c0 = *(float **)(local_c8 + 0x38);
    if (*(float **)(local_c8 + 0x40) < (float *)((long)local_b8 + (long)local_c0))
    goto LAB_02e9a3ec;
    *(float **)(local_c8 + 0x38) = (float *)((long)local_b8 + (long)local_c0);
  }
  local_d0 = CONCAT44((int)uVar2 >> 2,(int)local_d0) | 0x8000000000000000;
  uVar2 = *(uint *)(param_3 + 1);
  local_3b0 = 0.0;
  lVar33 = 0;
  if (*param_3 != 0) {
    lVar33 = *param_3 + (long)param_3;
  }
  local_d8 = local_c0;
  if ((int)uVar2 < 1) {
LAB_02e9acc8:
    fVar38 = 0.0;
    fVar36 = 0.0;
    fVar37 = 0.0;
    fVar44 = 0.0;
    fVar45 = 0.0;
LAB_02e9acd0:
    auVar58 = ZEXT816(0);
    auVar41 = ZEXT816(0);
    auVar62 = auVar41;
  }
  else {
    lVar23 = param_1 + 0x38;
    uVar24 = 0;
    do {
      uVar3 = *(uint *)(lVar33 + uVar24 * 4);
      lVar32 = (long)(int)param_3[2] + (long)(int)uVar24;
      if (uVar3 == 0xffffffff) {
        puVar1 = (undefined8 *)(param_1 + 0x18 + lVar32 * 0x20 + *(long *)(param_1 + 0x18));
        lVar32 = (long)(int)local_d0;
        iVar30 = (int)local_d0;
        if ((int)(local_d0._4_4_ & 0x7fffffff) <= (int)local_d0) {
          FUN_02e9af74(&local_d8,lVar32 + 1);
          iVar30 = (int)local_d0;
        }
        pfVar28 = local_d8 + (long)iVar30 * 0x14;
        local_d0 = CONCAT44(local_d0._4_4_,(int)(lVar32 + 1));
        pfVar28[0] = 0.0;
        pfVar28[1] = 0.0;
        pfVar26 = pfVar28 + 4;
        pfVar26[0] = 0.0;
        pfVar26[1] = 0.0;
        pfVar28[6] = 0.0;
        pfVar28[7] = 0.0;
        pfVar28[8] = 0.0;
        pfVar28[9] = 0.0;
        pfVar28[0x12] = 0.0;
        pfVar28[0x13] = 0.0;
        pfVar28[10] = 0.0;
        pfVar28[0xb] = 0.0;
        pfVar28[0xc] = 0.0;
        pfVar28[0xd] = 0.0;
        pfVar28[0xe] = 0.0;
        pfVar28[0xf] = 0.0;
        pfVar28[0x10] = 0.0;
        pfVar28[0x11] = 0.0;
        uVar22 = puVar1[1];
        uVar48 = puVar1[2];
        auVar54._0_6_ = (uint6)(ushort)uVar22 << 0x10;
        auVar54._6_2_ = (short)((ulong)uVar22 >> 0x10);
        auVar54._8_2_ = 0;
        auVar54._10_2_ = (short)((ulong)uVar22 >> 0x20);
        auVar54._12_2_ = 0;
        auVar54._14_2_ = (short)((ulong)uVar22 >> 0x30);
        auVar56 = NEON_scvtf(auVar54,4);
        fVar45 = auVar54._12_4_;
        fVar38 = auVar56._0_4_ * fVar45;
        fVar44 = auVar56._4_4_ * fVar45;
        fVar45 = auVar56._8_4_ * fVar45;
        auVar56._0_8_ =
             CONCAT17((char)((ulong)uVar48 >> 0x18),
                      CONCAT16((char)((ulong)uVar48 >> 0x10),
                               (uint6)(ushort)((ushort)uVar48 ^ 0x8000) << 0x10)) ^
             0x8000000000000000;
        auVar56._8_2_ = 0;
        auVar56[10] = (undefined1)((ulong)uVar48 >> 0x20);
        auVar56[0xb] = (byte)((ulong)uVar48 >> 0x28) ^ 0x80;
        auVar56._12_2_ = 0;
        auVar56[0xe] = (undefined1)((ulong)uVar48 >> 0x30);
        auVar56[0xf] = (byte)((ulong)uVar48 >> 0x38) ^ 0x80;
        auVar54 = NEON_scvtf(auVar56,4);
        fVar46 = auVar54._0_4_ * 5.086263e-10;
        fVar50 = auVar54._4_4_ * 5.086263e-10;
        fVar51 = auVar54._8_4_ * 5.086263e-10;
        fVar52 = auVar54._12_4_ * 5.086263e-10;
        auVar57._0_4_ = fVar46 * fVar46;
        auVar57._4_4_ = fVar50 * fVar50;
        auVar57._8_4_ = fVar51 * fVar51;
        auVar57._12_4_ = fVar52 * fVar52;
        auVar54 = NEON_ext(auVar57,auVar57,8,1);
        fVar37 = auVar54._0_4_ + auVar54._4_4_;
        fVar36 = auVar57._0_4_ + auVar57._4_4_ + fVar37;
        fVar53 = 0.0;
        fVar60 = 0.0;
        fVar61 = 0.0;
        fVar59 = 0.0;
        if (fVar36 != 0.0) {
          fVar36 = SQRT(fVar36);
          fVar59 = SQRT(auVar57._0_4_ + auVar57._4_4_ + fVar37);
          fVar53 = fVar46 / fVar36;
          fVar60 = fVar50 / fVar59;
          fVar61 = fVar51 / fVar36;
          fVar59 = fVar52 / fVar59;
        }
        fVar36 = fVar60 + fVar60;
        fVar37 = fVar61 + fVar61;
        fVar46 = (fVar53 + fVar53) * fVar53;
        fVar47 = (fVar53 + fVar53) * fVar59;
        fVar73 = 1.0 - fVar61 * fVar37;
        fVar103 = fVar37 * fVar60 - fVar47;
        fVar99 = fVar73 - fVar36 * fVar60;
        fVar73 = fVar73 - fVar46;
        fVar101 = fVar36 * fVar53 + fVar37 * fVar59;
        fVar100 = fVar36 * fVar53 - fVar37 * fVar59;
        fVar47 = fVar37 * fVar60 + fVar47;
        fVar61 = fVar37 * fVar53 + fVar36 * fVar59;
        fVar102 = fVar37 * fVar53 - fVar36 * fVar59;
        fVar53 = (1.0 - fVar46) - fVar36 * fVar60;
        fVar59 = fVar100 * fVar44;
        fVar60 = fVar73 * fVar44;
        fVar98 = fVar47 * fVar44;
        fVar44 = fVar61 * fVar44;
        fVar36 = fVar99 * fVar38;
        fVar37 = fVar101 * fVar38;
        fVar46 = fVar102 * fVar38;
        fVar38 = fVar103 * fVar38;
        fVar50 = fVar61 * fVar45;
        fVar51 = fVar103 * fVar45;
        fVar52 = fVar53 * fVar45;
        fVar45 = fVar45 * 0.0;
        local_d8[(long)iVar30 * 0x14 + 0xe] = fVar52 * fVar103 + fVar98 * fVar73 + fVar46 * fVar101;
        local_d8[(long)iVar30 * 0x14 + 0xf] = fVar45 * fVar103 + fVar44 * fVar73 + fVar38 * fVar101;
        local_d8[(long)iVar30 * 0x14 + 0xc] = fVar50 * fVar103 + fVar59 * fVar73 + fVar36 * fVar101;
        local_d8[(long)iVar30 * 0x14 + 0xd] = fVar51 * fVar103 + fVar60 * fVar73 + fVar37 * fVar101;
        *(ulong *)(local_d8 + (long)iVar30 * 0x14 + 0x12) =
             CONCAT44(fVar45 * fVar53 + fVar44 * fVar47 + fVar38 * fVar102,
                      fVar52 * fVar53 + fVar98 * fVar47 + fVar46 * fVar102);
        *(ulong *)(local_d8 + (long)iVar30 * 0x14 + 0x10) =
             CONCAT44(fVar51 * fVar53 + fVar60 * fVar47 + fVar37 * fVar102,
                      fVar50 * fVar53 + fVar59 * fVar47 + fVar36 * fVar102);
        local_d8[(long)iVar30 * 0x14 + 10] = fVar52 * fVar61 + fVar98 * fVar100 + fVar46 * fVar99;
        local_d8[(long)iVar30 * 0x14 + 0xb] = fVar45 * fVar61 + fVar44 * fVar100 + fVar38 * fVar99;
        local_d8[(long)iVar30 * 0x14 + 8] = fVar50 * fVar61 + fVar59 * fVar100 + fVar36 * fVar99;
        local_d8[(long)iVar30 * 0x14 + 9] = fVar51 * fVar61 + fVar60 * fVar100 + fVar37 * fVar99;
        *pfVar28 = *(float *)((long)puVar1 + 0x1c);
        uVar22 = *puVar1;
        auVar121._0_6_ = (uint6)(ushort)uVar22 << 0x10;
        auVar121._6_2_ = (short)((ulong)uVar22 >> 0x10);
        auVar121._8_2_ = 0;
        auVar121._10_2_ = (short)((ulong)uVar22 >> 0x20);
        auVar121._12_2_ = 0;
        auVar121._14_2_ = (short)((ulong)uVar22 >> 0x30);
        auVar54 = NEON_scvtf(auVar121,4);
        fVar38 = auVar121._12_4_;
        auVar122._0_8_ = CONCAT44(auVar54._4_4_ * fVar38,auVar54._0_4_ * fVar38);
        auVar122._8_4_ = auVar54._8_4_ * fVar38;
        auVar122._12_4_ = auVar54._12_4_ * fVar38;
        *(long *)(pfVar28 + 6) = auVar122._8_8_;
        *(undefined8 *)pfVar26 = auVar122._0_8_;
        pfVar28[1] = *(float *)(puVar1 + 3);
      }
      else if (uVar3 != 0) {
        iVar30 = (int)lVar32 * 8;
        lVar32 = 0;
        uVar35 = 0xf;
        do {
          if ((uVar35 & uVar3) == uVar35) {
            puVar1 = (undefined8 *)
                     (param_1 + 0x28 + (lVar32 + iVar30) * 0x20 + *(long *)(param_1 + 0x28));
            lVar31 = (long)(int)local_d0;
            iVar29 = (int)local_d0;
            if ((int)(local_d0._4_4_ & 0x7fffffff) <= (int)local_d0) {
              FUN_02e9af74(&local_d8,lVar31 + 1);
              iVar29 = (int)local_d0;
            }
            pfVar28 = local_d8 + (long)iVar29 * 0x14;
            local_d0 = CONCAT44(local_d0._4_4_,(int)(lVar31 + 1));
            pfVar28[0] = 0.0;
            pfVar28[1] = 0.0;
            pfVar26 = pfVar28 + 4;
            pfVar26[0] = 0.0;
            pfVar26[1] = 0.0;
            pfVar28[6] = 0.0;
            pfVar28[7] = 0.0;
            pfVar28[8] = 0.0;
            pfVar28[9] = 0.0;
            pfVar28[0x12] = 0.0;
            pfVar28[0x13] = 0.0;
            pfVar28[10] = 0.0;
            pfVar28[0xb] = 0.0;
            pfVar28[0xc] = 0.0;
            pfVar28[0xd] = 0.0;
            pfVar28[0xe] = 0.0;
            pfVar28[0xf] = 0.0;
            pfVar28[0x10] = 0.0;
            pfVar28[0x11] = 0.0;
            uVar22 = puVar1[1];
            uVar48 = puVar1[2];
            auVar124._0_6_ = (uint6)(ushort)uVar22 << 0x10;
            auVar124._6_2_ = (short)((ulong)uVar22 >> 0x10);
            auVar124._8_2_ = 0;
            auVar124._10_2_ = (short)((ulong)uVar22 >> 0x20);
            auVar124._12_2_ = 0;
            auVar124._14_2_ = (short)((ulong)uVar22 >> 0x30);
            auVar54 = NEON_scvtf(auVar124,4);
            fVar45 = auVar124._12_4_;
            fVar38 = auVar54._0_4_ * fVar45;
            fVar44 = auVar54._4_4_ * fVar45;
            fVar45 = auVar54._8_4_ * fVar45;
            auVar49._0_8_ =
                 CONCAT17((char)((ulong)uVar48 >> 0x18),
                          CONCAT16((char)((ulong)uVar48 >> 0x10),
                                   (uint6)(ushort)((ushort)uVar48 ^ 0x8000) << 0x10)) ^
                 0x8000000000000000;
            auVar49._8_2_ = 0;
            auVar49[10] = (undefined1)((ulong)uVar48 >> 0x20);
            auVar49[0xb] = (byte)((ulong)uVar48 >> 0x28) ^ 0x80;
            auVar49._12_2_ = 0;
            auVar49[0xe] = (undefined1)((ulong)uVar48 >> 0x30);
            auVar49[0xf] = (byte)((ulong)uVar48 >> 0x38) ^ 0x80;
            auVar54 = NEON_scvtf(auVar49,4);
            fVar46 = auVar54._0_4_ * 5.086263e-10;
            fVar50 = auVar54._4_4_ * 5.086263e-10;
            fVar51 = auVar54._8_4_ * 5.086263e-10;
            fVar52 = auVar54._12_4_ * 5.086263e-10;
            auVar55._0_4_ = fVar46 * fVar46;
            auVar55._4_4_ = fVar50 * fVar50;
            auVar55._8_4_ = fVar51 * fVar51;
            auVar55._12_4_ = fVar52 * fVar52;
            auVar54 = NEON_ext(auVar55,auVar55,8,1);
            fVar37 = auVar54._0_4_ + auVar54._4_4_;
            fVar36 = auVar55._0_4_ + auVar55._4_4_ + fVar37;
            fVar53 = 0.0;
            fVar60 = 0.0;
            fVar61 = 0.0;
            fVar59 = 0.0;
            if (fVar36 != 0.0) {
              fVar36 = SQRT(fVar36);
              fVar59 = SQRT(auVar55._0_4_ + auVar55._4_4_ + fVar37);
              fVar53 = fVar46 / fVar36;
              fVar60 = fVar50 / fVar59;
              fVar61 = fVar51 / fVar36;
              fVar59 = fVar52 / fVar59;
            }
            fVar36 = fVar60 + fVar60;
            fVar37 = fVar61 + fVar61;
            fVar46 = (fVar53 + fVar53) * fVar53;
            fVar47 = (fVar53 + fVar53) * fVar59;
            fVar73 = 1.0 - fVar61 * fVar37;
            fVar103 = fVar37 * fVar60 - fVar47;
            fVar99 = fVar73 - fVar36 * fVar60;
            fVar73 = fVar73 - fVar46;
            fVar101 = fVar36 * fVar53 + fVar37 * fVar59;
            fVar100 = fVar36 * fVar53 - fVar37 * fVar59;
            fVar47 = fVar37 * fVar60 + fVar47;
            fVar61 = fVar37 * fVar53 + fVar36 * fVar59;
            fVar102 = fVar37 * fVar53 - fVar36 * fVar59;
            fVar53 = (1.0 - fVar46) - fVar36 * fVar60;
            fVar59 = fVar100 * fVar44;
            fVar60 = fVar73 * fVar44;
            fVar98 = fVar47 * fVar44;
            fVar44 = fVar61 * fVar44;
            fVar36 = fVar99 * fVar38;
            fVar37 = fVar101 * fVar38;
            fVar46 = fVar102 * fVar38;
            fVar38 = fVar103 * fVar38;
            fVar50 = fVar61 * fVar45;
            fVar51 = fVar103 * fVar45;
            fVar52 = fVar53 * fVar45;
            fVar45 = fVar45 * 0.0;
            local_d8[(long)iVar29 * 0x14 + 0xe] =
                 fVar52 * fVar103 + fVar98 * fVar73 + fVar46 * fVar101;
            local_d8[(long)iVar29 * 0x14 + 0xf] =
                 fVar45 * fVar103 + fVar44 * fVar73 + fVar38 * fVar101;
            local_d8[(long)iVar29 * 0x14 + 0xc] =
                 fVar50 * fVar103 + fVar59 * fVar73 + fVar36 * fVar101;
            local_d8[(long)iVar29 * 0x14 + 0xd] =
                 fVar51 * fVar103 + fVar60 * fVar73 + fVar37 * fVar101;
            *(ulong *)(local_d8 + (long)iVar29 * 0x14 + 0x12) =
                 CONCAT44(fVar45 * fVar53 + fVar44 * fVar47 + fVar38 * fVar102,
                          fVar52 * fVar53 + fVar98 * fVar47 + fVar46 * fVar102);
            *(ulong *)(local_d8 + (long)iVar29 * 0x14 + 0x10) =
                 CONCAT44(fVar51 * fVar53 + fVar60 * fVar47 + fVar37 * fVar102,
                          fVar50 * fVar53 + fVar59 * fVar47 + fVar36 * fVar102);
            local_d8[(long)iVar29 * 0x14 + 10] =
                 fVar52 * fVar61 + fVar98 * fVar100 + fVar46 * fVar99;
            local_d8[(long)iVar29 * 0x14 + 0xb] =
                 fVar45 * fVar61 + fVar44 * fVar100 + fVar38 * fVar99;
            local_d8[(long)iVar29 * 0x14 + 8] = fVar50 * fVar61 + fVar59 * fVar100 + fVar36 * fVar99
            ;
            local_d8[(long)iVar29 * 0x14 + 9] = fVar51 * fVar61 + fVar60 * fVar100 + fVar37 * fVar99
            ;
            *pfVar28 = *(float *)((long)puVar1 + 0x1c);
            uVar22 = *puVar1;
            auVar39._0_6_ = (uint6)(ushort)uVar22 << 0x10;
            auVar39._6_2_ = (short)((ulong)uVar22 >> 0x10);
            auVar39._8_2_ = 0;
            auVar39._10_2_ = (short)((ulong)uVar22 >> 0x20);
            auVar39._12_2_ = 0;
            auVar39._14_2_ = (short)((ulong)uVar22 >> 0x30);
            auVar54 = NEON_scvtf(auVar39,4);
            fVar38 = auVar39._12_4_;
            auVar40._0_8_ = CONCAT44(auVar54._4_4_ * fVar38,auVar54._0_4_ * fVar38);
            auVar40._8_4_ = auVar54._8_4_ * fVar38;
            auVar40._12_4_ = auVar54._12_4_ * fVar38;
            *(long *)(pfVar28 + 6) = auVar40._8_8_;
            *(undefined8 *)pfVar26 = auVar40._0_8_;
            pfVar28[1] = *(float *)(puVar1 + 3);
          }
          else if ((uVar35 & uVar3) != 0) {
            uVar4 = ((int)lVar32 + iVar30) * 4;
            local_328 = -0x7ffffffc00000000;
            local_330 = local_320;
            if ((uVar3 >> (ulong)(uVar4 & 0x1c) & 1) != 0) {
              local_328 = -0x7ffffffbffffffff;
              local_320[0] = 0;
              local_300 = 0;
              uStack_2f8 = 0;
              local_2f0 = 0;
              uStack_2e8 = 0;
              local_2e0 = 0;
              uStack_2d8 = 0;
              local_310 = 0;
              uStack_308 = 0;
              uStack_2c8 = DAT_03cab628;
              local_2d0 = DAT_03cab620;
              uStack_2b8 = _UNK_03cabe68;
              uStack_2c0 = _DAT_03cabe60;
              uStack_2a8 = _UNK_03caa5b8;
              local_2b0 = _DAT_03caa5b0;
              uStack_298 = _UNK_03cabe58;
              uStack_2a0 = _DAT_03cabe50;
              (**(code **)(*param_2 + 0x18))(param_2,uVar4,lVar23,local_320);
            }
            if ((uVar3 >> (ulong)(uVar4 & 0x1d | 1) & 1) != 0) {
              lVar31 = (long)(int)local_328;
              local_328 = CONCAT44(local_328._4_4_,(int)local_328 + 1);
              puVar27 = local_330 + lVar31 * 0x12;
              puVar1 = puVar27 + 0x12;
              do {
                *puVar27 = 0;
                puVar27[2] = 0;
                puVar27[3] = 0;
                puVar27[4] = 0;
                puVar27[5] = 0;
                puVar27[6] = 0;
                puVar27[7] = 0;
                puVar27[8] = 0;
                puVar27[9] = 0;
                puVar27[0xb] = DAT_03cab628;
                puVar27[10] = DAT_03cab620;
                puVar27[0xd] = _UNK_03cabe68;
                puVar27[0xc] = _DAT_03cabe60;
                puVar27[0xf] = _UNK_03caa5b8;
                puVar27[0xe] = _DAT_03caa5b0;
                puVar27[0x11] = _UNK_03cabe58;
                puVar27[0x10] = _DAT_03cabe50;
                puVar27 = puVar27 + 0x12;
              } while (puVar27 != puVar1);
              (**(code **)(*param_2 + 0x18))(param_2,uVar4 | 1,lVar23);
            }
            if ((uVar3 >> (ulong)(uVar4 & 0x1e | 2) & 1) != 0) {
              lVar31 = (long)(int)local_328;
              local_328 = CONCAT44(local_328._4_4_,(int)local_328 + 1);
              puVar27 = local_330 + lVar31 * 0x12;
              puVar1 = puVar27 + 0x12;
              do {
                *puVar27 = 0;
                puVar27[2] = 0;
                puVar27[3] = 0;
                puVar27[4] = 0;
                puVar27[5] = 0;
                puVar27[6] = 0;
                puVar27[7] = 0;
                puVar27[8] = 0;
                puVar27[9] = 0;
                puVar27[0xb] = DAT_03cab628;
                puVar27[10] = DAT_03cab620;
                puVar27[0xd] = _UNK_03cabe68;
                puVar27[0xc] = _DAT_03cabe60;
                puVar27[0xf] = _UNK_03caa5b8;
                puVar27[0xe] = _DAT_03caa5b0;
                puVar27[0x11] = _UNK_03cabe58;
                puVar27[0x10] = _DAT_03cabe50;
                puVar27 = puVar27 + 0x12;
              } while (puVar27 != puVar1);
              (**(code **)(*param_2 + 0x18))(param_2,uVar4 | 2,lVar23);
            }
            if ((uVar3 >> (ulong)(uVar4 & 0x1f | 3) & 1) != 0) {
              lVar31 = (long)(int)local_328;
              local_328 = CONCAT44(local_328._4_4_,(int)local_328 + 1);
              puVar27 = local_330 + lVar31 * 0x12;
              puVar1 = puVar27 + 0x12;
              do {
                *puVar27 = 0;
                puVar27[2] = 0;
                puVar27[3] = 0;
                puVar27[4] = 0;
                puVar27[5] = 0;
                puVar27[6] = 0;
                puVar27[7] = 0;
                puVar27[8] = 0;
                puVar27[9] = 0;
                puVar27[0xb] = DAT_03cab628;
                puVar27[10] = DAT_03cab620;
                puVar27[0xd] = _UNK_03cabe68;
                puVar27[0xc] = _DAT_03cabe60;
                puVar27[0xf] = _UNK_03caa5b8;
                puVar27[0xe] = _DAT_03caa5b0;
                puVar27[0x11] = _UNK_03cabe58;
                puVar27[0x10] = _DAT_03cabe50;
                puVar27 = puVar27 + 0x12;
              } while (puVar27 != puVar1);
              (**(code **)(*param_2 + 0x18))(param_2,uVar4 | 3,lVar23);
            }
            lVar31 = (long)(int)local_d0;
            if ((int)(local_d0._4_4_ & 0x7fffffff) <= (int)local_d0) {
              FUN_02e9af74(&local_d8,lVar31 + 1);
            }
            pfVar28 = local_d8 + (long)(int)local_d0 * 0x14;
            local_d0 = CONCAT44(local_d0._4_4_,(int)(lVar31 + 1));
            pfVar28[0] = 0.0;
            pfVar28[1] = 0.0;
            pfVar28[4] = 0.0;
            pfVar28[5] = 0.0;
            pfVar28[6] = 0.0;
            pfVar28[7] = 0.0;
            pfVar28[8] = 0.0;
            pfVar28[9] = 0.0;
            pfVar28[10] = 0.0;
            pfVar28[0xb] = 0.0;
            pfVar28[0xc] = 0.0;
            pfVar28[0xd] = 0.0;
            pfVar28[0xe] = 0.0;
            pfVar28[0xf] = 0.0;
            pfVar28[0x10] = 0.0;
            pfVar28[0x11] = 0.0;
            pfVar28[0x12] = 0.0;
            pfVar28[0x13] = 0.0;
            FUN_03191a34(&local_330);
            lVar31 = local_328;
            uVar25 = (ulong)local_328._4_4_;
            local_328 = (ulong)local_328._4_4_ << 0x20;
            if ((-1 < lVar31) && (local_330 != (undefined8 *)0x0)) {
              (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                        (PTR_PTR_047d1a50,local_330,uVar25 * 0x90);
            }
          }
          lVar32 = lVar32 + 1;
          uVar35 = uVar35 << 4;
        } while (lVar32 != 8);
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar2);
    uVar24 = local_d0 & 0xffffffff;
    fVar38 = 0.0;
    fVar36 = 0.0;
    fVar37 = 0.0;
    fVar44 = 0.0;
    if ((int)local_d0 < 1) {
      fVar50 = 0.0;
      fVar45 = 0.0;
      fVar46 = 0.0;
    }
    else {
      fVar45 = 0.0;
      fVar46 = 0.0;
      fVar38 = 0.0;
      fVar36 = 0.0;
      fVar37 = 0.0;
      fVar44 = 0.0;
      fVar50 = 0.0;
      pfVar28 = local_d8;
      uVar25 = uVar24;
      do {
        uVar25 = uVar25 - 1;
        fVar51 = *pfVar28;
        fVar52 = pfVar28[1];
        pfVar26 = pfVar28 + 4;
        pfVar5 = pfVar28 + 6;
        pfVar28 = pfVar28 + 0x14;
        fVar45 = fVar45 + fVar52;
        fVar46 = fVar46 + fVar52;
        fVar38 = fVar38 + (float)*(undefined8 *)pfVar26 * fVar52;
        fVar36 = fVar36 + (float)((ulong)*(undefined8 *)pfVar26 >> 0x20) * fVar52;
        fVar37 = fVar37 + (float)*(undefined8 *)pfVar5 * fVar52;
        fVar44 = fVar44 + (float)((ulong)*(undefined8 *)pfVar5 >> 0x20) * fVar52;
        fVar50 = fVar50 + fVar51;
      } while (uVar25 != 0);
    }
    if (fVar45 <= 0.0) goto LAB_02e9acc8;
    fVar38 = fVar38 / fVar45;
    fVar36 = fVar36 / fVar46;
    fVar37 = fVar37 / fVar45;
    fVar44 = fVar44 / fVar46;
    local_3b0 = fVar50;
    if ((int)local_d0 < 1) goto LAB_02e9acd0;
    uVar94 = *(undefined8 *)(PTR_DAT_047d19e0 + 200);
    uVar86 = *(undefined8 *)(PTR_DAT_047d19e0 + 0xc0);
    uVar48 = *(undefined8 *)(PTR_DAT_047d19e0 + 0x98);
    bVar70 = (byte)((ulong)uVar48 >> 8);
    bVar71 = (byte)((ulong)uVar48 >> 0x10);
    bVar72 = (byte)((ulong)uVar48 >> 0x18);
    uVar22 = *(undefined8 *)(PTR_DAT_047d19e0 + 0x90);
    bVar63 = (byte)((ulong)uVar22 >> 8);
    bVar64 = (byte)((ulong)uVar22 >> 0x10);
    bVar65 = (byte)((ulong)uVar22 >> 0x18);
    bVar66 = (byte)((ulong)uVar22 >> 0x20);
    bVar67 = (byte)((ulong)uVar22 >> 0x28);
    bVar68 = (byte)((ulong)uVar22 >> 0x30);
    bVar69 = (byte)((ulong)uVar22 >> 0x38);
    uVar82 = *(undefined8 *)(PTR_DAT_047d19e0 + 0xa8);
    uVar74 = *(undefined8 *)(PTR_DAT_047d19e0 + 0xa0);
    bVar75 = (byte)((ulong)uVar74 >> 8);
    bVar76 = (byte)((ulong)uVar74 >> 0x10);
    bVar77 = (byte)((ulong)uVar74 >> 0x18);
    bVar78 = (byte)((ulong)uVar74 >> 0x20);
    bVar79 = (byte)((ulong)uVar74 >> 0x28);
    bVar80 = (byte)((ulong)uVar74 >> 0x30);
    bVar81 = (byte)((ulong)uVar74 >> 0x38);
    bVar83 = (byte)((ulong)uVar82 >> 8);
    bVar84 = (byte)((ulong)uVar82 >> 0x10);
    bVar85 = (byte)((ulong)uVar82 >> 0x18);
    bVar87 = (byte)((ulong)uVar86 >> 8);
    bVar88 = (byte)((ulong)uVar86 >> 0x10);
    bVar89 = (byte)((ulong)uVar86 >> 0x18);
    bVar90 = (byte)((ulong)uVar86 >> 0x20);
    bVar91 = (byte)((ulong)uVar86 >> 0x28);
    bVar92 = (byte)((ulong)uVar86 >> 0x30);
    bVar93 = (byte)((ulong)uVar86 >> 0x38);
    bVar95 = (byte)((ulong)uVar94 >> 8);
    bVar96 = (byte)((ulong)uVar94 >> 0x10);
    bVar97 = (byte)((ulong)uVar94 >> 0x18);
    pfVar28 = local_d8 + 8;
    auVar54 = ZEXT816(0);
    auVar56 = ZEXT816(0);
    auVar57 = ZEXT816(0);
    do {
      auVar105._0_4_ = pfVar28[-4] - fVar38;
      auVar105._4_4_ = pfVar28[-3] - fVar36;
      auVar105._8_4_ = pfVar28[-2] - fVar37;
      auVar105._12_4_ = pfVar28[-1] - fVar44;
      fVar50 = pfVar28[-7];
      auVar120._0_4_ = auVar105._0_4_ * auVar105._0_4_;
      auVar120._4_4_ = auVar105._4_4_ * auVar105._4_4_;
      auVar120._8_4_ = auVar105._8_4_ * auVar105._8_4_;
      auVar120._12_4_ = auVar105._12_4_ * auVar105._12_4_;
      uVar24 = uVar24 - 1;
      auVar9._8_8_ = _UNK_03cabbd8;
      auVar9._0_8_ = _DAT_03cabbd0;
      auVar122 = a64_TBL(ZEXT816(0),auVar105,auVar9);
      auVar8._8_8_ = _UNK_03cabbe8;
      auVar8._0_8_ = _DAT_03cabbe0;
      auVar124 = a64_TBL(ZEXT816(0),auVar120,auVar8);
      auVar7._8_4_ = (int)_UNK_03cab388;
      auVar7._0_8_ = _DAT_03cab380;
      auVar7._12_4_ = (int)((ulong)_UNK_03cab388 >> 0x20);
      auVar121 = a64_TBL(ZEXT816(0),auVar120,auVar7);
      auVar106._0_4_ = -fVar50 * auVar105._0_4_ * auVar122._0_4_;
      auVar106._4_4_ = -fVar50 * auVar105._4_4_ * auVar122._4_4_;
      auVar106._8_4_ = -fVar50 * auVar105._8_4_ * auVar122._8_4_;
      auVar106._12_4_ = -fVar50 * auVar105._12_4_ * auVar122._12_4_;
      pfVar26 = pfVar28 + 8;
      pfVar6 = pfVar28 + 10;
      fVar51 = (auVar121._0_4_ + auVar124._0_4_) * fVar50;
      fVar52 = (auVar121._4_4_ + auVar124._4_4_) * fVar50;
      fVar50 = (auVar121._8_4_ + auVar124._8_4_) * fVar50;
      auVar10._8_8_ = _UNK_03caba78;
      auVar10._0_8_ = _DAT_03caba70;
      auVar122 = a64_TBL(ZEXT816(0),auVar106,auVar10);
      auVar11._8_8_ = _UNK_03cab138;
      auVar11._0_8_ = _DAT_03cab130;
      auVar124 = a64_TBL(ZEXT816(0),auVar106,auVar11);
      auVar12._8_8_ = _UNK_03caa768;
      auVar12._0_8_ = _DAT_03caa760;
      auVar121 = a64_TBL(ZEXT816(0),auVar106,auVar12);
      auVar125[0xc] = auVar122[0xc] & ~(byte)((ulong)uVar48 >> 0x20);
      auVar125[0xd] = auVar122[0xd] & ~(byte)((ulong)uVar48 >> 0x28);
      auVar125[0xe] = auVar122[0xe] & ~(byte)((ulong)uVar48 >> 0x30);
      auVar125[0xf] = auVar122[0xf] & ~(byte)((ulong)uVar48 >> 0x38);
      fVar46 = *pfVar28;
      pfVar16 = pfVar28 + 1;
      pfVar17 = pfVar28 + 2;
      pfVar18 = pfVar28 + 3;
      pfVar5 = pfVar28 + 4;
      pfVar13 = pfVar28 + 5;
      pfVar14 = pfVar28 + 6;
      pfVar15 = pfVar28 + 7;
      pfVar28 = pfVar28 + 0x14;
      bVar108 = SUB41(fVar51,0);
      bVar109 = (byte)((uint)fVar51 >> 8);
      bVar110 = (byte)((uint)fVar51 >> 0x10);
      bVar111 = (byte)((uint)fVar51 >> 0x18);
      bVar112 = SUB41(fVar52,0);
      bVar113 = (byte)((uint)fVar52 >> 8);
      bVar114 = (byte)((uint)fVar52 >> 0x10);
      bVar115 = (byte)((uint)fVar52 >> 0x18);
      bVar116 = SUB41(fVar50,0);
      bVar117 = (byte)((uint)fVar50 >> 8);
      bVar118 = (byte)((uint)fVar50 >> 0x10);
      bVar119 = (byte)((uint)fVar50 >> 0x18);
      fVar51 = (float)CONCAT13(bVar65 & bVar111 | auVar122[3] & ~bVar65,
                               CONCAT12(bVar64 & bVar110 | auVar122[2] & ~bVar64,
                                        CONCAT11(bVar63 & bVar109 | auVar122[1] & ~bVar63,
                                                 (byte)uVar22 & bVar108 |
                                                 auVar122[0] & ~(byte)uVar22)));
      auVar123._0_8_ =
           CONCAT17(bVar69 & bVar115 | auVar122[7] & ~bVar69,
                    CONCAT16(bVar68 & bVar114 | auVar122[6] & ~bVar68,
                             CONCAT15(bVar67 & bVar113 | auVar122[5] & ~bVar67,
                                      CONCAT14(bVar66 & bVar112 | auVar122[4] & ~bVar66,fVar51))));
      auVar123[8] = (byte)uVar48 & bVar116 | auVar122[8] & ~(byte)uVar48;
      auVar123[9] = bVar70 & bVar117 | auVar122[9] & ~bVar70;
      auVar123[10] = bVar71 & bVar118 | auVar122[10] & ~bVar71;
      auVar123[0xb] = bVar72 & bVar119 | auVar122[0xb] & ~bVar72;
      auVar125._0_12_ = auVar123;
      auVar127[0xc] = auVar124[0xc] & ~(byte)((ulong)uVar82 >> 0x20);
      auVar127[0xd] = auVar124[0xd] & ~(byte)((ulong)uVar82 >> 0x28);
      auVar127[0xe] = auVar124[0xe] & ~(byte)((ulong)uVar82 >> 0x30);
      auVar127[0xf] = auVar124[0xf] & ~(byte)((ulong)uVar82 >> 0x38);
      auVar107[0xc] = auVar121[0xc] & ~(byte)((ulong)uVar94 >> 0x20);
      auVar107[0xd] = auVar121[0xd] & ~(byte)((ulong)uVar94 >> 0x28);
      auVar107[0xe] = auVar121[0xe] & ~(byte)((ulong)uVar94 >> 0x30);
      auVar107[0xf] = auVar121[0xf] & ~(byte)((ulong)uVar94 >> 0x38);
      fVar52 = (float)CONCAT13(auVar124[3] & ~bVar77 | bVar77 & bVar111,
                               CONCAT12(auVar124[2] & ~bVar76 | bVar76 & bVar110,
                                        CONCAT11(auVar124[1] & ~bVar75 | bVar75 & bVar109,
                                                 auVar124[0] & ~(byte)uVar74 |
                                                 (byte)uVar74 & bVar108)));
      auVar126._0_8_ =
           CONCAT17(auVar124[7] & ~bVar81 | bVar81 & bVar115,
                    CONCAT16(auVar124[6] & ~bVar80 | bVar80 & bVar114,
                             CONCAT15(auVar124[5] & ~bVar79 | bVar79 & bVar113,
                                      CONCAT14(auVar124[4] & ~bVar78 | bVar78 & bVar112,fVar52))));
      auVar126[8] = auVar124[8] & ~(byte)uVar82 | (byte)uVar82 & bVar116;
      auVar126[9] = auVar124[9] & ~bVar83 | bVar83 & bVar117;
      auVar126[10] = auVar124[10] & ~bVar84 | bVar84 & bVar118;
      auVar126[0xb] = auVar124[0xb] & ~bVar85 | bVar85 & bVar119;
      auVar127._0_12_ = auVar126;
      fVar50 = (float)CONCAT13(auVar121[3] & ~bVar89 | bVar89 & bVar111,
                               CONCAT12(auVar121[2] & ~bVar88 | bVar88 & bVar110,
                                        CONCAT11(auVar121[1] & ~bVar87 | bVar87 & bVar109,
                                                 auVar121[0] & ~(byte)uVar86 |
                                                 (byte)uVar86 & bVar108)));
      auVar104._0_8_ =
           CONCAT17(auVar121[7] & ~bVar93 | bVar93 & bVar115,
                    CONCAT16(auVar121[6] & ~bVar92 | bVar92 & bVar114,
                             CONCAT15(auVar121[5] & ~bVar91 | bVar91 & bVar113,
                                      CONCAT14(auVar121[4] & ~bVar90 | bVar90 & bVar112,fVar50))));
      auVar104[8] = auVar121[8] & ~(byte)uVar94 | (byte)uVar94 & bVar116;
      auVar104[9] = auVar121[9] & ~bVar95 | bVar95 & bVar117;
      auVar104[10] = auVar121[10] & ~bVar96 | bVar96 & bVar118;
      auVar104[0xb] = auVar121[0xb] & ~bVar97 | bVar97 & bVar119;
      auVar107._0_12_ = auVar104;
      auVar58._0_4_ = auVar56._0_4_ + fVar46 + fVar51;
      auVar58._4_4_ = auVar56._4_4_ + *pfVar16 + (float)((ulong)auVar123._0_8_ >> 0x20);
      auVar58._8_4_ = auVar56._8_4_ + *pfVar17 + auVar123._8_4_;
      auVar58._12_4_ = auVar56._12_4_ + *pfVar18 + auVar125._12_4_;
      auVar41._0_4_ = auVar54._0_4_ + *pfVar5 + fVar52;
      auVar41._4_4_ = auVar54._4_4_ + *pfVar13 + (float)((ulong)auVar126._0_8_ >> 0x20);
      auVar41._8_4_ = auVar54._8_4_ + *pfVar14 + auVar126._8_4_;
      auVar41._12_4_ = auVar54._12_4_ + *pfVar15 + auVar127._12_4_;
      auVar62._0_4_ = auVar57._0_4_ + (float)*(undefined8 *)pfVar26 + fVar50;
      auVar62._4_4_ =
           auVar57._4_4_ +
           (float)((ulong)*(undefined8 *)pfVar26 >> 0x20) + (float)((ulong)auVar104._0_8_ >> 0x20);
      auVar62._8_4_ = auVar57._8_4_ + (float)*(undefined8 *)pfVar6 + auVar104._8_4_;
      auVar62._12_4_ =
           auVar57._12_4_ + (float)((ulong)*(undefined8 *)pfVar6 >> 0x20) + auVar107._12_4_;
      auVar54 = auVar41;
      auVar56 = auVar58;
      auVar57 = auVar62;
    } while (uVar24 != 0);
  }
  puVar21 = PTR_DAT_047d19e0;
  param_4[6] = fVar37;
  param_4[7] = fVar44;
  param_4[4] = fVar38;
  param_4[5] = fVar36;
  param_4[1] = fVar45;
  *param_4 = local_3b0;
  uStack_a8 = auVar58._8_8_;
  local_b0 = auVar58._0_8_;
  uStack_98 = auVar41._8_8_;
  uStack_a0 = auVar41._0_8_;
  uStack_88 = auVar62._8_8_;
  local_90 = auVar62._0_8_;
  FUN_031921bc(&local_b0,&local_330);
  auVar42._8_8_ = uStack_a8;
  auVar42._0_8_ = local_b0;
  auVar19._8_8_ = uStack_98;
  auVar19._0_8_ = uStack_a0;
  *(undefined8 *)(param_4 + 10) = uStack_a8;
  *(undefined8 **)(param_4 + 8) = local_b0;
  auVar42 = auVar42 ^ (auVar42 ^ auVar19) & *(undefined1 (*) [16])(puVar21 + 0x20);
  *(long *)(param_4 + 10) = auVar42._8_8_;
  *(long *)(param_4 + 8) = auVar42._0_8_;
  auVar20._8_8_ = uStack_88;
  auVar20._0_8_ = local_90;
  auVar43._0_12_ =
       auVar42._0_12_ ^
       (auVar42._0_12_ ^ auVar20._0_12_) & SUB1612(*(undefined1 (*) [16])(puVar21 + 0x40),0);
  auVar43._12_4_ = local_3b0;
  *(long *)(param_4 + 10) = auVar43._8_8_;
  *(long *)(param_4 + 8) = auVar43._0_8_;
  FUN_022013ec(param_4 + 0xc,&local_330);
  pfVar28 = local_d8;
  if (local_c0 == local_d8) {
    local_d0 = local_d0 & 0xffffffff00000000;
  }
  if (local_c8 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_02e9ae0c;
  }
  uVar24 = (long)local_b8 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_c8 + 0x28) < uVar24) ||
     (*(long *)(local_c8 + 0x38) != uVar24 + (long)local_c0)) {
    if (local_c0 == (float *)0x0) goto LAB_02e9ae0c;
    if (*(ulong *)(local_c8 + 0x28) < uVar24 + 0x40) {
      *(int *)(*(long *)(local_c8 + 0x30) + 0x20) = *(int *)(*(long *)(local_c8 + 0x30) + 0x20) + -1
      ;
      (**(code **)(**(long **)(local_c8 + 0x10) + 0x18))
                (*(long **)(local_c8 + 0x10),(long)local_c0 - (long)(int)local_c0[-1],uVar24 + 0x44)
      ;
      goto LAB_02e9ae0c;
    }
    if (*(long *)(local_c8 + 0x38) != uVar24 + (long)local_c0) {
      FUN_031cf778();
      goto LAB_02e9ae0c;
    }
    *(float **)(local_c8 + 0x38) = local_c0;
  }
  else {
    *(float **)(local_c8 + 0x38) = local_c0;
    if (*(float **)(local_c8 + 0x48) != local_c0) goto LAB_02e9ae0c;
  }
  FUN_031cf578();
LAB_02e9ae0c:
  uVar25 = local_d0;
  uVar24 = local_d0 >> 0x20;
  local_d0 = uVar24 << 0x20;
  if ((pfVar28 != (float *)0x0) && (-1 < (long)uVar25)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,pfVar28,uVar24 * 0x50);
  }
  if (plVar34 != (long *)0x0) {
    lVar33 = *plVar34;
    if (((*(byte *)(lVar33 + 0x38) & 1) != 0) && (plVar34[6] != 0)) {
      puVar1 = (undefined8 *)plVar34[2];
      uVar24 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar24 <= (ulong)plVar34[3]) && (plVar34[2] = uVar24, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar34[6] + 8);
      }
    }
    puVar1 = (undefined8 *)plVar34[2];
    uVar24 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar24 <= (ulong)plVar34[3]) && (plVar34[2] = uVar24, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_03c2d363;
      uVar22 = nn::os::GetSystemTick();
      puVar1[1] = uVar22;
    }
    if (*(code **)(lVar33 + 0x20) != (code *)0x0) {
      (**(code **)(lVar33 + 0x20))(*(undefined8 *)(lVar33 + 0x28));
    }
  }
  return;
}


