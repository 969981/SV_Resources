/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eb46c0; name: FUN_02eb46c0
 */


undefined8
FUN_02eb46c0(ulong param_1,long param_2,float *param_3,long param_4,int param_5,
            undefined1 (*param_6) [16],float *param_7,undefined8 *param_8,undefined8 *param_9)

{
  ushort *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 auVar4 [12];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long lVar22;
  ulong uVar23;
  uint uVar24;
  long *plVar25;
  undefined8 *puVar26;
  float *pfVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar34;
  float fVar35;
  ushort uVar36;
  undefined1 auVar32 [16];
  float fVar37;
  undefined1 auVar33 [16];
  float fVar38;
  float fVar39;
  float fVar43;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar44;
  float fVar45;
  int iVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  ulong uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar56;
  ulong uVar53;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  undefined8 uVar68;
  float fVar69;
  float fVar70;
  undefined8 uVar71;
  float fVar72;
  float fVar73;
  undefined8 uVar74;
  float fVar75;
  undefined8 uVar76;
  float fVar77;
  float fVar78;
  undefined8 uVar79;
  float fVar80;
  float fVar81;
  undefined8 uVar82;
  float fVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  float fVar86;
  float fVar87;
  undefined8 uVar88;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined1 auVar89 [16];
  int iVar95;
  uint uVar97;
  int iVar98;
  uint uVar99;
  int iVar100;
  uint uVar101;
  undefined1 auVar96 [16];
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float afStack_af0 [4];
  float afStack_ae0 [4];
  float afStack_ad0 [568];
  int local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined2 local_1d0;
  int local_1cc;
  long *local_1c0;
  undefined1 local_1b0 [16];
  undefined2 local_1a0;
  int local_19c;
  int local_190;
  int local_18c;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  float local_140 [4];
  undefined1 local_130 [112];
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  FUN_02eb5814(afStack_af0,param_2,param_4,param_4 + 0x10);
  uVar29 = *param_8;
  if (local_1f0 == 0) {
    uVar28 = 0;
  }
  else {
    uVar28 = 0;
    uVar30 = uVar29;
    do {
      iVar46 = local_1f0;
      uVar23 = (long)local_1f0 - 1;
      fVar39 = afStack_ad0[uVar23 * 0xc];
      fVar43 = afStack_ad0[uVar23 * 0xc + 1];
      fVar44 = afStack_ad0[uVar23 * 0xc + 2];
      fVar38 = (float)uVar30;
      if (fVar39 == 0.0) {
        if ((int)fVar43 < local_190 && (int)fVar44 < local_18c) {
          (**(code **)(*local_1c0 + 0x28))();
          local_1d0 = local_1a0;
          uVar23 = (long)local_1f0 - 1;
          local_1cc = local_19c;
          uStack_1d8 = local_1b0._8_8_;
          local_1e0 = local_1b0._0_8_;
          if (local_19c == 2) {
            fVar39 = afStack_ad0[uVar23 * 0xc];
            goto LAB_02eb4c80;
          }
          fVar31 = (float)NEON_fminnmv(local_1b0,4);
          fVar45 = (float)NEON_fmaxnmv(local_1b0,4);
          fVar39 = afStack_af0[uVar23 * 0xc];
          fVar43 = afStack_af0[uVar23 * 0xc + 2];
          fVar44 = afStack_ae0[uVar23 * 0xc + -1];
          fVar65 = afStack_ae0[uVar23 * 0xc];
          fVar66 = afStack_ae0[uVar23 * 0xc + 2];
          fVar67 = afStack_ad0[uVar23 * 0xc + -1];
          goto LAB_02eb4c90;
        }
        fVar39 = 0.0;
LAB_02eb4c80:
        if ((int)fVar39 <= param_5) goto LAB_02eb4c88;
LAB_02eb4d64:
        local_1f0 = (int)uVar23;
        uVar29 = uVar30;
      }
      else {
        if ((int)fVar39 <= param_5) {
LAB_02eb4c88:
          fVar39 = afStack_af0[uVar23 * 0xc];
          fVar31 = afStack_af0[uVar23 * 0xc + 1];
          fVar43 = afStack_af0[uVar23 * 0xc + 2];
          fVar44 = afStack_ae0[uVar23 * 0xc + -1];
          fVar65 = afStack_ae0[uVar23 * 0xc];
          fVar45 = afStack_ae0[uVar23 * 0xc + 1];
          fVar66 = afStack_ae0[uVar23 * 0xc + 2];
          fVar67 = afStack_ad0[uVar23 * 0xc + -1];
LAB_02eb4c90:
          fVar39 = fVar39 * *(float *)(param_2 + 0x80);
          fVar31 = fVar31 * *(float *)(param_2 + 0x84);
          fVar43 = fVar43 * *(float *)(param_2 + 0x88);
          fVar44 = fVar44 * *(float *)(param_2 + 0x8c);
          fVar65 = fVar65 * *(float *)(param_2 + 0x80);
          fVar45 = fVar45 * *(float *)(param_2 + 0x84);
          fVar66 = fVar66 * *(float *)(param_2 + 0x88);
          fVar67 = fVar67 * *(float *)(param_2 + 0x8c);
          if ((param_1 & 1) != 0) {
            iVar46 = -(uint)(fVar65 < fVar39);
            iVar95 = -(uint)(fVar45 < fVar31);
            iVar98 = -(uint)(fVar66 < fVar43);
            if (CONCAT13((byte)((uint)iVar95 >> 0x18) | (byte)((uint)iVar46 >> 0x18) |
                         (byte)((uint)iVar98 >> 0x18),
                         CONCAT12((byte)((uint)iVar95 >> 0x10) | (byte)((uint)iVar46 >> 0x10) |
                                  (byte)((uint)iVar98 >> 0x10),
                                  CONCAT11((byte)((uint)iVar95 >> 8) | (byte)((uint)iVar46 >> 8) |
                                           (byte)((uint)iVar98 >> 8),
                                           (byte)iVar95 | (byte)iVar46 | (byte)iVar98))) == 0) {
              auVar32 = *(undefined1 (*) [16])(param_3 + 4);
              fVar44 = (fVar65 - fVar39) * 0.5;
              fVar67 = (fVar45 - fVar31) * 0.5;
              fVar34 = (fVar66 - fVar43) * 0.5;
              fVar65 = (fVar39 + fVar65) * 0.5;
              fVar45 = (fVar31 + fVar45) * 0.5;
              fVar66 = (fVar43 + fVar66) * 0.5;
              auVar40 = *(undefined1 (*) [16])(param_3 + 8);
              auVar61 = *(undefined1 (*) [16])(param_3 + 0xc);
              fVar35 = ABS(auVar40._0_4_ * fVar34) +
                       ABS(*param_3 * fVar44) + ABS(auVar32._0_4_ * fVar67);
              fVar37 = ABS(auVar40._4_4_ * fVar34) +
                       ABS(param_3[1] * fVar44) + ABS(auVar32._4_4_ * fVar67);
              fVar58 = ABS(auVar40._8_4_ * fVar34) +
                       ABS(param_3[2] * fVar44) + ABS(auVar32._8_4_ * fVar67);
              fVar34 = ABS(auVar40._12_4_ * fVar34) +
                       ABS(param_3[3] * fVar44) + ABS(auVar32._12_4_ * fVar67);
              fVar39 = auVar61._0_4_ +
                       auVar40._0_4_ * fVar66 + *param_3 * fVar65 + auVar32._0_4_ * fVar45;
              fVar31 = auVar61._4_4_ +
                       auVar40._4_4_ * fVar66 + param_3[1] * fVar65 + auVar32._4_4_ * fVar45;
              fVar43 = auVar61._8_4_ +
                       auVar40._8_4_ * fVar66 + param_3[2] * fVar65 + auVar32._8_4_ * fVar45;
              fVar44 = auVar61._12_4_ +
                       auVar40._12_4_ * fVar66 + param_3[3] * fVar65 + auVar32._12_4_ * fVar45;
              fVar65 = fVar35 + fVar39;
              fVar45 = fVar37 + fVar31;
              fVar66 = fVar58 + fVar43;
              fVar67 = fVar34 + fVar44;
              fVar39 = fVar39 - fVar35;
              fVar31 = fVar31 - fVar37;
              fVar43 = fVar43 - fVar58;
              fVar44 = fVar44 - fVar34;
            }
          }
          auVar61._0_4_ = fVar39 - *param_7;
          auVar61._4_4_ = fVar31 - param_7[1];
          auVar61._8_4_ = fVar43 - param_7[2];
          auVar61._12_4_ = fVar44 - param_7[3];
          auVar40._0_4_ = fVar65 + *param_7;
          auVar40._4_4_ = fVar45 + param_7[1];
          auVar40._8_4_ = fVar66 + param_7[2];
          auVar40._12_4_ = fVar67 + param_7[3];
          auVar32 = *param_6;
          auVar40 = NEON_fmin(auVar40,auVar32,4);
          auVar40 = NEON_fmax(auVar61,auVar40,4);
          fVar39 = auVar40._0_4_ - auVar32._0_4_;
          fVar44 = auVar40._4_4_ - auVar32._4_4_;
          fVar31 = auVar40._8_4_ - auVar32._8_4_;
          fVar39 = fVar39 * fVar39;
          fVar44 = fVar44 * fVar44;
          fVar31 = fVar31 * fVar31;
          fVar43 = fVar39 + fVar44 + fVar31;
          uVar29 = CONCAT44(fVar39 + fVar44 + fVar31,fVar43);
          if ((fVar38 <= fVar43) || (uVar28 = 1, uVar30 = uVar29, 0.0 < fVar43)) {
            uVar23 = (ulong)(local_1f0 - 1);
            goto LAB_02eb4d64;
          }
          break;
        }
        fVar31 = afStack_af0[uVar23 * 0xc + 1];
        fVar65 = afStack_ae0[uVar23 * 0xc + 1];
        fVar66 = fVar65;
        fVar67 = fVar65;
        fVar45 = fVar65;
        fVar34 = fVar31;
        fVar35 = fVar31;
        fVar37 = fVar31;
        if ((int)*(uint *)(local_1e8 + 0x50) < (int)fVar39) {
          iVar95 = (int)fVar39 + ~*(uint *)(local_1e8 + 0x50);
          plVar25 = (long *)(local_1e8 + 0x20);
          lVar22 = *plVar25;
          if ((int)fVar43 <
              (int)(uint)*(ushort *)((long)plVar25 + (long)iVar95 * 0x18 + lVar22 + 0x10)) {
            uVar36 = *(ushort *)((long)plVar25 + (long)iVar95 * 0x18 + lVar22 + 0x12);
            if ((int)fVar44 < (int)(uint)uVar36) {
              plVar25 = (long *)((long)plVar25 + (long)iVar95 * 0x18 + lVar22);
              uVar24 = (int)fVar44 + (int)fVar43 * (uint)uVar36;
              fVar45 = *(float *)(local_1e8 + 0x40);
              puVar1 = (ushort *)
                       ((long)plVar25 +
                       (-(ulong)((uVar24 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                       (ulong)(uVar24 * 4) << 2) + *plVar25);
              auVar32._2_2_ = 0;
              auVar32._0_2_ = *puVar1;
              auVar32._4_2_ = puVar1[1];
              auVar32._6_2_ = 0;
              auVar32._8_2_ = puVar1[2];
              auVar32._10_2_ = 0;
              auVar32._12_2_ = puVar1[3];
              auVar32._14_2_ = 0;
              auVar63._2_2_ = 0;
              auVar63._0_2_ = puVar1[4];
              auVar63._4_2_ = puVar1[5];
              auVar63._6_2_ = 0;
              auVar63._8_2_ = puVar1[6];
              auVar63._10_2_ = 0;
              auVar63._12_2_ = puVar1[7];
              auVar63._14_2_ = 0;
              auVar32 = NEON_ucvtf(auVar32,4);
              auVar40 = NEON_ucvtf(auVar63,4);
              fVar31 = *(float *)(local_1e8 + 0x30) + auVar32._0_4_ * fVar45;
              fVar34 = *(float *)(local_1e8 + 0x34) + auVar32._4_4_ * fVar45;
              fVar35 = *(float *)(local_1e8 + 0x38) + auVar32._8_4_ * fVar45;
              fVar37 = *(float *)(local_1e8 + 0x3c) + auVar32._12_4_ * fVar45;
              fVar65 = *(float *)(local_1e8 + 0x30) + auVar40._0_4_ * fVar45;
              fVar66 = *(float *)(local_1e8 + 0x34) + auVar40._4_4_ * fVar45;
              fVar67 = *(float *)(local_1e8 + 0x38) + auVar40._8_4_ * fVar45;
              fVar45 = *(float *)(local_1e8 + 0x3c) + auVar40._12_4_ * fVar45;
            }
          }
        }
        local_1f0 = (int)uVar23;
        fVar58 = afStack_af0[uVar23 * 0xc];
        fVar5 = afStack_af0[uVar23 * 0xc + 1];
        fVar6 = afStack_af0[uVar23 * 0xc + 2];
        fVar7 = afStack_ae0[uVar23 * 0xc + -1];
        fVar8 = afStack_ae0[uVar23 * 0xc];
        fVar9 = afStack_ae0[uVar23 * 0xc + 1];
        fVar10 = afStack_ae0[uVar23 * 0xc + 2];
        fVar11 = afStack_ad0[uVar23 * 0xc + -1];
        puVar26 = &local_180;
        uVar24 = *(uint *)PTR_DAT_047d19e0;
        uVar97 = *(uint *)(PTR_DAT_047d19e0 + 4);
        uVar99 = *(uint *)(PTR_DAT_047d19e0 + 8);
        uVar101 = *(uint *)(PTR_DAT_047d19e0 + 0xc);
        pfVar27 = local_140;
        uStack_b8 = uVar99;
        uStack_b4 = uVar101;
        local_c0 = uVar24;
        uStack_bc = uVar97;
        uStack_a8 = *(undefined8 *)(PTR_DAT_047d19e0 + 0x18);
        local_b0 = *(undefined8 *)(PTR_DAT_047d19e0 + 0x10);
        fVar12 = *(float *)(param_2 + 0x80);
        fVar13 = *(float *)(param_2 + 0x84);
        fVar14 = *(float *)(param_2 + 0x88);
        fVar15 = *(float *)(param_2 + 0x8c);
        uStack_98 = *(undefined8 *)(PTR_DAT_047d19e0 + 0x58);
        local_a0 = *(undefined8 *)(PTR_DAT_047d19e0 + 0x50);
        uStack_88 = *(undefined8 *)(PTR_DAT_047d19e0 + 0x48);
        uStack_90 = *(undefined8 *)(PTR_DAT_047d19e0 + 0x40);
        fVar16 = *param_7;
        fVar17 = param_7[1];
        fVar18 = param_7[2];
        fVar19 = param_7[3];
        uVar71 = *(undefined8 *)(param_3 + 2);
        uVar68 = *(undefined8 *)param_3;
        uVar76 = *(undefined8 *)(param_3 + 6);
        uVar74 = *(undefined8 *)(param_3 + 4);
        uVar82 = *(undefined8 *)(param_3 + 10);
        uVar79 = *(undefined8 *)(param_3 + 8);
        uVar85 = *(undefined8 *)(param_3 + 0xe);
        uVar84 = *(undefined8 *)(param_3 + 0xc);
        fVar52 = (fVar58 + fVar8) * 0.5;
        fVar56 = (fVar5 + fVar9) * 0.5;
        fVar57 = (fVar6 + fVar10) * 0.5;
        fVar59 = (fVar7 + fVar11) * 0.5;
        uVar3 = *(undefined8 *)(*param_6 + 8);
        uVar29 = *(undefined8 *)*param_6;
        auVar4 = *(undefined1 (*) [12])*param_6;
        lVar22 = 0;
        while( true ) {
          fVar69 = (float)((uint)fVar52 ^ ((uint)fVar52 ^ (uint)fVar8) & uVar24);
          fVar70 = (float)((uint)fVar57 ^ ((uint)fVar57 ^ (uint)fVar10) & uVar99);
          fVar72 = (float)((uint)fVar59 ^ ((uint)fVar59 ^ (uint)fVar11) & uVar101);
          fVar102 = (float)((uint)fVar58 ^ ((uint)fVar58 ^ (uint)fVar52) & uVar24);
          fVar106 = (float)((uint)fVar6 ^ ((uint)fVar6 ^ (uint)fVar57) & uVar99);
          fVar108 = (float)((uint)fVar7 ^ ((uint)fVar7 ^ (uint)fVar59) & uVar101);
          uVar24 = (uint)lVar22;
          pfVar27[2] = fVar106;
          pfVar27[3] = fVar108;
          *pfVar27 = fVar102;
          pfVar27[1] = (float)((uint)fVar5 ^ ((uint)fVar5 ^ (uint)fVar56) & uVar97);
          pfVar27[6] = fVar70;
          pfVar27[7] = fVar72;
          pfVar27[4] = fVar69;
          pfVar27[5] = (float)((uint)fVar56 ^ ((uint)fVar56 ^ (uint)fVar9) & uVar97);
          if (uVar24 == 3) {
            fVar73 = fVar45;
            fVar104 = fVar37;
          }
          else if (uVar24 == 2) {
            fVar73 = fVar67;
            fVar104 = fVar35;
          }
          else if (uVar24 == 1) {
            fVar73 = fVar66;
            fVar104 = fVar34;
          }
          else {
            fVar73 = fVar65;
            fVar104 = fVar31;
          }
          pfVar27[2] = fVar106;
          pfVar27[3] = fVar108;
          *pfVar27 = fVar102;
          pfVar27[1] = fVar104;
          fVar102 = fVar102 * fVar12;
          fVar104 = fVar104 * fVar13;
          fVar106 = fVar106 * fVar14;
          fVar108 = fVar108 * fVar15;
          fVar86 = fVar69 * fVar12;
          fVar90 = fVar73 * fVar13;
          fVar92 = fVar70 * fVar14;
          fVar94 = fVar72 * fVar15;
          pfVar27[6] = fVar70;
          pfVar27[7] = fVar72;
          *(ulong *)(pfVar27 + 4) = CONCAT44(fVar73,fVar69);
          if ((param_1 & 1) != 0) {
            iVar95 = -(uint)(fVar86 < fVar102);
            iVar98 = -(uint)(fVar90 < fVar104);
            iVar100 = -(uint)(fVar92 < fVar106);
            if (CONCAT13((byte)((uint)iVar98 >> 0x18) | (byte)((uint)iVar95 >> 0x18) |
                         (byte)((uint)iVar100 >> 0x18),
                         CONCAT12((byte)((uint)iVar98 >> 0x10) | (byte)((uint)iVar95 >> 0x10) |
                                  (byte)((uint)iVar100 >> 0x10),
                                  CONCAT11((byte)((uint)iVar98 >> 8) | (byte)((uint)iVar95 >> 8) |
                                           (byte)((uint)iVar100 >> 8),
                                           (byte)iVar98 | (byte)iVar95 | (byte)iVar100))) == 0) {
              fVar87 = (fVar86 - fVar102) * 0.5;
              fVar91 = (fVar90 - fVar104) * 0.5;
              fVar93 = (fVar92 - fVar106) * 0.5;
              fVar108 = (float)uVar68;
              fVar69 = (float)((ulong)uVar68 >> 0x20);
              fVar70 = (float)uVar71;
              fVar72 = (float)((ulong)uVar71 >> 0x20);
              fVar73 = (float)uVar74;
              fVar94 = (float)((ulong)uVar74 >> 0x20);
              fVar75 = (float)uVar76;
              fVar77 = (float)((ulong)uVar76 >> 0x20);
              fVar78 = (float)uVar79;
              fVar80 = (float)((ulong)uVar79 >> 0x20);
              fVar81 = (float)uVar82;
              fVar83 = (float)((ulong)uVar82 >> 0x20);
              fVar86 = (fVar102 + fVar86) * 0.5;
              fVar90 = (fVar104 + fVar90) * 0.5;
              fVar92 = (fVar106 + fVar92) * 0.5;
              fVar103 = ABS(fVar78 * fVar93) + ABS(fVar108 * fVar87) + ABS(fVar73 * fVar91);
              fVar105 = ABS(fVar80 * fVar93) + ABS(fVar69 * fVar87) + ABS(fVar94 * fVar91);
              fVar107 = ABS(fVar81 * fVar93) + ABS(fVar70 * fVar87) + ABS(fVar75 * fVar91);
              fVar87 = ABS(fVar83 * fVar93) + ABS(fVar72 * fVar87) + ABS(fVar77 * fVar91);
              fVar102 = (float)uVar84 + fVar78 * fVar92 + fVar108 * fVar86 + fVar73 * fVar90;
              fVar104 = (float)((ulong)uVar84 >> 0x20) +
                        fVar80 * fVar92 + fVar69 * fVar86 + fVar94 * fVar90;
              fVar106 = (float)uVar85 + fVar81 * fVar92 + fVar70 * fVar86 + fVar75 * fVar90;
              fVar108 = (float)((ulong)uVar85 >> 0x20) +
                        fVar83 * fVar92 + fVar72 * fVar86 + fVar77 * fVar90;
              fVar86 = fVar103 + fVar102;
              fVar90 = fVar105 + fVar104;
              fVar92 = fVar107 + fVar106;
              fVar94 = fVar87 + fVar108;
              fVar102 = fVar102 - fVar103;
              fVar104 = fVar104 - fVar105;
              fVar106 = fVar106 - fVar107;
              fVar108 = fVar108 - fVar87;
            }
          }
          auVar89._0_4_ = fVar86 + fVar16;
          auVar89._4_4_ = fVar90 + fVar17;
          auVar89._8_4_ = fVar92 + fVar18;
          auVar89._12_4_ = fVar94 + fVar19;
          auVar96._0_4_ = fVar102 - fVar16;
          auVar96._4_4_ = fVar104 - fVar17;
          auVar96._8_4_ = fVar106 - fVar18;
          auVar96._12_4_ = fVar108 - fVar19;
          auVar2._12_4_ = (int)((ulong)uVar3 >> 0x20);
          auVar2._0_12_ = auVar4;
          auVar32 = NEON_fmin(auVar89,auVar2,4);
          auVar32 = NEON_fmax(auVar96,auVar32,4);
          fVar102 = auVar32._0_4_ - (float)uVar29;
          fVar106 = auVar32._4_4_ - (float)((ulong)uVar29 >> 0x20);
          fVar108 = auVar32._8_4_ - (float)uVar3;
          fVar102 = fVar102 * fVar102;
          fVar106 = fVar106 * fVar106;
          fVar108 = fVar108 * fVar108;
          uVar88 = CONCAT44(fVar102 + fVar106 + fVar108,fVar102 + fVar106 + fVar108);
          puVar26[1] = uVar88;
          *puVar26 = uVar88;
          *(uint *)((long)puVar26 + 0xc) = uVar24 | 0x3f000000;
          if (lVar22 == 3) break;
          uVar24 = *(uint *)(&local_b0 + lVar22 * 2);
          uVar97 = *(uint *)((long)&local_b0 + lVar22 * 0x10 + 4);
          uVar99 = *(uint *)(&uStack_a8 + lVar22 * 2);
          uVar101 = *(uint *)((long)&uStack_a8 + lVar22 * 0x10 + 4);
          lVar22 = lVar22 + 1;
          puVar26 = puVar26 + 2;
          pfVar27 = pfVar27 + 8;
        }
        auVar33._8_8_ = uStack_178;
        auVar33._0_8_ = local_180;
        fVar39 = (float)((int)fVar39 + -1);
        uVar24 = (int)fVar44 << 1;
        auVar20._8_8_ = uStack_158;
        auVar20._0_8_ = local_160;
        iVar95 = -(uint)((float)local_180 < (float)local_160);
        auVar41._8_8_ = uStack_168;
        auVar41._0_8_ = local_170;
        auVar21._8_8_ = uStack_148;
        auVar21._0_8_ = local_150;
        iVar100 = -(uint)((float)local_170 < (float)local_150);
        uVar53 = (ulong)(CONCAT24((short)iVar95,iVar95) & 0xffff0000ffff) & 0x100000001;
        iVar95 = (int)uVar53;
        iVar98 = (int)(uVar53 >> 0x20);
        auVar54._0_8_ = CONCAT44((iVar98 << 0x1f) >> 0x1f,(iVar95 << 0x1f) >> 0x1f);
        auVar54._8_4_ = (iVar95 << 0x1f) >> 0x1f;
        auVar54._12_4_ = (iVar98 << 0x1f) >> 0x1f;
        auVar60._8_8_ = auVar54._8_8_;
        auVar60._0_8_ = auVar54._0_8_;
        auVar61 = auVar33 ^ (auVar33 ^ auVar20) & auVar60;
        auVar33 = auVar33 ^ (auVar33 ^ auVar20) & ~auVar54;
        uVar53 = (ulong)(CONCAT24((short)iVar100,iVar100) & 0xffff0000ffff) & 0x100000001;
        iVar95 = (int)uVar53;
        iVar98 = (int)(uVar53 >> 0x20);
        auVar47._0_8_ = CONCAT44((iVar98 << 0x1f) >> 0x1f,(iVar95 << 0x1f) >> 0x1f);
        auVar47._8_4_ = (iVar95 << 0x1f) >> 0x1f;
        auVar47._12_4_ = (iVar98 << 0x1f) >> 0x1f;
        auVar64._8_8_ = auVar47._8_8_;
        auVar64._0_8_ = auVar47._0_8_;
        auVar40 = auVar41 ^ (auVar41 ^ auVar21) & auVar64;
        auVar41 = auVar41 ^ (auVar41 ^ auVar21) & ~auVar47;
        iVar95 = -(uint)(auVar61._0_4_ < auVar40._0_4_);
        iVar98 = -(uint)(auVar33._0_4_ < auVar41._0_4_);
        uVar53 = (ulong)(CONCAT24((short)iVar95,iVar95) & 0xffff0000ffff) & 0x100000001;
        uVar49 = (ulong)(CONCAT24((short)iVar98,iVar98) & 0xffff0000ffff) & 0x100000001;
        iVar95 = (int)uVar53;
        iVar98 = (int)(uVar53 >> 0x20);
        auVar48._0_8_ = CONCAT44((iVar98 << 0x1f) >> 0x1f,(iVar95 << 0x1f) >> 0x1f);
        auVar48._8_4_ = (iVar95 << 0x1f) >> 0x1f;
        auVar48._12_4_ = (iVar98 << 0x1f) >> 0x1f;
        auVar55._8_8_ = auVar48._8_8_;
        auVar55._0_8_ = auVar48._0_8_;
        auVar32 = auVar40 ^ (auVar40 ^ auVar61) & auVar48;
        iVar95 = (int)uVar49;
        iVar98 = (int)(uVar49 >> 0x20);
        auVar61 = auVar61 ^ (auVar61 ^ auVar40) & auVar55;
        auVar50._0_8_ = CONCAT44((iVar98 << 0x1f) >> 0x1f,(iVar95 << 0x1f) >> 0x1f);
        auVar50._8_4_ = (iVar95 << 0x1f) >> 0x1f;
        auVar50._12_4_ = (iVar98 << 0x1f) >> 0x1f;
        auVar62._8_8_ = auVar50._8_8_;
        auVar62._0_8_ = auVar50._0_8_;
        auVar63 = auVar33 ^ (auVar33 ^ auVar41) & auVar62;
        auVar33 = auVar33 ^ (auVar33 ^ auVar41) & ~auVar50;
        iVar95 = -(uint)(auVar32._0_4_ < auVar63._0_4_);
        uStack_178 = auVar61._8_8_;
        local_180 = auVar61._0_8_;
        uStack_148 = auVar33._8_8_;
        local_150 = auVar33._0_8_;
        uVar97 = (int)fVar43 << 1;
        uVar53 = (ulong)(CONCAT24((short)iVar95,iVar95) & 0xffff0000ffff) & 0x100000001;
        iVar95 = (int)uVar53;
        iVar98 = (int)(uVar53 >> 0x20);
        auVar42._0_8_ = CONCAT44((iVar98 << 0x1f) >> 0x1f,(iVar95 << 0x1f) >> 0x1f);
        auVar42._8_4_ = (iVar95 << 0x1f) >> 0x1f;
        auVar42._12_4_ = (iVar98 << 0x1f) >> 0x1f;
        auVar51._8_8_ = auVar42._8_8_;
        auVar51._0_8_ = auVar42._0_8_;
        auVar40 = auVar32 ^ (auVar32 ^ auVar63) & auVar51;
        auVar32 = auVar32 ^ (auVar32 ^ auVar63) & ~auVar42;
        uStack_168 = auVar40._8_8_;
        local_170 = auVar40._0_8_;
        uStack_158 = auVar32._8_8_;
        local_160 = auVar32._0_8_;
        if (auVar61._0_4_ <= fVar38) {
          uVar36 = auVar61._12_2_;
          local_1f0 = iVar46;
          afStack_ad0[uVar23 * 0xc + 3] = auVar61._0_4_;
          afStack_ad0[uVar23 * 0xc] = fVar39;
          auVar61 = *(undefined1 (*) [16])(local_140 + (ulong)uVar36 * 8);
          auVar63 = *(undefined1 (*) [16])(local_130 + (ulong)uVar36 * 0x20);
          afStack_ad0[uVar23 * 0xc + 1] = (float)(uVar36 + 1 >> 1 & 1 | uVar97);
          afStack_ad0[uVar23 * 0xc + 2] = (float)(uVar36 >> 1 & 1 | uVar24);
          *(long *)(afStack_af0 + uVar23 * 0xc + 2) = auVar61._8_8_;
          *(long *)(afStack_af0 + uVar23 * 0xc) = auVar61._0_8_;
          *(long *)(afStack_ae0 + uVar23 * 0xc + 2) = auVar63._8_8_;
          *(long *)(afStack_ae0 + uVar23 * 0xc) = auVar63._0_8_;
        }
        if (auVar40._0_4_ <= fVar38) {
          uVar36 = auVar40._12_2_;
          lVar22 = (long)local_1f0;
          local_1f0 = local_1f0 + 1;
          afStack_ad0[lVar22 * 0xc] = fVar39;
          afStack_ad0[lVar22 * 0xc + 1] = (float)(uVar36 + 1 >> 1 & 1 | uVar97);
          afStack_ad0[lVar22 * 0xc + 3] = auVar40._0_4_;
          afStack_ad0[lVar22 * 0xc + 2] = (float)(uVar36 >> 1 & 1 | uVar24);
          auVar40 = *(undefined1 (*) [16])(local_140 + (ulong)uVar36 * 8);
          auVar61 = *(undefined1 (*) [16])(local_130 + (ulong)uVar36 * 0x20);
          *(long *)(afStack_af0 + lVar22 * 0xc + 2) = auVar40._8_8_;
          *(long *)(afStack_af0 + lVar22 * 0xc) = auVar40._0_8_;
          *(long *)(afStack_ae0 + lVar22 * 0xc + 2) = auVar61._8_8_;
          *(long *)(afStack_ae0 + lVar22 * 0xc) = auVar61._0_8_;
        }
        if (auVar32._0_4_ <= fVar38) {
          uVar36 = auVar32._12_2_;
          lVar22 = (long)local_1f0;
          local_1f0 = local_1f0 + 1;
          afStack_ad0[lVar22 * 0xc] = fVar39;
          afStack_ad0[lVar22 * 0xc + 1] = (float)(uVar36 + 1 >> 1 & 1 | uVar97);
          afStack_ad0[lVar22 * 0xc + 3] = auVar32._0_4_;
          afStack_ad0[lVar22 * 0xc + 2] = (float)(uVar36 >> 1 & 1 | uVar24);
          auVar32 = *(undefined1 (*) [16])(local_140 + (ulong)uVar36 * 8);
          auVar40 = *(undefined1 (*) [16])(local_130 + (ulong)uVar36 * 0x20);
          *(long *)(afStack_af0 + lVar22 * 0xc + 2) = auVar32._8_8_;
          *(long *)(afStack_af0 + lVar22 * 0xc) = auVar32._0_8_;
          *(long *)(afStack_ae0 + lVar22 * 0xc + 2) = auVar40._8_8_;
          *(long *)(afStack_ae0 + lVar22 * 0xc) = auVar40._0_8_;
        }
        uVar29 = uVar30;
        if (auVar33._0_4_ <= fVar38) {
          uVar36 = auVar33._12_2_;
          lVar22 = (long)local_1f0;
          local_1f0 = local_1f0 + 1;
          afStack_ad0[lVar22 * 0xc + 3] = auVar33._0_4_;
          auVar32 = *(undefined1 (*) [16])(local_140 + (ulong)uVar36 * 8);
          auVar40 = *(undefined1 (*) [16])(local_130 + (ulong)uVar36 * 0x20);
          afStack_ad0[lVar22 * 0xc] = fVar39;
          afStack_ad0[lVar22 * 0xc + 1] = (float)(uVar36 + 1 >> 1 & 1 | uVar97);
          afStack_ad0[lVar22 * 0xc + 2] = (float)(uVar36 >> 1 & 1 | uVar24);
          *(long *)(afStack_af0 + lVar22 * 0xc + 2) = auVar32._8_8_;
          *(long *)(afStack_af0 + lVar22 * 0xc) = auVar32._0_8_;
          *(long *)(afStack_ae0 + lVar22 * 0xc + 2) = auVar40._8_8_;
          *(long *)(afStack_ae0 + lVar22 * 0xc) = auVar40._0_8_;
        }
      }
      uVar30 = uVar29;
    } while (local_1f0 != 0);
  }
  *param_9 = uVar29;
  return uVar28;
}


