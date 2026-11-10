/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e97dc0; name: FUN_02e97dc0
 */


void FUN_02e97dc0(long param_1,uint *param_2,uint param_3,undefined1 (*param_4) [16])

{
  int iVar1;
  float *pfVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long lVar10;
  ulong *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  float *pfVar20;
  undefined4 uVar21;
  long lVar22;
  ulong uVar23;
  byte *pbVar24;
  float fVar25;
  float fVar26;
  float fVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  int iVar38;
  int iVar41;
  int iVar42;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar43;
  float fVar44;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar45 [16];
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
  float fVar59;
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  long local_150;
  undefined8 local_148;
  long local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  ulong local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  float local_98;
  float fStack_94;
  undefined4 local_90;
  undefined1 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  ulong uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  
  if (0 < (int)param_3) {
    puVar11 = (ulong *)((ulong)&local_100 | 4);
    puVar3 = (undefined8 *)0x0;
    if (param_4 != (undefined1 (*) [16])0x0) {
      puVar3 = &local_180;
    }
    auVar32._8_4_ = 0x5f7ffff0;
    auVar32._0_8_ = 0x5f7ffff05f7ffff0;
    auVar32._12_4_ = 0x5f7ffff0;
    auVar27 = NEON_fmov(0x3f800000,4);
    uVar23 = (ulong)param_3;
    do {
      uVar4 = *param_2;
      plVar16 = (long *)(*(long *)(param_1 + 0x10) + 0x38);
      if ((*(uint *)((long)plVar16 + (long)((int)uVar4 >> 5) * 4 + *plVar16) >>
           (ulong)(uVar4 & 0x1f) & 1) != 0) {
        lVar22 = *(long *)(param_1 + 8);
        pfVar2 = (float *)(lVar22 + 0x48 + ((ulong)uVar4 & 0xffff) * 0x40 + *(long *)(lVar22 + 0x48)
                          );
        pbVar24 = (byte *)((long)pfVar2 + 0x1e);
        if ((*pbVar24 >> 6 & 1) != 0) {
          pfVar20 = pfVar2 + 0xc;
          plVar16 = (long *)(*(long *)(param_1 + 0x10) + 0x28);
          plVar19 = *(long **)(param_1 + 0x70);
          local_100 = **(undefined8 **)(param_1 + 0x58);
          uStack_f8 = (*(undefined8 **)(param_1 + 0x58))[1];
          uVar12 = *(undefined8 *)((long)plVar16 + (long)(int)uVar4 * 8 + *plVar16);
          lVar18 = 0;
          if (*(long *)pfVar20 != 0) {
            lVar18 = *(long *)pfVar20 + (long)pfVar20;
          }
          puVar13 = *(undefined8 **)(param_1 + 0x60);
          uVar17 = puVar13[3];
          iVar1 = (int)(uVar17 >> 0x20) + (uint)*(byte *)(lVar22 + 0x1c);
          uVar17 = (ulong)((uVar4 + 1 << (ulong)(-iVar1 & 0x1f)) - 1) |
                   uVar17 & *(uint *)(PTR_DAT_047d1a60 + ((long)uVar17 >> 0x20) * 4);
          plVar16 = (long *)**(long **)(param_1 + 0x48);
          uVar21 = (undefined4)uVar17;
          if (plVar16 != (long *)0x0) {
            lVar10 = 0;
            if (*(long *)pfVar20 != 0) {
              lVar10 = *(long *)pfVar20 + (long)pfVar20;
            }
            (**(code **)(*plVar16 + 0x40))
                      (plVar16,*(undefined2 *)(pfVar2 + 0xb),6,*puVar13,puVar13[1],lVar22,uVar17,
                       lVar10,&local_100);
            lVar10 = *(long *)(param_1 + 0x48);
            if (*(long *)(lVar10 + 8) != 0) {
              local_f0 = CONCAT62(local_f0._2_6_,*(undefined2 *)(lVar10 + 0x10));
              uVar14 = *(undefined8 *)(lVar10 + 0x14);
              *(undefined4 *)((undefined8 *)((ulong)&local_f0 | 4) + 1) =
                   *(undefined4 *)(lVar10 + 0x1c);
              *(undefined8 *)((ulong)&local_f0 | 4) = uVar14;
              puVar13 = *(undefined8 **)(param_1 + 0x50);
              local_e0 = *puVar13;
              local_d8 = puVar13[1];
              local_d0 = puVar13[2];
              local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(puVar13 + 3));
              local_c0 = 0;
              local_160 = CONCAT62(local_160._2_6_,(undefined2)local_100);
              uVar17 = *puVar11;
              *(int *)((ulong *)((ulong)&local_160 | 4) + 1) = (int)puVar11[1];
              *(ulong *)((ulong)&local_160 | 4) = uVar17;
              local_150 = **(long **)(param_1 + 0x60);
              local_148 = (*(long **)(param_1 + 0x60))[1];
              local_138 = CONCAT44(local_138._4_4_,uVar21);
              local_130 = 0;
              if (*(long *)pfVar20 != 0) {
                local_130 = *(long *)pfVar20 + (long)pfVar20;
              }
              local_140 = lVar22;
              uVar17 = (**(code **)(**(long **)(lVar10 + 8) + 0x40))
                                 (*(long **)(lVar10 + 8),6,1,&local_f0,&local_160);
              if ((uVar17 & 1) == 0) goto LAB_02e985c4;
            }
          }
          if (*(char *)(lVar18 + 0x19) == '\x03') {
            memcpy(&local_f0,*(void **)(param_1 + 0x48),0x60);
            if ((*pbVar24 >> 3 & 1) == 0) {
              fVar25 = pfVar2[4];
              fVar31 = pfVar2[5];
              local_98 = pfVar2[6];
              if ((*pbVar24 >> 2 & 1) == 0) {
                auVar30._0_4_ = *(float *)(param_1 + 0x20) - fVar25;
                auVar30._4_4_ = *(float *)(param_1 + 0x24) - fVar31;
                auVar30._8_4_ = *(float *)(param_1 + 0x28) - local_98;
                auVar30._12_4_ = *(float *)(param_1 + 0x2c) - 0.0;
                fVar25 = *(float *)(param_1 + 0x30) - fVar25;
                fVar31 = *(float *)(param_1 + 0x34) - fVar31;
                local_98 = *(float *)(param_1 + 0x38) - local_98;
                fStack_94 = *(float *)(param_1 + 0x3c) - 0.0;
              }
              else {
                fVar26 = *pfVar2;
                fVar63 = pfVar2[1];
                fVar64 = pfVar2[2];
                fVar51 = pfVar2[3];
                fVar59 = (float)*(undefined8 *)(param_1 + 0x38);
                fVar47 = (float)*(undefined8 *)(param_1 + 0x30);
                fVar50 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
                fVar49 = fVar63 + fVar63;
                fVar52 = fVar64 + fVar64;
                fVar48 = (fVar26 + fVar26) * fVar26;
                fVar53 = (fVar26 + fVar26) * fVar51;
                fVar56 = 1.0 - fVar64 * fVar52;
                fVar61 = fVar49 * fVar26 + fVar52 * fVar51;
                fVar58 = fVar49 * fVar26 - fVar52 * fVar51;
                fVar43 = (fVar47 - *(float *)(param_1 + 0x20)) * 0.5;
                fVar46 = (fVar50 - *(float *)(param_1 + 0x24)) * 0.5;
                fVar44 = (fVar59 - *(float *)(param_1 + 0x28)) * 0.5;
                fVar25 = (*(float *)(param_1 + 0x20) + fVar47) * 0.5 - fVar25;
                fVar31 = (*(float *)(param_1 + 0x24) + fVar50) * 0.5 - fVar31;
                local_98 = (*(float *)(param_1 + 0x28) + fVar59) * 0.5 - local_98;
                fVar62 = fVar56 - fVar49 * fVar63;
                fVar56 = fVar56 - fVar48;
                fVar59 = fVar52 * fVar26 - fVar49 * fVar51;
                fVar47 = fVar52 * fVar63 + fVar53;
                fVar53 = fVar52 * fVar63 - fVar53;
                fVar50 = fVar52 * fVar26 + fVar49 * fVar51;
                fVar64 = (1.0 - fVar48) - fVar49 * fVar63;
                fVar51 = ABS(fVar59 * fVar44) + ABS(fVar62 * fVar43) + ABS(fVar61 * fVar46);
                fVar49 = ABS(fVar47 * fVar44) + ABS(fVar58 * fVar43) + ABS(fVar56 * fVar46);
                fVar52 = ABS(fVar64 * fVar44) + ABS(fVar50 * fVar43) + ABS(fVar53 * fVar46);
                fVar43 = ABS(fVar44 * 0.0) + ABS(fVar53 * fVar43) + ABS(fVar46 * 0.0);
                fVar26 = fVar59 * local_98 + fVar62 * fVar25 + fVar61 * fVar31;
                fVar63 = fVar47 * local_98 + fVar58 * fVar25 + fVar56 * fVar31;
                fVar64 = fVar64 * local_98 + fVar50 * fVar25 + fVar53 * fVar31;
                fStack_94 = local_98 * 0.0 + fVar53 * fVar25 + fVar31 * 0.0;
                auVar30._0_4_ = fVar26 - fVar51;
                auVar30._4_4_ = fVar63 - fVar49;
                auVar30._8_4_ = fVar64 - fVar52;
                auVar30._12_4_ = fStack_94 - fVar43;
                fVar25 = fVar26 + fVar51;
                fVar31 = fVar63 + fVar49;
                local_98 = fVar64 + fVar52;
                fStack_94 = fStack_94 + fVar43;
              }
              uStack_a8 = auVar30._8_8_;
              local_b0 = auVar30._0_8_;
              local_a0 = CONCAT44(fVar31,fVar25);
            }
            else {
              fVar26 = *(float *)(param_1 + 0x20);
              fVar63 = *(float *)(param_1 + 0x24);
              fVar64 = *(float *)(param_1 + 0x28);
              fVar51 = *(float *)(param_1 + 0x2c);
              fVar25 = *(float *)(param_1 + 0x30);
              fVar31 = *(float *)(param_1 + 0x34);
              local_98 = *(float *)(param_1 + 0x38);
              fStack_94 = *(float *)(param_1 + 0x3c);
              iVar38 = -(uint)(fVar25 < fVar26);
              iVar41 = -(uint)(fVar31 < fVar63);
              iVar42 = -(uint)(local_98 < fVar64);
              if (CONCAT13((byte)((uint)iVar41 >> 0x18) | (byte)((uint)iVar38 >> 0x18) |
                           (byte)((uint)iVar42 >> 0x18),
                           CONCAT12((byte)((uint)iVar41 >> 0x10) | (byte)((uint)iVar38 >> 0x10) |
                                    (byte)((uint)iVar42 >> 0x10),
                                    CONCAT11((byte)((uint)iVar41 >> 8) | (byte)((uint)iVar38 >> 8) |
                                             (byte)((uint)iVar42 >> 8),
                                             (byte)iVar41 | (byte)iVar38 | (byte)iVar42))) == 0) {
                local_1b0 = auVar27._0_4_;
                fStack_1ac = auVar27._4_4_;
                fStack_1a8 = auVar27._8_4_;
                fStack_1a4 = auVar27._12_4_;
                local_1b0 = local_1b0 / pfVar2[8];
                fStack_1ac = fStack_1ac / pfVar2[9];
                fStack_1a8 = fStack_1a8 / pfVar2[10];
                fStack_1a4 = fStack_1a4 / 1.0;
                fVar51 = *pfVar2;
                fVar53 = pfVar2[1];
                fVar49 = pfVar2[2];
                fVar52 = pfVar2[3];
                fVar46 = fVar53 + fVar53;
                fVar59 = fVar49 + fVar49;
                fVar56 = (fVar51 + fVar51) * fVar51;
                fVar43 = (fVar51 + fVar51) * fVar52;
                fVar49 = 1.0 - fVar49 * fVar59;
                fVar57 = fVar59 * fVar53 - fVar43;
                fVar55 = pfVar2[6];
                fVar44 = local_1b0 * (fVar49 - fVar46 * fVar53);
                fVar47 = fStack_1ac * (fVar46 * fVar51 - fVar59 * fVar52);
                fVar48 = fStack_1a8 * (fVar59 * fVar51 + fVar46 * fVar52);
                fVar50 = fStack_1a4 * fVar57;
                fVar61 = local_1b0 * (fVar46 * fVar51 + fVar59 * fVar52);
                fVar62 = fStack_1ac * (fVar49 - fVar56);
                fVar57 = fStack_1a8 * fVar57;
                fVar54 = fStack_1a4 * 0.0;
                local_1b0 = local_1b0 * (fVar59 * fVar51 - fVar46 * fVar52);
                fStack_1ac = fStack_1ac * (fVar59 * fVar53 + fVar43);
                fStack_1a8 = fStack_1a8 * ((1.0 - fVar56) - fVar46 * fVar53);
                fStack_1a4 = fStack_1a4 * 0.0;
                fVar59 = (float)*(undefined8 *)(pfVar2 + 4);
                fVar56 = (float)((ulong)*(undefined8 *)(pfVar2 + 4) >> 0x20);
                fVar51 = (fVar25 - fVar26) * 0.5;
                fVar53 = (fVar31 - fVar63) * 0.5;
                fVar49 = (local_98 - fVar64) * 0.5;
                fVar25 = (fVar26 + fVar25) * 0.5;
                fVar31 = (fVar63 + fVar31) * 0.5;
                fVar58 = (fVar64 + local_98) * 0.5;
                fVar52 = ABS(local_1b0 * fVar49) + ABS(fVar44 * fVar51) + ABS(fVar61 * fVar53);
                fVar43 = ABS(fStack_1ac * fVar49) + ABS(fVar47 * fVar51) + ABS(fVar62 * fVar53);
                fVar46 = ABS(fStack_1a8 * fVar49) + ABS(fVar48 * fVar51) + ABS(fVar57 * fVar53);
                fVar53 = ABS(fStack_1a4 * fVar49) + ABS(fVar50 * fVar51) + ABS(fVar54 * fVar53);
                fVar26 = local_1b0 * fVar58 + fVar44 * fVar25 + fVar61 * fVar31 +
                         -(local_1b0 * fVar55 + fVar44 * fVar59 + fVar61 * fVar56);
                fVar63 = fStack_1ac * fVar58 + fVar47 * fVar25 + fVar62 * fVar31 +
                         -(fStack_1ac * fVar55 + fVar47 * fVar59 + fVar62 * fVar56);
                fVar64 = fStack_1a8 * fVar58 + fVar48 * fVar25 + fVar57 * fVar31 +
                         -(fStack_1a8 * fVar55 + fVar48 * fVar59 + fVar57 * fVar56);
                fVar51 = fStack_1a4 * fVar58 + fVar50 * fVar25 + fVar54 * fVar31 +
                         fStack_1a4 * fVar55 + fVar50 * fVar59 + fVar54 * fVar56;
                fVar25 = fVar52 + fVar26;
                fVar31 = fVar43 + fVar63;
                local_98 = fVar46 + fVar64;
                fStack_94 = fVar53 + fVar51;
                fVar26 = fVar26 - fVar52;
                fVar63 = fVar63 - fVar43;
                fVar64 = fVar64 - fVar46;
                fVar51 = fVar51 - fVar53;
              }
              uStack_a8 = CONCAT44(fVar51,fVar64);
              local_b0 = CONCAT44(fVar63,fVar26);
              local_a0 = CONCAT44(fVar31,fVar25);
            }
            puVar13 = *(undefined8 **)(param_1 + 0x60);
            uVar17 = (ulong)local_130 >> 8;
            local_160 = *puVar13;
            uStack_158 = puVar13[1];
            local_140 = puVar13[4];
            local_120 = puVar13[8];
            uStack_118 = puVar13[9];
            uStack_110 = puVar13[10];
            uStack_108 = puVar13[0xb];
            auVar37._8_4_ = 0xdf7ffff0;
            auVar37._0_8_ = 0xdf7ffff0df7ffff0;
            auVar37._12_4_ = 0xdf7ffff0;
            uStack_128 = *(undefined4 *)(puVar13 + 7);
            local_130 = CONCAT44(*(undefined4 *)((long)puVar13 + 0x34),
                                 (int)CONCAT71((int7)uVar17,*(undefined1 *)(puVar13 + 6)));
            local_148 = CONCAT44(iVar1,uVar21);
            uStack_178 = auVar37._8_8_;
            local_180 = 0xdf7ffff0df7ffff0;
            uStack_170 = 0x5f7ffff05f7ffff0;
            uStack_168 = auVar32._8_8_;
            local_150 = lVar18;
            local_138 = uVar12;
            (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar18 + 0x18) * 0x200 + 0xe8)
            )(lVar18,*(undefined8 *)(param_1 + 0x40),&local_f0,*(undefined8 *)(param_1 + 0x50),
              &local_100,&local_160,plVar19,puVar3);
            if (param_4 != (undefined1 (*) [16])0x0) {
              fVar25 = pfVar2[8];
              fVar31 = pfVar2[9];
              fVar26 = pfVar2[10];
              bVar5 = *pbVar24;
              fVar63 = (float)((ulong)uStack_170 >> 0x20);
              fVar64 = (float)((ulong)uStack_168 >> 0x20);
              fVar51 = (float)((ulong)local_180 >> 0x20);
              fVar53 = (float)((ulong)uStack_178 >> 0x20);
              if ((bVar5 >> 2 & 1) == 0) {
                auVar45._8_8_ = uStack_178;
                auVar45._0_8_ = local_180;
                auVar39._8_8_ = uStack_168;
                auVar39._0_8_ = uStack_170;
                if ((bVar5 >> 3 & 1) != 0) {
                  fVar49 = fVar25 * (float)local_180;
                  fVar51 = fVar31 * fVar51;
                  fVar52 = fVar26 * (float)uStack_178;
                  fVar53 = fVar53 * 1.0;
                  auVar33._0_4_ = fVar25 * (float)uStack_170;
                  auVar33._4_4_ = fVar31 * fVar63;
                  auVar33._8_4_ = fVar26 * (float)uStack_168;
                  auVar33._12_4_ = fVar64 * 1.0;
                  auVar6._4_4_ = fVar51;
                  auVar6._0_4_ = fVar49;
                  auVar6._8_4_ = fVar52;
                  auVar6._12_4_ = fVar53;
                  auVar45 = NEON_fmin(auVar6,auVar33,4);
                  auVar7._4_4_ = fVar51;
                  auVar7._0_4_ = fVar49;
                  auVar7._8_4_ = fVar52;
                  auVar7._12_4_ = fVar53;
                  auVar39 = NEON_fmax(auVar7,auVar33,4);
                }
                auVar34._0_4_ = pfVar2[4] + auVar45._0_4_;
                auVar34._4_4_ = pfVar2[5] + auVar45._4_4_;
                auVar34._8_4_ = pfVar2[6] + auVar45._8_4_;
                auVar34._12_4_ = auVar45._12_4_ + 0.0;
                auVar28._0_4_ = pfVar2[4] + auVar39._0_4_;
                auVar28._4_4_ = pfVar2[5] + auVar39._4_4_;
                auVar28._8_4_ = pfVar2[6] + auVar39._8_4_;
                auVar28._12_4_ = auVar39._12_4_ + 0.0;
                auVar29 = NEON_fmax(auVar28,*(undefined1 (*) [16])(param_1 + 0x30),4);
                auVar35 = NEON_fmin(auVar34,*(undefined1 (*) [16])(param_1 + 0x20),4);
              }
              else {
                fVar49 = *pfVar2;
                fVar52 = pfVar2[1];
                fVar43 = pfVar2[2];
                fVar46 = pfVar2[3];
                fVar47 = fVar52 + fVar52;
                fVar48 = fVar43 + fVar43;
                fVar50 = (fVar49 + fVar49) * fVar49;
                fVar44 = (fVar49 + fVar49) * fVar46;
                auVar40._0_4_ = -(uint)((bVar5 & 8) == 0);
                auVar40._4_4_ = auVar40._0_4_;
                auVar40._8_4_ = auVar40._0_4_;
                auVar40._12_4_ = auVar40._0_4_;
                auVar60._0_4_ = (float)uStack_170 - (float)local_a0;
                auVar60._4_4_ = fVar63 - local_a0._4_4_;
                auVar60._8_4_ = (float)uStack_168 - local_98;
                auVar60._12_4_ = fVar64 - fStack_94;
                fVar63 = (float)local_b0 - (float)local_180;
                fVar51 = (float)(local_b0 >> 0x20) - fVar51;
                fVar64 = (float)uStack_a8 - (float)uStack_178;
                fVar53 = (float)(uStack_a8 >> 0x20) - fVar53;
                auVar36._0_4_ = ABS(fVar25) * fVar63;
                auVar36._4_4_ = ABS(fVar31) * fVar51;
                auVar36._8_4_ = ABS(fVar26) * fVar64;
                auVar36._12_4_ = fVar53 * 1.0;
                auVar9._4_4_ = ABS(fVar31) * auVar60._4_4_;
                auVar9._0_4_ = ABS(fVar25) * auVar60._0_4_;
                auVar9._8_4_ = ABS(fVar26) * auVar60._8_4_;
                auVar9._12_4_ = auVar60._12_4_ * 1.0;
                auVar8._4_4_ = fVar51;
                auVar8._0_4_ = fVar63;
                auVar8._8_4_ = fVar64;
                auVar8._12_4_ = fVar53;
                fVar25 = 1.0 - fVar43 * fVar48;
                auVar30 = NEON_smin(auVar36 ^ (auVar36 ^ auVar8) & auVar40,
                                    auVar60 ^ (auVar60 ^ auVar9) & ~auVar40,4);
                uVar12 = NEON_fminp(auVar30._0_8_,auVar30._0_8_,4);
                uVar14 = NEON_fmin(CONCAT44(auVar30._8_4_,auVar30._8_4_),uVar12,4);
                uVar12 = CONCAT44(ABS(fVar48 * fVar52 + fVar44) +
                                  ABS(fVar47 * fVar49 - fVar48 * fVar46) + ABS(fVar25 - fVar50),
                                  ABS(fVar48 * fVar49 - fVar47 * fVar46) +
                                  ABS(fVar25 - fVar47 * fVar52) +
                                  ABS(fVar47 * fVar49 + fVar48 * fVar46));
                fVar25 = ABS((1.0 - fVar50) - fVar47 * fVar52) +
                         ABS(fVar48 * fVar49 + fVar47 * fVar46) + ABS(fVar48 * fVar52 - fVar44);
                uVar12 = NEON_fmaxp(uVar12,uVar12,4);
                uVar12 = NEON_fmax(CONCAT44(fVar25,fVar25),uVar12,4);
                fVar25 = (float)uVar14 / (float)uVar12;
                fVar31 = (float)((ulong)uVar14 >> 0x20) / (float)((ulong)uVar12 >> 0x20);
                auVar29._0_4_ = fVar25 + *(float *)(param_1 + 0x30);
                auVar29._4_4_ = fVar31 + *(float *)(param_1 + 0x34);
                auVar29._8_4_ = fVar25 + *(float *)(param_1 + 0x38);
                auVar29._12_4_ = fVar31 + *(float *)(param_1 + 0x3c);
                auVar35._0_4_ = *(float *)(param_1 + 0x20) - fVar25;
                auVar35._4_4_ = *(float *)(param_1 + 0x24) - fVar31;
                auVar35._8_4_ = *(float *)(param_1 + 0x28) - fVar25;
                auVar35._12_4_ = *(float *)(param_1 + 0x2c) - fVar31;
              }
              auVar30 = NEON_fmin(auVar29,param_4[1],4);
              auVar37 = NEON_fmax(auVar35,*param_4,4);
              *(long *)(*param_4 + 8) = auVar37._8_8_;
              *(long *)*param_4 = auVar37._0_8_;
              *(long *)(param_4[1] + 8) = auVar30._8_8_;
              *(long *)param_4[1] = auVar30._0_8_;
            }
          }
          else {
            lVar18 = **(long **)(param_1 + 0x50);
            lVar22 = **(long **)(param_1 + 0x60);
            uVar15 = 0xffffff;
            local_b8 = 0xffffffff;
            local_e0 = 0;
            local_d8 = 0;
            local_f0 = 0;
            uStack_e8 = 0;
            local_b4 = 0xf;
            local_8c = 0xf;
            local_d0 = local_d0 & 0xffffffff00000000;
            local_78 = 6;
            uStack_74 = 0;
            if (lVar18 == 0) {
              local_c8 = 0xffffffffffffffff;
            }
            else {
              local_c8 = *(undefined8 *)(lVar18 + 0xb0);
              uVar15 = *(undefined4 *)(lVar18 + 0x50);
            }
            local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar15);
            local_b0 = CONCAT62((int6)(local_b0 >> 0x10),
                                *(undefined2 *)(*(long *)(param_1 + 0x48) + 0x10)) & 0xffffffff;
            uStack_a8 = *(ulong *)(*(long *)(param_1 + 0x48) + 0x14) >> 0x20;
            if (lVar22 == 0) {
              local_98 = 2.3509886e-38;
              local_a0 = 0xffffffffffffffff;
            }
            else {
              local_a0 = *(undefined8 *)(lVar22 + 0xb0);
              local_98 = *(float *)(lVar22 + 0x50);
            }
            local_88 = (undefined2)local_100;
            local_84 = (undefined4)*puVar11;
            uStack_80 = *puVar11 >> 0x20;
            local_90 = uVar21;
            (**(code **)(*plVar19 + 0x28))(plVar19,&local_f0);
          }
        }
      }
LAB_02e985c4:
      uVar23 = uVar23 - 1;
      param_2 = param_2 + 1;
    } while (uVar23 != 0);
  }
  return;
}


