/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e9433c; name: FUN_02e9433c
 */


void FUN_02e9433c(long param_1,uint *param_2,uint param_3,undefined1 (*param_4) [16])

{
  float *pfVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  float *pfVar17;
  byte *pbVar18;
  long *plVar19;
  undefined4 uVar20;
  long lVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar34;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  int iVar35;
  float fVar36;
  int iVar39;
  int iVar40;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar41;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar42 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  long local_130;
  undefined8 local_128;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined2 local_e0 [8];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if (0 < (int)param_3) {
    puVar2 = (undefined8 *)0x0;
    if (param_4 != (undefined1 (*) [16])0x0) {
      puVar2 = &local_160;
    }
    auVar28._8_4_ = 0x5f7ffff0;
    auVar28._0_8_ = 0x5f7ffff05f7ffff0;
    auVar28._12_4_ = 0x5f7ffff0;
    auVar23 = NEON_fmov(0x3f800000,4);
    uVar22 = (ulong)param_3;
    do {
      uVar4 = *param_2;
      plVar15 = (long *)(*(long *)(param_1 + 0x10) + 0x38);
      if ((*(uint *)((long)plVar15 + (long)((int)uVar4 >> 5) * 4 + *plVar15) >>
           (ulong)(uVar4 & 0x1f) & 1) != 0) {
        lVar21 = *(long *)(param_1 + 8);
        pfVar1 = (float *)(lVar21 + 0x48 + ((ulong)uVar4 & 0xffff) * 0x40 + *(long *)(lVar21 + 0x48)
                          );
        pbVar18 = (byte *)((long)pfVar1 + 0x1e);
        if ((*pbVar18 >> 6 & 1) != 0) {
          pfVar17 = pfVar1 + 0xc;
          plVar15 = (long *)(*(long *)(param_1 + 0x10) + 0x28);
          plVar19 = *(long **)(param_1 + 0x70);
          local_78 = **(undefined8 **)(param_1 + 0x58);
          uStack_70 = (*(undefined8 **)(param_1 + 0x58))[1];
          uVar12 = *(undefined8 *)((long)plVar15 + (long)(int)uVar4 * 8 + *plVar15);
          puVar13 = *(undefined8 **)(param_1 + 0x60);
          lVar3 = 0;
          if (*(long *)pfVar17 != 0) {
            lVar3 = *(long *)pfVar17 + (long)pfVar17;
          }
          uVar16 = puVar13[3];
          iVar10 = (int)(uVar16 >> 0x20) + (uint)*(byte *)(lVar21 + 0x1c);
          uVar16 = (ulong)((uVar4 + 1 << (ulong)(-iVar10 & 0x1f)) - 1) |
                   uVar16 & *(uint *)(PTR_DAT_047d1a60 + ((long)uVar16 >> 0x20) * 4);
          plVar15 = (long *)**(long **)(param_1 + 0x48);
          uVar20 = (undefined4)uVar16;
          if (plVar15 != (long *)0x0) {
            lVar11 = 0;
            if (*(long *)pfVar17 != 0) {
              lVar11 = *(long *)pfVar17 + (long)pfVar17;
            }
            (**(code **)(*plVar15 + 0x40))
                      (plVar15,*(undefined2 *)(pfVar1 + 0xb),6,*puVar13,puVar13[1],lVar21,uVar16,
                       lVar11,&local_78);
            lVar11 = *(long *)(param_1 + 0x48);
            if (*(long *)(lVar11 + 8) != 0) {
              local_e0[0] = *(undefined2 *)(lVar11 + 0x10);
              uVar14 = *(undefined8 *)(lVar11 + 0x14);
              *(undefined4 *)((undefined8 *)((ulong)local_e0 | 4) + 1) =
                   *(undefined4 *)(lVar11 + 0x1c);
              *(undefined8 *)((ulong)local_e0 | 4) = uVar14;
              puVar13 = *(undefined8 **)(param_1 + 0x50);
              local_d0 = *puVar13;
              local_c8 = puVar13[1];
              local_c0 = puVar13[2];
              local_b8 = *(undefined4 *)(puVar13 + 3);
              local_140 = CONCAT62(local_140._2_6_,(undefined2)local_78);
              uVar14 = *(undefined8 *)((ulong)&local_78 | 4);
              local_b0 = 0;
              *(undefined4 *)((undefined8 *)((ulong)&local_140 | 4) + 1) =
                   *(undefined4 *)((undefined8 *)((ulong)&local_78 | 4) + 1);
              *(undefined8 *)((ulong)&local_140 | 4) = uVar14;
              local_130 = **(long **)(param_1 + 0x60);
              local_128 = (*(long **)(param_1 + 0x60))[1];
              local_118 = CONCAT44(local_118._4_4_,uVar20);
              local_110 = 0;
              if (*(long *)pfVar17 != 0) {
                local_110 = *(long *)pfVar17 + (long)pfVar17;
              }
              local_120 = lVar21;
              uVar16 = (**(code **)(**(long **)(lVar11 + 8) + 0x40))
                                 (*(long **)(lVar11 + 8),6,1,local_e0,&local_140);
              if ((uVar16 & 1) == 0) goto LAB_02e94a80;
            }
          }
          if (*(char *)(lVar3 + 0x19) == '\x03') {
            memcpy(local_e0,*(void **)(param_1 + 0x48),0x60);
            if ((*pbVar18 >> 3 & 1) == 0) {
              fStack_90 = pfVar1[4];
              fStack_8c = pfVar1[5];
              fStack_88 = pfVar1[6];
              if ((*pbVar18 >> 2 & 1) == 0) {
                auVar26._0_4_ = *(float *)(param_1 + 0x20) - fStack_90;
                auVar26._4_4_ = *(float *)(param_1 + 0x24) - fStack_8c;
                auVar26._8_4_ = *(float *)(param_1 + 0x28) - fStack_88;
                auVar26._12_4_ = *(float *)(param_1 + 0x2c) - 0.0;
                fStack_90 = *(float *)(param_1 + 0x30) - fStack_90;
                fStack_8c = *(float *)(param_1 + 0x34) - fStack_8c;
                fStack_88 = *(float *)(param_1 + 0x38) - fStack_88;
                fStack_84 = *(float *)(param_1 + 0x3c) - 0.0;
              }
              else {
                fVar36 = *pfVar1;
                fVar34 = pfVar1[1];
                fVar27 = pfVar1[2];
                fVar61 = pfVar1[3];
                fVar45 = (float)*(undefined8 *)(param_1 + 0x38);
                fVar55 = (float)*(undefined8 *)(param_1 + 0x30);
                fVar43 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
                fVar48 = fVar34 + fVar34;
                fVar50 = fVar27 + fVar27;
                fVar41 = (fVar36 + fVar36) * fVar36;
                fVar62 = (fVar36 + fVar36) * fVar61;
                fVar47 = 1.0 - fVar27 * fVar50;
                fVar59 = fVar48 * fVar36 + fVar50 * fVar61;
                fVar57 = fVar48 * fVar36 - fVar50 * fVar61;
                fVar46 = (fVar55 - *(float *)(param_1 + 0x20)) * 0.5;
                fVar49 = (fVar43 - *(float *)(param_1 + 0x24)) * 0.5;
                fVar44 = (fVar45 - *(float *)(param_1 + 0x28)) * 0.5;
                fStack_90 = (*(float *)(param_1 + 0x20) + fVar55) * 0.5 - fStack_90;
                fStack_8c = (*(float *)(param_1 + 0x24) + fVar43) * 0.5 - fStack_8c;
                fStack_88 = (*(float *)(param_1 + 0x28) + fVar45) * 0.5 - fStack_88;
                fVar60 = fVar47 - fVar48 * fVar34;
                fVar47 = fVar47 - fVar41;
                fVar45 = fVar50 * fVar36 - fVar48 * fVar61;
                fVar55 = fVar50 * fVar34 + fVar62;
                fVar62 = fVar50 * fVar34 - fVar62;
                fVar43 = fVar50 * fVar36 + fVar48 * fVar61;
                fVar27 = (1.0 - fVar41) - fVar48 * fVar34;
                fVar61 = ABS(fVar45 * fVar44) + ABS(fVar60 * fVar46) + ABS(fVar59 * fVar49);
                fVar48 = ABS(fVar55 * fVar44) + ABS(fVar57 * fVar46) + ABS(fVar47 * fVar49);
                fVar50 = ABS(fVar27 * fVar44) + ABS(fVar43 * fVar46) + ABS(fVar62 * fVar49);
                fVar46 = ABS(fVar44 * 0.0) + ABS(fVar62 * fVar46) + ABS(fVar49 * 0.0);
                fVar36 = fVar45 * fStack_88 + fVar60 * fStack_90 + fVar59 * fStack_8c;
                fVar34 = fVar55 * fStack_88 + fVar57 * fStack_90 + fVar47 * fStack_8c;
                fVar27 = fVar27 * fStack_88 + fVar43 * fStack_90 + fVar62 * fStack_8c;
                fStack_84 = fStack_88 * 0.0 + fVar62 * fStack_90 + fStack_8c * 0.0;
                auVar26._0_4_ = fVar36 - fVar61;
                auVar26._4_4_ = fVar34 - fVar48;
                auVar26._8_4_ = fVar27 - fVar50;
                auVar26._12_4_ = fStack_84 - fVar46;
                fStack_90 = fVar36 + fVar61;
                fStack_8c = fVar34 + fVar48;
                fStack_88 = fVar27 + fVar50;
                fStack_84 = fStack_84 + fVar46;
              }
              uStack_98 = auVar26._8_8_;
              local_a0 = auVar26._0_8_;
            }
            else {
              fVar36 = *(float *)(param_1 + 0x20);
              fVar34 = *(float *)(param_1 + 0x24);
              fVar27 = *(float *)(param_1 + 0x28);
              fVar61 = *(float *)(param_1 + 0x2c);
              fStack_90 = *(float *)(param_1 + 0x30);
              fStack_8c = *(float *)(param_1 + 0x34);
              fStack_88 = *(float *)(param_1 + 0x38);
              fStack_84 = *(float *)(param_1 + 0x3c);
              iVar35 = -(uint)(fStack_90 < fVar36);
              iVar39 = -(uint)(fStack_8c < fVar34);
              iVar40 = -(uint)(fStack_88 < fVar27);
              if (CONCAT13((byte)((uint)iVar39 >> 0x18) | (byte)((uint)iVar35 >> 0x18) |
                           (byte)((uint)iVar40 >> 0x18),
                           CONCAT12((byte)((uint)iVar39 >> 0x10) | (byte)((uint)iVar35 >> 0x10) |
                                    (byte)((uint)iVar40 >> 0x10),
                                    CONCAT11((byte)((uint)iVar39 >> 8) | (byte)((uint)iVar35 >> 8) |
                                             (byte)((uint)iVar40 >> 8),
                                             (byte)iVar39 | (byte)iVar35 | (byte)iVar40))) == 0) {
                local_190 = auVar23._0_4_;
                fStack_18c = auVar23._4_4_;
                fStack_188 = auVar23._8_4_;
                fStack_184 = auVar23._12_4_;
                local_190 = local_190 / pfVar1[8];
                fStack_18c = fStack_18c / pfVar1[9];
                fStack_188 = fStack_188 / pfVar1[10];
                fStack_184 = fStack_184 / 1.0;
                fVar61 = *pfVar1;
                fVar62 = pfVar1[1];
                fVar48 = pfVar1[2];
                fVar50 = pfVar1[3];
                fVar49 = fVar62 + fVar62;
                fVar45 = fVar48 + fVar48;
                fVar47 = (fVar61 + fVar61) * fVar61;
                fVar46 = (fVar61 + fVar61) * fVar50;
                fVar48 = 1.0 - fVar48 * fVar45;
                fVar56 = fVar45 * fVar62 - fVar46;
                fVar54 = pfVar1[6];
                fVar44 = local_190 * (fVar48 - fVar49 * fVar62);
                fVar55 = fStack_18c * (fVar49 * fVar61 - fVar45 * fVar50);
                fVar41 = fStack_188 * (fVar45 * fVar61 + fVar49 * fVar50);
                fVar43 = fStack_184 * fVar56;
                fVar51 = local_190 * (fVar49 * fVar61 + fVar45 * fVar50);
                fVar52 = fStack_18c * (fVar48 - fVar47);
                fVar56 = fStack_188 * fVar56;
                fVar53 = fStack_184 * 0.0;
                local_190 = local_190 * (fVar45 * fVar61 - fVar49 * fVar50);
                fStack_18c = fStack_18c * (fVar45 * fVar62 + fVar46);
                fStack_188 = fStack_188 * ((1.0 - fVar47) - fVar49 * fVar62);
                fStack_184 = fStack_184 * 0.0;
                fVar45 = (float)*(undefined8 *)(pfVar1 + 4);
                fVar57 = (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20);
                fVar61 = (fStack_90 - fVar36) * 0.5;
                fVar62 = (fStack_8c - fVar34) * 0.5;
                fVar48 = (fStack_88 - fVar27) * 0.5;
                fVar47 = (fVar36 + fStack_90) * 0.5;
                fVar59 = (fVar34 + fStack_8c) * 0.5;
                fVar60 = (fVar27 + fStack_88) * 0.5;
                fVar50 = ABS(local_190 * fVar48) + ABS(fVar44 * fVar61) + ABS(fVar51 * fVar62);
                fVar46 = ABS(fStack_18c * fVar48) + ABS(fVar55 * fVar61) + ABS(fVar52 * fVar62);
                fVar49 = ABS(fStack_188 * fVar48) + ABS(fVar41 * fVar61) + ABS(fVar56 * fVar62);
                fVar62 = ABS(fStack_184 * fVar48) + ABS(fVar43 * fVar61) + ABS(fVar53 * fVar62);
                fVar36 = local_190 * fVar60 + fVar44 * fVar47 + fVar51 * fVar59 +
                         -(local_190 * fVar54 + fVar44 * fVar45 + fVar51 * fVar57);
                fVar34 = fStack_18c * fVar60 + fVar55 * fVar47 + fVar52 * fVar59 +
                         -(fStack_18c * fVar54 + fVar55 * fVar45 + fVar52 * fVar57);
                fVar27 = fStack_188 * fVar60 + fVar41 * fVar47 + fVar56 * fVar59 +
                         -(fStack_188 * fVar54 + fVar41 * fVar45 + fVar56 * fVar57);
                fVar61 = fStack_184 * fVar60 + fVar43 * fVar47 + fVar53 * fVar59 +
                         fStack_184 * fVar54 + fVar43 * fVar45 + fVar53 * fVar57;
                fStack_90 = fVar50 + fVar36;
                fStack_8c = fVar46 + fVar34;
                fStack_88 = fVar49 + fVar27;
                fStack_84 = fVar62 + fVar61;
                fVar36 = fVar36 - fVar50;
                fVar34 = fVar34 - fVar46;
                fVar27 = fVar27 - fVar49;
                fVar61 = fVar61 - fVar62;
              }
              uStack_98 = CONCAT44(fVar61,fVar27);
              local_a0 = CONCAT44(fVar34,fVar36);
            }
            puVar13 = *(undefined8 **)(param_1 + 0x60);
            uVar16 = (ulong)local_110 >> 8;
            local_140 = *puVar13;
            uStack_138 = puVar13[1];
            local_120 = puVar13[4];
            local_100 = puVar13[8];
            uStack_f8 = puVar13[9];
            uStack_f0 = puVar13[10];
            uStack_e8 = puVar13[0xb];
            auVar33._8_4_ = 0xdf7ffff0;
            auVar33._0_8_ = 0xdf7ffff0df7ffff0;
            auVar33._12_4_ = 0xdf7ffff0;
            uStack_108 = *(undefined4 *)(puVar13 + 7);
            local_110 = CONCAT44(*(undefined4 *)((long)puVar13 + 0x34),
                                 (int)CONCAT71((int7)uVar16,*(undefined1 *)(puVar13 + 6)));
            local_128 = CONCAT44(iVar10,uVar20);
            uStack_158 = auVar33._8_8_;
            local_160 = 0xdf7ffff0df7ffff0;
            uStack_150 = 0x5f7ffff05f7ffff0;
            uStack_148 = auVar28._8_8_;
            local_130 = lVar3;
            local_118 = uVar12;
            (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar3 + 0x18) * 0x200 + 0xe0))
                      (lVar3,*(undefined8 *)(param_1 + 0x40),local_e0,
                       *(undefined8 *)(param_1 + 0x50),&local_78,&local_140,plVar19,puVar2);
            if (param_4 != (undefined1 (*) [16])0x0) {
              fVar36 = pfVar1[8];
              fVar34 = pfVar1[9];
              fVar27 = pfVar1[10];
              bVar5 = *pbVar18;
              fVar61 = (float)((ulong)uStack_150 >> 0x20);
              fVar62 = (float)((ulong)uStack_148 >> 0x20);
              fVar48 = (float)((ulong)local_160 >> 0x20);
              fVar50 = (float)((ulong)uStack_158 >> 0x20);
              if ((bVar5 >> 2 & 1) == 0) {
                auVar42._8_8_ = uStack_158;
                auVar42._0_8_ = local_160;
                auVar37._8_8_ = uStack_148;
                auVar37._0_8_ = uStack_150;
                if ((bVar5 >> 3 & 1) != 0) {
                  fVar46 = fVar36 * (float)local_160;
                  fVar48 = fVar34 * fVar48;
                  fVar49 = fVar27 * (float)uStack_158;
                  fVar50 = fVar50 * 1.0;
                  auVar29._0_4_ = fVar36 * (float)uStack_150;
                  auVar29._4_4_ = fVar34 * fVar61;
                  auVar29._8_4_ = fVar27 * (float)uStack_148;
                  auVar29._12_4_ = fVar62 * 1.0;
                  auVar6._4_4_ = fVar48;
                  auVar6._0_4_ = fVar46;
                  auVar6._8_4_ = fVar49;
                  auVar6._12_4_ = fVar50;
                  auVar42 = NEON_fmin(auVar6,auVar29,4);
                  auVar7._4_4_ = fVar48;
                  auVar7._0_4_ = fVar46;
                  auVar7._8_4_ = fVar49;
                  auVar7._12_4_ = fVar50;
                  auVar37 = NEON_fmax(auVar7,auVar29,4);
                }
                auVar30._0_4_ = pfVar1[4] + auVar42._0_4_;
                auVar30._4_4_ = pfVar1[5] + auVar42._4_4_;
                auVar30._8_4_ = pfVar1[6] + auVar42._8_4_;
                auVar30._12_4_ = auVar42._12_4_ + 0.0;
                auVar24._0_4_ = pfVar1[4] + auVar37._0_4_;
                auVar24._4_4_ = pfVar1[5] + auVar37._4_4_;
                auVar24._8_4_ = pfVar1[6] + auVar37._8_4_;
                auVar24._12_4_ = auVar37._12_4_ + 0.0;
                auVar25 = NEON_fmax(auVar24,*(undefined1 (*) [16])(param_1 + 0x30),4);
                auVar31 = NEON_fmin(auVar30,*(undefined1 (*) [16])(param_1 + 0x20),4);
              }
              else {
                fVar46 = *pfVar1;
                fVar49 = pfVar1[1];
                fVar44 = pfVar1[2];
                fVar55 = pfVar1[3];
                fVar43 = fVar49 + fVar49;
                fVar45 = fVar44 + fVar44;
                fVar47 = (fVar46 + fVar46) * fVar46;
                fVar41 = (fVar46 + fVar46) * fVar55;
                auVar38._0_4_ = -(uint)((bVar5 & 8) == 0);
                auVar38._4_4_ = auVar38._0_4_;
                auVar38._8_4_ = auVar38._0_4_;
                auVar38._12_4_ = auVar38._0_4_;
                auVar58._0_4_ = (float)uStack_150 - fStack_90;
                auVar58._4_4_ = fVar61 - fStack_8c;
                auVar58._8_4_ = (float)uStack_148 - fStack_88;
                auVar58._12_4_ = fVar62 - fStack_84;
                fVar61 = (float)local_a0 - (float)local_160;
                fVar48 = (float)((ulong)local_a0 >> 0x20) - fVar48;
                fVar62 = (float)uStack_98 - (float)uStack_158;
                fVar50 = (float)((ulong)uStack_98 >> 0x20) - fVar50;
                auVar32._0_4_ = ABS(fVar36) * fVar61;
                auVar32._4_4_ = ABS(fVar34) * fVar48;
                auVar32._8_4_ = ABS(fVar27) * fVar62;
                auVar32._12_4_ = fVar50 * 1.0;
                auVar9._4_4_ = ABS(fVar34) * auVar58._4_4_;
                auVar9._0_4_ = ABS(fVar36) * auVar58._0_4_;
                auVar9._8_4_ = ABS(fVar27) * auVar58._8_4_;
                auVar9._12_4_ = auVar58._12_4_ * 1.0;
                auVar8._4_4_ = fVar48;
                auVar8._0_4_ = fVar61;
                auVar8._8_4_ = fVar62;
                auVar8._12_4_ = fVar50;
                fVar36 = 1.0 - fVar44 * fVar45;
                auVar26 = NEON_smin(auVar32 ^ (auVar32 ^ auVar8) & auVar38,
                                    auVar58 ^ (auVar58 ^ auVar9) & ~auVar38,4);
                uVar12 = NEON_fminp(auVar26._0_8_,auVar26._0_8_,4);
                uVar14 = NEON_fmin(CONCAT44(auVar26._8_4_,auVar26._8_4_),uVar12,4);
                uVar12 = CONCAT44(ABS(fVar45 * fVar49 + fVar41) +
                                  ABS(fVar43 * fVar46 - fVar45 * fVar55) + ABS(fVar36 - fVar47),
                                  ABS(fVar45 * fVar46 - fVar43 * fVar55) +
                                  ABS(fVar36 - fVar43 * fVar49) +
                                  ABS(fVar43 * fVar46 + fVar45 * fVar55));
                fVar36 = ABS((1.0 - fVar47) - fVar43 * fVar49) +
                         ABS(fVar45 * fVar46 + fVar43 * fVar55) + ABS(fVar45 * fVar49 - fVar41);
                uVar12 = NEON_fmaxp(uVar12,uVar12,4);
                uVar12 = NEON_fmax(CONCAT44(fVar36,fVar36),uVar12,4);
                fVar36 = (float)uVar14 / (float)uVar12;
                fVar34 = (float)((ulong)uVar14 >> 0x20) / (float)((ulong)uVar12 >> 0x20);
                auVar25._0_4_ = fVar36 + *(float *)(param_1 + 0x30);
                auVar25._4_4_ = fVar34 + *(float *)(param_1 + 0x34);
                auVar25._8_4_ = fVar36 + *(float *)(param_1 + 0x38);
                auVar25._12_4_ = fVar34 + *(float *)(param_1 + 0x3c);
                auVar31._0_4_ = *(float *)(param_1 + 0x20) - fVar36;
                auVar31._4_4_ = *(float *)(param_1 + 0x24) - fVar34;
                auVar31._8_4_ = *(float *)(param_1 + 0x28) - fVar36;
                auVar31._12_4_ = *(float *)(param_1 + 0x2c) - fVar34;
              }
              auVar26 = NEON_fmin(auVar25,param_4[1],4);
              auVar33 = NEON_fmax(auVar31,*param_4,4);
              *(long *)(*param_4 + 8) = auVar33._8_8_;
              *(long *)*param_4 = auVar33._0_8_;
              *(long *)(param_4[1] + 8) = auVar26._8_8_;
              *(long *)param_4[1] = auVar26._0_8_;
            }
          }
          else {
            iVar10 = (int)plVar19[1];
            lVar21 = (long)iVar10;
            if ((int)(*(uint *)((long)plVar19 + 0xc) & 0x7fffffff) <= iVar10) {
              FUN_02e931c8(plVar19,PTR_PTR_047d1a50,lVar21 + 1);
              iVar10 = (int)plVar19[1];
            }
            *(undefined4 *)(*plVar19 + (long)iVar10 * 4) = uVar20;
            *(int *)(plVar19 + 1) = (int)(lVar21 + 1);
          }
        }
      }
LAB_02e94a80:
      uVar22 = uVar22 - 1;
      param_2 = param_2 + 1;
    } while (uVar22 != 0);
  }
  return;
}


