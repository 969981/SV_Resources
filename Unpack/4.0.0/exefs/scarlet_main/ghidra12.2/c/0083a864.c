/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0083a864; name: FUN_0083a864
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0083a864(uint param_1,long *param_2,long *param_3,long *param_4,long param_5,long *param_6,
                 long *param_7)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte bVar12;
  byte bVar13;
  undefined1 auVar14 [12];
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined *puVar24;
  undefined4 uVar25;
  long lVar26;
  long lVar27;
  undefined4 uVar28;
  int iVar29;
  long lVar30;
  undefined8 *puVar31;
  long *plVar32;
  long lVar33;
  int iVar34;
  long lVar35;
  long lVar36;
  byte *pbVar37;
  uint uVar38;
  ulong uVar39;
  undefined4 uVar40;
  ulong uVar41;
  float fVar42;
  undefined8 uVar49;
  float fVar77;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar78;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined8 uVar50;
  float fVar79;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined8 uVar51;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined8 uVar52;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined8 uVar53;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined8 uVar54;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined8 uVar55;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar95;
  undefined1 auVar80 [16];
  float fVar96;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  undefined8 uVar115;
  float fVar116;
  float fVar117;
  ulong uVar118;
  long lVar119;
  float local_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_134;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 local_120;
  undefined8 uStack_118;
  uint local_110;
  byte *local_108;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  byte *local_d8;
  undefined8 local_d0;
  long lStack_c8;
  float fStack_c0;
  float local_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  uint local_b0;
  byte *local_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  puVar24 = PTR_DAT_047d19b0;
  if ((int)param_2[1] == 0 || (int)param_3[1] == 0) {
    return;
  }
  lVar23 = param_4[1];
  if (param_6 == (long *)0x0) {
    uVar41 = 0;
    pbVar37 = (byte *)(*param_2 + (long)param_2);
    uVar118 = param_2[5];
    lVar26 = param_2[4];
    lVar119 = param_2[3];
    lVar33 = param_2[2];
  }
  else {
    uVar41 = (ulong)*(uint *)(param_6 + 4);
    pbVar37 = (byte *)param_6[5];
    uVar118 = param_6[3];
    lVar26 = param_6[2];
    lVar119 = param_6[1];
    lVar33 = *param_6;
  }
  if (param_7 == (long *)0x0) {
    uVar39 = 0;
    lStack_c8 = param_3[3];
    local_d0 = param_3[2];
    lVar30 = param_3[5];
    lVar27 = param_3[4];
    local_a8 = (byte *)(*param_3 + (long)param_3);
  }
  else {
    lStack_c8 = param_7[1];
    local_d0 = *param_7;
    lVar30 = param_7[3];
    lVar27 = param_7[2];
    uVar39 = (ulong)*(uint *)(param_7 + 4);
    local_a8 = (byte *)param_7[5];
  }
  local_b0 = (uint)uVar39;
  fStack_b8 = (float)lVar30;
  uStack_b4 = (undefined4)((ulong)lVar30 >> 0x20);
  fStack_c0 = (float)lVar27;
  local_bc = (float)((ulong)lVar27 >> 0x20);
  uVar19 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x50);
  if ((param_1 & 1) == 0) {
    lVar27 = *(long *)(param_5 + 0x150);
    uVar115 = NEON_fmax(uVar19,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
    fVar116 = *(float *)(lVar27 + 0x40);
    fVar117 = *(float *)(lVar27 + 0x44);
    fVar111 = *(float *)(lVar27 + 0x48);
    fVar42 = *(float *)(lVar27 + 0x4c);
    FUN_03241a80(param_5 + 0x1b0,&local_d0,&local_130);
    auVar56 = *(undefined1 (*) [16])(puVar24 + 0x150);
    auVar80 = NEON_ext(auVar56,auVar56,8,1);
    auVar56 = NEON_ext(auVar80,auVar56,8,1);
    fVar45 = ((float)local_120 - local_130) * auVar56._0_4_;
    fVar47 = (local_120._4_4_ - fStack_12c) * auVar56._4_4_;
    fVar98 = ((float)uStack_118 - fStack_128) * auVar56._8_4_;
    fVar43 = (uStack_118._4_4_ - fStack_124) * auVar56._12_4_;
    fVar46 = (local_130 + (float)local_120) * auVar56._0_4_;
    fVar48 = (fStack_12c + local_120._4_4_) * auVar56._4_4_;
    fVar114 = (fStack_128 + (float)uStack_118) * auVar56._8_4_;
    fVar44 = (fStack_124 + uStack_118._4_4_) * auVar56._12_4_;
    uStack_1c8 = auVar56._8_8_;
    local_1d0 = auVar56._0_8_;
    auVar90._0_4_ = (float)lVar33 * fVar116 - fVar45;
    auVar90._4_4_ = (float)((ulong)lVar33 >> 0x20) * fVar117 - fVar47;
    auVar90._8_4_ = (float)lVar119 * fVar111 - fVar98;
    auVar90._12_4_ = (float)((ulong)lVar119 >> 0x20) * fVar42 - fVar43;
    auVar80._0_4_ = (float)lVar26 * fVar116 + fVar45;
    auVar80._4_4_ = (float)((ulong)lVar26 >> 0x20) * fVar117 + fVar47;
    auVar80._8_4_ = (float)uVar118 * fVar111 + fVar98;
    auVar80._12_4_ = (float)(uVar118 >> 0x20) * fVar42 + fVar43;
    auVar56._4_4_ = fVar48;
    auVar56._0_4_ = fVar46;
    auVar56._8_4_ = fVar114;
    auVar56._12_4_ = fVar44;
    auVar56 = NEON_fmax(auVar90,auVar56,4);
    auVar56 = NEON_fmin(auVar80,auVar56,4);
    fVar46 = fVar46 - auVar56._0_4_;
    fVar48 = fVar48 - auVar56._4_4_;
    fVar114 = fVar114 - auVar56._8_4_;
    fVar44 = fVar44 - auVar56._12_4_;
    auVar85._0_4_ = fVar46 * fVar46;
    auVar85._4_4_ = fVar48 * fVar48;
    auVar85._8_4_ = fVar114 * fVar114;
    auVar85._12_4_ = fVar44 * fVar44;
    auVar56 = NEON_ext(auVar85,auVar85,8,1);
    if ((float)uVar115 * (float)uVar115 < auVar85._0_4_ + auVar85._4_4_ + auVar56._0_4_) {
      return;
    }
    lVar30 = CONCAT44(uStack_b4,fStack_b8);
    lVar27 = CONCAT44(local_bc,fStack_c0);
    uVar39 = (ulong)local_b0;
  }
  else {
    auVar56 = *(undefined1 (*) [16])(PTR_DAT_047d19b0 + 0x150);
    auVar80 = NEON_ext(auVar56,auVar56,8,1);
    auVar56 = NEON_ext(auVar80,auVar56,8,1);
    uStack_1c8 = auVar56._8_8_;
    local_1d0 = auVar56._0_8_;
  }
  lVar1 = param_5 + 0x1b0;
  auVar56 = *(undefined1 (*) [16])(puVar24 + 0x150);
  fVar116 = (float)*(undefined8 *)(puVar24 + 0x1e0);
  auVar80 = NEON_ext(auVar56,auVar56,8,1);
  uVar115 = *(undefined8 *)(puVar24 + 0x50);
  auVar56 = NEON_ext(auVar80,auVar56,8,1);
  fVar117 = (float)((ulong)*(undefined8 *)(puVar24 + 0x1e0) >> 0x20);
  lVar35 = local_d0;
  do {
    local_d0 = lVar35;
    if (((param_1 & 1) == 0) || (local_a8 != pbVar37)) {
      iVar34 = (int)uVar41;
      bVar3 = pbVar37[3];
      fVar46 = (float)lVar26;
      fVar47 = (float)((ulong)lVar26 >> 0x20);
      fVar43 = (float)(uVar118 >> 0x20);
      fVar114 = (float)lVar33;
      fVar42 = (float)((ulong)lVar33 >> 0x20);
      fVar44 = (float)((ulong)lVar119 >> 0x20);
      fVar45 = (float)lVar119;
      fVar48 = (float)uVar118;
      local_d0._4_4_ = (float)((ulong)lVar35 >> 0x20);
      fVar111 = (float)lStack_c8;
      local_1f0 = auVar56._0_4_;
      fStack_1ec = auVar56._4_4_;
      fStack_1e8 = auVar56._8_4_;
      fStack_1e4 = auVar56._12_4_;
      fVar98 = (float)lVar35;
      if ((char)bVar3 < '\0') {
        lVar33 = (long)iVar34 + 1;
        lVar119 = (((ulong)bVar3 & 0x7f) << 9 | (ulong)pbVar37[4] << 1) + (long)iVar34;
        pbVar37 = (byte *)((long)param_2 + lVar33 * 5 + *param_2);
        fVar112 = (fVar46 - fVar114) * fVar116;
        fVar113 = (fVar47 - fVar42) * fVar117;
        fVar77 = (fVar48 - fVar45) * fVar116;
        pbVar2 = (byte *)((long)param_2 + lVar119 * 5 + *param_2);
        bVar3 = *pbVar37 & 0xf;
        bVar13 = *pbVar37 >> 4;
        bVar15 = *pbVar2 >> 4;
        fVar101 = fVar114 + (float)(byte)(bVar13 * bVar13) * fVar112;
        bVar16 = pbVar37[1] >> 4;
        bVar13 = pbVar37[1] & 0xf;
        fVar79 = fVar46 - (float)(byte)(bVar3 * bVar3) * fVar112;
        fVar114 = fVar114 + (float)(byte)(bVar15 * bVar15) * fVar112;
        bVar3 = *pbVar2 & 0xf;
        bVar15 = pbVar2[1] >> 4;
        fVar104 = fVar42 + (float)(byte)(bVar16 * bVar16) * fVar113;
        fVar102 = fVar47 - (float)(byte)(bVar13 * bVar13) * fVar113;
        bVar16 = pbVar37[2] >> 4;
        fVar42 = fVar42 + (float)(byte)(bVar15 * bVar15) * fVar113;
        bVar13 = pbVar37[2] & 0xf;
        fVar43 = fVar45 + (float)(byte)(bVar16 * bVar16) * fVar77;
        bVar15 = pbVar2[2] >> 4;
        fVar44 = fVar48 - (float)(byte)(bVar13 * bVar13) * fVar77;
        fVar45 = fVar45 + (float)(byte)(bVar15 * bVar15) * fVar77;
        fVar46 = fVar46 - (float)(byte)(bVar3 * bVar3) * fVar112;
        bVar3 = pbVar2[1] & 0xf;
        bVar13 = pbVar2[2] & 0xf;
        fVar47 = fVar47 - (float)(byte)(bVar3 * bVar3) * fVar113;
        uVar49 = CONCAT44(fVar47,fVar46);
        fVar48 = fVar48 - (float)(byte)(bVar13 * bVar13) * fVar77;
        uVar41 = (ulong)(uint)fVar48;
        uVar40 = (undefined4)lVar119;
        uVar28 = (undefined4)lVar33;
        if ((char)local_a8[3] < '\0') {
          lVar33 = (long)(int)local_b0 + 1;
          local_110 = (uint)lVar33;
          fVar111 = fVar116 * (fStack_c0 - fVar98);
          fVar112 = fVar117 * (local_bc - local_d0._4_4_);
          fVar113 = fVar116 * (fStack_b8 - (float)lStack_c8);
          lVar119 = ((ulong)local_a8[4] << 1 | ((ulong)local_a8[3] & 0x7f) << 9) +
                    (long)(int)local_b0;
          local_e0 = (undefined4)lVar119;
          local_108 = (byte *)((long)param_3 + lVar33 * 5 + *param_3);
          local_d8 = (byte *)((long)param_3 + lVar119 * 5 + *param_3);
          bVar13 = *local_108 >> 4;
          bVar3 = *local_108 & 0xf;
          bVar15 = local_108[1] >> 4;
          bVar16 = local_108[2] >> 4;
          local_130 = (float)(byte)(bVar13 * bVar13) * fVar111 + fVar98;
          fStack_12c = (float)(byte)(bVar15 * bVar15) * fVar112 + local_d0._4_4_;
          fStack_124 = 0.0;
          bVar13 = local_108[1] & 0xf;
          fStack_128 = (float)(byte)(bVar16 * bVar16) * fVar113 + (float)lStack_c8;
          bVar17 = local_d8[1] >> 4;
          bVar18 = local_d8[2] >> 4;
          bVar15 = local_d8[1] & 0xf;
          bVar16 = local_d8[2] & 0xf;
          bVar12 = local_108[2] & 0xf;
          local_120 = CONCAT44(local_bc - (float)(byte)(bVar13 * bVar13) * fVar112,
                               fStack_c0 - (float)(byte)(bVar3 * bVar3) * fVar111);
          bVar13 = *local_d8 >> 4;
          bVar3 = *local_d8 & 0xf;
          uStack_118 = (ulong)(uint)(fStack_b8 - (float)(byte)(bVar12 * bVar12) * fVar113);
          uStack_f4 = 0;
          local_100 = fVar98 + (float)(byte)(bVar13 * bVar13) * fVar111;
          uStack_e4 = 0;
          fStack_fc = (float)(byte)(bVar17 * bVar17) * fVar112 + local_d0._4_4_;
          fStack_f8 = (float)(byte)(bVar18 * bVar18) * fVar113 + (float)lStack_c8;
          local_f0 = fStack_c0 - (float)(byte)(bVar3 * bVar3) * fVar111;
          fStack_ec = local_bc - (float)(byte)(bVar15 * bVar15) * fVar112;
          local_e8 = fStack_b8 - (float)(byte)(bVar16 * bVar16) * fVar113;
          uVar52 = NEON_fmax(uVar19,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
          auVar80 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
          FUN_03241a80(lVar1,&local_130,&local_a0);
          fVar111 = (fStack_90 - local_a0) * (float)local_1d0;
          fVar112 = (fStack_8c - fStack_9c) * local_1d0._4_4_;
          fVar77 = (fStack_88 - fStack_98) * (float)uStack_1c8;
          fVar100 = (fStack_84 - fStack_94) * uStack_1c8._4_4_;
          fVar98 = (local_a0 + fStack_90) * (float)local_1d0;
          fVar113 = (fStack_9c + fStack_8c) * local_1d0._4_4_;
          fVar105 = (fStack_98 + fStack_88) * (float)uStack_1c8;
          fVar78 = (fStack_94 + fStack_84) * uStack_1c8._4_4_;
          auVar88._0_4_ = fVar101 * auVar80._0_4_ - fVar111;
          auVar88._4_4_ = fVar104 * auVar80._4_4_ - fVar112;
          auVar88._8_4_ = fVar43 * auVar80._8_4_ - fVar77;
          auVar88._12_4_ = auVar80._12_4_ * 0.0 - fVar100;
          auVar68._0_4_ = fVar79 * auVar80._0_4_ + fVar111;
          auVar68._4_4_ = fVar102 * auVar80._4_4_ + fVar112;
          auVar68._8_4_ = fVar44 * auVar80._8_4_ + fVar77;
          auVar68._12_4_ = auVar80._12_4_ * 0.0 + fVar100;
          auVar7._4_4_ = fVar113;
          auVar7._0_4_ = fVar98;
          auVar7._8_4_ = fVar105;
          auVar7._12_4_ = fVar78;
          auVar80 = NEON_fmax(auVar88,auVar7,4);
          auVar80 = NEON_fmin(auVar68,auVar80,4);
          fVar98 = fVar98 - auVar80._0_4_;
          fVar113 = fVar113 - auVar80._4_4_;
          fVar105 = fVar105 - auVar80._8_4_;
          fVar78 = fVar78 - auVar80._12_4_;
          auVar69._0_4_ = fVar98 * fVar98;
          auVar69._4_4_ = fVar113 * fVar113;
          auVar69._8_4_ = fVar105 * fVar105;
          auVar69._12_4_ = fVar78 * fVar78;
          auVar85 = NEON_ext(auVar69,auVar69,8,1);
          uVar53 = NEON_fmax(uVar19,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
          auVar80 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
          FUN_03241a80(lVar1,&local_100,&local_a0);
          fVar111 = (float)local_1d0 * (fStack_90 - local_a0);
          fVar112 = local_1d0._4_4_ * (fStack_8c - fStack_9c);
          fVar77 = (float)uStack_1c8 * (fStack_88 - fStack_98);
          fVar100 = uStack_1c8._4_4_ * (fStack_84 - fStack_94);
          fVar98 = (float)local_1d0 * (local_a0 + fStack_90);
          fVar113 = local_1d0._4_4_ * (fStack_9c + fStack_8c);
          fVar105 = (float)uStack_1c8 * (fStack_98 + fStack_88);
          fVar78 = uStack_1c8._4_4_ * (fStack_94 + fStack_84);
          auVar89._0_4_ = fVar101 * auVar80._0_4_ - fVar111;
          auVar89._4_4_ = fVar104 * auVar80._4_4_ - fVar112;
          auVar89._8_4_ = fVar43 * auVar80._8_4_ - fVar77;
          auVar89._12_4_ = auVar80._12_4_ * 0.0 - fVar100;
          auVar70._0_4_ = fVar79 * auVar80._0_4_ + fVar111;
          auVar70._4_4_ = fVar102 * auVar80._4_4_ + fVar112;
          auVar70._8_4_ = fVar44 * auVar80._8_4_ + fVar77;
          auVar70._12_4_ = auVar80._12_4_ * 0.0 + fVar100;
          auVar8._4_4_ = fVar113;
          auVar8._0_4_ = fVar98;
          auVar8._8_4_ = fVar105;
          auVar8._12_4_ = fVar78;
          auVar80 = NEON_fmax(auVar89,auVar8,4);
          auVar80 = NEON_fmin(auVar70,auVar80,4);
          fVar98 = fVar98 - auVar80._0_4_;
          fVar113 = fVar113 - auVar80._4_4_;
          fVar105 = fVar105 - auVar80._8_4_;
          fVar78 = fVar78 - auVar80._12_4_;
          auVar71._0_4_ = fVar98 * fVar98;
          auVar71._4_4_ = fVar113 * fVar113;
          auVar71._8_4_ = fVar105 * fVar105;
          auVar71._12_4_ = fVar78 * fVar78;
          auVar90 = NEON_ext(auVar71,auVar71,8,1);
          uVar54 = NEON_fmax(uVar19,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
          auVar80 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
          FUN_03241a80(lVar1,&local_130,&local_a0);
          fVar111 = (float)local_1d0 * (fStack_90 - local_a0);
          fVar112 = local_1d0._4_4_ * (fStack_8c - fStack_9c);
          fVar77 = (float)uStack_1c8 * (fStack_88 - fStack_98);
          fVar100 = uStack_1c8._4_4_ * (fStack_84 - fStack_94);
          fVar98 = (float)local_1d0 * (local_a0 + fStack_90);
          fVar113 = local_1d0._4_4_ * (fStack_9c + fStack_8c);
          fVar105 = (float)uStack_1c8 * (fStack_98 + fStack_88);
          fVar78 = uStack_1c8._4_4_ * (fStack_94 + fStack_84);
          auVar91._0_4_ = fVar114 * auVar80._0_4_ - fVar111;
          auVar91._4_4_ = fVar42 * auVar80._4_4_ - fVar112;
          auVar91._8_4_ = fVar45 * auVar80._8_4_ - fVar77;
          auVar91._12_4_ = auVar80._12_4_ * 0.0 - fVar100;
          auVar72._0_4_ = fVar46 * auVar80._0_4_ + fVar111;
          auVar72._4_4_ = fVar47 * auVar80._4_4_ + fVar112;
          auVar72._8_4_ = fVar48 * auVar80._8_4_ + fVar77;
          auVar72._12_4_ = auVar80._12_4_ * 0.0 + fVar100;
          auVar9._4_4_ = fVar113;
          auVar9._0_4_ = fVar98;
          auVar9._8_4_ = fVar105;
          auVar9._12_4_ = fVar78;
          auVar80 = NEON_fmax(auVar91,auVar9,4);
          auVar80 = NEON_fmin(auVar72,auVar80,4);
          fVar98 = fVar98 - auVar80._0_4_;
          fVar113 = fVar113 - auVar80._4_4_;
          fVar105 = fVar105 - auVar80._8_4_;
          fVar78 = fVar78 - auVar80._12_4_;
          auVar73._0_4_ = fVar98 * fVar98;
          auVar73._4_4_ = fVar113 * fVar113;
          auVar73._8_4_ = fVar105 * fVar105;
          auVar73._12_4_ = fVar78 * fVar78;
          auVar92 = NEON_ext(auVar73,auVar73,8,1);
          uVar55 = NEON_fmax(uVar19,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
          auVar80 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
          FUN_03241a80(lVar1,&local_100,&local_a0);
          uVar25 = local_e0;
          uVar38 = local_110;
          uVar118 = uStack_118;
          lVar119 = local_120;
          fVar98 = fStack_124;
          fVar111 = fStack_128;
          fVar113 = (float)local_1d0 * (local_a0 + fStack_90);
          fVar105 = local_1d0._4_4_ * (fStack_9c + fStack_8c);
          fVar78 = (float)uStack_1c8 * (fStack_98 + fStack_88);
          fVar106 = uStack_1c8._4_4_ * (fStack_94 + fStack_84);
          fVar112 = (float)local_1d0 * (fStack_90 - local_a0);
          fVar77 = local_1d0._4_4_ * (fStack_8c - fStack_9c);
          fVar100 = (float)uStack_1c8 * (fStack_88 - fStack_98);
          fVar103 = uStack_1c8._4_4_ * (fStack_84 - fStack_94);
          auVar93._0_4_ = fVar114 * auVar80._0_4_ - fVar112;
          auVar93._4_4_ = fVar42 * auVar80._4_4_ - fVar77;
          auVar93._8_4_ = fVar45 * auVar80._8_4_ - fVar100;
          auVar93._12_4_ = auVar80._12_4_ * 0.0 - fVar103;
          auVar74._0_4_ = fVar46 * auVar80._0_4_ + fVar112;
          auVar74._4_4_ = fVar47 * auVar80._4_4_ + fVar77;
          auVar74._8_4_ = fVar48 * auVar80._8_4_ + fVar100;
          auVar74._12_4_ = auVar80._12_4_ * 0.0 + fVar103;
          uVar50 = CONCAT44(fStack_12c,local_130);
          auVar110._8_4_ = fStack_128;
          auVar110._0_8_ = uVar50;
          auVar110._12_4_ = fStack_124;
          uVar20 = CONCAT44(uStack_f4,fStack_f8);
          uVar51 = CONCAT44(fStack_fc,local_100);
          uVar22 = CONCAT44(uStack_e4,local_e8);
          uVar21 = CONCAT44(fStack_ec,local_f0);
          auVar10._4_4_ = fVar105;
          auVar10._0_4_ = fVar113;
          auVar10._8_4_ = fVar78;
          auVar10._12_4_ = fVar106;
          auVar80 = NEON_fmax(auVar93,auVar10,4);
          auVar80 = NEON_fmin(auVar74,auVar80,4);
          fVar113 = fVar113 - auVar80._0_4_;
          fVar105 = fVar105 - auVar80._4_4_;
          fVar78 = fVar78 - auVar80._8_4_;
          fVar106 = fVar106 - auVar80._12_4_;
          auVar75._0_4_ = fVar113 * fVar113;
          auVar75._4_4_ = fVar105 * fVar105;
          auVar75._8_4_ = fVar78 * fVar78;
          auVar75._12_4_ = fVar106 * fVar106;
          auVar80 = NEON_ext(auVar75,auVar75,8,1);
          if (auVar75._0_4_ + auVar75._4_4_ + auVar80._0_4_ <= (float)uVar55 * (float)uVar55) {
            iVar34 = (int)param_4[1];
            lVar33 = (long)iVar34;
            if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar34) {
              FUN_008379bc(param_4,PTR_PTR_047d1a50,lVar33 + 1);
              auVar110._8_4_ = fVar111;
              auVar110._12_4_ = fVar98;
              iVar34 = (int)param_4[1];
            }
            *(int *)(param_4 + 1) = (int)(lVar33 + 1);
            puVar31 = (undefined8 *)(*param_4 + (long)iVar34 * 0x60);
            puVar31[1] = (ulong)(uint)fVar45;
            *puVar31 = CONCAT44(fVar42,fVar114);
            *(undefined4 *)(puVar31 + 4) = uVar40;
            *(undefined4 *)(puVar31 + 10) = uVar25;
            puVar31[7] = uVar20;
            puVar31[6] = uVar51;
            puVar31[9] = uVar22;
            puVar31[8] = uVar21;
            puVar31[3] = uVar41;
            puVar31[2] = uVar49;
          }
          auVar76._4_4_ = fVar102;
          auVar76._0_4_ = fVar79;
          auVar94._4_4_ = fVar104;
          auVar94._0_4_ = fVar101;
          auVar76._8_4_ = fVar44;
          auVar94._8_4_ = fVar43;
          auVar76._12_4_ = 0;
          auVar94._12_4_ = 0;
          if (auVar73._0_4_ + auVar73._4_4_ + auVar92._0_4_ <= (float)uVar54 * (float)uVar54) {
            iVar34 = (int)param_4[1];
            lVar33 = (long)iVar34;
            if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar34) {
              FUN_008379bc(param_4,PTR_PTR_047d1a50,lVar33 + 1);
              auVar110._8_4_ = fVar111;
              auVar110._12_4_ = fVar98;
              iVar34 = (int)param_4[1];
              auVar94._12_4_ = 0;
              auVar76._12_4_ = 0;
            }
            puVar31 = (undefined8 *)(*param_4 + (long)iVar34 * 0x60);
            *(int *)(param_4 + 1) = (int)(lVar33 + 1);
            *(undefined4 *)(puVar31 + 4) = uVar40;
            *(uint *)(puVar31 + 10) = uVar38;
            puVar31[1] = (ulong)(uint)fVar45;
            *puVar31 = CONCAT44(fVar42,fVar114);
            puVar31[7] = auVar110._8_8_;
            puVar31[6] = auVar110._0_8_;
            puVar31[9] = uVar118;
            puVar31[8] = lVar119;
            puVar31[3] = uVar41;
            puVar31[2] = uVar49;
          }
          if (auVar71._0_4_ + auVar71._4_4_ + auVar90._0_4_ <= (float)uVar53 * (float)uVar53) {
            iVar34 = (int)param_4[1];
            lVar33 = (long)iVar34;
            if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar34) {
              FUN_008379bc(param_4,PTR_PTR_047d1a50,lVar33 + 1);
              auVar110._8_4_ = fVar111;
              auVar110._12_4_ = fVar98;
              iVar34 = (int)param_4[1];
              auVar94._12_4_ = 0;
              auVar76._12_4_ = 0;
            }
            puVar31 = (undefined8 *)(*param_4 + (long)iVar34 * 0x60);
            *(int *)(param_4 + 1) = (int)(lVar33 + 1);
            puVar31[1] = auVar94._8_8_;
            *puVar31 = auVar94._0_8_;
            puVar31[3] = auVar76._8_8_;
            puVar31[2] = auVar76._0_8_;
            puVar31[7] = uVar20;
            puVar31[6] = uVar51;
            puVar31[9] = uVar22;
            puVar31[8] = uVar21;
            *(undefined4 *)(puVar31 + 4) = uVar28;
            *(undefined4 *)(puVar31 + 10) = uVar25;
          }
          if (auVar69._0_4_ + auVar69._4_4_ + auVar85._0_4_ <= (float)uVar52 * (float)uVar52) {
            iVar34 = (int)param_4[1];
            lVar33 = (long)iVar34;
            if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar34) {
              FUN_008379bc(param_4,PTR_PTR_047d1a50,lVar33 + 1);
              auVar110._8_4_ = fVar111;
              auVar110._12_4_ = fVar98;
              iVar34 = (int)param_4[1];
              auVar94._12_4_ = 0;
              auVar76._12_4_ = 0;
            }
            puVar31 = (undefined8 *)(*param_4 + (long)iVar34 * 0x60);
            *(int *)(param_4 + 1) = (int)(lVar33 + 1);
            puVar31[1] = auVar94._8_8_;
            *puVar31 = auVar94._0_8_;
            puVar31[3] = auVar76._8_8_;
            puVar31[2] = auVar76._0_8_;
            *(undefined4 *)(puVar31 + 4) = uVar28;
            goto LAB_0083bd64;
          }
        }
        else {
          uVar50 = NEON_fmax(uVar19,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
          auVar80 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
          uStack_148 = (undefined4)lVar30;
          uStack_144 = (undefined4)((ulong)lVar30 >> 0x20);
          uStack_134 = (undefined4)((ulong)lStack_c8 >> 0x20);
          FUN_03241a80(lVar1,&local_d0,&local_130);
          fVar98 = ((float)local_120 - local_130) * local_1f0;
          fVar113 = (local_120._4_4_ - fStack_12c) * fStack_1ec;
          fVar105 = ((float)uStack_118 - fStack_128) * fStack_1e8;
          fVar78 = (uStack_118._4_4_ - fStack_124) * fStack_1e4;
          fVar112 = (local_130 + (float)local_120) * local_1f0;
          fVar77 = (fStack_12c + local_120._4_4_) * fStack_1ec;
          fVar100 = (fStack_128 + (float)uStack_118) * fStack_1e8;
          fVar103 = (fStack_124 + uStack_118._4_4_) * fStack_1e4;
          auVar82._0_4_ = fVar101 * auVar80._0_4_ - fVar98;
          auVar82._4_4_ = fVar104 * auVar80._4_4_ - fVar113;
          auVar82._8_4_ = fVar43 * auVar80._8_4_ - fVar105;
          auVar82._12_4_ = auVar80._12_4_ * 0.0 - fVar78;
          auVar59._0_4_ = fVar79 * auVar80._0_4_ + fVar98;
          auVar59._4_4_ = fVar102 * auVar80._4_4_ + fVar113;
          auVar59._8_4_ = fVar44 * auVar80._8_4_ + fVar105;
          auVar59._12_4_ = auVar80._12_4_ * 0.0 + fVar78;
          auVar92._4_4_ = fVar77;
          auVar92._0_4_ = fVar112;
          auVar92._8_4_ = fVar100;
          auVar92._12_4_ = fVar103;
          auVar80 = NEON_fmax(auVar82,auVar92,4);
          auVar80 = NEON_fmin(auVar59,auVar80,4);
          fVar112 = fVar112 - auVar80._0_4_;
          fVar77 = fVar77 - auVar80._4_4_;
          fVar100 = fVar100 - auVar80._8_4_;
          fVar103 = fVar103 - auVar80._12_4_;
          auVar60._0_4_ = fVar112 * fVar112;
          auVar60._4_4_ = fVar77 * fVar77;
          auVar60._8_4_ = fVar100 * fVar100;
          auVar60._12_4_ = fVar103 * fVar103;
          auVar85 = NEON_ext(auVar60,auVar60,8,1);
          uVar51 = NEON_fmax(uVar19,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
          auVar80 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
          FUN_03241a80(lVar1,&local_d0,&local_130);
          fVar98 = local_1f0 * (local_130 + (float)local_120);
          fVar112 = fStack_1ec * (fStack_12c + local_120._4_4_);
          fVar113 = fStack_1e8 * (fStack_128 + (float)uStack_118);
          fVar77 = fStack_1e4 * (fStack_124 + uStack_118._4_4_);
          local_1f0 = local_1f0 * ((float)local_120 - local_130);
          fStack_1ec = fStack_1ec * (local_120._4_4_ - fStack_12c);
          fStack_1e8 = fStack_1e8 * ((float)uStack_118 - fStack_128);
          fStack_1e4 = fStack_1e4 * (uStack_118._4_4_ - fStack_124);
          auVar83._0_4_ = fVar114 * auVar80._0_4_ - local_1f0;
          auVar83._4_4_ = fVar42 * auVar80._4_4_ - fStack_1ec;
          auVar83._8_4_ = fVar45 * auVar80._8_4_ - fStack_1e8;
          auVar83._12_4_ = auVar80._12_4_ * 0.0 - fStack_1e4;
          auVar61._0_4_ = fVar46 * auVar80._0_4_ + local_1f0;
          auVar61._4_4_ = fVar47 * auVar80._4_4_ + fStack_1ec;
          auVar61._8_4_ = fVar48 * auVar80._8_4_ + fStack_1e8;
          auVar61._12_4_ = auVar80._12_4_ * 0.0 + fStack_1e4;
          auVar109._8_4_ = uStack_148;
          auVar109._0_8_ = lVar27;
          auVar109._12_4_ = uStack_144;
          auVar107._8_4_ = fVar111;
          auVar107._0_8_ = lVar35;
          auVar107._12_4_ = uStack_134;
          auVar6._4_4_ = fVar112;
          auVar6._0_4_ = fVar98;
          auVar6._8_4_ = fVar113;
          auVar6._12_4_ = fVar77;
          auVar80 = NEON_fmax(auVar83,auVar6,4);
          auVar80 = NEON_fmin(auVar61,auVar80,4);
          fVar98 = fVar98 - auVar80._0_4_;
          fVar112 = fVar112 - auVar80._4_4_;
          fVar113 = fVar113 - auVar80._8_4_;
          fVar77 = fVar77 - auVar80._12_4_;
          auVar62._0_4_ = fVar98 * fVar98;
          auVar62._4_4_ = fVar112 * fVar112;
          auVar62._8_4_ = fVar113 * fVar113;
          auVar62._12_4_ = fVar77 * fVar77;
          auVar80 = NEON_ext(auVar62,auVar62,8,1);
          if (auVar62._0_4_ + auVar62._4_4_ + auVar80._0_4_ <= (float)uVar51 * (float)uVar51) {
            iVar34 = (int)param_4[1];
            lVar33 = (long)iVar34;
            if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar34) {
              FUN_008379bc(param_4,PTR_PTR_047d1a50,lVar33 + 1);
              iVar34 = (int)param_4[1];
            }
            puVar31 = (undefined8 *)(*param_4 + (long)iVar34 * 0x60);
            *(int *)(param_4 + 1) = (int)(lVar33 + 1);
            *(undefined4 *)(puVar31 + 4) = uVar40;
            *(int *)(puVar31 + 10) = (int)uVar39;
            puVar31[1] = (ulong)(uint)fVar45;
            *puVar31 = CONCAT44(fVar42,fVar114);
            puVar31[7] = auVar107._8_8_;
            puVar31[6] = auVar107._0_8_;
            puVar31[9] = auVar109._8_8_;
            puVar31[8] = auVar109._0_8_;
            puVar31[3] = uVar41;
            puVar31[2] = uVar49;
          }
          if (auVar60._0_4_ + auVar60._4_4_ + auVar85._0_4_ <= (float)uVar50 * (float)uVar50) {
            iVar34 = (int)param_4[1];
            lVar33 = (long)iVar34;
            if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar34) {
              FUN_008379bc(param_4,PTR_PTR_047d1a50,lVar33 + 1);
              iVar34 = (int)param_4[1];
            }
            puVar31 = (undefined8 *)(*param_4 + (long)iVar34 * 0x60);
            *(int *)(param_4 + 1) = (int)(lVar33 + 1);
            *(undefined4 *)(puVar31 + 4) = uVar28;
            *(int *)(puVar31 + 10) = (int)uVar39;
            puVar31[1] = (ulong)(uint)fVar43;
            *puVar31 = CONCAT44(fVar104,fVar101);
            puVar31[7] = auVar107._8_8_;
            puVar31[6] = auVar107._0_8_;
            puVar31[9] = auVar109._8_8_;
            puVar31[8] = auVar109._0_8_;
            puVar31[3] = (ulong)(uint)fVar44;
            puVar31[2] = CONCAT44(fVar102,fVar79);
          }
        }
      }
      else if ((char)local_a8[3] < '\0') {
        lVar119 = (long)(int)local_b0 + 1;
        local_110 = (uint)lVar119;
        fVar111 = (fStack_c0 - fVar98) * fVar116;
        fVar112 = (local_bc - local_d0._4_4_) * fVar117;
        fVar113 = (fStack_b8 - (float)lStack_c8) * fVar116;
        lVar27 = ((ulong)local_a8[4] << 1 | ((ulong)local_a8[3] & 0x7f) << 9) + (long)(int)local_b0;
        local_e0 = (undefined4)lVar27;
        local_108 = (byte *)((long)param_3 + lVar119 * 5 + *param_3);
        local_d8 = (byte *)((long)param_3 + lVar27 * 5 + *param_3);
        bVar13 = *local_108 >> 4;
        bVar3 = *local_108 & 0xf;
        bVar15 = local_108[1] >> 4;
        bVar16 = local_108[2] >> 4;
        local_130 = (float)(byte)(bVar13 * bVar13) * fVar111 + fVar98;
        fStack_12c = (float)(byte)(bVar15 * bVar15) * fVar112 + local_d0._4_4_;
        fStack_124 = 0.0;
        fStack_128 = (float)(byte)(bVar16 * bVar16) * fVar113 + (float)lStack_c8;
        bVar13 = local_108[1] & 0xf;
        bVar17 = local_d8[1] >> 4;
        bVar18 = local_d8[2] >> 4;
        bVar15 = local_d8[1] & 0xf;
        bVar16 = local_d8[2] & 0xf;
        bVar12 = local_108[2] & 0xf;
        local_120 = CONCAT44(local_bc - (float)(byte)(bVar13 * bVar13) * fVar112,
                             fStack_c0 - (float)(byte)(bVar3 * bVar3) * fVar111);
        bVar3 = *local_d8 >> 4;
        uStack_118 = (ulong)(uint)(fStack_b8 - (float)(byte)(bVar12 * bVar12) * fVar113);
        uStack_e4 = 0;
        local_100 = fVar98 + (float)(byte)(bVar3 * bVar3) * fVar111;
        uStack_f4 = 0;
        fStack_fc = (float)(byte)(bVar17 * bVar17) * fVar112 + local_d0._4_4_;
        bVar3 = *local_d8 & 0xf;
        fStack_f8 = (float)(byte)(bVar18 * bVar18) * fVar113 + (float)lStack_c8;
        local_f0 = fStack_c0 - (float)(byte)(bVar3 * bVar3) * fVar111;
        fStack_ec = local_bc - (float)(byte)(bVar15 * bVar15) * fVar112;
        local_e8 = fStack_b8 - (float)(byte)(bVar16 * bVar16) * fVar113;
        auVar80 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
        uVar50 = NEON_fmax(uVar115,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        FUN_03241a80(lVar1,&local_130,&local_a0);
        fVar111 = (fStack_90 - local_a0) * local_1f0;
        fVar112 = (fStack_8c - fStack_9c) * fStack_1ec;
        fVar77 = (fStack_88 - fStack_98) * fStack_1e8;
        fVar79 = (fStack_84 - fStack_94) * fStack_1e4;
        fVar98 = (local_a0 + fStack_90) * local_1f0;
        fVar113 = (fStack_9c + fStack_8c) * fStack_1ec;
        fVar101 = (fStack_98 + fStack_88) * fStack_1e8;
        fVar104 = (fStack_94 + fStack_84) * fStack_1e4;
        auVar84._0_4_ = fVar114 * auVar80._0_4_ - fVar111;
        auVar84._4_4_ = fVar42 * auVar80._4_4_ - fVar112;
        auVar84._8_4_ = fVar45 * auVar80._8_4_ - fVar77;
        auVar84._12_4_ = fVar44 * auVar80._12_4_ - fVar79;
        auVar63._0_4_ = fVar46 * auVar80._0_4_ + fVar111;
        auVar63._4_4_ = fVar47 * auVar80._4_4_ + fVar112;
        auVar63._8_4_ = fVar48 * auVar80._8_4_ + fVar77;
        auVar63._12_4_ = fVar43 * auVar80._12_4_ + fVar79;
        auVar4._4_4_ = fVar113;
        auVar4._0_4_ = fVar98;
        auVar4._8_4_ = fVar101;
        auVar4._12_4_ = fVar104;
        auVar80 = NEON_fmax(auVar84,auVar4,4);
        auVar80 = NEON_fmin(auVar63,auVar80,4);
        fVar98 = fVar98 - auVar80._0_4_;
        fVar113 = fVar113 - auVar80._4_4_;
        fVar101 = fVar101 - auVar80._8_4_;
        fVar104 = fVar104 - auVar80._12_4_;
        auVar64._0_4_ = fVar98 * fVar98;
        auVar64._4_4_ = fVar113 * fVar113;
        auVar64._8_4_ = fVar101 * fVar101;
        auVar64._12_4_ = fVar104 * fVar104;
        auVar85 = NEON_ext(auVar64,auVar64,8,1);
        auVar80 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
        uVar51 = NEON_fmax(uVar115,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        FUN_03241a80(lVar1,&local_100,&local_a0);
        uVar25 = local_e0;
        uVar40 = uStack_e4;
        fVar101 = local_e8;
        uVar28 = uStack_f4;
        fVar77 = fStack_f8;
        fVar113 = fStack_fc;
        fVar112 = local_100;
        uVar38 = local_110;
        uVar118 = uStack_118;
        lVar119 = local_120;
        fVar98 = fStack_124;
        fVar111 = fStack_128;
        fVar79 = local_1f0 * (local_a0 + fStack_90);
        fVar104 = fStack_1ec * (fStack_9c + fStack_8c);
        fVar102 = fStack_1e8 * (fStack_98 + fStack_88);
        fVar105 = fStack_1e4 * (fStack_94 + fStack_84);
        local_1f0 = local_1f0 * (fStack_90 - local_a0);
        fStack_1ec = fStack_1ec * (fStack_8c - fStack_9c);
        fStack_1e8 = fStack_1e8 * (fStack_88 - fStack_98);
        fStack_1e4 = fStack_1e4 * (fStack_84 - fStack_94);
        uVar49 = CONCAT44(fStack_12c,local_130);
        auVar110._8_4_ = fStack_128;
        auVar110._0_8_ = uVar49;
        auVar110._12_4_ = fStack_124;
        auVar86._0_4_ = fVar114 * auVar80._0_4_ - local_1f0;
        auVar86._4_4_ = fVar42 * auVar80._4_4_ - fStack_1ec;
        auVar86._8_4_ = fVar45 * auVar80._8_4_ - fStack_1e8;
        auVar86._12_4_ = fVar44 * auVar80._12_4_ - fStack_1e4;
        auVar65._0_4_ = fVar46 * auVar80._0_4_ + local_1f0;
        auVar65._4_4_ = fVar47 * auVar80._4_4_ + fStack_1ec;
        auVar65._8_4_ = fVar48 * auVar80._8_4_ + fStack_1e8;
        auVar65._12_4_ = fVar43 * auVar80._12_4_ + fStack_1e4;
        auVar5._4_4_ = fVar104;
        auVar5._0_4_ = fVar79;
        auVar5._8_4_ = fVar102;
        auVar5._12_4_ = fVar105;
        auVar80 = NEON_fmax(auVar86,auVar5,4);
        auVar80 = NEON_fmin(auVar65,auVar80,4);
        fVar79 = fVar79 - auVar80._0_4_;
        fVar104 = fVar104 - auVar80._4_4_;
        fVar102 = fVar102 - auVar80._8_4_;
        fVar105 = fVar105 - auVar80._12_4_;
        auVar66._0_4_ = fVar79 * fVar79;
        auVar66._4_4_ = fVar104 * fVar104;
        auVar66._8_4_ = fVar102 * fVar102;
        auVar66._12_4_ = fVar105 * fVar105;
        auVar80 = NEON_ext(auVar66,auVar66,8,1);
        auVar87._8_4_ = fVar48;
        auVar87._0_8_ = lVar26;
        auVar87._12_4_ = fVar43;
        auVar67._8_4_ = fVar45;
        auVar67._0_8_ = lVar33;
        auVar67._12_4_ = fVar44;
        if (auVar66._0_4_ + auVar66._4_4_ + auVar80._0_4_ <= (float)uVar51 * (float)uVar51) {
          uVar51 = CONCAT44(fStack_ec,local_f0);
          iVar29 = (int)param_4[1];
          lVar27 = (long)iVar29;
          if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar29) {
            FUN_008379bc(param_4,PTR_PTR_047d1a50,lVar27 + 1);
            auVar110._8_4_ = fVar111;
            auVar110._12_4_ = fVar98;
            iVar29 = (int)param_4[1];
          }
          auVar108._8_4_ = fVar101;
          auVar108._0_8_ = uVar51;
          auVar108._12_4_ = uVar40;
          puVar31 = (undefined8 *)(*param_4 + (long)iVar29 * 0x60);
          *(int *)(param_4 + 1) = (int)(lVar27 + 1);
          puVar31[1] = auVar67._8_8_;
          *puVar31 = auVar67._0_8_;
          puVar31[3] = auVar87._8_8_;
          puVar31[2] = auVar87._0_8_;
          *(int *)(puVar31 + 4) = iVar34;
          *(undefined4 *)(puVar31 + 10) = uVar25;
          puVar31[7] = CONCAT44(uVar28,fVar77);
          puVar31[6] = CONCAT44(fVar113,fVar112);
          puVar31[9] = auVar108._8_8_;
          puVar31[8] = uVar51;
        }
        if (auVar64._0_4_ + auVar64._4_4_ + auVar85._0_4_ <= (float)uVar50 * (float)uVar50) {
          iVar29 = (int)param_4[1];
          lVar27 = (long)iVar29;
          if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar29) {
            FUN_008379bc(param_4,PTR_PTR_047d1a50,lVar27 + 1);
            iVar29 = (int)param_4[1];
          }
          puVar31 = (undefined8 *)(*param_4 + (long)iVar29 * 0x60);
          *(int *)(param_4 + 1) = (int)(lVar27 + 1);
          puVar31[1] = auVar67._8_8_;
          *puVar31 = auVar67._0_8_;
          puVar31[3] = auVar87._8_8_;
          puVar31[2] = auVar87._0_8_;
          *(int *)(puVar31 + 4) = iVar34;
LAB_0083bd64:
          *(uint *)(puVar31 + 10) = uVar38;
          puVar31[7] = auVar110._8_8_;
          puVar31[6] = auVar110._0_8_;
          puVar31[9] = uVar118;
          puVar31[8] = lVar119;
        }
      }
      else {
        lVar26 = (long)(param_2 + 8) + (ulong)CONCAT11(bVar3,pbVar37[4]) * 0x60 + param_2[8];
        lVar27 = (long)(param_3 + 8) + (ulong)CONCAT11(local_a8[3],local_a8[4]) * 0x60 + param_3[8];
        lVar30 = *(long *)(param_5 + 0x50);
        lVar35 = *(long *)(lVar30 + 0x40);
        lVar33 = lVar35 + lVar30 + 0x40;
        lVar119 = 0;
        if (lVar35 != 0) {
          lVar119 = lVar33;
        }
        iVar34 = (int)(lVar26 - lVar119 >> 5) * -0x55555555;
        if (*(int *)(param_5 + 0x94) != iVar34 || *(int *)(param_5 + 0x98) != iVar34) {
          lVar33 = lVar33 + (long)iVar34 * 0x60;
          *(long *)(param_5 + 0x60) = lVar33;
          *(int *)(param_5 + 0x94) = iVar34;
          *(int *)(param_5 + 0x98) = iVar34;
          lVar35 = *(long *)(lVar30 + 0x70);
          lVar119 = 0;
          if (lVar35 != 0) {
            lVar119 = lVar35 + lVar30 + 0x70;
          }
          *(ulong *)(param_5 + 0x70) = lVar119 + (ulong)*(uint *)(lVar33 + 0x48) * 4;
          lVar35 = *(long *)(lVar30 + 0x80);
          lVar119 = 0;
          if (lVar35 != 0) {
            lVar119 = lVar35 + lVar30 + 0x80;
          }
          *(ulong *)(param_5 + 0x78) = lVar119 + (ulong)*(byte *)(lVar33 + 0x5b) * 0x80000;
          lVar35 = *(long *)(lVar30 + 0x60);
          lVar119 = 0;
          if (lVar35 != 0) {
            lVar119 = lVar35 + lVar30 + 0x60;
          }
          lVar119 = lVar119 + (ulong)*(uint *)(lVar33 + 0x4c) * 2;
          *(long *)(param_5 + 0x80) = lVar119;
          lVar36 = *(long *)(lVar30 + 0x90);
          lVar35 = 0;
          if (lVar36 != 0) {
            lVar35 = lVar36 + lVar30 + 0x90;
          }
          *(ulong *)(param_5 + 0x88) = lVar35 + (ulong)*(uint *)(lVar33 + 0x54) * 4;
          *(uint *)(param_5 + 0x90) = (uint)*(byte *)(lVar33 + 0x58);
          lVar36 = *(long *)(lVar30 + 0x50);
          lVar35 = 0;
          if (lVar36 != 0) {
            lVar35 = lVar36 + lVar30 + 0x50;
          }
          *(ulong *)(param_5 + 0x68) = lVar35 + (ulong)*(uint *)(lVar33 + 0x50) * 4;
          uVar49 = *(undefined8 *)(lVar33 + 0x30);
          *(undefined8 *)(param_5 + 0x38) = *(undefined8 *)(lVar33 + 0x38);
          *(undefined8 *)(param_5 + 0x30) = uVar49;
          auVar14 = *(undefined1 (*) [12])(lVar33 + 0x3c);
          *(ulong *)(param_5 + 0x48) = (ulong)auVar14._8_4_;
          *(long *)(param_5 + 0x40) = auVar14._0_8_;
          *(ulong *)(param_5 + 0x80) = lVar119 + (ulong)*(byte *)(lVar33 + 0x58) * -2;
        }
        lVar30 = *(long *)(param_5 + 0xe0);
        lVar35 = *(long *)(lVar30 + 0x40);
        lVar33 = lVar35 + lVar30 + 0x40;
        lVar119 = 0;
        if (lVar35 != 0) {
          lVar119 = lVar33;
        }
        iVar34 = (int)(lVar27 - lVar119 >> 5) * -0x55555555;
        if (*(int *)(param_5 + 0x124) != iVar34 || *(int *)(param_5 + 0x128) != iVar34) {
          lVar33 = lVar33 + (long)iVar34 * 0x60;
          *(long *)(param_5 + 0xf0) = lVar33;
          *(int *)(param_5 + 0x128) = iVar34;
          *(int *)(param_5 + 0x124) = iVar34;
          lVar35 = *(long *)(lVar30 + 0x70);
          lVar119 = 0;
          if (lVar35 != 0) {
            lVar119 = lVar35 + lVar30 + 0x70;
          }
          *(ulong *)(param_5 + 0x100) = lVar119 + (ulong)*(uint *)(lVar33 + 0x48) * 4;
          lVar35 = *(long *)(lVar30 + 0x80);
          lVar119 = 0;
          if (lVar35 != 0) {
            lVar119 = lVar35 + lVar30 + 0x80;
          }
          *(ulong *)(param_5 + 0x108) = lVar119 + (ulong)*(byte *)(lVar33 + 0x5b) * 0x80000;
          lVar35 = *(long *)(lVar30 + 0x60);
          lVar119 = 0;
          if (lVar35 != 0) {
            lVar119 = lVar35 + lVar30 + 0x60;
          }
          lVar119 = lVar119 + (ulong)*(uint *)(lVar33 + 0x4c) * 2;
          *(long *)(param_5 + 0x110) = lVar119;
          lVar36 = *(long *)(lVar30 + 0x90);
          lVar35 = 0;
          if (lVar36 != 0) {
            lVar35 = lVar36 + lVar30 + 0x90;
          }
          *(ulong *)(param_5 + 0x118) = lVar35 + (ulong)*(uint *)(lVar33 + 0x54) * 4;
          *(uint *)(param_5 + 0x120) = (uint)*(byte *)(lVar33 + 0x58);
          lVar36 = *(long *)(lVar30 + 0x50);
          lVar35 = 0;
          if (lVar36 != 0) {
            lVar35 = lVar36 + lVar30 + 0x50;
          }
          *(ulong *)(param_5 + 0xf8) = lVar35 + (ulong)*(uint *)(lVar33 + 0x50) * 4;
          uVar49 = *(undefined8 *)(lVar33 + 0x30);
          *(undefined8 *)(param_5 + 200) = *(undefined8 *)(lVar33 + 0x38);
          *(undefined8 *)(param_5 + 0xc0) = uVar49;
          auVar14 = *(undefined1 (*) [12])(lVar33 + 0x3c);
          *(ulong *)(param_5 + 0xd8) = (ulong)auVar14._8_4_;
          *(long *)(param_5 + 0xd0) = auVar14._0_8_;
          *(ulong *)(param_5 + 0x110) = lVar119 + (ulong)*(byte *)(lVar33 + 0x58) * -2;
        }
        FUN_0083bdd8(param_1 & 1,lVar26,lVar27,param_4,param_5,0,0);
      }
    }
    else {
      while ((char)pbVar37[3] < '\0') {
        lVar27 = (long)(int)uVar41 + 1;
        uVar38 = (uint)lVar27;
        fVar43 = (float)lVar26;
        fVar101 = (float)lVar33;
        fVar42 = (float)((ulong)lVar26 >> 0x20);
        fVar111 = (float)((ulong)lVar33 >> 0x20);
        fVar46 = (float)uVar118;
        fVar98 = (float)lVar119;
        fVar45 = (fVar43 - fVar101) * fVar116;
        fVar47 = (fVar42 - fVar111) * fVar117;
        fVar48 = (fVar46 - fVar98) * fVar116;
        lVar33 = ((ulong)pbVar37[4] << 1 | ((ulong)pbVar37[3] & 0x7f) << 9) + (long)(int)uVar41;
        uVar28 = (undefined4)lVar33;
        local_108 = (byte *)((long)param_2 + lVar27 * 5 + *param_2);
        local_d8 = (byte *)((long)param_2 + lVar33 * 5 + *param_2);
        bVar15 = local_d8[1] >> 4;
        bVar16 = local_108[1] >> 4;
        bVar3 = local_108[1] & 0xf;
        bVar17 = *local_108 >> 4;
        bVar18 = local_108[2] >> 4;
        bVar13 = local_d8[2] & 0xf;
        bVar12 = local_d8[2] >> 4;
        fVar44 = fVar111 + (float)(byte)(bVar16 * bVar16) * fVar47;
        fVar111 = fVar111 + (float)(byte)(bVar15 * bVar15) * fVar47;
        fVar114 = fVar101 + (float)(byte)(bVar17 * bVar17) * fVar45;
        fStack_124 = 0.0;
        bVar15 = *local_108 & 0xf;
        bVar17 = *local_d8 >> 4;
        bVar16 = *local_d8 & 0xf;
        fVar113 = fVar98 + (float)(byte)(bVar18 * bVar18) * fVar48;
        fVar98 = fVar98 + (float)(byte)(bVar12 * bVar12) * fVar48;
        fVar112 = fVar43 - (float)(byte)(bVar15 * bVar15) * fVar45;
        fVar77 = fVar42 - (float)(byte)(bVar3 * bVar3) * fVar47;
        bVar3 = local_108[2] & 0xf;
        fVar101 = fVar101 + (float)(byte)(bVar17 * bVar17) * fVar45;
        fVar43 = fVar43 - (float)(byte)(bVar16 * bVar16) * fVar45;
        local_120 = CONCAT44(fVar77,fVar112);
        fVar45 = fVar46 - (float)(byte)(bVar3 * bVar3) * fVar48;
        bVar3 = local_d8[1] & 0xf;
        uStack_118 = (ulong)(uint)fVar45;
        uStack_e4 = 0;
        uStack_f4 = 0;
        fVar42 = fVar42 - (float)(byte)(bVar3 * bVar3) * fVar47;
        fVar46 = fVar46 - (float)(byte)(bVar13 * bVar13) * fVar48;
        iVar34 = (int)param_4[1];
        lVar33 = (long)iVar34;
        local_130 = fVar114;
        fStack_12c = fVar44;
        fStack_128 = fVar113;
        local_110 = uVar38;
        local_100 = fVar101;
        fStack_fc = fVar111;
        fStack_f8 = fVar98;
        local_f0 = fVar43;
        fStack_ec = fVar42;
        local_e8 = fVar46;
        local_e0 = uVar28;
        if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar34) {
          FUN_008379bc(param_4,PTR_PTR_047d1a50,lVar33 + 1);
          iVar34 = (int)param_4[1];
        }
        puVar31 = (undefined8 *)(*param_4 + (long)iVar34 * 0x60);
        *(int *)(param_4 + 1) = (int)(lVar33 + 1);
        puVar31[1] = (ulong)(uint)fVar98;
        *puVar31 = CONCAT44(fVar111,fVar101);
        puVar31[3] = (ulong)(uint)fVar46;
        puVar31[2] = CONCAT44(fVar42,fVar43);
        *(undefined4 *)(puVar31 + 4) = uVar28;
        puVar31[7] = (ulong)(uint)fVar98;
        puVar31[6] = CONCAT44(fVar111,fVar101);
        puVar31[9] = (ulong)(uint)fVar46;
        puVar31[8] = CONCAT44(fVar42,fVar43);
        *(undefined4 *)(puVar31 + 10) = uVar28;
        auVar80 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
        uVar49 = NEON_fmax(uVar19,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        fVar99 = (float)uStack_118;
        uVar118 = uStack_118 >> 0x20;
        fVar97 = (float)local_120;
        uVar41 = (ulong)local_120 >> 0x20;
        fVar103 = local_130 * auVar80._0_4_;
        fVar106 = fStack_12c * auVar80._4_4_;
        fVar95 = fStack_128 * auVar80._8_4_;
        fVar96 = fStack_124 * auVar80._12_4_;
        FUN_03241a80(lVar1,&local_100,&local_a0);
        fVar47 = (fStack_90 - local_a0) * (float)local_1d0;
        fVar79 = (fStack_8c - fStack_9c) * local_1d0._4_4_;
        fVar102 = (fStack_88 - fStack_98) * (float)uStack_1c8;
        fVar100 = (fStack_84 - fStack_94) * uStack_1c8._4_4_;
        fVar48 = (local_a0 + fStack_90) * (float)local_1d0;
        fVar104 = (fStack_9c + fStack_8c) * local_1d0._4_4_;
        fVar105 = (fStack_98 + fStack_88) * (float)uStack_1c8;
        fVar78 = (fStack_94 + fStack_84) * uStack_1c8._4_4_;
        auVar81._0_4_ = fVar103 - fVar47;
        auVar81._4_4_ = fVar106 - fVar79;
        auVar81._8_4_ = fVar95 - fVar102;
        auVar81._12_4_ = fVar96 - fVar100;
        auVar57._0_4_ = fVar97 * auVar80._0_4_ + fVar47;
        auVar57._4_4_ = (float)uVar41 * auVar80._4_4_ + fVar79;
        auVar57._8_4_ = fVar99 * auVar80._8_4_ + fVar102;
        auVar57._12_4_ = (float)uVar118 * auVar80._12_4_ + fVar100;
        auVar11._4_4_ = fVar104;
        auVar11._0_4_ = fVar48;
        auVar11._8_4_ = fVar105;
        auVar11._12_4_ = fVar78;
        auVar80 = NEON_fmax(auVar81,auVar11,4);
        auVar80 = NEON_fmin(auVar57,auVar80,4);
        fVar48 = fVar48 - auVar80._0_4_;
        fVar104 = fVar104 - auVar80._4_4_;
        fVar105 = fVar105 - auVar80._8_4_;
        fVar78 = fVar78 - auVar80._12_4_;
        auVar58._0_4_ = fVar48 * fVar48;
        auVar58._4_4_ = fVar104 * fVar104;
        auVar58._8_4_ = fVar105 * fVar105;
        auVar58._12_4_ = fVar78 * fVar78;
        auVar80 = NEON_ext(auVar58,auVar58,8,1);
        if (auVar58._0_4_ + auVar58._4_4_ + auVar80._0_4_ <= (float)uVar49 * (float)uVar49) {
          iVar34 = (int)param_4[1];
          lVar33 = (long)iVar34;
          if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar34) {
            FUN_008379bc(param_4,PTR_PTR_047d1a50,lVar33 + 1);
            iVar34 = (int)param_4[1];
          }
          puVar31 = (undefined8 *)(*param_4 + (long)iVar34 * 0x60);
          *(int *)(param_4 + 1) = (int)(lVar33 + 1);
          puVar31[1] = (ulong)(uint)fVar113;
          *puVar31 = CONCAT44(fVar44,fVar114);
          puVar31[3] = (ulong)(uint)fVar45;
          puVar31[2] = CONCAT44(fVar77,fVar112);
          puVar31[7] = (ulong)(uint)fVar98;
          puVar31[6] = CONCAT44(fVar111,fVar101);
          *(uint *)(puVar31 + 4) = uVar38;
          *(undefined4 *)(puVar31 + 10) = uVar28;
          puVar31[9] = (ulong)(uint)fVar46;
          puVar31[8] = CONCAT44(fVar42,fVar43);
        }
        lVar119 = CONCAT44(fStack_124,fStack_128);
        lVar33 = CONCAT44(fStack_12c,local_130);
        uVar41 = (ulong)local_110;
        local_b0 = local_110;
        local_a8 = local_108;
        fStack_b8 = (float)uStack_118;
        uStack_b4 = (undefined4)(uStack_118 >> 0x20);
        fStack_c0 = (float)local_120;
        local_bc = (float)((ulong)local_120 >> 0x20);
        pbVar37 = local_108;
        lVar26 = local_120;
        uVar118 = uStack_118;
        local_d0 = lVar33;
        lStack_c8 = lVar119;
      }
    }
    if ((int)param_4[1] <= (int)lVar23) {
      return;
    }
    lVar33 = (long)(int)param_4[1] + -1;
    *(int *)(param_4 + 1) = (int)lVar33;
    plVar32 = (long *)(*param_4 + lVar33 * 0x60);
    local_b0 = *(uint *)(plVar32 + 10);
    uVar39 = (ulong)(int)local_b0;
    uVar41 = (ulong)(int)plVar32[4];
    lVar119 = plVar32[1];
    lVar33 = *plVar32;
    uVar118 = plVar32[3];
    lVar26 = plVar32[2];
    lStack_c8 = plVar32[7];
    lVar35 = plVar32[6];
    lVar30 = plVar32[9];
    lVar27 = plVar32[8];
    fStack_b8 = (float)lVar30;
    uStack_b4 = (undefined4)((ulong)lVar30 >> 0x20);
    fStack_c0 = (float)lVar27;
    local_bc = (float)((ulong)lVar27 >> 0x20);
    local_a8 = (byte *)((long)param_3 + uVar39 * 5 + *param_3);
    pbVar37 = (byte *)((long)param_2 + uVar41 * 5 + *param_2);
  } while( true );
}


