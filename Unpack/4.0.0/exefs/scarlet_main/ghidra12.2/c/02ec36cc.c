/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ec36cc; name: FUN_02ec36cc
 */


void FUN_02ec36cc(long *param_1,long *param_2,long *param_3)

{
  byte *pbVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  long lVar13;
  bool bVar14;
  long lVar15;
  long *plVar16;
  int iVar17;
  ulong uVar18;
  long *plVar19;
  undefined4 uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 *puVar24;
  uint uVar25;
  int iVar26;
  long lVar27;
  int iVar28;
  undefined2 *puVar29;
  uint uVar30;
  byte *pbVar31;
  uint uVar32;
  int iVar33;
  undefined8 *puVar34;
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
  byte bVar45;
  byte bVar46;
  float fVar47;
  float fVar52;
  float fVar53;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
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
  float fVar73;
  undefined2 local_138 [8];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
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
    lVar13 = param_2[1];
    fVar71 = (float)param_1[3];
    fVar47 = (float)((ulong)param_1[3] >> 0x20);
    uVar22 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 2);
    fVar66 = (float)uVar22;
    fVar69 = (float)((ulong)uVar22 >> 0x20);
    fVar64 = (float)param_1[5];
    fVar65 = (float)((ulong)param_1[5] >> 0x20);
    uVar22 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 4);
    fVar62 = (float)uVar22;
    fVar63 = (float)((ulong)uVar22 >> 0x20);
    iVar17 = -(uint)((float)param_3[2] <= fVar62);
    iVar33 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= fVar63);
    bVar35 = (byte)((uint)iVar33 >> 8);
    bVar36 = (byte)((uint)iVar33 >> 0x10);
    bVar37 = (byte)((uint)iVar33 >> 0x18);
    iVar28 = -(uint)((float)param_3[3] <= fVar64);
    bVar38 = (byte)((uint)iVar28 >> 8);
    bVar39 = (byte)((uint)iVar28 >> 0x10);
    bVar40 = (byte)((uint)iVar28 >> 0x18);
    iVar26 = -(uint)((float)((ulong)param_3[3] >> 0x20) <= fVar65);
    auVar55 = *(undefined1 (*) [16])(param_3 + 6);
    auVar48 = *(undefined1 (*) [16])(param_3 + 8);
    auVar57._12_4_ = fVar65;
    auVar57._0_12_ = *(undefined1 (*) [12])(param_1 + 4);
    auVar59 = NEON_fmax(auVar55,auVar57,4);
    iVar6 = -(uint)(fVar66 <= (float)param_3[4]);
    iVar7 = -(uint)(fVar69 <= (float)((ulong)param_3[4] >> 0x20));
    bVar41 = (byte)((uint)iVar7 >> 8);
    bVar42 = (byte)((uint)iVar7 >> 0x10);
    bVar43 = (byte)((uint)iVar7 >> 0x18);
    iVar8 = -(uint)(fVar71 <= (float)param_3[5]);
    bVar44 = (byte)((uint)iVar8 >> 8);
    bVar45 = (byte)((uint)iVar8 >> 0x10);
    bVar46 = (byte)((uint)iVar8 >> 0x18);
    iVar9 = -(uint)(fVar47 <= (float)((ulong)param_3[5] >> 0x20));
    lVar21 = *param_1;
    auVar61._12_4_ = fVar47;
    auVar61._0_12_ = *(undefined1 (*) [12])(param_1 + 2);
    auVar57 = NEON_fmin(auVar48,auVar61,4);
    auVar60[4] = (byte)iVar33;
    auVar60._0_4_ = iVar17;
    auVar60[5] = bVar35;
    auVar60[6] = bVar36;
    auVar60[7] = bVar37;
    auVar60[8] = (byte)iVar28;
    auVar60[9] = bVar38;
    auVar60[10] = bVar39;
    auVar60[0xb] = bVar40;
    auVar60[0xc] = (char)iVar26;
    auVar60[0xd] = (char)((uint)iVar26 >> 8);
    auVar60[0xe] = (char)((uint)iVar26 >> 0x10);
    auVar60[0xf] = (char)((uint)iVar26 >> 0x18);
    auVar55 = auVar55 ^ (auVar55 ^ auVar59) & ~auVar60;
    auVar59[4] = (byte)iVar7;
    auVar59._0_4_ = iVar6;
    auVar59[5] = bVar41;
    auVar59[6] = bVar42;
    auVar59[7] = bVar43;
    auVar59[8] = (byte)iVar8;
    auVar59[9] = bVar44;
    auVar59[10] = bVar45;
    auVar59[0xb] = bVar46;
    auVar59[0xc] = (char)iVar9;
    auVar59[0xd] = (char)((uint)iVar9 >> 8);
    auVar59[0xe] = (char)((uint)iVar9 >> 0x10);
    auVar59[0xf] = (char)((uint)iVar9 >> 0x18);
    auVar48 = auVar48 ^ (auVar48 ^ auVar57) & ~auVar59;
    param_3[7] = auVar55._8_8_;
    param_3[6] = auVar55._0_8_;
    param_3[9] = auVar48._8_8_;
    param_3[8] = auVar48._0_8_;
    if (CONCAT13(bVar43 & bVar37 & (byte)((uint)iVar6 >> 0x18) & (byte)((uint)iVar17 >> 0x18) &
                 bVar46 & bVar40,
                 CONCAT12(bVar42 & bVar36 &
                          (byte)((uint)iVar6 >> 0x10) & (byte)((uint)iVar17 >> 0x10) &
                          bVar45 & bVar39,
                          CONCAT11(bVar41 & bVar35 &
                                   (byte)((uint)iVar6 >> 8) & (byte)((uint)iVar17 >> 8) &
                                   bVar44 & bVar38,
                                   (byte)iVar7 & (byte)iVar33 & (byte)iVar6 & (byte)iVar17 &
                                   (byte)iVar8 & (byte)iVar28))) != 0) {
      puVar34 = (undefined8 *)((ulong)&local_100 | 4);
      uVar18 = 0;
      pbVar31 = (byte *)(lVar21 + (long)param_1);
LAB_02ec37a0:
      bVar35 = pbVar31[3];
      if ((bVar35 & 1) != 0) goto LAB_02ec37e4;
      lVar21 = *param_3;
      if (*(char *)(lVar21 + 0xf1) == '\0') {
        lVar15 = *(long *)(lVar21 + 0x68) + (ulong)(bVar35 >> 1) * 4;
        bVar36 = *(byte *)(lVar15 + 3);
        uVar30 = (uint)(bVar35 >> 1);
        if ((uint)*(byte *)(lVar15 + 1) == (uint)bVar36) {
          if (*(byte *)(lVar15 + 2) - 3 < 2) goto LAB_02ec3a3c;
        }
        else {
          if ((uint)*(byte *)(lVar15 + 2) == (uint)bVar36) {
LAB_02ec3a3c:
            uVar32 = uVar30 << 1 | *(int *)(lVar21 + 0x94) << 8;
            iVar17 = 1;
          }
          else {
            uVar32 = uVar30 << 1 | *(int *)(lVar21 + 0x94) << 8;
            iVar17 = 1;
            if ((*(byte *)(lVar21 + 0x58) & *(byte *)(lVar15 + 1)) <= bVar36) {
              iVar17 = 2;
            }
          }
          iVar33 = 0;
          do {
            plVar19 = *(long **)(lVar21 + 0xd8);
            lVar15 = plVar19[5];
            if (lVar15 == 0) {
LAB_02ec3b0c:
              uVar12 = *(uint *)(PTR_DAT_047d1a60 + (long)*(int *)((long)plVar19 + 0x1c) * 4) &
                       *(uint *)(plVar19 + 3) |
                       (uVar32 + 1 <<
                       (ulong)(-(*(int *)(*(long *)(lVar21 + 0x50) + 0x34) +
                                *(int *)((long)plVar19 + 0x1c)) & 0x1f)) - 1;
              if (**(long **)(lVar21 + 0xc0) == 0) {
                lVar15 = *plVar19;
                plVar19 = *(long **)(lVar21 + 0xe8);
                lVar23 = **(long **)(lVar21 + 200);
                uVar20 = 0xffffff;
                local_b0 = 0xffff;
                local_ac = 0;
                local_88 = 0xffff;
                local_84 = 0;
                uStack_80 = 0;
                uStack_7c = 0;
                uStack_a8 = 0;
                if (lVar23 == 0) {
                  local_c8 = 0xffffffffffffffff;
                }
                else {
                  local_c8 = *(undefined8 *)(lVar23 + 0xb0);
                  uVar20 = *(undefined4 *)(lVar23 + 0x50);
                }
                local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar20);
                if (lVar15 == 0) {
                  local_98 = 0xffffff;
                  local_a0 = 0xffffffffffffffff;
                }
                else {
                  local_a0 = *(undefined8 *)(lVar15 + 0xb0);
                  local_98 = *(undefined4 *)(lVar15 + 0x50);
                }
              }
              else {
                lVar15 = *(long *)(lVar21 + 0x88);
                uVar25 = (uint)*(byte *)(*(long *)(lVar21 + 0x60) + 0x5a);
                if (uVar25 < 5) {
                  iVar28 = 0;
                }
                else {
                  iVar28 = 0;
                  iVar26 = uVar25 - 1;
                  do {
                    iVar6 = iVar28 + iVar26 >> 1;
                    iVar7 = uVar30 - *(byte *)(lVar15 + (long)iVar6 * 4 + 2);
                    if (iVar7 < 0) {
                      iVar26 = iVar6;
                    }
                    else {
                      puVar29 = (undefined2 *)
                                (lVar15 + ((long)((ulong)(uint)(iVar28 + iVar26) << 0x20) >> 0x21) *
                                          4);
                      if (iVar7 < (int)(uint)*(byte *)((long)puVar29 + 3)) goto LAB_02ec3c5c;
                      iVar28 = iVar6 + 1;
                    }
                  } while (3 < iVar26 - iVar28);
                }
                for (puVar29 = (undefined2 *)(lVar15 + (long)iVar28 * 4);
                    ((int)(uVar30 - *(byte *)(puVar29 + 1)) < 0 ||
                    ((int)(uint)*(byte *)((long)puVar29 + 3) <=
                     (int)(uVar30 - *(byte *)(puVar29 + 1)))); puVar29 = puVar29 + 2) {
                }
LAB_02ec3c5c:
                local_100 = **(undefined8 **)(lVar21 + 0xe0);
                uStack_f8 = (*(undefined8 **)(lVar21 + 0xe0))[1];
                plVar16 = (long *)**(long **)(lVar21 + 0xc0);
                (**(code **)(*plVar16 + 0x40))
                          (plVar16,*puVar29,6,*plVar19,plVar19[1],*(undefined8 *)(lVar21 + 0xd0),
                           uVar12,0,&local_100);
                lVar15 = *(long *)(lVar21 + 0xc0);
                if (*(long *)(lVar15 + 8) != 0) {
                  local_f0 = CONCAT62(local_f0._2_6_,*(undefined2 *)(lVar15 + 0x10));
                  uVar22 = *(undefined8 *)(lVar15 + 0x14);
                  *(undefined4 *)((undefined8 *)((ulong)&local_f0 | 4) + 1) =
                       *(undefined4 *)(lVar15 + 0x1c);
                  *(undefined8 *)((ulong)&local_f0 | 4) = uVar22;
                  puVar24 = *(undefined8 **)(lVar21 + 200);
                  local_e0 = *puVar24;
                  local_d8 = puVar24[1];
                  local_d0 = puVar24[2];
                  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(puVar24 + 3));
                  local_138[0] = (undefined2)local_100;
                  uVar22 = *puVar34;
                  local_c0 = 0;
                  *(undefined4 *)((undefined8 *)((ulong)local_138 | 4) + 1) =
                       *(undefined4 *)(puVar34 + 1);
                  *(undefined8 *)((ulong)local_138 | 4) = uVar22;
                  local_128 = **(undefined8 **)(lVar21 + 0xd8);
                  local_120 = (*(undefined8 **)(lVar21 + 0xd8))[1];
                  uStack_118 = *(undefined8 *)(lVar21 + 0xd0);
                  local_108 = 0;
                  local_110 = uVar12;
                  uVar18 = (**(code **)(**(long **)(lVar15 + 8) + 0x40))
                                     (*(long **)(lVar15 + 8),6,1,&local_f0,local_138);
                  if ((uVar18 & 1) == 0) goto LAB_02ec3e70;
                  lVar15 = *(long *)(lVar21 + 0xc0);
                }
                plVar19 = *(long **)(lVar21 + 0xe8);
                lVar27 = **(long **)(lVar21 + 200);
                lVar23 = **(long **)(lVar21 + 0xd8);
                uVar20 = 0xffffff;
                if (lVar27 == 0) {
                  local_c8 = 0xffffffffffffffff;
                }
                else {
                  local_c8 = *(undefined8 *)(lVar27 + 0xb0);
                  uVar20 = *(undefined4 *)(lVar27 + 0x50);
                }
                local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar20);
                local_b0 = *(undefined2 *)(lVar15 + 0x10);
                local_ac = (undefined4)*(ulong *)(lVar15 + 0x14);
                uStack_a8 = *(ulong *)(lVar15 + 0x14) >> 0x20;
                if (lVar23 == 0) {
                  local_98 = 0xffffff;
                  local_a0 = 0xffffffffffffffff;
                }
                else {
                  local_a0 = *(undefined8 *)(lVar23 + 0xb0);
                  local_98 = *(undefined4 *)(lVar23 + 0x50);
                }
                uStack_7c = *(undefined4 *)(puVar34 + 1);
                local_88 = (undefined2)local_100;
                local_84 = (undefined4)*puVar34;
                uStack_80 = (undefined4)((ulong)*puVar34 >> 0x20);
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
              local_90 = uVar12;
              (**(code **)(*plVar19 + 0x28))(plVar19,&local_f0);
            }
            else {
              uVar18 = (**(code **)(*(long *)PTR_DAT_047d19f0 +
                                    (ulong)*(byte *)(lVar15 + 0x18) * 0x40 + 0x4020))
                                 (lVar15,uVar32 << (ulong)(*(uint *)(lVar21 + 0xa0) & 0x1f));
              if ((uVar18 & 1) != 0) {
                plVar19 = *(long **)(lVar21 + 0xd8);
                goto LAB_02ec3b0c;
              }
            }
LAB_02ec3e70:
            uVar32 = uVar32 + 1;
            iVar33 = iVar33 + 1;
          } while (iVar33 != iVar17);
          bVar14 = false;
          if (*(char *)(lVar21 + 0xf0) != '\0') {
            bVar14 = *(int *)(*(long *)(lVar21 + 0xe8) + 0xc) != 0;
          }
          *(byte *)(lVar21 + 0xf1) = *(byte *)(lVar21 + 0xf1) | bVar14;
        }
      }
      goto LAB_02ec3ea4;
    }
  }
  return;
LAB_02ec37e4:
  uVar2 = (long)(int)uVar18 + 1;
  uVar30 = (int)uVar18 + (bVar35 & 0xfe);
  pbVar1 = (byte *)((long)param_1 + (long)(int)uVar30 * 4 + *param_1);
  pbVar31 = (byte *)((long)param_1 + uVar2 * 4 + *param_1);
  fVar47 = (fVar62 - fVar66) * 0.0044247787;
  fVar52 = (fVar63 - fVar69) * 0.0044247787;
  fVar53 = (fVar64 - fVar71) * 0.0044247787;
  bVar37 = pbVar31[1] >> 4;
  bVar36 = *pbVar31 >> 4;
  bVar35 = *pbVar31 & 0xf;
  fVar67 = fVar66 + (float)(byte)(bVar36 * bVar36) * fVar47;
  bVar36 = pbVar31[1] & 0xf;
  fVar70 = fVar69 + (float)(byte)(bVar37 * bVar37) * fVar52;
  bVar37 = *pbVar1 & 0xf;
  bVar38 = *pbVar1 >> 4;
  fVar72 = fVar62 - (float)(byte)(bVar35 * bVar35) * fVar47;
  bVar39 = pbVar31[2] >> 4;
  bVar35 = pbVar31[2] & 0xf;
  fVar68 = fVar63 - (float)(byte)(bVar36 * bVar36) * fVar52;
  bVar40 = pbVar1[1] >> 4;
  bVar41 = pbVar1[2] >> 4;
  bVar36 = pbVar1[1] & 0xf;
  fVar73 = fVar64 - (float)(byte)(bVar35 * bVar35) * fVar53;
  fVar54 = fVar66 + (float)(byte)(bVar38 * bVar38) * fVar47;
  fVar65 = fVar69 + (float)(byte)(bVar40 * bVar40) * fVar52;
  fVar58 = fVar62 - (float)(byte)(bVar37 * bVar37) * fVar47;
  fVar47 = fVar71 + (float)(byte)(bVar41 * bVar41) * fVar53;
  fVar71 = fVar71 + (float)(byte)(bVar39 * bVar39) * fVar53;
  fVar52 = fVar63 - (float)(byte)(bVar36 * bVar36) * fVar52;
  bVar35 = pbVar1[2] & 0xf;
  auVar60 = *(undefined1 (*) [16])(param_3 + 6);
  auVar48._4_4_ = fVar68;
  auVar48._0_4_ = fVar72;
  auVar48._8_4_ = fVar73;
  auVar48._12_4_ = 0;
  auVar59 = NEON_fmax(auVar60,auVar48,4);
  fVar53 = fVar64 - (float)(byte)(bVar35 * bVar35) * fVar53;
  auVar55._4_4_ = fVar70;
  auVar55._0_4_ = fVar67;
  auVar55._8_4_ = fVar71;
  auVar55._12_4_ = 0;
  auVar61 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar55,4);
  fVar69 = (float)param_3[4];
  auVar56._0_4_ = -(uint)(fVar67 <= fVar69);
  fVar3 = (float)((ulong)param_3[4] >> 0x20);
  auVar56._4_4_ = -(uint)(fVar70 <= fVar3);
  fVar4 = (float)param_3[5];
  auVar56._8_4_ = -(uint)(fVar71 <= fVar4);
  fVar5 = (float)((ulong)param_3[5] >> 0x20);
  auVar56._12_4_ = -(uint)(0.0 <= fVar5);
  fVar62 = (float)param_3[2];
  auVar49._0_4_ = -(uint)(fVar62 <= fVar72);
  fVar63 = (float)((ulong)param_3[2] >> 0x20);
  auVar49._4_4_ = -(uint)(fVar63 <= fVar68);
  fVar64 = (float)param_3[3];
  auVar49._8_4_ = -(uint)(fVar64 <= fVar73);
  fVar66 = (float)((ulong)param_3[3] >> 0x20);
  auVar49._12_4_ = -(uint)(fVar66 <= 0.0);
  iVar17 = -(uint)(fVar62 <= fVar58);
  iVar33 = -(uint)(fVar63 <= fVar52);
  bVar35 = (byte)((uint)iVar33 >> 8);
  bVar36 = (byte)((uint)iVar33 >> 0x10);
  bVar37 = (byte)((uint)iVar33 >> 0x18);
  iVar28 = -(uint)(fVar64 <= fVar53);
  iVar26 = -(uint)(fVar66 <= 0.0);
  iVar6 = -(uint)(fVar54 <= fVar69);
  iVar7 = -(uint)(fVar65 <= fVar3);
  bVar38 = (byte)((uint)iVar7 >> 8);
  bVar39 = (byte)((uint)iVar7 >> 0x10);
  bVar40 = (byte)((uint)iVar7 >> 0x18);
  iVar8 = -(uint)(fVar47 <= fVar4);
  iVar9 = -(uint)(0.0 <= fVar5);
  auVar60 = auVar60 ^ (auVar60 ^ auVar59) & ~auVar49;
  auVar61 = auVar61 ^ (auVar61 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar56;
  auVar10._4_4_ = fVar65;
  auVar10._0_4_ = fVar54;
  auVar10._8_4_ = fVar47;
  auVar10._12_4_ = 0;
  auVar57 = NEON_fmin(auVar61,auVar10,4);
  auVar11._4_4_ = fVar52;
  auVar11._0_4_ = fVar58;
  auVar11._8_4_ = fVar53;
  auVar11._12_4_ = 0;
  auVar59 = NEON_fmax(auVar60,auVar11,4);
  auVar50[0xc] = (char)iVar26;
  auVar50._8_4_ = iVar28;
  auVar50[0xd] = (char)((uint)iVar26 >> 8);
  auVar50[0xe] = (char)((uint)iVar26 >> 0x10);
  auVar50[0xf] = (char)((uint)iVar26 >> 0x18);
  auVar50[4] = (byte)iVar33;
  auVar50._0_4_ = iVar17;
  auVar50[5] = bVar35;
  auVar50[6] = bVar36;
  auVar50[7] = bVar37;
  auVar59 = auVar59 ^ (auVar59 ^ auVar60) & auVar50;
  param_3[7] = auVar59._8_8_;
  param_3[6] = auVar59._0_8_;
  auVar51[0xc] = (char)iVar9;
  auVar51._8_4_ = iVar8;
  auVar51[0xd] = (char)((uint)iVar9 >> 8);
  auVar51[0xe] = (char)((uint)iVar9 >> 0x10);
  auVar51[0xf] = (char)((uint)iVar9 >> 0x18);
  auVar51[4] = (byte)iVar7;
  auVar51._0_4_ = iVar6;
  auVar51[5] = bVar38;
  auVar51[6] = bVar39;
  auVar51[7] = bVar40;
  auVar57 = auVar57 ^ (auVar57 ^ auVar61) & auVar51;
  param_3[9] = auVar57._8_8_;
  param_3[8] = auVar57._0_8_;
  bVar35 = CONCAT13((byte)((uint)auVar56._4_4_ >> 0x18) & (byte)((uint)auVar49._4_4_ >> 0x18) &
                    (byte)((uint)auVar56._0_4_ >> 0x18) & (byte)((uint)auVar49._0_4_ >> 0x18) &
                    (byte)((uint)auVar56._8_4_ >> 0x18) & (byte)((uint)auVar49._8_4_ >> 0x18),
                    CONCAT12((byte)((uint)auVar56._4_4_ >> 0x10) &
                             (byte)((uint)auVar49._4_4_ >> 0x10) &
                             (byte)((uint)auVar56._0_4_ >> 0x10) &
                             (byte)((uint)auVar49._0_4_ >> 0x10) &
                             (byte)((uint)auVar56._8_4_ >> 0x10) &
                             (byte)((uint)auVar49._8_4_ >> 0x10),
                             CONCAT11((byte)((uint)auVar56._4_4_ >> 8) &
                                      (byte)((uint)auVar49._4_4_ >> 8) &
                                      (byte)((uint)auVar56._0_4_ >> 8) &
                                      (byte)((uint)auVar49._0_4_ >> 8) &
                                      (byte)((uint)auVar56._8_4_ >> 8) &
                                      (byte)((uint)auVar49._8_4_ >> 8),
                                      (byte)auVar56._4_4_ & (byte)auVar49._4_4_ &
                                      (byte)auVar56._0_4_ & (byte)auVar49._0_4_ &
                                      (byte)auVar56._8_4_ & (byte)auVar49._8_4_))) != 0 |
           (CONCAT13(bVar40 & bVar37 & (byte)((uint)iVar6 >> 0x18) & (byte)((uint)iVar17 >> 0x18) &
                     (byte)((uint)iVar8 >> 0x18) & (byte)((uint)iVar28 >> 0x18),
                     CONCAT12(bVar39 & bVar36 &
                              (byte)((uint)iVar6 >> 0x10) & (byte)((uint)iVar17 >> 0x10) &
                              (byte)((uint)iVar8 >> 0x10) & (byte)((uint)iVar28 >> 0x10),
                              CONCAT11(bVar38 & bVar35 &
                                       (byte)((uint)iVar6 >> 8) & (byte)((uint)iVar17 >> 8) &
                                       (byte)((uint)iVar8 >> 8) & (byte)((uint)iVar28 >> 8),
                                       (byte)iVar7 & (byte)iVar33 & (byte)iVar6 & (byte)iVar17 &
                                       (byte)iVar8 & (byte)iVar28))) != 0) << 1;
  uVar18 = uVar2 & 0xffffffff;
  fVar62 = fVar72;
  fVar63 = fVar68;
  fVar64 = fVar73;
  fVar66 = fVar67;
  fVar69 = fVar70;
  if (bVar35 != 1) {
    if (bVar35 == 3) {
      iVar17 = (int)param_2[1];
      lVar21 = (long)iVar17;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar17) {
        FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar21 + 1);
        iVar17 = (int)param_2[1];
      }
      puVar24 = (undefined8 *)(*param_2 + (long)iVar17 * 0x30);
      *(int *)(param_2 + 1) = (int)(lVar21 + 1);
      *(uint *)(puVar24 + 4) = uVar30;
      puVar24[1] = (ulong)(uint)fVar47;
      *puVar24 = CONCAT44(fVar65,fVar54);
      puVar24[3] = (ulong)(uint)fVar53;
      puVar24[2] = CONCAT44(fVar52,fVar58);
      uVar18 = uVar2 & 0xffffffff;
    }
    else if (bVar35 == 2) {
      uVar18 = (ulong)uVar30;
      pbVar31 = pbVar1;
      fVar62 = fVar58;
      fVar63 = fVar52;
      fVar64 = fVar53;
      fVar66 = fVar54;
      fVar69 = fVar65;
      fVar71 = fVar47;
    }
    else {
LAB_02ec3ea4:
      if ((int)param_2[1] <= (int)lVar13) {
        return;
      }
      iVar17 = (int)param_2[1] + -1;
      puVar24 = (undefined8 *)(*param_2 + (long)iVar17 * 0x30);
      *(int *)(param_2 + 1) = iVar17;
      uVar18 = (ulong)*(int *)(puVar24 + 4);
      pbVar31 = (byte *)((long)param_1 + uVar18 * 4 + *param_1);
      fVar62 = (float)puVar24[2];
      fVar63 = (float)((ulong)puVar24[2] >> 0x20);
      fVar64 = (float)puVar24[3];
      fVar66 = (float)*puVar24;
      fVar69 = (float)((ulong)*puVar24 >> 0x20);
      fVar71 = (float)puVar24[1];
    }
  }
  goto LAB_02ec37a0;
}


