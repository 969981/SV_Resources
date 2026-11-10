/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ed0254; name: FUN_02ed0254
 */


void FUN_02ed0254(long *param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar14;
  long lVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  long *plVar19;
  uint uVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  long lVar26;
  byte *pbVar27;
  undefined4 uVar28;
  long lVar29;
  byte *pbVar30;
  undefined8 *puVar31;
  long *plVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  float fVar45;
  float fVar50;
  float fVar51;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined2 local_138 [8];
  undefined8 local_128;
  undefined8 local_120;
  long local_118;
  uint local_110;
  undefined8 local_108;
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
  undefined2 local_b0;
  undefined4 local_ac;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  uint local_90;
  undefined1 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  
  if ((int)param_1[1] != 0) {
    fVar67 = (float)param_1[3];
    fVar68 = (float)((ulong)param_1[3] >> 0x20);
    uVar24 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 2);
    fVar63 = (float)uVar24;
    fVar66 = (float)((ulong)uVar24 >> 0x20);
    fVar62 = (float)param_1[5];
    fVar45 = (float)((ulong)param_1[5] >> 0x20);
    uVar24 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 4);
    fVar60 = (float)uVar24;
    fVar61 = (float)((ulong)uVar24 >> 0x20);
    iVar18 = -(uint)((float)param_3[2] <= fVar60);
    iVar3 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= fVar61);
    bVar33 = (byte)((uint)iVar3 >> 8);
    bVar34 = (byte)((uint)iVar3 >> 0x10);
    bVar35 = (byte)((uint)iVar3 >> 0x18);
    iVar4 = -(uint)((float)param_3[3] <= fVar62);
    bVar36 = (byte)((uint)iVar4 >> 8);
    bVar37 = (byte)((uint)iVar4 >> 0x10);
    bVar38 = (byte)((uint)iVar4 >> 0x18);
    iVar5 = -(uint)((float)((ulong)param_3[3] >> 0x20) <= fVar45);
    lVar15 = param_2[1];
    auVar52 = *(undefined1 (*) [16])(param_3 + 6);
    auVar46 = *(undefined1 (*) [16])(param_3 + 8);
    iVar8 = -(uint)(fVar63 <= (float)param_3[4]);
    iVar9 = -(uint)(fVar66 <= (float)((ulong)param_3[4] >> 0x20));
    bVar39 = (byte)((uint)iVar9 >> 8);
    bVar40 = (byte)((uint)iVar9 >> 0x10);
    bVar41 = (byte)((uint)iVar9 >> 0x18);
    iVar10 = -(uint)(fVar67 <= (float)param_3[5]);
    bVar42 = (byte)((uint)iVar10 >> 8);
    bVar43 = (byte)((uint)iVar10 >> 0x10);
    bVar44 = (byte)((uint)iVar10 >> 0x18);
    iVar11 = -(uint)(fVar68 <= (float)((ulong)param_3[5] >> 0x20));
    auVar55._12_4_ = fVar45;
    auVar55._0_12_ = *(undefined1 (*) [12])(param_1 + 4);
    auVar56 = NEON_fmax(auVar52,auVar55,4);
    lVar23 = *param_1;
    auVar59._12_4_ = fVar68;
    auVar59._0_12_ = *(undefined1 (*) [12])(param_1 + 2);
    auVar55 = NEON_fmin(auVar46,auVar59,4);
    auVar57[4] = (byte)iVar3;
    auVar57._0_4_ = iVar18;
    auVar57[5] = bVar33;
    auVar57[6] = bVar34;
    auVar57[7] = bVar35;
    auVar57[8] = (byte)iVar4;
    auVar57[9] = bVar36;
    auVar57[10] = bVar37;
    auVar57[0xb] = bVar38;
    auVar57[0xc] = (char)iVar5;
    auVar57[0xd] = (char)((uint)iVar5 >> 8);
    auVar57[0xe] = (char)((uint)iVar5 >> 0x10);
    auVar57[0xf] = (char)((uint)iVar5 >> 0x18);
    auVar52 = auVar52 ^ (auVar52 ^ auVar56) & ~auVar57;
    auVar56[4] = (byte)iVar9;
    auVar56._0_4_ = iVar8;
    auVar56[5] = bVar39;
    auVar56[6] = bVar40;
    auVar56[7] = bVar41;
    auVar56[8] = (byte)iVar10;
    auVar56[9] = bVar42;
    auVar56[10] = bVar43;
    auVar56[0xb] = bVar44;
    auVar56[0xc] = (char)iVar11;
    auVar56[0xd] = (char)((uint)iVar11 >> 8);
    auVar56[0xe] = (char)((uint)iVar11 >> 0x10);
    auVar56[0xf] = (char)((uint)iVar11 >> 0x18);
    auVar46 = auVar46 ^ (auVar46 ^ auVar55) & ~auVar56;
    param_3[7] = auVar52._8_8_;
    param_3[6] = auVar52._0_8_;
    param_3[9] = auVar46._8_8_;
    param_3[8] = auVar46._0_8_;
    if (CONCAT13(bVar41 & bVar35 & (byte)((uint)iVar8 >> 0x18) & (byte)((uint)iVar18 >> 0x18) &
                 bVar44 & bVar38,
                 CONCAT12(bVar40 & bVar34 &
                          (byte)((uint)iVar8 >> 0x10) & (byte)((uint)iVar18 >> 0x10) &
                          bVar43 & bVar37,
                          CONCAT11(bVar39 & bVar33 &
                                   (byte)((uint)iVar8 >> 8) & (byte)((uint)iVar18 >> 8) &
                                   bVar42 & bVar36,
                                   (byte)iVar9 & (byte)iVar3 & (byte)iVar8 & (byte)iVar18 &
                                   (byte)iVar10 & (byte)iVar4))) != 0) {
      puVar31 = (undefined8 *)((ulong)&local_100 | 4);
      uVar21 = 0;
      pbVar30 = (byte *)(lVar23 + (long)param_1);
LAB_02ed0328:
      bVar33 = pbVar30[3];
      if ((char)bVar33 < '\0') goto LAB_02ed06d0;
      plVar32 = (long *)*param_3;
      uVar2 = (uint)CONCAT12(bVar33,*(undefined2 *)(pbVar30 + 4));
      uVar16 = (**(code **)(**(long **)(*plVar32 + 0x50) + 0x70))(*(long **)(*plVar32 + 0x50),uVar2)
      ;
      uVar17 = (**(code **)(**(long **)(*plVar32 + 0x50) + 0x78))(*(long **)(*plVar32 + 0x50),uVar2)
      ;
      iVar18 = (**(code **)(**(long **)(*plVar32 + 0x50) + 0x20))();
      uVar20 = 1;
      if (iVar18 <= (int)uVar2 && (~uVar17 & 7) != 0) {
        uVar20 = 2;
      }
      uVar17 = 0;
      if (uVar20 < 2) {
        uVar20 = 1;
      }
      do {
        plVar22 = (long *)plVar32[4];
        uVar14 = ((uVar17 | uVar2 << 1) + 1 <<
                 (ulong)(-((uint)*(byte *)(*plVar32 + 0x1c) + *(int *)((long)plVar22 + 0x1c)) & 0x1f
                        )) - 1 |
                 *(uint *)(PTR_DAT_047d1a60 + (long)*(int *)((long)plVar22 + 0x1c) * 4) &
                 *(uint *)(plVar22 + 3);
        if (*(long *)plVar32[2] == 0) {
          lVar23 = *plVar22;
          plVar22 = (long *)plVar32[6];
          lVar26 = *(long *)plVar32[3];
          uVar28 = 0xffffff;
          local_b0 = 0xffff;
          local_ac = 0;
          local_88 = 0xffff;
          local_84 = 0;
          uStack_80 = 0;
          uStack_7c = 0;
          uStack_a8 = 0;
          if (lVar26 == 0) {
            local_c8 = 0xffffffffffffffff;
          }
          else {
            local_c8 = *(undefined8 *)(lVar26 + 0xb0);
            uVar28 = *(undefined4 *)(lVar26 + 0x50);
          }
          local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar28);
          if (lVar23 == 0) {
            local_98 = 0xffffff;
            local_a0 = 0xffffffffffffffff;
          }
          else {
            local_a0 = *(undefined8 *)(lVar23 + 0xb0);
            local_98 = *(undefined4 *)(lVar23 + 0x50);
          }
        }
        else {
          local_100 = *(undefined8 *)plVar32[5];
          uStack_f8 = ((undefined8 *)plVar32[5])[1];
          plVar19 = *(long **)plVar32[2];
          (**(code **)(*plVar19 + 0x40))
                    (plVar19,uVar16,6,*plVar22,plVar22[1],*plVar32,uVar14,0,&local_100);
          lVar23 = plVar32[2];
          if (*(long *)(lVar23 + 8) != 0) {
            local_f0 = CONCAT62(local_f0._2_6_,*(undefined2 *)(lVar23 + 0x10));
            uVar24 = *(undefined8 *)(lVar23 + 0x14);
            *(undefined4 *)((undefined8 *)((ulong)&local_f0 | 4) + 1) =
                 *(undefined4 *)(lVar23 + 0x1c);
            *(undefined8 *)((ulong)&local_f0 | 4) = uVar24;
            puVar25 = (undefined8 *)plVar32[3];
            local_e0 = *puVar25;
            local_d8 = puVar25[1];
            local_d0 = puVar25[2];
            local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(puVar25 + 3));
            local_138[0] = (undefined2)local_100;
            uVar24 = *puVar31;
            local_c0 = 0;
            *(undefined4 *)((undefined8 *)((ulong)local_138 | 4) + 1) = *(undefined4 *)(puVar31 + 1)
            ;
            *(undefined8 *)((ulong)local_138 | 4) = uVar24;
            local_128 = *(undefined8 *)plVar32[4];
            local_120 = ((undefined8 *)plVar32[4])[1];
            local_118 = *plVar32;
            local_108 = 0;
            local_110 = uVar14;
            uVar21 = (**(code **)(**(long **)(lVar23 + 8) + 0x40))
                               (*(long **)(lVar23 + 8),6,1,&local_f0,local_138);
            if ((uVar21 & 1) == 0) break;
            lVar23 = plVar32[2];
          }
          plVar22 = (long *)plVar32[6];
          lVar29 = *(long *)plVar32[3];
          lVar26 = *(long *)plVar32[4];
          uVar28 = 0xffffff;
          if (lVar29 == 0) {
            local_c8 = 0xffffffffffffffff;
          }
          else {
            local_c8 = *(undefined8 *)(lVar29 + 0xb0);
            uVar28 = *(undefined4 *)(lVar29 + 0x50);
          }
          local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar28);
          local_b0 = *(undefined2 *)(lVar23 + 0x10);
          local_ac = (undefined4)*(ulong *)(lVar23 + 0x14);
          uStack_a8 = *(ulong *)(lVar23 + 0x14) >> 0x20;
          if (lVar26 == 0) {
            local_98 = 0xffffff;
            local_a0 = 0xffffffffffffffff;
          }
          else {
            local_a0 = *(undefined8 *)(lVar26 + 0xb0);
            local_98 = *(undefined4 *)(lVar26 + 0x50);
          }
          uStack_7c = *(undefined4 *)(puVar31 + 1);
          local_88 = (undefined2)local_100;
          local_84 = (undefined4)*puVar31;
          uStack_80 = (undefined4)((ulong)*puVar31 >> 0x20);
        }
        uStack_74 = 0;
        local_78 = 6;
        local_8c = 0xf;
        local_b4 = 0xf;
        local_b8 = 0xffffffff;
        local_d0 = local_d0 & 0xffffffff00000000;
        local_d8 = 0;
        local_e0 = 0;
        uStack_e8 = 0;
        local_f0 = 0;
        local_90 = uVar14;
        (**(code **)(*plVar22 + 0x28))(plVar22,&local_f0);
        uVar17 = uVar17 + 1;
      } while (uVar20 != uVar17);
      goto LAB_02ed068c;
    }
  }
  return;
LAB_02ed06d0:
  uVar1 = (long)(int)uVar21 + 1;
  uVar2 = ((bVar33 & 0x7f) << 0x11 | (uint)*(ushort *)(pbVar30 + 4) << 1) + (int)uVar21;
  fVar45 = (fVar60 - fVar63) * 0.0044247787;
  fVar50 = (fVar61 - fVar66) * 0.0044247787;
  fVar51 = (fVar62 - fVar67) * 0.0044247787;
  pbVar30 = (byte *)((long)param_1 + uVar1 * 6 + *param_1);
  pbVar27 = (byte *)((long)param_1 + (long)(int)uVar2 * 6 + *param_1);
  bVar37 = pbVar27[1] >> 4;
  bVar35 = *pbVar30 >> 4;
  bVar33 = *pbVar30 & 0xf;
  bVar36 = pbVar30[1] >> 4;
  bVar34 = pbVar30[1] & 0xf;
  fVar69 = fVar66 + (float)(byte)(bVar36 * bVar36) * fVar50;
  fVar64 = fVar63 + (float)(byte)(bVar35 * bVar35) * fVar45;
  bVar35 = *pbVar27 & 0xf;
  bVar36 = *pbVar27 >> 4;
  fVar71 = fVar60 - (float)(byte)(bVar33 * bVar33) * fVar45;
  fVar65 = fVar61 - (float)(byte)(bVar34 * bVar34) * fVar50;
  bVar38 = pbVar27[2] >> 4;
  bVar39 = pbVar30[2] >> 4;
  bVar33 = pbVar30[2] & 0xf;
  bVar34 = pbVar27[1] & 0xf;
  fVar54 = fVar63 + (float)(byte)(bVar36 * bVar36) * fVar45;
  fVar58 = fVar60 - (float)(byte)(bVar35 * bVar35) * fVar45;
  fVar70 = fVar67 + (float)(byte)(bVar39 * bVar39) * fVar51;
  fVar72 = fVar62 - (float)(byte)(bVar33 * bVar33) * fVar51;
  fVar45 = fVar66 + (float)(byte)(bVar37 * bVar37) * fVar50;
  fVar68 = fVar67 + (float)(byte)(bVar38 * bVar38) * fVar51;
  bVar33 = pbVar27[2] & 0xf;
  fVar50 = fVar61 - (float)(byte)(bVar34 * bVar34) * fVar50;
  fVar51 = fVar62 - (float)(byte)(bVar33 * bVar33) * fVar51;
  auVar57 = *(undefined1 (*) [16])(param_3 + 6);
  auVar52._4_4_ = fVar69;
  auVar52._0_4_ = fVar64;
  auVar52._8_4_ = fVar70;
  auVar52._12_4_ = 0;
  auVar59 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar52,4);
  auVar46._4_4_ = fVar65;
  auVar46._0_4_ = fVar71;
  auVar46._8_4_ = fVar72;
  auVar46._12_4_ = 0;
  auVar56 = NEON_fmax(auVar57,auVar46,4);
  fVar66 = (float)param_3[4];
  auVar53._0_4_ = -(uint)(fVar64 <= fVar66);
  fVar67 = (float)((ulong)param_3[4] >> 0x20);
  auVar53._4_4_ = -(uint)(fVar69 <= fVar67);
  fVar6 = (float)param_3[5];
  auVar53._8_4_ = -(uint)(fVar70 <= fVar6);
  fVar7 = (float)((ulong)param_3[5] >> 0x20);
  auVar53._12_4_ = -(uint)(0.0 <= fVar7);
  fVar60 = (float)param_3[2];
  auVar47._0_4_ = -(uint)(fVar60 <= fVar71);
  fVar61 = (float)((ulong)param_3[2] >> 0x20);
  auVar47._4_4_ = -(uint)(fVar61 <= fVar65);
  fVar62 = (float)param_3[3];
  auVar47._8_4_ = -(uint)(fVar62 <= fVar72);
  fVar63 = (float)((ulong)param_3[3] >> 0x20);
  auVar47._12_4_ = -(uint)(fVar63 <= 0.0);
  iVar18 = -(uint)(fVar60 <= fVar58);
  iVar3 = -(uint)(fVar61 <= fVar50);
  bVar33 = (byte)((uint)iVar3 >> 8);
  bVar34 = (byte)((uint)iVar3 >> 0x10);
  bVar35 = (byte)((uint)iVar3 >> 0x18);
  iVar4 = -(uint)(fVar62 <= fVar51);
  iVar5 = -(uint)(fVar63 <= 0.0);
  iVar8 = -(uint)(fVar54 <= fVar66);
  iVar9 = -(uint)(fVar45 <= fVar67);
  bVar36 = (byte)((uint)iVar9 >> 8);
  bVar37 = (byte)((uint)iVar9 >> 0x10);
  bVar38 = (byte)((uint)iVar9 >> 0x18);
  iVar10 = -(uint)(fVar68 <= fVar6);
  iVar11 = -(uint)(0.0 <= fVar7);
  auVar57 = auVar57 ^ (auVar57 ^ auVar56) & ~auVar47;
  auVar59 = auVar59 ^ (auVar59 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar53;
  auVar12._4_4_ = fVar45;
  auVar12._0_4_ = fVar54;
  auVar12._8_4_ = fVar68;
  auVar12._12_4_ = 0;
  auVar55 = NEON_fmin(auVar59,auVar12,4);
  auVar13._4_4_ = fVar50;
  auVar13._0_4_ = fVar58;
  auVar13._8_4_ = fVar51;
  auVar13._12_4_ = 0;
  auVar56 = NEON_fmax(auVar57,auVar13,4);
  auVar48[0xc] = (char)iVar5;
  auVar48._8_4_ = iVar4;
  auVar48[0xd] = (char)((uint)iVar5 >> 8);
  auVar48[0xe] = (char)((uint)iVar5 >> 0x10);
  auVar48[0xf] = (char)((uint)iVar5 >> 0x18);
  auVar48[4] = (byte)iVar3;
  auVar48._0_4_ = iVar18;
  auVar48[5] = bVar33;
  auVar48[6] = bVar34;
  auVar48[7] = bVar35;
  auVar56 = auVar56 ^ (auVar56 ^ auVar57) & auVar48;
  param_3[7] = auVar56._8_8_;
  param_3[6] = auVar56._0_8_;
  auVar49[0xc] = (char)iVar11;
  auVar49._8_4_ = iVar10;
  auVar49[0xd] = (char)((uint)iVar11 >> 8);
  auVar49[0xe] = (char)((uint)iVar11 >> 0x10);
  auVar49[0xf] = (char)((uint)iVar11 >> 0x18);
  auVar49[4] = (byte)iVar9;
  auVar49._0_4_ = iVar8;
  auVar49[5] = bVar36;
  auVar49[6] = bVar37;
  auVar49[7] = bVar38;
  auVar55 = auVar55 ^ (auVar55 ^ auVar59) & auVar49;
  param_3[9] = auVar55._8_8_;
  param_3[8] = auVar55._0_8_;
  bVar33 = CONCAT13((byte)((uint)auVar53._4_4_ >> 0x18) & (byte)((uint)auVar47._4_4_ >> 0x18) &
                    (byte)((uint)auVar53._0_4_ >> 0x18) & (byte)((uint)auVar47._0_4_ >> 0x18) &
                    (byte)((uint)auVar53._8_4_ >> 0x18) & (byte)((uint)auVar47._8_4_ >> 0x18),
                    CONCAT12((byte)((uint)auVar53._4_4_ >> 0x10) &
                             (byte)((uint)auVar47._4_4_ >> 0x10) &
                             (byte)((uint)auVar53._0_4_ >> 0x10) &
                             (byte)((uint)auVar47._0_4_ >> 0x10) &
                             (byte)((uint)auVar53._8_4_ >> 0x10) &
                             (byte)((uint)auVar47._8_4_ >> 0x10),
                             CONCAT11((byte)((uint)auVar53._4_4_ >> 8) &
                                      (byte)((uint)auVar47._4_4_ >> 8) &
                                      (byte)((uint)auVar53._0_4_ >> 8) &
                                      (byte)((uint)auVar47._0_4_ >> 8) &
                                      (byte)((uint)auVar53._8_4_ >> 8) &
                                      (byte)((uint)auVar47._8_4_ >> 8),
                                      (byte)auVar53._4_4_ & (byte)auVar47._4_4_ &
                                      (byte)auVar53._0_4_ & (byte)auVar47._0_4_ &
                                      (byte)auVar53._8_4_ & (byte)auVar47._8_4_))) != 0 |
           (CONCAT13(bVar38 & bVar35 & (byte)((uint)iVar8 >> 0x18) & (byte)((uint)iVar18 >> 0x18) &
                     (byte)((uint)iVar10 >> 0x18) & (byte)((uint)iVar4 >> 0x18),
                     CONCAT12(bVar37 & bVar34 &
                              (byte)((uint)iVar8 >> 0x10) & (byte)((uint)iVar18 >> 0x10) &
                              (byte)((uint)iVar10 >> 0x10) & (byte)((uint)iVar4 >> 0x10),
                              CONCAT11(bVar36 & bVar33 &
                                       (byte)((uint)iVar8 >> 8) & (byte)((uint)iVar18 >> 8) &
                                       (byte)((uint)iVar10 >> 8) & (byte)((uint)iVar4 >> 8),
                                       (byte)iVar9 & (byte)iVar3 & (byte)iVar8 & (byte)iVar18 &
                                       (byte)iVar10 & (byte)iVar4))) != 0) << 1;
  uVar21 = uVar1 & 0xffffffff;
  fVar60 = fVar71;
  fVar61 = fVar65;
  fVar62 = fVar72;
  fVar63 = fVar64;
  fVar66 = fVar69;
  fVar67 = fVar70;
  if (bVar33 != 1) {
    if (bVar33 == 3) {
      iVar18 = (int)param_2[1];
      lVar23 = (long)iVar18;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar18) {
        FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar23 + 1);
        iVar18 = (int)param_2[1];
      }
      puVar25 = (undefined8 *)(*param_2 + (long)iVar18 * 0x30);
      *(int *)(param_2 + 1) = (int)(lVar23 + 1);
      *(uint *)(puVar25 + 4) = uVar2;
      puVar25[1] = (ulong)(uint)fVar68;
      *puVar25 = CONCAT44(fVar45,fVar54);
      puVar25[3] = (ulong)(uint)fVar51;
      puVar25[2] = CONCAT44(fVar50,fVar58);
      uVar21 = uVar1 & 0xffffffff;
    }
    else if (bVar33 == 2) {
      uVar21 = (ulong)uVar2;
      pbVar30 = pbVar27;
      fVar60 = fVar58;
      fVar61 = fVar50;
      fVar62 = fVar51;
      fVar63 = fVar54;
      fVar66 = fVar45;
      fVar67 = fVar68;
    }
    else {
LAB_02ed068c:
      if ((int)param_2[1] <= (int)lVar15) {
        return;
      }
      iVar18 = (int)param_2[1] + -1;
      puVar25 = (undefined8 *)(*param_2 + (long)iVar18 * 0x30);
      *(int *)(param_2 + 1) = iVar18;
      uVar21 = (ulong)*(int *)(puVar25 + 4);
      pbVar30 = (byte *)((long)param_1 + uVar21 * 6 + *param_1);
      fVar60 = (float)puVar25[2];
      fVar61 = (float)((ulong)puVar25[2] >> 0x20);
      fVar62 = (float)puVar25[3];
      fVar63 = (float)*puVar25;
      fVar66 = (float)((ulong)*puVar25 >> 0x20);
      fVar67 = (float)puVar25[1];
    }
  }
  goto LAB_02ed0328;
}


