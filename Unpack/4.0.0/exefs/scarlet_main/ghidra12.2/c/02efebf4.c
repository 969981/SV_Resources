/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02efebf4; name: FUN_02efebf4
 */


void FUN_02efebf4(long param_1,uint *param_2,uint param_3,undefined1 (*param_4) [16])

{
  float *pfVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long *plVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  float *pfVar18;
  byte *pbVar19;
  undefined4 uVar20;
  long lVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar35;
  undefined1 auVar34 [16];
  int iVar36;
  float fVar37;
  int iVar40;
  int iVar41;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar42;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar43 [16];
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
  float fVar58;
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
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
    auVar29._8_4_ = 0x5f7ffff0;
    auVar29._0_8_ = 0x5f7ffff05f7ffff0;
    auVar29._12_4_ = 0x5f7ffff0;
    auVar23 = NEON_fmov(0x3f800000,4);
    uVar22 = (ulong)param_3;
    do {
      uVar3 = *param_2;
      plVar13 = (long *)(*(long *)(param_1 + 0x10) + 0x28);
      lVar16 = *plVar13;
      lVar21 = 0;
      if (lVar16 != 0) {
        lVar21 = lVar16 + (long)plVar13;
      }
      uVar5 = (int)(((ulong)uVar3 & 0xffff) >> 5) - *(int *)(lVar21 + 0x28);
      if (((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(lVar21 + 0x20))) &&
         ((*(uint *)(lVar21 + 0x18 + (ulong)uVar5 * 4 + *(long *)(lVar21 + 0x18)) >>
           (ulong)(uVar3 & 0x1f) & 1) != 0)) {
        lVar21 = *(long *)(param_1 + 8);
        pfVar1 = (float *)(lVar21 + 0x48 + ((ulong)uVar3 & 0xffff) * 0x40 + *(long *)(lVar21 + 0x48)
                          );
        pbVar19 = (byte *)((long)pfVar1 + 0x1e);
        if ((*pbVar19 >> 6 & 1) != 0) {
          pfVar18 = pfVar1 + 0xc;
          plVar13 = *(long **)(param_1 + 0x70);
          local_78 = **(undefined8 **)(param_1 + 0x58);
          uStack_70 = (*(undefined8 **)(param_1 + 0x58))[1];
          lVar16 = 0;
          if (*(long *)pfVar18 != 0) {
            lVar16 = *(long *)pfVar18 + (long)pfVar18;
          }
          puVar14 = *(undefined8 **)(param_1 + 0x60);
          uVar17 = puVar14[3];
          iVar11 = (int)(uVar17 >> 0x20) + (uint)*(byte *)(lVar21 + 0x1c);
          uVar17 = (ulong)((uVar3 + 1 << (ulong)(-iVar11 & 0x1f)) - 1) |
                   uVar17 & *(uint *)(PTR_DAT_047d1a60 + ((long)uVar17 >> 0x20) * 4);
          plVar10 = (long *)**(long **)(param_1 + 0x48);
          uVar20 = (undefined4)uVar17;
          if (plVar10 != (long *)0x0) {
            lVar12 = 0;
            if (*(long *)pfVar18 != 0) {
              lVar12 = *(long *)pfVar18 + (long)pfVar18;
            }
            (**(code **)(*plVar10 + 0x40))
                      (plVar10,*(undefined2 *)(pfVar1 + 0xb),6,*puVar14,puVar14[1],lVar21,uVar17,
                       lVar12,&local_78);
            lVar12 = *(long *)(param_1 + 0x48);
            if (*(long *)(lVar12 + 8) != 0) {
              local_e0[0] = *(undefined2 *)(lVar12 + 0x10);
              uVar15 = *(undefined8 *)(lVar12 + 0x14);
              *(undefined4 *)((undefined8 *)((ulong)local_e0 | 4) + 1) =
                   *(undefined4 *)(lVar12 + 0x1c);
              *(undefined8 *)((ulong)local_e0 | 4) = uVar15;
              puVar14 = *(undefined8 **)(param_1 + 0x50);
              local_d0 = *puVar14;
              local_c8 = puVar14[1];
              local_c0 = puVar14[2];
              local_b8 = *(undefined4 *)(puVar14 + 3);
              local_140 = CONCAT62(local_140._2_6_,(undefined2)local_78);
              uVar15 = *(undefined8 *)((ulong)&local_78 | 4);
              local_b0 = 0;
              *(undefined4 *)((undefined8 *)((ulong)&local_140 | 4) + 1) =
                   *(undefined4 *)((undefined8 *)((ulong)&local_78 | 4) + 1);
              *(undefined8 *)((ulong)&local_140 | 4) = uVar15;
              local_130 = **(long **)(param_1 + 0x60);
              local_128 = (*(long **)(param_1 + 0x60))[1];
              local_118 = CONCAT44(local_118._4_4_,uVar20);
              local_110 = 0;
              if (*(long *)pfVar18 != 0) {
                local_110 = *(long *)pfVar18 + (long)pfVar18;
              }
              local_120 = lVar21;
              uVar17 = (**(code **)(**(long **)(lVar12 + 8) + 0x40))
                                 (*(long **)(lVar12 + 8),6,1,local_e0,&local_140);
              if ((uVar17 & 1) == 0) goto LAB_02eff340;
            }
          }
          if (*(char *)(lVar16 + 0x19) == '\x03') {
            memcpy(local_e0,*(void **)(param_1 + 0x48),0x60);
            if ((*pbVar19 >> 3 & 1) == 0) {
              fStack_90 = pfVar1[4];
              fStack_8c = pfVar1[5];
              fStack_88 = pfVar1[6];
              if ((*pbVar19 >> 2 & 1) == 0) {
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
                fVar37 = *pfVar1;
                fVar35 = pfVar1[1];
                fVar27 = pfVar1[2];
                fVar62 = pfVar1[3];
                fVar46 = (float)*(undefined8 *)(param_1 + 0x38);
                fVar56 = (float)*(undefined8 *)(param_1 + 0x30);
                fVar44 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
                fVar49 = fVar35 + fVar35;
                fVar51 = fVar27 + fVar27;
                fVar42 = (fVar37 + fVar37) * fVar37;
                fVar63 = (fVar37 + fVar37) * fVar62;
                fVar48 = 1.0 - fVar27 * fVar51;
                fVar60 = fVar49 * fVar37 + fVar51 * fVar62;
                fVar58 = fVar49 * fVar37 - fVar51 * fVar62;
                fVar47 = (fVar56 - *(float *)(param_1 + 0x20)) * 0.5;
                fVar50 = (fVar44 - *(float *)(param_1 + 0x24)) * 0.5;
                fVar45 = (fVar46 - *(float *)(param_1 + 0x28)) * 0.5;
                fStack_90 = (*(float *)(param_1 + 0x20) + fVar56) * 0.5 - fStack_90;
                fStack_8c = (*(float *)(param_1 + 0x24) + fVar44) * 0.5 - fStack_8c;
                fStack_88 = (*(float *)(param_1 + 0x28) + fVar46) * 0.5 - fStack_88;
                fVar61 = fVar48 - fVar49 * fVar35;
                fVar48 = fVar48 - fVar42;
                fVar46 = fVar51 * fVar37 - fVar49 * fVar62;
                fVar56 = fVar51 * fVar35 + fVar63;
                fVar63 = fVar51 * fVar35 - fVar63;
                fVar44 = fVar51 * fVar37 + fVar49 * fVar62;
                fVar27 = (1.0 - fVar42) - fVar49 * fVar35;
                fVar62 = ABS(fVar46 * fVar45) + ABS(fVar61 * fVar47) + ABS(fVar60 * fVar50);
                fVar49 = ABS(fVar56 * fVar45) + ABS(fVar58 * fVar47) + ABS(fVar48 * fVar50);
                fVar51 = ABS(fVar27 * fVar45) + ABS(fVar44 * fVar47) + ABS(fVar63 * fVar50);
                fVar47 = ABS(fVar45 * 0.0) + ABS(fVar63 * fVar47) + ABS(fVar50 * 0.0);
                fVar37 = fVar46 * fStack_88 + fVar61 * fStack_90 + fVar60 * fStack_8c;
                fVar35 = fVar56 * fStack_88 + fVar58 * fStack_90 + fVar48 * fStack_8c;
                fVar27 = fVar27 * fStack_88 + fVar44 * fStack_90 + fVar63 * fStack_8c;
                fStack_84 = fStack_88 * 0.0 + fVar63 * fStack_90 + fStack_8c * 0.0;
                auVar26._0_4_ = fVar37 - fVar62;
                auVar26._4_4_ = fVar35 - fVar49;
                auVar26._8_4_ = fVar27 - fVar51;
                auVar26._12_4_ = fStack_84 - fVar47;
                fStack_90 = fVar37 + fVar62;
                fStack_8c = fVar35 + fVar49;
                fStack_88 = fVar27 + fVar51;
                fStack_84 = fStack_84 + fVar47;
              }
              uStack_98 = auVar26._8_8_;
              local_a0 = auVar26._0_8_;
            }
            else {
              fVar37 = *(float *)(param_1 + 0x20);
              fVar35 = *(float *)(param_1 + 0x24);
              fVar27 = *(float *)(param_1 + 0x28);
              fVar62 = *(float *)(param_1 + 0x2c);
              fStack_90 = *(float *)(param_1 + 0x30);
              fStack_8c = *(float *)(param_1 + 0x34);
              fStack_88 = *(float *)(param_1 + 0x38);
              fStack_84 = *(float *)(param_1 + 0x3c);
              iVar36 = -(uint)(fStack_90 < fVar37);
              iVar40 = -(uint)(fStack_8c < fVar35);
              iVar41 = -(uint)(fStack_88 < fVar27);
              if (CONCAT13((byte)((uint)iVar40 >> 0x18) | (byte)((uint)iVar36 >> 0x18) |
                           (byte)((uint)iVar41 >> 0x18),
                           CONCAT12((byte)((uint)iVar40 >> 0x10) | (byte)((uint)iVar36 >> 0x10) |
                                    (byte)((uint)iVar41 >> 0x10),
                                    CONCAT11((byte)((uint)iVar40 >> 8) | (byte)((uint)iVar36 >> 8) |
                                             (byte)((uint)iVar41 >> 8),
                                             (byte)iVar40 | (byte)iVar36 | (byte)iVar41))) == 0) {
                local_180 = auVar23._0_4_;
                fStack_17c = auVar23._4_4_;
                fStack_178 = auVar23._8_4_;
                fStack_174 = auVar23._12_4_;
                local_180 = local_180 / pfVar1[8];
                fStack_17c = fStack_17c / pfVar1[9];
                fStack_178 = fStack_178 / pfVar1[10];
                fStack_174 = fStack_174 / 1.0;
                fVar62 = *pfVar1;
                fVar63 = pfVar1[1];
                fVar49 = pfVar1[2];
                fVar51 = pfVar1[3];
                fVar50 = fVar63 + fVar63;
                fVar46 = fVar49 + fVar49;
                fVar48 = (fVar62 + fVar62) * fVar62;
                fVar47 = (fVar62 + fVar62) * fVar51;
                fVar49 = 1.0 - fVar49 * fVar46;
                fVar57 = fVar46 * fVar63 - fVar47;
                fVar55 = pfVar1[6];
                fVar45 = local_180 * (fVar49 - fVar50 * fVar63);
                fVar56 = fStack_17c * (fVar50 * fVar62 - fVar46 * fVar51);
                fVar42 = fStack_178 * (fVar46 * fVar62 + fVar50 * fVar51);
                fVar44 = fStack_174 * fVar57;
                fVar52 = local_180 * (fVar50 * fVar62 + fVar46 * fVar51);
                fVar53 = fStack_17c * (fVar49 - fVar48);
                fVar57 = fStack_178 * fVar57;
                fVar54 = fStack_174 * 0.0;
                local_180 = local_180 * (fVar46 * fVar62 - fVar50 * fVar51);
                fStack_17c = fStack_17c * (fVar46 * fVar63 + fVar47);
                fStack_178 = fStack_178 * ((1.0 - fVar48) - fVar50 * fVar63);
                fStack_174 = fStack_174 * 0.0;
                fVar46 = (float)*(undefined8 *)(pfVar1 + 4);
                fVar58 = (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20);
                fVar62 = (fStack_90 - fVar37) * 0.5;
                fVar63 = (fStack_8c - fVar35) * 0.5;
                fVar49 = (fStack_88 - fVar27) * 0.5;
                fVar48 = (fVar37 + fStack_90) * 0.5;
                fVar60 = (fVar35 + fStack_8c) * 0.5;
                fVar61 = (fVar27 + fStack_88) * 0.5;
                fVar51 = ABS(local_180 * fVar49) + ABS(fVar45 * fVar62) + ABS(fVar52 * fVar63);
                fVar47 = ABS(fStack_17c * fVar49) + ABS(fVar56 * fVar62) + ABS(fVar53 * fVar63);
                fVar50 = ABS(fStack_178 * fVar49) + ABS(fVar42 * fVar62) + ABS(fVar57 * fVar63);
                fVar63 = ABS(fStack_174 * fVar49) + ABS(fVar44 * fVar62) + ABS(fVar54 * fVar63);
                fVar37 = local_180 * fVar61 + fVar45 * fVar48 + fVar52 * fVar60 +
                         -(local_180 * fVar55 + fVar45 * fVar46 + fVar52 * fVar58);
                fVar35 = fStack_17c * fVar61 + fVar56 * fVar48 + fVar53 * fVar60 +
                         -(fStack_17c * fVar55 + fVar56 * fVar46 + fVar53 * fVar58);
                fVar27 = fStack_178 * fVar61 + fVar42 * fVar48 + fVar57 * fVar60 +
                         -(fStack_178 * fVar55 + fVar42 * fVar46 + fVar57 * fVar58);
                fVar62 = fStack_174 * fVar61 + fVar44 * fVar48 + fVar54 * fVar60 +
                         fStack_174 * fVar55 + fVar44 * fVar46 + fVar54 * fVar58;
                fStack_90 = fVar51 + fVar37;
                fStack_8c = fVar47 + fVar35;
                fStack_88 = fVar50 + fVar27;
                fStack_84 = fVar63 + fVar62;
                fVar37 = fVar37 - fVar51;
                fVar35 = fVar35 - fVar47;
                fVar27 = fVar27 - fVar50;
                fVar62 = fVar62 - fVar63;
              }
              uStack_98 = CONCAT44(fVar62,fVar27);
              local_a0 = CONCAT44(fVar35,fVar37);
            }
            puVar14 = *(undefined8 **)(param_1 + 0x60);
            uVar17 = (ulong)local_110 >> 8;
            local_140 = *puVar14;
            uStack_138 = puVar14[1];
            local_120 = puVar14[4];
            local_118 = 0;
            local_100 = puVar14[8];
            uStack_f8 = puVar14[9];
            uStack_f0 = puVar14[10];
            uStack_e8 = puVar14[0xb];
            auVar34._8_4_ = 0xdf7ffff0;
            auVar34._0_8_ = 0xdf7ffff0df7ffff0;
            auVar34._12_4_ = 0xdf7ffff0;
            uStack_108 = *(undefined4 *)(puVar14 + 7);
            local_110 = CONCAT44(*(undefined4 *)((long)puVar14 + 0x34),
                                 (int)CONCAT71((int7)uVar17,*(undefined1 *)(puVar14 + 6)));
            local_128 = CONCAT44(iVar11,uVar20);
            uStack_158 = auVar34._8_8_;
            local_160 = 0xdf7ffff0df7ffff0;
            uStack_150 = 0x5f7ffff05f7ffff0;
            uStack_148 = auVar29._8_8_;
            local_130 = lVar16;
            (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar16 + 0x18) * 0x200 + 0xe0)
            )(lVar16,*(undefined8 *)(param_1 + 0x40),local_e0,*(undefined8 *)(param_1 + 0x50),
              &local_78,&local_140,plVar13,puVar2);
            if (param_4 != (undefined1 (*) [16])0x0) {
              fVar37 = pfVar1[8];
              fVar35 = pfVar1[9];
              fVar27 = pfVar1[10];
              bVar4 = *pbVar19;
              fVar62 = (float)((ulong)uStack_150 >> 0x20);
              fVar63 = (float)((ulong)uStack_148 >> 0x20);
              fVar49 = (float)((ulong)local_160 >> 0x20);
              fVar51 = (float)((ulong)uStack_158 >> 0x20);
              if ((bVar4 >> 2 & 1) == 0) {
                auVar43._8_8_ = uStack_158;
                auVar43._0_8_ = local_160;
                auVar38._8_8_ = uStack_148;
                auVar38._0_8_ = uStack_150;
                if ((bVar4 >> 3 & 1) != 0) {
                  fVar47 = fVar37 * (float)local_160;
                  fVar49 = fVar35 * fVar49;
                  fVar50 = fVar27 * (float)uStack_158;
                  fVar51 = fVar51 * 1.0;
                  auVar30._0_4_ = fVar37 * (float)uStack_150;
                  auVar30._4_4_ = fVar35 * fVar62;
                  auVar30._8_4_ = fVar27 * (float)uStack_148;
                  auVar30._12_4_ = fVar63 * 1.0;
                  auVar6._4_4_ = fVar49;
                  auVar6._0_4_ = fVar47;
                  auVar6._8_4_ = fVar50;
                  auVar6._12_4_ = fVar51;
                  auVar43 = NEON_fmin(auVar6,auVar30,4);
                  auVar7._4_4_ = fVar49;
                  auVar7._0_4_ = fVar47;
                  auVar7._8_4_ = fVar50;
                  auVar7._12_4_ = fVar51;
                  auVar38 = NEON_fmax(auVar7,auVar30,4);
                }
                auVar31._0_4_ = pfVar1[4] + auVar43._0_4_;
                auVar31._4_4_ = pfVar1[5] + auVar43._4_4_;
                auVar31._8_4_ = pfVar1[6] + auVar43._8_4_;
                auVar31._12_4_ = auVar43._12_4_ + 0.0;
                auVar24._0_4_ = pfVar1[4] + auVar38._0_4_;
                auVar24._4_4_ = pfVar1[5] + auVar38._4_4_;
                auVar24._8_4_ = pfVar1[6] + auVar38._8_4_;
                auVar24._12_4_ = auVar38._12_4_ + 0.0;
                auVar25 = NEON_fmax(auVar24,*(undefined1 (*) [16])(param_1 + 0x30),4);
                auVar32 = NEON_fmin(auVar31,*(undefined1 (*) [16])(param_1 + 0x20),4);
              }
              else {
                fVar47 = *pfVar1;
                fVar50 = pfVar1[1];
                fVar45 = pfVar1[2];
                fVar56 = pfVar1[3];
                fVar44 = fVar50 + fVar50;
                fVar46 = fVar45 + fVar45;
                fVar48 = (fVar47 + fVar47) * fVar47;
                fVar42 = (fVar47 + fVar47) * fVar56;
                auVar39._0_4_ = -(uint)((bVar4 & 8) == 0);
                auVar39._4_4_ = auVar39._0_4_;
                auVar39._8_4_ = auVar39._0_4_;
                auVar39._12_4_ = auVar39._0_4_;
                auVar59._0_4_ = (float)uStack_150 - fStack_90;
                auVar59._4_4_ = fVar62 - fStack_8c;
                auVar59._8_4_ = (float)uStack_148 - fStack_88;
                auVar59._12_4_ = fVar63 - fStack_84;
                fVar62 = (float)local_a0 - (float)local_160;
                fVar49 = (float)((ulong)local_a0 >> 0x20) - fVar49;
                fVar63 = (float)uStack_98 - (float)uStack_158;
                fVar51 = (float)((ulong)uStack_98 >> 0x20) - fVar51;
                auVar33._0_4_ = ABS(fVar37) * fVar62;
                auVar33._4_4_ = ABS(fVar35) * fVar49;
                auVar33._8_4_ = ABS(fVar27) * fVar63;
                auVar33._12_4_ = fVar51 * 1.0;
                auVar9._4_4_ = ABS(fVar35) * auVar59._4_4_;
                auVar9._0_4_ = ABS(fVar37) * auVar59._0_4_;
                auVar9._8_4_ = ABS(fVar27) * auVar59._8_4_;
                auVar9._12_4_ = auVar59._12_4_ * 1.0;
                auVar8._4_4_ = fVar49;
                auVar8._0_4_ = fVar62;
                auVar8._8_4_ = fVar63;
                auVar8._12_4_ = fVar51;
                fVar37 = 1.0 - fVar45 * fVar46;
                auVar26 = NEON_smin(auVar33 ^ (auVar33 ^ auVar8) & auVar39,
                                    auVar59 ^ (auVar59 ^ auVar9) & ~auVar39,4);
                uVar15 = NEON_fminp(auVar26._0_8_,auVar26._0_8_,4);
                uVar28 = NEON_fmin(CONCAT44(auVar26._8_4_,auVar26._8_4_),uVar15,4);
                uVar15 = CONCAT44(ABS(fVar46 * fVar50 + fVar42) +
                                  ABS(fVar44 * fVar47 - fVar46 * fVar56) + ABS(fVar37 - fVar48),
                                  ABS(fVar46 * fVar47 - fVar44 * fVar56) +
                                  ABS(fVar37 - fVar44 * fVar50) +
                                  ABS(fVar44 * fVar47 + fVar46 * fVar56));
                fVar37 = ABS((1.0 - fVar48) - fVar44 * fVar50) +
                         ABS(fVar46 * fVar47 + fVar44 * fVar56) + ABS(fVar46 * fVar50 - fVar42);
                uVar15 = NEON_fmaxp(uVar15,uVar15,4);
                uVar15 = NEON_fmax(CONCAT44(fVar37,fVar37),uVar15,4);
                fVar37 = (float)uVar28 / (float)uVar15;
                fVar35 = (float)((ulong)uVar28 >> 0x20) / (float)((ulong)uVar15 >> 0x20);
                auVar25._0_4_ = fVar37 + *(float *)(param_1 + 0x30);
                auVar25._4_4_ = fVar35 + *(float *)(param_1 + 0x34);
                auVar25._8_4_ = fVar37 + *(float *)(param_1 + 0x38);
                auVar25._12_4_ = fVar35 + *(float *)(param_1 + 0x3c);
                auVar32._0_4_ = *(float *)(param_1 + 0x20) - fVar37;
                auVar32._4_4_ = *(float *)(param_1 + 0x24) - fVar35;
                auVar32._8_4_ = *(float *)(param_1 + 0x28) - fVar37;
                auVar32._12_4_ = *(float *)(param_1 + 0x2c) - fVar35;
              }
              auVar26 = NEON_fmin(auVar25,param_4[1],4);
              auVar34 = NEON_fmax(auVar32,*param_4,4);
              *(long *)(*param_4 + 8) = auVar34._8_8_;
              *(long *)*param_4 = auVar34._0_8_;
              *(long *)(param_4[1] + 8) = auVar26._8_8_;
              *(long *)param_4[1] = auVar26._0_8_;
            }
          }
          else {
            iVar11 = (int)plVar13[1];
            lVar21 = (long)iVar11;
            if ((int)(*(uint *)((long)plVar13 + 0xc) & 0x7fffffff) <= iVar11) {
              FUN_02e931c8(plVar13,PTR_PTR_047d1a50,lVar21 + 1);
              iVar11 = (int)plVar13[1];
            }
            *(undefined4 *)(*plVar13 + (long)iVar11 * 4) = uVar20;
            *(int *)(plVar13 + 1) = (int)(lVar21 + 1);
          }
        }
      }
LAB_02eff340:
      uVar22 = uVar22 - 1;
      param_2 = param_2 + 1;
    } while (uVar22 != 0);
  }
  return;
}


