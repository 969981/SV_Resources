/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eff388; name: FUN_02eff388
 */


void FUN_02eff388(long param_1,uint *param_2,uint param_3,undefined1 (*param_4) [16])

{
  int iVar1;
  float *pfVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long *plVar11;
  long lVar12;
  ulong *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  long lVar18;
  ulong uVar19;
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
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  int iVar39;
  int iVar42;
  int iVar43;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar44;
  float fVar45;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar46 [16];
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
  float fVar60;
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
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
    puVar13 = (ulong *)((ulong)&local_100 | 4);
    puVar3 = (undefined8 *)0x0;
    if (param_4 != (undefined1 (*) [16])0x0) {
      puVar3 = &local_180;
    }
    auVar33._8_4_ = 0x5f7ffff0;
    auVar33._0_8_ = 0x5f7ffff05f7ffff0;
    auVar33._12_4_ = 0x5f7ffff0;
    auVar27 = NEON_fmov(0x3f800000,4);
    uVar23 = (ulong)param_3;
    do {
      uVar4 = *param_2;
      plVar14 = (long *)(*(long *)(param_1 + 0x10) + 0x28);
      lVar18 = *plVar14;
      lVar22 = 0;
      if (lVar18 != 0) {
        lVar22 = lVar18 + (long)plVar14;
      }
      uVar6 = (int)(((ulong)uVar4 & 0xffff) >> 5) - *(int *)(lVar22 + 0x28);
      if (((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(lVar22 + 0x20))) &&
         ((*(uint *)(lVar22 + 0x18 + (ulong)uVar6 * 4 + *(long *)(lVar22 + 0x18)) >>
           (ulong)(uVar4 & 0x1f) & 1) != 0)) {
        lVar22 = *(long *)(param_1 + 8);
        pfVar2 = (float *)(lVar22 + 0x48 + ((ulong)uVar4 & 0xffff) * 0x40 + *(long *)(lVar22 + 0x48)
                          );
        pbVar24 = (byte *)((long)pfVar2 + 0x1e);
        if ((*pbVar24 >> 6 & 1) != 0) {
          pfVar20 = pfVar2 + 0xc;
          plVar14 = *(long **)(param_1 + 0x70);
          local_100 = **(undefined8 **)(param_1 + 0x58);
          uStack_f8 = (*(undefined8 **)(param_1 + 0x58))[1];
          lVar18 = 0;
          if (*(long *)pfVar20 != 0) {
            lVar18 = *(long *)pfVar20 + (long)pfVar20;
          }
          puVar15 = *(undefined8 **)(param_1 + 0x60);
          uVar19 = puVar15[3];
          iVar1 = (int)(uVar19 >> 0x20) + (uint)*(byte *)(lVar22 + 0x1c);
          uVar19 = (ulong)((uVar4 + 1 << (ulong)(-iVar1 & 0x1f)) - 1) |
                   uVar19 & *(uint *)(PTR_DAT_047d1a60 + ((long)uVar19 >> 0x20) * 4);
          plVar11 = (long *)**(long **)(param_1 + 0x48);
          uVar21 = (undefined4)uVar19;
          if (plVar11 != (long *)0x0) {
            lVar12 = 0;
            if (*(long *)pfVar20 != 0) {
              lVar12 = *(long *)pfVar20 + (long)pfVar20;
            }
            (**(code **)(*plVar11 + 0x40))
                      (plVar11,*(undefined2 *)(pfVar2 + 0xb),6,*puVar15,puVar15[1],lVar22,uVar19,
                       lVar12,&local_100);
            lVar12 = *(long *)(param_1 + 0x48);
            if (*(long *)(lVar12 + 8) != 0) {
              local_f0 = CONCAT62(local_f0._2_6_,*(undefined2 *)(lVar12 + 0x10));
              uVar16 = *(undefined8 *)(lVar12 + 0x14);
              *(undefined4 *)((undefined8 *)((ulong)&local_f0 | 4) + 1) =
                   *(undefined4 *)(lVar12 + 0x1c);
              *(undefined8 *)((ulong)&local_f0 | 4) = uVar16;
              puVar15 = *(undefined8 **)(param_1 + 0x50);
              local_e0 = *puVar15;
              local_d8 = puVar15[1];
              local_d0 = puVar15[2];
              local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(puVar15 + 3));
              local_c0 = 0;
              local_160 = CONCAT62(local_160._2_6_,(undefined2)local_100);
              uVar19 = *puVar13;
              *(int *)((ulong *)((ulong)&local_160 | 4) + 1) = (int)puVar13[1];
              *(ulong *)((ulong)&local_160 | 4) = uVar19;
              local_150 = **(long **)(param_1 + 0x60);
              local_148 = (*(long **)(param_1 + 0x60))[1];
              local_138 = CONCAT44(local_138._4_4_,uVar21);
              local_130 = 0;
              if (*(long *)pfVar20 != 0) {
                local_130 = *(long *)pfVar20 + (long)pfVar20;
              }
              local_140 = lVar22;
              uVar19 = (**(code **)(**(long **)(lVar12 + 8) + 0x40))
                                 (*(long **)(lVar12 + 8),6,1,&local_f0,&local_160);
              if ((uVar19 & 1) == 0) goto LAB_02effba0;
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
                fVar64 = pfVar2[1];
                fVar65 = pfVar2[2];
                fVar52 = pfVar2[3];
                fVar60 = (float)*(undefined8 *)(param_1 + 0x38);
                fVar48 = (float)*(undefined8 *)(param_1 + 0x30);
                fVar51 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
                fVar50 = fVar64 + fVar64;
                fVar53 = fVar65 + fVar65;
                fVar49 = (fVar26 + fVar26) * fVar26;
                fVar54 = (fVar26 + fVar26) * fVar52;
                fVar57 = 1.0 - fVar65 * fVar53;
                fVar62 = fVar50 * fVar26 + fVar53 * fVar52;
                fVar59 = fVar50 * fVar26 - fVar53 * fVar52;
                fVar44 = (fVar48 - *(float *)(param_1 + 0x20)) * 0.5;
                fVar47 = (fVar51 - *(float *)(param_1 + 0x24)) * 0.5;
                fVar45 = (fVar60 - *(float *)(param_1 + 0x28)) * 0.5;
                fVar25 = (*(float *)(param_1 + 0x20) + fVar48) * 0.5 - fVar25;
                fVar31 = (*(float *)(param_1 + 0x24) + fVar51) * 0.5 - fVar31;
                local_98 = (*(float *)(param_1 + 0x28) + fVar60) * 0.5 - local_98;
                fVar63 = fVar57 - fVar50 * fVar64;
                fVar57 = fVar57 - fVar49;
                fVar60 = fVar53 * fVar26 - fVar50 * fVar52;
                fVar48 = fVar53 * fVar64 + fVar54;
                fVar54 = fVar53 * fVar64 - fVar54;
                fVar51 = fVar53 * fVar26 + fVar50 * fVar52;
                fVar65 = (1.0 - fVar49) - fVar50 * fVar64;
                fVar52 = ABS(fVar60 * fVar45) + ABS(fVar63 * fVar44) + ABS(fVar62 * fVar47);
                fVar50 = ABS(fVar48 * fVar45) + ABS(fVar59 * fVar44) + ABS(fVar57 * fVar47);
                fVar53 = ABS(fVar65 * fVar45) + ABS(fVar51 * fVar44) + ABS(fVar54 * fVar47);
                fVar44 = ABS(fVar45 * 0.0) + ABS(fVar54 * fVar44) + ABS(fVar47 * 0.0);
                fVar26 = fVar60 * local_98 + fVar63 * fVar25 + fVar62 * fVar31;
                fVar64 = fVar48 * local_98 + fVar59 * fVar25 + fVar57 * fVar31;
                fVar65 = fVar65 * local_98 + fVar51 * fVar25 + fVar54 * fVar31;
                fStack_94 = local_98 * 0.0 + fVar54 * fVar25 + fVar31 * 0.0;
                auVar30._0_4_ = fVar26 - fVar52;
                auVar30._4_4_ = fVar64 - fVar50;
                auVar30._8_4_ = fVar65 - fVar53;
                auVar30._12_4_ = fStack_94 - fVar44;
                fVar25 = fVar26 + fVar52;
                fVar31 = fVar64 + fVar50;
                local_98 = fVar65 + fVar53;
                fStack_94 = fStack_94 + fVar44;
              }
              uStack_a8 = auVar30._8_8_;
              local_b0 = auVar30._0_8_;
              local_a0 = CONCAT44(fVar31,fVar25);
            }
            else {
              fVar26 = *(float *)(param_1 + 0x20);
              fVar64 = *(float *)(param_1 + 0x24);
              fVar65 = *(float *)(param_1 + 0x28);
              fVar52 = *(float *)(param_1 + 0x2c);
              fVar25 = *(float *)(param_1 + 0x30);
              fVar31 = *(float *)(param_1 + 0x34);
              local_98 = *(float *)(param_1 + 0x38);
              fStack_94 = *(float *)(param_1 + 0x3c);
              iVar39 = -(uint)(fVar25 < fVar26);
              iVar42 = -(uint)(fVar31 < fVar64);
              iVar43 = -(uint)(local_98 < fVar65);
              if (CONCAT13((byte)((uint)iVar42 >> 0x18) | (byte)((uint)iVar39 >> 0x18) |
                           (byte)((uint)iVar43 >> 0x18),
                           CONCAT12((byte)((uint)iVar42 >> 0x10) | (byte)((uint)iVar39 >> 0x10) |
                                    (byte)((uint)iVar43 >> 0x10),
                                    CONCAT11((byte)((uint)iVar42 >> 8) | (byte)((uint)iVar39 >> 8) |
                                             (byte)((uint)iVar43 >> 8),
                                             (byte)iVar42 | (byte)iVar39 | (byte)iVar43))) == 0) {
                local_1b0 = auVar27._0_4_;
                fStack_1ac = auVar27._4_4_;
                fStack_1a8 = auVar27._8_4_;
                fStack_1a4 = auVar27._12_4_;
                local_1b0 = local_1b0 / pfVar2[8];
                fStack_1ac = fStack_1ac / pfVar2[9];
                fStack_1a8 = fStack_1a8 / pfVar2[10];
                fStack_1a4 = fStack_1a4 / 1.0;
                fVar52 = *pfVar2;
                fVar54 = pfVar2[1];
                fVar50 = pfVar2[2];
                fVar53 = pfVar2[3];
                fVar47 = fVar54 + fVar54;
                fVar60 = fVar50 + fVar50;
                fVar57 = (fVar52 + fVar52) * fVar52;
                fVar44 = (fVar52 + fVar52) * fVar53;
                fVar50 = 1.0 - fVar50 * fVar60;
                fVar58 = fVar60 * fVar54 - fVar44;
                fVar56 = pfVar2[6];
                fVar45 = local_1b0 * (fVar50 - fVar47 * fVar54);
                fVar48 = fStack_1ac * (fVar47 * fVar52 - fVar60 * fVar53);
                fVar49 = fStack_1a8 * (fVar60 * fVar52 + fVar47 * fVar53);
                fVar51 = fStack_1a4 * fVar58;
                fVar62 = local_1b0 * (fVar47 * fVar52 + fVar60 * fVar53);
                fVar63 = fStack_1ac * (fVar50 - fVar57);
                fVar58 = fStack_1a8 * fVar58;
                fVar55 = fStack_1a4 * 0.0;
                local_1b0 = local_1b0 * (fVar60 * fVar52 - fVar47 * fVar53);
                fStack_1ac = fStack_1ac * (fVar60 * fVar54 + fVar44);
                fStack_1a8 = fStack_1a8 * ((1.0 - fVar57) - fVar47 * fVar54);
                fStack_1a4 = fStack_1a4 * 0.0;
                fVar60 = (float)*(undefined8 *)(pfVar2 + 4);
                fVar57 = (float)((ulong)*(undefined8 *)(pfVar2 + 4) >> 0x20);
                fVar52 = (fVar25 - fVar26) * 0.5;
                fVar54 = (fVar31 - fVar64) * 0.5;
                fVar50 = (local_98 - fVar65) * 0.5;
                fVar25 = (fVar26 + fVar25) * 0.5;
                fVar31 = (fVar64 + fVar31) * 0.5;
                fVar59 = (fVar65 + local_98) * 0.5;
                fVar53 = ABS(local_1b0 * fVar50) + ABS(fVar45 * fVar52) + ABS(fVar62 * fVar54);
                fVar44 = ABS(fStack_1ac * fVar50) + ABS(fVar48 * fVar52) + ABS(fVar63 * fVar54);
                fVar47 = ABS(fStack_1a8 * fVar50) + ABS(fVar49 * fVar52) + ABS(fVar58 * fVar54);
                fVar54 = ABS(fStack_1a4 * fVar50) + ABS(fVar51 * fVar52) + ABS(fVar55 * fVar54);
                fVar26 = local_1b0 * fVar59 + fVar45 * fVar25 + fVar62 * fVar31 +
                         -(local_1b0 * fVar56 + fVar45 * fVar60 + fVar62 * fVar57);
                fVar64 = fStack_1ac * fVar59 + fVar48 * fVar25 + fVar63 * fVar31 +
                         -(fStack_1ac * fVar56 + fVar48 * fVar60 + fVar63 * fVar57);
                fVar65 = fStack_1a8 * fVar59 + fVar49 * fVar25 + fVar58 * fVar31 +
                         -(fStack_1a8 * fVar56 + fVar49 * fVar60 + fVar58 * fVar57);
                fVar52 = fStack_1a4 * fVar59 + fVar51 * fVar25 + fVar55 * fVar31 +
                         fStack_1a4 * fVar56 + fVar51 * fVar60 + fVar55 * fVar57;
                fVar25 = fVar53 + fVar26;
                fVar31 = fVar44 + fVar64;
                local_98 = fVar47 + fVar65;
                fStack_94 = fVar54 + fVar52;
                fVar26 = fVar26 - fVar53;
                fVar64 = fVar64 - fVar44;
                fVar65 = fVar65 - fVar47;
                fVar52 = fVar52 - fVar54;
              }
              uStack_a8 = CONCAT44(fVar52,fVar65);
              local_b0 = CONCAT44(fVar64,fVar26);
              local_a0 = CONCAT44(fVar31,fVar25);
            }
            puVar15 = *(undefined8 **)(param_1 + 0x60);
            uVar19 = (ulong)local_130 >> 8;
            local_160 = *puVar15;
            uStack_158 = puVar15[1];
            local_140 = puVar15[4];
            local_138 = 0;
            local_120 = puVar15[8];
            uStack_118 = puVar15[9];
            uStack_110 = puVar15[10];
            uStack_108 = puVar15[0xb];
            auVar38._8_4_ = 0xdf7ffff0;
            auVar38._0_8_ = 0xdf7ffff0df7ffff0;
            auVar38._12_4_ = 0xdf7ffff0;
            uStack_128 = *(undefined4 *)(puVar15 + 7);
            local_130 = CONCAT44(*(undefined4 *)((long)puVar15 + 0x34),
                                 (int)CONCAT71((int7)uVar19,*(undefined1 *)(puVar15 + 6)));
            local_148 = CONCAT44(iVar1,uVar21);
            uStack_178 = auVar38._8_8_;
            local_180 = 0xdf7ffff0df7ffff0;
            uStack_170 = 0x5f7ffff05f7ffff0;
            uStack_168 = auVar33._8_8_;
            local_150 = lVar18;
            (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar18 + 0x18) * 0x200 + 0xe8)
            )(lVar18,*(undefined8 *)(param_1 + 0x40),&local_f0,*(undefined8 *)(param_1 + 0x50),
              &local_100,&local_160,plVar14,puVar3);
            if (param_4 != (undefined1 (*) [16])0x0) {
              fVar25 = pfVar2[8];
              fVar31 = pfVar2[9];
              fVar26 = pfVar2[10];
              bVar5 = *pbVar24;
              fVar64 = (float)((ulong)uStack_170 >> 0x20);
              fVar65 = (float)((ulong)uStack_168 >> 0x20);
              fVar52 = (float)((ulong)local_180 >> 0x20);
              fVar54 = (float)((ulong)uStack_178 >> 0x20);
              if ((bVar5 >> 2 & 1) == 0) {
                auVar46._8_8_ = uStack_178;
                auVar46._0_8_ = local_180;
                auVar40._8_8_ = uStack_168;
                auVar40._0_8_ = uStack_170;
                if ((bVar5 >> 3 & 1) != 0) {
                  fVar50 = fVar25 * (float)local_180;
                  fVar52 = fVar31 * fVar52;
                  fVar53 = fVar26 * (float)uStack_178;
                  fVar54 = fVar54 * 1.0;
                  auVar34._0_4_ = fVar25 * (float)uStack_170;
                  auVar34._4_4_ = fVar31 * fVar64;
                  auVar34._8_4_ = fVar26 * (float)uStack_168;
                  auVar34._12_4_ = fVar65 * 1.0;
                  auVar7._4_4_ = fVar52;
                  auVar7._0_4_ = fVar50;
                  auVar7._8_4_ = fVar53;
                  auVar7._12_4_ = fVar54;
                  auVar46 = NEON_fmin(auVar7,auVar34,4);
                  auVar8._4_4_ = fVar52;
                  auVar8._0_4_ = fVar50;
                  auVar8._8_4_ = fVar53;
                  auVar8._12_4_ = fVar54;
                  auVar40 = NEON_fmax(auVar8,auVar34,4);
                }
                auVar35._0_4_ = pfVar2[4] + auVar46._0_4_;
                auVar35._4_4_ = pfVar2[5] + auVar46._4_4_;
                auVar35._8_4_ = pfVar2[6] + auVar46._8_4_;
                auVar35._12_4_ = auVar46._12_4_ + 0.0;
                auVar28._0_4_ = pfVar2[4] + auVar40._0_4_;
                auVar28._4_4_ = pfVar2[5] + auVar40._4_4_;
                auVar28._8_4_ = pfVar2[6] + auVar40._8_4_;
                auVar28._12_4_ = auVar40._12_4_ + 0.0;
                auVar29 = NEON_fmax(auVar28,*(undefined1 (*) [16])(param_1 + 0x30),4);
                auVar36 = NEON_fmin(auVar35,*(undefined1 (*) [16])(param_1 + 0x20),4);
              }
              else {
                fVar50 = *pfVar2;
                fVar53 = pfVar2[1];
                fVar44 = pfVar2[2];
                fVar47 = pfVar2[3];
                fVar48 = fVar53 + fVar53;
                fVar49 = fVar44 + fVar44;
                fVar51 = (fVar50 + fVar50) * fVar50;
                fVar45 = (fVar50 + fVar50) * fVar47;
                auVar41._0_4_ = -(uint)((bVar5 & 8) == 0);
                auVar41._4_4_ = auVar41._0_4_;
                auVar41._8_4_ = auVar41._0_4_;
                auVar41._12_4_ = auVar41._0_4_;
                auVar61._0_4_ = (float)uStack_170 - (float)local_a0;
                auVar61._4_4_ = fVar64 - local_a0._4_4_;
                auVar61._8_4_ = (float)uStack_168 - local_98;
                auVar61._12_4_ = fVar65 - fStack_94;
                fVar64 = (float)local_b0 - (float)local_180;
                fVar52 = (float)(local_b0 >> 0x20) - fVar52;
                fVar65 = (float)uStack_a8 - (float)uStack_178;
                fVar54 = (float)(uStack_a8 >> 0x20) - fVar54;
                auVar37._0_4_ = ABS(fVar25) * fVar64;
                auVar37._4_4_ = ABS(fVar31) * fVar52;
                auVar37._8_4_ = ABS(fVar26) * fVar65;
                auVar37._12_4_ = fVar54 * 1.0;
                auVar10._4_4_ = ABS(fVar31) * auVar61._4_4_;
                auVar10._0_4_ = ABS(fVar25) * auVar61._0_4_;
                auVar10._8_4_ = ABS(fVar26) * auVar61._8_4_;
                auVar10._12_4_ = auVar61._12_4_ * 1.0;
                auVar9._4_4_ = fVar52;
                auVar9._0_4_ = fVar64;
                auVar9._8_4_ = fVar65;
                auVar9._12_4_ = fVar54;
                fVar25 = 1.0 - fVar44 * fVar49;
                auVar30 = NEON_smin(auVar37 ^ (auVar37 ^ auVar9) & auVar41,
                                    auVar61 ^ (auVar61 ^ auVar10) & ~auVar41,4);
                uVar16 = NEON_fminp(auVar30._0_8_,auVar30._0_8_,4);
                uVar32 = NEON_fmin(CONCAT44(auVar30._8_4_,auVar30._8_4_),uVar16,4);
                uVar16 = CONCAT44(ABS(fVar49 * fVar53 + fVar45) +
                                  ABS(fVar48 * fVar50 - fVar49 * fVar47) + ABS(fVar25 - fVar51),
                                  ABS(fVar49 * fVar50 - fVar48 * fVar47) +
                                  ABS(fVar25 - fVar48 * fVar53) +
                                  ABS(fVar48 * fVar50 + fVar49 * fVar47));
                fVar25 = ABS((1.0 - fVar51) - fVar48 * fVar53) +
                         ABS(fVar49 * fVar50 + fVar48 * fVar47) + ABS(fVar49 * fVar53 - fVar45);
                uVar16 = NEON_fmaxp(uVar16,uVar16,4);
                uVar16 = NEON_fmax(CONCAT44(fVar25,fVar25),uVar16,4);
                fVar25 = (float)uVar32 / (float)uVar16;
                fVar31 = (float)((ulong)uVar32 >> 0x20) / (float)((ulong)uVar16 >> 0x20);
                auVar29._0_4_ = fVar25 + *(float *)(param_1 + 0x30);
                auVar29._4_4_ = fVar31 + *(float *)(param_1 + 0x34);
                auVar29._8_4_ = fVar25 + *(float *)(param_1 + 0x38);
                auVar29._12_4_ = fVar31 + *(float *)(param_1 + 0x3c);
                auVar36._0_4_ = *(float *)(param_1 + 0x20) - fVar25;
                auVar36._4_4_ = *(float *)(param_1 + 0x24) - fVar31;
                auVar36._8_4_ = *(float *)(param_1 + 0x28) - fVar25;
                auVar36._12_4_ = *(float *)(param_1 + 0x2c) - fVar31;
              }
              auVar30 = NEON_fmin(auVar29,param_4[1],4);
              auVar38 = NEON_fmax(auVar36,*param_4,4);
              *(long *)(*param_4 + 8) = auVar38._8_8_;
              *(long *)*param_4 = auVar38._0_8_;
              *(long *)(param_4[1] + 8) = auVar30._8_8_;
              *(long *)param_4[1] = auVar30._0_8_;
            }
          }
          else {
            lVar18 = **(long **)(param_1 + 0x50);
            lVar22 = **(long **)(param_1 + 0x60);
            uVar17 = 0xffffff;
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
              uVar17 = *(undefined4 *)(lVar18 + 0x50);
            }
            local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar17);
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
            local_84 = (undefined4)*puVar13;
            uStack_80 = *puVar13 >> 0x20;
            local_90 = uVar21;
            (**(code **)(*plVar14 + 0x28))(plVar14,&local_f0);
          }
        }
      }
LAB_02effba0:
      uVar23 = uVar23 - 1;
      param_2 = param_2 + 1;
    } while (uVar23 != 0);
  }
  return;
}


