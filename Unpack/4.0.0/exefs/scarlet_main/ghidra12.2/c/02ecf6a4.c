/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ecf6a4; name: FUN_02ecf6a4
 */


void FUN_02ecf6a4(long *param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  long lVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  long *plVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 uVar23;
  byte *pbVar24;
  long *plVar25;
  byte *pbVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  float fVar39;
  float fVar44;
  float fVar45;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  undefined1 auVar53 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined2 local_e8 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  uint local_c0;
  undefined8 local_b8;
  undefined2 local_b0 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if ((int)param_1[1] != 0) {
    fVar62 = (float)param_1[3];
    fVar63 = (float)((ulong)param_1[3] >> 0x20);
    uVar23 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 2);
    fVar58 = (float)uVar23;
    fVar61 = (float)((ulong)uVar23 >> 0x20);
    fVar56 = (float)param_1[5];
    fVar57 = (float)((ulong)param_1[5] >> 0x20);
    uVar23 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 4);
    fVar54 = (float)uVar23;
    fVar55 = (float)((ulong)uVar23 >> 0x20);
    iVar17 = -(uint)((float)param_3[2] <= fVar54);
    iVar3 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= fVar55);
    bVar27 = (byte)((uint)iVar3 >> 8);
    bVar28 = (byte)((uint)iVar3 >> 0x10);
    bVar29 = (byte)((uint)iVar3 >> 0x18);
    iVar4 = -(uint)((float)param_3[3] <= fVar56);
    bVar30 = (byte)((uint)iVar4 >> 8);
    bVar31 = (byte)((uint)iVar4 >> 0x10);
    bVar32 = (byte)((uint)iVar4 >> 0x18);
    iVar5 = -(uint)((float)((ulong)param_3[3] >> 0x20) <= fVar57);
    lVar14 = param_2[1];
    auVar46 = *(undefined1 (*) [16])(param_3 + 6);
    auVar40 = *(undefined1 (*) [16])(param_3 + 8);
    iVar7 = -(uint)(fVar58 <= (float)param_3[4]);
    iVar8 = -(uint)(fVar61 <= (float)((ulong)param_3[4] >> 0x20));
    bVar33 = (byte)((uint)iVar8 >> 8);
    bVar34 = (byte)((uint)iVar8 >> 0x10);
    bVar35 = (byte)((uint)iVar8 >> 0x18);
    iVar9 = -(uint)(fVar62 <= (float)param_3[5]);
    bVar36 = (byte)((uint)iVar9 >> 8);
    bVar37 = (byte)((uint)iVar9 >> 0x10);
    bVar38 = (byte)((uint)iVar9 >> 0x18);
    iVar10 = -(uint)(fVar63 <= (float)((ulong)param_3[5] >> 0x20));
    auVar49._12_4_ = fVar57;
    auVar49._0_12_ = *(undefined1 (*) [12])(param_1 + 4);
    auVar50 = NEON_fmax(auVar46,auVar49,4);
    lVar22 = *param_1;
    auVar53._12_4_ = fVar63;
    auVar53._0_12_ = *(undefined1 (*) [12])(param_1 + 2);
    auVar49 = NEON_fmin(auVar40,auVar53,4);
    auVar51[4] = (byte)iVar3;
    auVar51._0_4_ = iVar17;
    auVar51[5] = bVar27;
    auVar51[6] = bVar28;
    auVar51[7] = bVar29;
    auVar51[8] = (byte)iVar4;
    auVar51[9] = bVar30;
    auVar51[10] = bVar31;
    auVar51[0xb] = bVar32;
    auVar51[0xc] = (char)iVar5;
    auVar51[0xd] = (char)((uint)iVar5 >> 8);
    auVar51[0xe] = (char)((uint)iVar5 >> 0x10);
    auVar51[0xf] = (char)((uint)iVar5 >> 0x18);
    auVar46 = auVar46 ^ (auVar46 ^ auVar50) & ~auVar51;
    auVar50[4] = (byte)iVar8;
    auVar50._0_4_ = iVar7;
    auVar50[5] = bVar33;
    auVar50[6] = bVar34;
    auVar50[7] = bVar35;
    auVar50[8] = (byte)iVar9;
    auVar50[9] = bVar36;
    auVar50[10] = bVar37;
    auVar50[0xb] = bVar38;
    auVar50[0xc] = (char)iVar10;
    auVar50[0xd] = (char)((uint)iVar10 >> 8);
    auVar50[0xe] = (char)((uint)iVar10 >> 0x10);
    auVar50[0xf] = (char)((uint)iVar10 >> 0x18);
    auVar40 = auVar40 ^ (auVar40 ^ auVar49) & ~auVar50;
    param_3[7] = auVar46._8_8_;
    param_3[6] = auVar46._0_8_;
    param_3[9] = auVar40._8_8_;
    param_3[8] = auVar40._0_8_;
    if (CONCAT13(bVar35 & bVar29 & (byte)((uint)iVar7 >> 0x18) & (byte)((uint)iVar17 >> 0x18) &
                 bVar38 & bVar32,
                 CONCAT12(bVar34 & bVar28 &
                          (byte)((uint)iVar7 >> 0x10) & (byte)((uint)iVar17 >> 0x10) &
                          bVar37 & bVar31,
                          CONCAT11(bVar33 & bVar27 &
                                   (byte)((uint)iVar7 >> 8) & (byte)((uint)iVar17 >> 8) &
                                   bVar36 & bVar30,
                                   (byte)iVar8 & (byte)iVar3 & (byte)iVar7 & (byte)iVar17 &
                                   (byte)iVar9 & (byte)iVar4))) != 0) {
      uVar20 = 0;
      pbVar26 = (byte *)(lVar22 + (long)param_1);
LAB_02ecf764:
      bVar27 = pbVar26[3];
      if ((char)bVar27 < '\0') goto LAB_02ecf9b8;
      plVar25 = (long *)*param_3;
      uVar2 = (uint)CONCAT12(bVar27,*(undefined2 *)(pbVar26 + 4));
      uVar15 = (**(code **)(**(long **)(*plVar25 + 0x50) + 0x70))(*(long **)(*plVar25 + 0x50),uVar2)
      ;
      uVar16 = (**(code **)(**(long **)(*plVar25 + 0x50) + 0x78))(*(long **)(*plVar25 + 0x50),uVar2)
      ;
      iVar17 = (**(code **)(**(long **)(*plVar25 + 0x50) + 0x20))();
      uVar19 = 1;
      if (iVar17 <= (int)uVar2 && (~uVar16 & 7) != 0) {
        uVar19 = 2;
      }
      uVar16 = 0;
      if (uVar19 < 2) {
        uVar19 = 1;
      }
      do {
        puVar21 = (undefined8 *)plVar25[4];
        uVar13 = ((uVar16 | uVar2 << 1) + 1 <<
                 (ulong)(-((uint)*(byte *)(*plVar25 + 0x1c) + *(int *)((long)puVar21 + 0x1c)) & 0x1f
                        )) - 1 |
                 *(uint *)(PTR_DAT_047d1a60 + (long)*(int *)((long)puVar21 + 0x1c) * 4) &
                 *(uint *)(puVar21 + 3);
        if (*(long *)plVar25[2] != 0) {
          local_78 = *(undefined8 *)plVar25[5];
          uStack_70 = ((undefined8 *)plVar25[5])[1];
          plVar18 = *(long **)plVar25[2];
          (**(code **)(*plVar18 + 0x40))
                    (plVar18,uVar15,6,*puVar21,puVar21[1],*plVar25,uVar13,0,&local_78);
          lVar22 = plVar25[2];
          if (*(long *)(lVar22 + 8) != 0) {
            local_b0[0] = *(undefined2 *)(lVar22 + 0x10);
            uVar23 = *(undefined8 *)(lVar22 + 0x14);
            *(undefined4 *)((undefined8 *)((ulong)local_b0 | 4) + 1) =
                 *(undefined4 *)(lVar22 + 0x1c);
            *(undefined8 *)((ulong)local_b0 | 4) = uVar23;
            puVar21 = (undefined8 *)plVar25[3];
            local_a0 = *puVar21;
            local_98 = puVar21[1];
            local_90 = puVar21[2];
            local_88 = *(undefined4 *)(puVar21 + 3);
            local_e8[0] = (undefined2)local_78;
            uVar23 = *(undefined8 *)((ulong)&local_78 | 4);
            local_80 = 0;
            *(undefined4 *)((undefined8 *)((ulong)local_e8 | 4) + 1) =
                 *(undefined4 *)((undefined8 *)((ulong)&local_78 | 4) + 1);
            *(undefined8 *)((ulong)local_e8 | 4) = uVar23;
            local_d8 = *(undefined8 *)plVar25[4];
            local_d0 = ((undefined8 *)plVar25[4])[1];
            local_c8 = *plVar25;
            local_b8 = 0;
            local_c0 = uVar13;
            uVar20 = (**(code **)(**(long **)(lVar22 + 8) + 0x40))
                               (*(long **)(lVar22 + 8),6,1,local_b0,local_e8);
            if ((uVar20 & 1) == 0) break;
          }
        }
        plVar18 = (long *)plVar25[6];
        iVar17 = (int)plVar18[1];
        lVar22 = (long)iVar17;
        if ((int)(*(uint *)((long)plVar18 + 0xc) & 0x7fffffff) <= iVar17) {
          FUN_02e931c8(plVar18,PTR_PTR_047d1a50,lVar22 + 1);
          iVar17 = (int)plVar18[1];
        }
        uVar16 = uVar16 + 1;
        *(uint *)(*plVar18 + (long)iVar17 * 4) = uVar13;
        *(int *)(plVar18 + 1) = (int)(lVar22 + 1);
      } while (uVar19 != uVar16);
      goto LAB_02ecf970;
    }
  }
  return;
LAB_02ecf9b8:
  uVar1 = (long)(int)uVar20 + 1;
  uVar2 = ((bVar27 & 0x7f) << 0x11 | (uint)*(ushort *)(pbVar26 + 4) << 1) + (int)uVar20;
  pbVar26 = (byte *)((long)param_1 + uVar1 * 6 + *param_1);
  fVar39 = (fVar54 - fVar58) * 0.0044247787;
  fVar44 = (fVar55 - fVar61) * 0.0044247787;
  fVar45 = (fVar56 - fVar62) * 0.0044247787;
  bVar29 = pbVar26[1] >> 4;
  bVar28 = *pbVar26 >> 4;
  bVar27 = *pbVar26 & 0xf;
  fVar59 = fVar58 + (float)(byte)(bVar28 * bVar28) * fVar39;
  pbVar24 = (byte *)((long)param_1 + (long)(int)uVar2 * 6 + *param_1);
  bVar28 = pbVar26[1] & 0xf;
  fVar64 = fVar61 + (float)(byte)(bVar29 * bVar29) * fVar44;
  bVar29 = *pbVar24 & 0xf;
  bVar30 = *pbVar24 >> 4;
  fVar66 = fVar54 - (float)(byte)(bVar27 * bVar27) * fVar39;
  fVar60 = fVar55 - (float)(byte)(bVar28 * bVar28) * fVar44;
  bVar31 = pbVar24[2] >> 4;
  bVar28 = pbVar26[2] >> 4;
  bVar27 = pbVar26[2] & 0xf;
  fVar65 = fVar62 + (float)(byte)(bVar28 * bVar28) * fVar45;
  fVar67 = fVar56 - (float)(byte)(bVar27 * bVar27) * fVar45;
  fVar48 = fVar58 + (float)(byte)(bVar30 * bVar30) * fVar39;
  bVar28 = pbVar24[1] >> 4;
  bVar27 = pbVar24[1] & 0xf;
  fVar57 = fVar61 + (float)(byte)(bVar28 * bVar28) * fVar44;
  bVar28 = pbVar24[2] & 0xf;
  fVar63 = fVar62 + (float)(byte)(bVar31 * bVar31) * fVar45;
  fVar52 = fVar54 - (float)(byte)(bVar29 * bVar29) * fVar39;
  fVar39 = fVar55 - (float)(byte)(bVar27 * bVar27) * fVar44;
  fVar44 = fVar56 - (float)(byte)(bVar28 * bVar28) * fVar45;
  auVar51 = *(undefined1 (*) [16])(param_3 + 6);
  auVar46._4_4_ = fVar64;
  auVar46._0_4_ = fVar59;
  auVar46._8_4_ = fVar65;
  auVar46._12_4_ = 0;
  auVar53 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar46,4);
  auVar40._4_4_ = fVar60;
  auVar40._0_4_ = fVar66;
  auVar40._8_4_ = fVar67;
  auVar40._12_4_ = 0;
  auVar50 = NEON_fmax(auVar51,auVar40,4);
  fVar61 = (float)param_3[4];
  auVar47._0_4_ = -(uint)(fVar59 <= fVar61);
  fVar62 = (float)((ulong)param_3[4] >> 0x20);
  auVar47._4_4_ = -(uint)(fVar64 <= fVar62);
  fVar45 = (float)param_3[5];
  auVar47._8_4_ = -(uint)(fVar65 <= fVar45);
  fVar6 = (float)((ulong)param_3[5] >> 0x20);
  auVar47._12_4_ = -(uint)(0.0 <= fVar6);
  fVar54 = (float)param_3[2];
  auVar41._0_4_ = -(uint)(fVar54 <= fVar66);
  fVar55 = (float)((ulong)param_3[2] >> 0x20);
  auVar41._4_4_ = -(uint)(fVar55 <= fVar60);
  fVar56 = (float)param_3[3];
  auVar41._8_4_ = -(uint)(fVar56 <= fVar67);
  fVar58 = (float)((ulong)param_3[3] >> 0x20);
  auVar41._12_4_ = -(uint)(fVar58 <= 0.0);
  iVar17 = -(uint)(fVar54 <= fVar52);
  iVar3 = -(uint)(fVar55 <= fVar39);
  bVar27 = (byte)((uint)iVar3 >> 8);
  bVar28 = (byte)((uint)iVar3 >> 0x10);
  bVar29 = (byte)((uint)iVar3 >> 0x18);
  iVar4 = -(uint)(fVar56 <= fVar44);
  iVar5 = -(uint)(fVar58 <= 0.0);
  iVar7 = -(uint)(fVar48 <= fVar61);
  iVar8 = -(uint)(fVar57 <= fVar62);
  bVar30 = (byte)((uint)iVar8 >> 8);
  bVar31 = (byte)((uint)iVar8 >> 0x10);
  bVar32 = (byte)((uint)iVar8 >> 0x18);
  iVar9 = -(uint)(fVar63 <= fVar45);
  iVar10 = -(uint)(0.0 <= fVar6);
  auVar51 = auVar51 ^ (auVar51 ^ auVar50) & ~auVar41;
  auVar53 = auVar53 ^ (auVar53 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar47;
  auVar11._4_4_ = fVar57;
  auVar11._0_4_ = fVar48;
  auVar11._8_4_ = fVar63;
  auVar11._12_4_ = 0;
  auVar49 = NEON_fmin(auVar53,auVar11,4);
  auVar12._4_4_ = fVar39;
  auVar12._0_4_ = fVar52;
  auVar12._8_4_ = fVar44;
  auVar12._12_4_ = 0;
  auVar50 = NEON_fmax(auVar51,auVar12,4);
  auVar42[0xc] = (char)iVar5;
  auVar42._8_4_ = iVar4;
  auVar42[0xd] = (char)((uint)iVar5 >> 8);
  auVar42[0xe] = (char)((uint)iVar5 >> 0x10);
  auVar42[0xf] = (char)((uint)iVar5 >> 0x18);
  auVar42[4] = (byte)iVar3;
  auVar42._0_4_ = iVar17;
  auVar42[5] = bVar27;
  auVar42[6] = bVar28;
  auVar42[7] = bVar29;
  auVar50 = auVar50 ^ (auVar50 ^ auVar51) & auVar42;
  param_3[7] = auVar50._8_8_;
  param_3[6] = auVar50._0_8_;
  auVar43[0xc] = (char)iVar10;
  auVar43._8_4_ = iVar9;
  auVar43[0xd] = (char)((uint)iVar10 >> 8);
  auVar43[0xe] = (char)((uint)iVar10 >> 0x10);
  auVar43[0xf] = (char)((uint)iVar10 >> 0x18);
  auVar43[4] = (byte)iVar8;
  auVar43._0_4_ = iVar7;
  auVar43[5] = bVar30;
  auVar43[6] = bVar31;
  auVar43[7] = bVar32;
  auVar49 = auVar49 ^ (auVar49 ^ auVar53) & auVar43;
  param_3[9] = auVar49._8_8_;
  param_3[8] = auVar49._0_8_;
  bVar27 = CONCAT13((byte)((uint)auVar47._4_4_ >> 0x18) & (byte)((uint)auVar41._4_4_ >> 0x18) &
                    (byte)((uint)auVar47._0_4_ >> 0x18) & (byte)((uint)auVar41._0_4_ >> 0x18) &
                    (byte)((uint)auVar47._8_4_ >> 0x18) & (byte)((uint)auVar41._8_4_ >> 0x18),
                    CONCAT12((byte)((uint)auVar47._4_4_ >> 0x10) &
                             (byte)((uint)auVar41._4_4_ >> 0x10) &
                             (byte)((uint)auVar47._0_4_ >> 0x10) &
                             (byte)((uint)auVar41._0_4_ >> 0x10) &
                             (byte)((uint)auVar47._8_4_ >> 0x10) &
                             (byte)((uint)auVar41._8_4_ >> 0x10),
                             CONCAT11((byte)((uint)auVar47._4_4_ >> 8) &
                                      (byte)((uint)auVar41._4_4_ >> 8) &
                                      (byte)((uint)auVar47._0_4_ >> 8) &
                                      (byte)((uint)auVar41._0_4_ >> 8) &
                                      (byte)((uint)auVar47._8_4_ >> 8) &
                                      (byte)((uint)auVar41._8_4_ >> 8),
                                      (byte)auVar47._4_4_ & (byte)auVar41._4_4_ &
                                      (byte)auVar47._0_4_ & (byte)auVar41._0_4_ &
                                      (byte)auVar47._8_4_ & (byte)auVar41._8_4_))) != 0 |
           (CONCAT13(bVar32 & bVar29 & (byte)((uint)iVar7 >> 0x18) & (byte)((uint)iVar17 >> 0x18) &
                     (byte)((uint)iVar9 >> 0x18) & (byte)((uint)iVar4 >> 0x18),
                     CONCAT12(bVar31 & bVar28 &
                              (byte)((uint)iVar7 >> 0x10) & (byte)((uint)iVar17 >> 0x10) &
                              (byte)((uint)iVar9 >> 0x10) & (byte)((uint)iVar4 >> 0x10),
                              CONCAT11(bVar30 & bVar27 &
                                       (byte)((uint)iVar7 >> 8) & (byte)((uint)iVar17 >> 8) &
                                       (byte)((uint)iVar9 >> 8) & (byte)((uint)iVar4 >> 8),
                                       (byte)iVar8 & (byte)iVar3 & (byte)iVar7 & (byte)iVar17 &
                                       (byte)iVar9 & (byte)iVar4))) != 0) << 1;
  uVar20 = uVar1 & 0xffffffff;
  fVar54 = fVar66;
  fVar55 = fVar60;
  fVar56 = fVar67;
  fVar58 = fVar59;
  fVar61 = fVar64;
  fVar62 = fVar65;
  if (bVar27 != 1) {
    if (bVar27 == 3) {
      iVar17 = (int)param_2[1];
      lVar22 = (long)iVar17;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar17) {
        FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar22 + 1);
        iVar17 = (int)param_2[1];
      }
      puVar21 = (undefined8 *)(*param_2 + (long)iVar17 * 0x30);
      *(int *)(param_2 + 1) = (int)(lVar22 + 1);
      *(uint *)(puVar21 + 4) = uVar2;
      puVar21[1] = (ulong)(uint)fVar63;
      *puVar21 = CONCAT44(fVar57,fVar48);
      puVar21[3] = (ulong)(uint)fVar44;
      puVar21[2] = CONCAT44(fVar39,fVar52);
      uVar20 = uVar1 & 0xffffffff;
    }
    else if (bVar27 == 2) {
      uVar20 = (ulong)uVar2;
      pbVar26 = pbVar24;
      fVar54 = fVar52;
      fVar55 = fVar39;
      fVar56 = fVar44;
      fVar58 = fVar48;
      fVar61 = fVar57;
      fVar62 = fVar63;
    }
    else {
LAB_02ecf970:
      if ((int)param_2[1] <= (int)lVar14) {
        return;
      }
      iVar17 = (int)param_2[1] + -1;
      puVar21 = (undefined8 *)(*param_2 + (long)iVar17 * 0x30);
      *(int *)(param_2 + 1) = iVar17;
      uVar20 = (ulong)*(int *)(puVar21 + 4);
      pbVar26 = (byte *)((long)param_1 + uVar20 * 6 + *param_1);
      fVar54 = (float)puVar21[2];
      fVar55 = (float)((ulong)puVar21[2] >> 0x20);
      fVar56 = (float)puVar21[3];
      fVar58 = (float)*puVar21;
      fVar61 = (float)((ulong)*puVar21 >> 0x20);
      fVar62 = (float)puVar21[1];
    }
  }
  goto LAB_02ecf764;
}


