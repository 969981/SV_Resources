/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ec1ef8; name: FUN_02ec1ef8
 */


void FUN_02ec1ef8(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  byte *pbVar2;
  ulong uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  undefined2 *puVar23;
  uint uVar24;
  byte *pbVar25;
  uint uVar26;
  int iVar27;
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
  byte bVar39;
  float fVar40;
  float fVar45;
  float fVar46;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
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
  float fVar68;
  undefined2 local_e8 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
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
    fVar63 = (float)param_1[3];
    fVar64 = (float)((ulong)param_1[3] >> 0x20);
    uVar18 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 2);
    fVar59 = (float)uVar18;
    fVar62 = (float)((ulong)uVar18 >> 0x20);
    fVar57 = (float)param_1[5];
    fVar58 = (float)((ulong)param_1[5] >> 0x20);
    uVar18 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 4);
    fVar55 = (float)uVar18;
    fVar56 = (float)((ulong)uVar18 >> 0x20);
    iVar15 = -(uint)((float)param_3[2] <= fVar55);
    iVar27 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= fVar56);
    bVar28 = (byte)((uint)iVar27 >> 8);
    bVar29 = (byte)((uint)iVar27 >> 0x10);
    bVar30 = (byte)((uint)iVar27 >> 0x18);
    iVar22 = -(uint)((float)param_3[3] <= fVar57);
    bVar31 = (byte)((uint)iVar22 >> 8);
    bVar32 = (byte)((uint)iVar22 >> 0x10);
    bVar33 = (byte)((uint)iVar22 >> 0x18);
    iVar21 = -(uint)((float)((ulong)param_3[3] >> 0x20) <= fVar58);
    lVar12 = param_2[1];
    auVar48 = *(undefined1 (*) [16])(param_3 + 6);
    auVar41 = *(undefined1 (*) [16])(param_3 + 8);
    iVar5 = -(uint)(fVar59 <= (float)param_3[4]);
    iVar6 = -(uint)(fVar62 <= (float)((ulong)param_3[4] >> 0x20));
    bVar34 = (byte)((uint)iVar6 >> 8);
    bVar35 = (byte)((uint)iVar6 >> 0x10);
    bVar36 = (byte)((uint)iVar6 >> 0x18);
    iVar7 = -(uint)(fVar63 <= (float)param_3[5]);
    bVar37 = (byte)((uint)iVar7 >> 8);
    bVar38 = (byte)((uint)iVar7 >> 0x10);
    bVar39 = (byte)((uint)iVar7 >> 0x18);
    iVar8 = -(uint)(fVar64 <= (float)((ulong)param_3[5] >> 0x20));
    lVar17 = *param_1;
    auVar50._12_4_ = fVar58;
    auVar50._0_12_ = *(undefined1 (*) [12])(param_1 + 4);
    auVar52 = NEON_fmax(auVar48,auVar50,4);
    auVar54._12_4_ = fVar64;
    auVar54._0_12_ = *(undefined1 (*) [12])(param_1 + 2);
    auVar50 = NEON_fmin(auVar41,auVar54,4);
    auVar53[4] = (byte)iVar27;
    auVar53._0_4_ = iVar15;
    auVar53[5] = bVar28;
    auVar53[6] = bVar29;
    auVar53[7] = bVar30;
    auVar53[8] = (byte)iVar22;
    auVar53[9] = bVar31;
    auVar53[10] = bVar32;
    auVar53[0xb] = bVar33;
    auVar53[0xc] = (char)iVar21;
    auVar53[0xd] = (char)((uint)iVar21 >> 8);
    auVar53[0xe] = (char)((uint)iVar21 >> 0x10);
    auVar53[0xf] = (char)((uint)iVar21 >> 0x18);
    auVar48 = auVar48 ^ (auVar48 ^ auVar52) & ~auVar53;
    auVar52[4] = (byte)iVar6;
    auVar52._0_4_ = iVar5;
    auVar52[5] = bVar34;
    auVar52[6] = bVar35;
    auVar52[7] = bVar36;
    auVar52[8] = (byte)iVar7;
    auVar52[9] = bVar37;
    auVar52[10] = bVar38;
    auVar52[0xb] = bVar39;
    auVar52[0xc] = (char)iVar8;
    auVar52[0xd] = (char)((uint)iVar8 >> 8);
    auVar52[0xe] = (char)((uint)iVar8 >> 0x10);
    auVar52[0xf] = (char)((uint)iVar8 >> 0x18);
    auVar41 = auVar41 ^ (auVar41 ^ auVar50) & ~auVar52;
    param_3[7] = auVar48._8_8_;
    param_3[6] = auVar48._0_8_;
    param_3[9] = auVar41._8_8_;
    param_3[8] = auVar41._0_8_;
    if (CONCAT13(bVar36 & bVar30 & (byte)((uint)iVar5 >> 0x18) & (byte)((uint)iVar15 >> 0x18) &
                 bVar39 & bVar33,
                 CONCAT12(bVar35 & bVar29 &
                          (byte)((uint)iVar5 >> 0x10) & (byte)((uint)iVar15 >> 0x10) &
                          bVar38 & bVar32,
                          CONCAT11(bVar34 & bVar28 &
                                   (byte)((uint)iVar5 >> 8) & (byte)((uint)iVar15 >> 8) &
                                   bVar37 & bVar31,
                                   (byte)iVar6 & (byte)iVar27 & (byte)iVar5 & (byte)iVar15 &
                                   (byte)iVar7 & (byte)iVar22))) != 0) {
      uVar16 = 0;
      pbVar25 = (byte *)(lVar17 + (long)param_1);
LAB_02ec1fb8:
      bVar28 = pbVar25[3];
      if ((bVar28 & 1) != 0) goto LAB_02ec1ffc;
      lVar17 = *param_3;
      if (*(char *)(lVar17 + 0xf1) == '\0') {
        lVar13 = *(long *)(lVar17 + 0x68) + (ulong)(bVar28 >> 1) * 4;
        bVar29 = *(byte *)(lVar13 + 3);
        uVar24 = (uint)(bVar28 >> 1);
        if ((uint)*(byte *)(lVar13 + 1) == (uint)bVar29) {
          if (*(byte *)(lVar13 + 2) - 3 < 2) goto LAB_02ec2250;
        }
        else {
          if ((uint)*(byte *)(lVar13 + 2) == (uint)bVar29) {
LAB_02ec2250:
            uVar26 = uVar24 << 1 | *(int *)(lVar17 + 0x94) << 8;
            iVar15 = 1;
          }
          else {
            uVar26 = uVar24 << 1 | *(int *)(lVar17 + 0x94) << 8;
            iVar15 = 1;
            if ((*(byte *)(lVar17 + 0x58) & *(byte *)(lVar13 + 1)) <= bVar29) {
              iVar15 = 2;
            }
          }
          iVar27 = 0;
          do {
            puVar19 = *(undefined8 **)(lVar17 + 0xd8);
            lVar13 = puVar19[5];
            if (lVar13 == 0) {
LAB_02ec231c:
              uVar11 = *(uint *)(PTR_DAT_047d1a60 + (long)*(int *)((long)puVar19 + 0x1c) * 4) &
                       *(uint *)(puVar19 + 3) |
                       (uVar26 + 1 <<
                       (ulong)(-(*(int *)(*(long *)(lVar17 + 0x50) + 0x34) +
                                *(int *)((long)puVar19 + 0x1c)) & 0x1f)) - 1;
              if (**(long **)(lVar17 + 0xc0) != 0) {
                lVar13 = *(long *)(lVar17 + 0x88);
                uVar20 = (uint)*(byte *)(*(long *)(lVar17 + 0x60) + 0x5a);
                if (uVar20 < 5) {
                  iVar22 = 0;
                }
                else {
                  iVar22 = 0;
                  iVar21 = uVar20 - 1;
                  do {
                    iVar5 = iVar22 + iVar21 >> 1;
                    iVar6 = uVar24 - *(byte *)(lVar13 + (long)iVar5 * 4 + 2);
                    if (iVar6 < 0) {
                      iVar21 = iVar5;
                    }
                    else {
                      puVar23 = (undefined2 *)
                                (lVar13 + ((long)((ulong)(uint)(iVar22 + iVar21) << 0x20) >> 0x21) *
                                          4);
                      if (iVar6 < (int)(uint)*(byte *)((long)puVar23 + 3)) goto LAB_02ec23f4;
                      iVar22 = iVar5 + 1;
                    }
                  } while (3 < iVar21 - iVar22);
                }
                for (puVar23 = (undefined2 *)(lVar13 + (long)iVar22 * 4);
                    ((int)(uVar24 - *(byte *)(puVar23 + 1)) < 0 ||
                    ((int)(uint)*(byte *)((long)puVar23 + 3) <=
                     (int)(uVar24 - *(byte *)(puVar23 + 1)))); puVar23 = puVar23 + 2) {
                }
LAB_02ec23f4:
                local_78 = **(undefined8 **)(lVar17 + 0xe0);
                uStack_70 = (*(undefined8 **)(lVar17 + 0xe0))[1];
                plVar14 = (long *)**(long **)(lVar17 + 0xc0);
                (**(code **)(*plVar14 + 0x40))
                          (plVar14,*puVar23,6,*puVar19,puVar19[1],*(undefined8 *)(lVar17 + 0xd0),
                           uVar11,0,&local_78);
                lVar13 = *(long *)(lVar17 + 0xc0);
                if (*(long *)(lVar13 + 8) != 0) {
                  local_b0[0] = *(undefined2 *)(lVar13 + 0x10);
                  uVar18 = *(undefined8 *)(lVar13 + 0x14);
                  *(undefined4 *)((undefined8 *)((ulong)local_b0 | 4) + 1) =
                       *(undefined4 *)(lVar13 + 0x1c);
                  *(undefined8 *)((ulong)local_b0 | 4) = uVar18;
                  puVar19 = *(undefined8 **)(lVar17 + 200);
                  local_a0 = *puVar19;
                  local_98 = puVar19[1];
                  local_90 = puVar19[2];
                  local_88 = *(undefined4 *)(puVar19 + 3);
                  local_e8[0] = (undefined2)local_78;
                  uVar18 = *(undefined8 *)((ulong)&local_78 | 4);
                  local_80 = 0;
                  *(undefined4 *)((undefined8 *)((ulong)local_e8 | 4) + 1) =
                       *(undefined4 *)((undefined8 *)((ulong)&local_78 | 4) + 1);
                  *(undefined8 *)((ulong)local_e8 | 4) = uVar18;
                  local_d8 = **(undefined8 **)(lVar17 + 0xd8);
                  local_d0 = (*(undefined8 **)(lVar17 + 0xd8))[1];
                  uStack_c8 = *(undefined8 *)(lVar17 + 0xd0);
                  local_b8 = 0;
                  local_c0 = uVar11;
                  uVar16 = (**(code **)(**(long **)(lVar13 + 8) + 0x40))
                                     (*(long **)(lVar13 + 8),6,1,local_b0,local_e8);
                  if ((uVar16 & 1) == 0) goto LAB_02ec2520;
                }
              }
              plVar14 = *(long **)(lVar17 + 0xe8);
              iVar22 = (int)plVar14[1];
              lVar13 = (long)iVar22;
              if ((int)(*(uint *)((long)plVar14 + 0xc) & 0x7fffffff) <= iVar22) {
                FUN_02e931c8(plVar14,PTR_PTR_047d1a50,lVar13 + 1);
                iVar22 = (int)plVar14[1];
              }
              *(uint *)(*plVar14 + (long)iVar22 * 4) = uVar11;
              *(int *)(plVar14 + 1) = (int)(lVar13 + 1);
            }
            else {
              uVar16 = (**(code **)(*(long *)PTR_DAT_047d19f0 +
                                    (ulong)*(byte *)(lVar13 + 0x18) * 0x40 + 0x4020))
                                 (lVar13,uVar26 << (ulong)(*(uint *)(lVar17 + 0xa0) & 0x1f));
              if ((uVar16 & 1) != 0) {
                puVar19 = *(undefined8 **)(lVar17 + 0xd8);
                goto LAB_02ec231c;
              }
            }
LAB_02ec2520:
            uVar26 = uVar26 + 1;
            iVar27 = iVar27 + 1;
          } while (iVar27 != iVar15);
          bVar1 = false;
          if (*(char *)(lVar17 + 0xf0) != '\0') {
            bVar1 = 0 < *(int *)(*(long *)(lVar17 + 0xe8) + 8);
          }
          *(byte *)(lVar17 + 0xf1) = *(byte *)(lVar17 + 0xf1) | bVar1;
        }
      }
      goto LAB_02ec255c;
    }
  }
  return;
LAB_02ec1ffc:
  uVar3 = (long)(int)uVar16 + 1;
  uVar24 = (int)uVar16 + (bVar28 & 0xfe);
  pbVar25 = (byte *)((long)param_1 + uVar3 * 4 + *param_1);
  pbVar2 = (byte *)((long)param_1 + (long)(int)uVar24 * 4 + *param_1);
  fVar40 = (fVar55 - fVar59) * 0.0044247787;
  fVar45 = (fVar56 - fVar62) * 0.0044247787;
  fVar46 = (fVar57 - fVar63) * 0.0044247787;
  bVar29 = *pbVar25 >> 4;
  bVar30 = pbVar25[1] >> 4;
  bVar28 = *pbVar25 & 0xf;
  fVar60 = fVar59 + (float)(byte)(bVar29 * bVar29) * fVar40;
  fVar65 = fVar62 + (float)(byte)(bVar30 * bVar30) * fVar45;
  bVar29 = pbVar25[1] & 0xf;
  bVar30 = *pbVar2 & 0xf;
  bVar31 = *pbVar2 >> 4;
  fVar67 = fVar55 - (float)(byte)(bVar28 * bVar28) * fVar40;
  bVar32 = pbVar25[2] >> 4;
  bVar28 = pbVar25[2] & 0xf;
  bVar33 = pbVar2[2] >> 4;
  fVar66 = fVar63 + (float)(byte)(bVar32 * bVar32) * fVar46;
  fVar61 = fVar56 - (float)(byte)(bVar29 * bVar29) * fVar45;
  bVar32 = pbVar2[1] >> 4;
  bVar29 = pbVar2[1] & 0xf;
  fVar47 = fVar59 + (float)(byte)(bVar31 * bVar31) * fVar40;
  fVar68 = fVar57 - (float)(byte)(bVar28 * bVar28) * fVar46;
  fVar58 = fVar62 + (float)(byte)(bVar32 * bVar32) * fVar45;
  fVar64 = fVar63 + (float)(byte)(bVar33 * bVar33) * fVar46;
  fVar51 = fVar55 - (float)(byte)(bVar30 * bVar30) * fVar40;
  fVar40 = fVar56 - (float)(byte)(bVar29 * bVar29) * fVar45;
  bVar28 = pbVar2[2] & 0xf;
  auVar53 = *(undefined1 (*) [16])(param_3 + 6);
  auVar41._4_4_ = fVar61;
  auVar41._0_4_ = fVar67;
  auVar41._8_4_ = fVar68;
  auVar41._12_4_ = 0;
  auVar52 = NEON_fmax(auVar53,auVar41,4);
  fVar45 = fVar57 - (float)(byte)(bVar28 * bVar28) * fVar46;
  auVar48._4_4_ = fVar65;
  auVar48._0_4_ = fVar60;
  auVar48._8_4_ = fVar66;
  auVar48._12_4_ = 0;
  auVar54 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar48,4);
  fVar62 = (float)param_3[4];
  auVar49._0_4_ = -(uint)(fVar60 <= fVar62);
  fVar63 = (float)((ulong)param_3[4] >> 0x20);
  auVar49._4_4_ = -(uint)(fVar65 <= fVar63);
  fVar46 = (float)param_3[5];
  auVar49._8_4_ = -(uint)(fVar66 <= fVar46);
  fVar4 = (float)((ulong)param_3[5] >> 0x20);
  auVar49._12_4_ = -(uint)(0.0 <= fVar4);
  fVar55 = (float)param_3[2];
  auVar42._0_4_ = -(uint)(fVar55 <= fVar67);
  fVar56 = (float)((ulong)param_3[2] >> 0x20);
  auVar42._4_4_ = -(uint)(fVar56 <= fVar61);
  fVar57 = (float)param_3[3];
  auVar42._8_4_ = -(uint)(fVar57 <= fVar68);
  fVar59 = (float)((ulong)param_3[3] >> 0x20);
  auVar42._12_4_ = -(uint)(fVar59 <= 0.0);
  iVar15 = -(uint)(fVar55 <= fVar51);
  iVar27 = -(uint)(fVar56 <= fVar40);
  bVar28 = (byte)((uint)iVar27 >> 8);
  bVar29 = (byte)((uint)iVar27 >> 0x10);
  bVar30 = (byte)((uint)iVar27 >> 0x18);
  iVar22 = -(uint)(fVar57 <= fVar45);
  iVar21 = -(uint)(fVar59 <= 0.0);
  iVar5 = -(uint)(fVar47 <= fVar62);
  iVar6 = -(uint)(fVar58 <= fVar63);
  bVar31 = (byte)((uint)iVar6 >> 8);
  bVar32 = (byte)((uint)iVar6 >> 0x10);
  bVar33 = (byte)((uint)iVar6 >> 0x18);
  iVar7 = -(uint)(fVar64 <= fVar46);
  iVar8 = -(uint)(0.0 <= fVar4);
  auVar53 = auVar53 ^ (auVar53 ^ auVar52) & ~auVar42;
  auVar54 = auVar54 ^ (auVar54 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar49;
  auVar9._4_4_ = fVar58;
  auVar9._0_4_ = fVar47;
  auVar9._8_4_ = fVar64;
  auVar9._12_4_ = 0;
  auVar50 = NEON_fmin(auVar54,auVar9,4);
  auVar10._4_4_ = fVar40;
  auVar10._0_4_ = fVar51;
  auVar10._8_4_ = fVar45;
  auVar10._12_4_ = 0;
  auVar52 = NEON_fmax(auVar53,auVar10,4);
  auVar43[0xc] = (char)iVar21;
  auVar43._8_4_ = iVar22;
  auVar43[0xd] = (char)((uint)iVar21 >> 8);
  auVar43[0xe] = (char)((uint)iVar21 >> 0x10);
  auVar43[0xf] = (char)((uint)iVar21 >> 0x18);
  auVar43[4] = (byte)iVar27;
  auVar43._0_4_ = iVar15;
  auVar43[5] = bVar28;
  auVar43[6] = bVar29;
  auVar43[7] = bVar30;
  auVar52 = auVar52 ^ (auVar52 ^ auVar53) & auVar43;
  param_3[7] = auVar52._8_8_;
  param_3[6] = auVar52._0_8_;
  auVar44[0xc] = (char)iVar8;
  auVar44._8_4_ = iVar7;
  auVar44[0xd] = (char)((uint)iVar8 >> 8);
  auVar44[0xe] = (char)((uint)iVar8 >> 0x10);
  auVar44[0xf] = (char)((uint)iVar8 >> 0x18);
  auVar44[4] = (byte)iVar6;
  auVar44._0_4_ = iVar5;
  auVar44[5] = bVar31;
  auVar44[6] = bVar32;
  auVar44[7] = bVar33;
  auVar50 = auVar50 ^ (auVar50 ^ auVar54) & auVar44;
  param_3[9] = auVar50._8_8_;
  param_3[8] = auVar50._0_8_;
  bVar28 = CONCAT13((byte)((uint)auVar49._4_4_ >> 0x18) & (byte)((uint)auVar42._4_4_ >> 0x18) &
                    (byte)((uint)auVar49._0_4_ >> 0x18) & (byte)((uint)auVar42._0_4_ >> 0x18) &
                    (byte)((uint)auVar49._8_4_ >> 0x18) & (byte)((uint)auVar42._8_4_ >> 0x18),
                    CONCAT12((byte)((uint)auVar49._4_4_ >> 0x10) &
                             (byte)((uint)auVar42._4_4_ >> 0x10) &
                             (byte)((uint)auVar49._0_4_ >> 0x10) &
                             (byte)((uint)auVar42._0_4_ >> 0x10) &
                             (byte)((uint)auVar49._8_4_ >> 0x10) &
                             (byte)((uint)auVar42._8_4_ >> 0x10),
                             CONCAT11((byte)((uint)auVar49._4_4_ >> 8) &
                                      (byte)((uint)auVar42._4_4_ >> 8) &
                                      (byte)((uint)auVar49._0_4_ >> 8) &
                                      (byte)((uint)auVar42._0_4_ >> 8) &
                                      (byte)((uint)auVar49._8_4_ >> 8) &
                                      (byte)((uint)auVar42._8_4_ >> 8),
                                      (byte)auVar49._4_4_ & (byte)auVar42._4_4_ &
                                      (byte)auVar49._0_4_ & (byte)auVar42._0_4_ &
                                      (byte)auVar49._8_4_ & (byte)auVar42._8_4_))) != 0 |
           (CONCAT13(bVar33 & bVar30 & (byte)((uint)iVar5 >> 0x18) & (byte)((uint)iVar15 >> 0x18) &
                     (byte)((uint)iVar7 >> 0x18) & (byte)((uint)iVar22 >> 0x18),
                     CONCAT12(bVar32 & bVar29 &
                              (byte)((uint)iVar5 >> 0x10) & (byte)((uint)iVar15 >> 0x10) &
                              (byte)((uint)iVar7 >> 0x10) & (byte)((uint)iVar22 >> 0x10),
                              CONCAT11(bVar31 & bVar28 &
                                       (byte)((uint)iVar5 >> 8) & (byte)((uint)iVar15 >> 8) &
                                       (byte)((uint)iVar7 >> 8) & (byte)((uint)iVar22 >> 8),
                                       (byte)iVar6 & (byte)iVar27 & (byte)iVar5 & (byte)iVar15 &
                                       (byte)iVar7 & (byte)iVar22))) != 0) << 1;
  uVar16 = uVar3 & 0xffffffff;
  fVar55 = fVar67;
  fVar56 = fVar61;
  fVar57 = fVar68;
  fVar59 = fVar60;
  fVar62 = fVar65;
  fVar63 = fVar66;
  if (bVar28 != 1) {
    if (bVar28 == 3) {
      iVar15 = (int)param_2[1];
      lVar17 = (long)iVar15;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar15) {
        FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar17 + 1);
        iVar15 = (int)param_2[1];
      }
      puVar19 = (undefined8 *)(*param_2 + (long)iVar15 * 0x30);
      *(int *)(param_2 + 1) = (int)(lVar17 + 1);
      puVar19[1] = (ulong)(uint)fVar64;
      *puVar19 = CONCAT44(fVar58,fVar47);
      puVar19[3] = (ulong)(uint)fVar45;
      puVar19[2] = CONCAT44(fVar40,fVar51);
      *(uint *)(puVar19 + 4) = uVar24;
      uVar16 = uVar3 & 0xffffffff;
    }
    else if (bVar28 == 2) {
      uVar16 = (ulong)uVar24;
      pbVar25 = pbVar2;
      fVar55 = fVar51;
      fVar56 = fVar40;
      fVar57 = fVar45;
      fVar59 = fVar47;
      fVar62 = fVar58;
      fVar63 = fVar64;
    }
    else {
LAB_02ec255c:
      if ((int)param_2[1] <= (int)lVar12) {
        return;
      }
      iVar15 = (int)param_2[1] + -1;
      *(int *)(param_2 + 1) = iVar15;
      puVar19 = (undefined8 *)(*param_2 + (long)iVar15 * 0x30);
      uVar16 = (ulong)*(int *)(puVar19 + 4);
      pbVar25 = (byte *)((long)param_1 + uVar16 * 4 + *param_1);
      fVar55 = (float)puVar19[2];
      fVar56 = (float)((ulong)puVar19[2] >> 0x20);
      fVar57 = (float)puVar19[3];
      fVar59 = (float)*puVar19;
      fVar62 = (float)((ulong)*puVar19 >> 0x20);
      fVar63 = (float)puVar19[1];
    }
  }
  goto LAB_02ec1fb8;
}


