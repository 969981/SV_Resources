/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ec4430; name: FUN_02ec4430
 */


void FUN_02ec4430(long *param_1,long *param_2,long *param_3)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  undefined4 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  undefined2 *puVar22;
  byte *pbVar23;
  uint uVar24;
  long lVar25;
  uint uVar26;
  undefined8 *puVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  float fVar38;
  int iVar39;
  float fVar40;
  int iVar41;
  float fVar42;
  int iVar43;
  float fVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  ulong uVar55;
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
  undefined4 uStack_a8;
  undefined4 uStack_a4;
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
    lVar10 = param_1[2];
    lVar25 = param_1[4];
    iVar28 = -(uint)((float)param_3[2] <= (float)lVar25);
    iVar33 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= (float)((ulong)lVar25 >> 0x20));
    iVar34 = -(uint)((float)param_3[3] <= (float)param_1[5]);
    iVar35 = -(uint)((float)lVar10 <= (float)param_3[4]);
    iVar36 = -(uint)((float)((ulong)lVar10 >> 0x20) <= (float)((ulong)param_3[4] >> 0x20));
    iVar37 = -(uint)((float)param_1[3] <= (float)param_3[5]);
    if (CONCAT13((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar33 >> 0x18) &
                 (byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                 (byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar34 >> 0x18),
                 CONCAT12((byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar33 >> 0x10) &
                          (byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                          (byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar34 >> 0x10),
                          CONCAT11((byte)((uint)iVar36 >> 8) & (byte)((uint)iVar33 >> 8) &
                                   (byte)((uint)iVar35 >> 8) & (byte)((uint)iVar28 >> 8) &
                                   (byte)((uint)iVar37 >> 8) & (byte)((uint)iVar34 >> 8),
                                   (byte)iVar36 & (byte)iVar33 & (byte)iVar35 & (byte)iVar28 &
                                   (byte)iVar37 & (byte)iVar34))) != 0) {
      lVar8 = param_2[1];
      uVar16 = 0;
      puVar27 = (undefined8 *)((ulong)&local_100 | 4);
      pbVar23 = (byte *)(*param_1 + (long)param_1);
      uVar11 = param_1[5];
      uVar55 = param_1[3];
LAB_02ec44e4:
      bVar3 = pbVar23[3];
      if ((bVar3 & 1) != 0) goto LAB_02ec452c;
      lVar25 = *param_3;
      if (*(char *)(lVar25 + 0xf1) == '\0') {
        lVar10 = *(long *)(lVar25 + 0x68) + (ulong)(bVar3 >> 1) * 4;
        bVar4 = *(byte *)(lVar10 + 3);
        uVar26 = (uint)(bVar3 >> 1);
        if ((uint)*(byte *)(lVar10 + 1) == (uint)bVar4) {
          if (*(byte *)(lVar10 + 2) - 3 < 2) goto LAB_02ec475c;
        }
        else {
          if ((uint)*(byte *)(lVar10 + 2) == (uint)bVar4) {
LAB_02ec475c:
            uVar24 = uVar26 << 1 | *(int *)(lVar25 + 0x94) << 8;
            iVar28 = 1;
          }
          else {
            uVar24 = uVar26 << 1 | *(int *)(lVar25 + 0x94) << 8;
            iVar28 = 1;
            if ((*(byte *)(lVar25 + 0x58) & *(byte *)(lVar10 + 1)) <= bVar4) {
              iVar28 = 2;
            }
          }
          iVar33 = 0;
          do {
            plVar14 = *(long **)(lVar25 + 0xd8);
            lVar10 = plVar14[5];
            if (lVar10 == 0) {
LAB_02ec482c:
              uVar5 = *(uint *)(PTR_DAT_047d1a60 + (long)*(int *)((long)plVar14 + 0x1c) * 4) &
                      *(uint *)(plVar14 + 3) |
                      (uVar24 + 1 <<
                      (ulong)(-(*(int *)(*(long *)(lVar25 + 0x50) + 0x34) +
                               *(int *)((long)plVar14 + 0x1c)) & 0x1f)) - 1;
              if (**(long **)(lVar25 + 0xc0) == 0) {
                lVar10 = *plVar14;
                plVar14 = *(long **)(lVar25 + 0xe8);
                lVar19 = **(long **)(lVar25 + 200);
                uVar15 = 0xffffff;
                local_b0 = 0xffff;
                local_ac = 0;
                local_88 = 0xffff;
                local_84 = 0;
                uStack_80 = 0;
                uStack_7c = 0;
                uStack_a8 = 0;
                uStack_a4 = 0;
                if (lVar19 == 0) {
                  local_c8 = 0xffffffffffffffff;
                }
                else {
                  local_c8 = *(undefined8 *)(lVar19 + 0xb0);
                  uVar15 = *(undefined4 *)(lVar19 + 0x50);
                }
                local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar15);
                if (lVar10 == 0) {
                  local_98 = 0xffffff;
                  local_a0 = 0xffffffffffffffff;
                }
                else {
                  local_a0 = *(undefined8 *)(lVar10 + 0xb0);
                  local_98 = *(undefined4 *)(lVar10 + 0x50);
                }
              }
              else {
                lVar10 = *(long *)(lVar25 + 0x88);
                uVar20 = (uint)*(byte *)(*(long *)(lVar25 + 0x60) + 0x5a);
                if (uVar20 < 5) {
                  iVar34 = 0;
                }
                else {
                  iVar34 = 0;
                  iVar35 = uVar20 - 1;
                  do {
                    iVar36 = iVar34 + iVar35 >> 1;
                    iVar37 = uVar26 - *(byte *)(lVar10 + (long)iVar36 * 4 + 2);
                    if (iVar37 < 0) {
                      iVar35 = iVar36;
                    }
                    else {
                      puVar22 = (undefined2 *)
                                (lVar10 + ((long)((ulong)(uint)(iVar34 + iVar35) << 0x20) >> 0x21) *
                                          4);
                      if (iVar37 < (int)(uint)*(byte *)((long)puVar22 + 3)) goto LAB_02ec497c;
                      iVar34 = iVar36 + 1;
                    }
                  } while (3 < iVar35 - iVar34);
                }
                for (puVar22 = (undefined2 *)(lVar10 + (long)iVar34 * 4);
                    ((int)(uVar26 - *(byte *)(puVar22 + 1)) < 0 ||
                    ((int)(uint)*(byte *)((long)puVar22 + 3) <=
                     (int)(uVar26 - *(byte *)(puVar22 + 1)))); puVar22 = puVar22 + 2) {
                }
LAB_02ec497c:
                local_100 = **(undefined8 **)(lVar25 + 0xe0);
                uStack_f8 = (*(undefined8 **)(lVar25 + 0xe0))[1];
                plVar12 = (long *)**(long **)(lVar25 + 0xc0);
                (**(code **)(*plVar12 + 0x40))
                          (plVar12,*puVar22,6,*plVar14,plVar14[1],*(undefined8 *)(lVar25 + 0xd0),
                           uVar5,0,&local_100);
                lVar10 = *(long *)(lVar25 + 0xc0);
                if (*(long *)(lVar10 + 8) != 0) {
                  local_f0 = CONCAT62(local_f0._2_6_,*(undefined2 *)(lVar10 + 0x10));
                  uVar17 = *(undefined8 *)(lVar10 + 0x14);
                  *(undefined4 *)((undefined8 *)((ulong)&local_f0 | 4) + 1) =
                       *(undefined4 *)(lVar10 + 0x1c);
                  *(undefined8 *)((ulong)&local_f0 | 4) = uVar17;
                  puVar18 = *(undefined8 **)(lVar25 + 200);
                  local_e0 = *puVar18;
                  local_d8 = puVar18[1];
                  local_d0 = puVar18[2];
                  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(puVar18 + 3));
                  local_138[0] = (undefined2)local_100;
                  uVar17 = *puVar27;
                  local_c0 = 0;
                  *(undefined4 *)((undefined8 *)((ulong)local_138 | 4) + 1) =
                       *(undefined4 *)(puVar27 + 1);
                  *(undefined8 *)((ulong)local_138 | 4) = uVar17;
                  local_128 = **(undefined8 **)(lVar25 + 0xd8);
                  local_120 = (*(undefined8 **)(lVar25 + 0xd8))[1];
                  uStack_118 = *(undefined8 *)(lVar25 + 0xd0);
                  local_108 = 0;
                  local_110 = uVar5;
                  uVar11 = (**(code **)(**(long **)(lVar10 + 8) + 0x40))
                                     (*(long **)(lVar10 + 8),6,1,&local_f0,local_138);
                  if ((uVar11 & 1) == 0) goto LAB_02ec4b8c;
                  lVar10 = *(long *)(lVar25 + 0xc0);
                }
                plVar14 = *(long **)(lVar25 + 0xe8);
                lVar21 = **(long **)(lVar25 + 200);
                lVar19 = **(long **)(lVar25 + 0xd8);
                uVar15 = 0xffffff;
                if (lVar21 == 0) {
                  local_c8 = 0xffffffffffffffff;
                }
                else {
                  local_c8 = *(undefined8 *)(lVar21 + 0xb0);
                  uVar15 = *(undefined4 *)(lVar21 + 0x50);
                }
                local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar15);
                local_b0 = *(undefined2 *)(lVar10 + 0x10);
                uStack_a4 = *(undefined4 *)(lVar10 + 0x1c);
                local_ac = (undefined4)*(undefined8 *)(lVar10 + 0x14);
                uStack_a8 = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0x14) >> 0x20);
                if (lVar19 == 0) {
                  local_98 = 0xffffff;
                  local_a0 = 0xffffffffffffffff;
                }
                else {
                  local_a0 = *(undefined8 *)(lVar19 + 0xb0);
                  local_98 = *(undefined4 *)(lVar19 + 0x50);
                }
                uStack_7c = *(undefined4 *)(puVar27 + 1);
                local_88 = (undefined2)local_100;
                local_84 = (undefined4)*puVar27;
                uStack_80 = (undefined4)((ulong)*puVar27 >> 0x20);
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
              local_90 = uVar5;
              (**(code **)(*plVar14 + 0x28))(plVar14,&local_f0);
            }
            else {
              uVar11 = (**(code **)(*(long *)PTR_DAT_047d19f0 +
                                    (ulong)*(byte *)(lVar10 + 0x18) * 0x40 + 0x4020))
                                 (lVar10,uVar24 << (ulong)(*(uint *)(lVar25 + 0xa0) & 0x1f));
              if ((uVar11 & 1) != 0) {
                plVar14 = *(long **)(lVar25 + 0xd8);
                goto LAB_02ec482c;
              }
            }
LAB_02ec4b8c:
            uVar24 = uVar24 + 1;
            iVar33 = iVar33 + 1;
          } while (iVar33 != iVar28);
          bVar9 = false;
          if (*(char *)(lVar25 + 0xf0) != '\0') {
            bVar9 = *(int *)(*(long *)(lVar25 + 0xe8) + 0xc) != 0;
          }
          *(byte *)(lVar25 + 0xf1) = *(byte *)(lVar25 + 0xf1) | bVar9;
        }
      }
      goto LAB_02ec4bbc;
    }
  }
  return;
LAB_02ec452c:
  uVar2 = (long)(int)uVar16 + 1;
  fVar49 = (float)lVar25;
  fVar44 = (float)lVar10;
  fVar31 = (float)((ulong)lVar25 >> 0x20);
  fVar29 = (float)((ulong)lVar10 >> 0x20);
  fVar32 = (float)uVar11;
  fVar30 = (float)uVar55;
  pbVar23 = (byte *)((long)param_1 + uVar2 * 4 + *param_1);
  uVar26 = (int)uVar16 + (bVar3 & 0xfe);
  fVar38 = (fVar49 - fVar44) * 0.0044247787;
  fVar40 = (fVar31 - fVar29) * 0.0044247787;
  fVar42 = (fVar32 - fVar30) * 0.0044247787;
  bVar4 = *pbVar23 >> 4;
  bVar3 = *pbVar23 & 0xf;
  pbVar1 = (byte *)((long)param_1 + (long)(int)uVar26 * 4 + *param_1);
  bVar6 = pbVar23[1] >> 4;
  fVar48 = fVar44 + (float)(byte)(bVar4 * bVar4) * fVar38;
  bVar4 = pbVar23[2] >> 4;
  bVar7 = *pbVar1 >> 4;
  fVar50 = fVar29 + (float)(byte)(bVar6 * bVar6) * fVar40;
  lVar10 = CONCAT44(fVar50,fVar48);
  fVar54 = fVar30 + (float)(byte)(bVar4 * bVar4) * fVar42;
  fVar44 = fVar44 + (float)(byte)(bVar7 * bVar7) * fVar38;
  fVar51 = fVar49 - (float)(byte)(bVar3 * bVar3) * fVar38;
  bVar3 = pbVar23[1] & 0xf;
  uVar55 = (ulong)(uint)fVar54;
  fVar52 = fVar31 - (float)(byte)(bVar3 * bVar3) * fVar40;
  bVar3 = pbVar23[2] & 0xf;
  bVar4 = *pbVar1 & 0xf;
  lVar25 = CONCAT44(fVar52,fVar51);
  bVar6 = pbVar1[1] >> 4;
  fVar49 = fVar49 - (float)(byte)(bVar4 * bVar4) * fVar38;
  fVar53 = fVar32 - (float)(byte)(bVar3 * bVar3) * fVar42;
  uVar11 = (ulong)(uint)fVar53;
  fVar29 = fVar29 + (float)(byte)(bVar6 * bVar6) * fVar40;
  bVar6 = pbVar1[2] >> 4;
  lVar19 = CONCAT44(fVar29,fVar44);
  bVar3 = pbVar1[1] & 0xf;
  bVar4 = pbVar1[2] & 0xf;
  fVar30 = fVar30 + (float)(byte)(bVar6 * bVar6) * fVar42;
  fVar31 = fVar31 - (float)(byte)(bVar3 * bVar3) * fVar40;
  lVar21 = CONCAT44(fVar31,fVar49);
  fVar32 = fVar32 - (float)(byte)(bVar4 * bVar4) * fVar42;
  fVar42 = (float)param_3[4];
  iVar45 = -(uint)(fVar48 <= fVar42);
  fVar48 = (float)((ulong)param_3[4] >> 0x20);
  iVar46 = -(uint)(fVar50 <= fVar48);
  iVar47 = -(uint)(fVar54 <= (float)param_3[5]);
  fVar38 = (float)param_3[2];
  iVar39 = -(uint)(fVar38 <= fVar51);
  fVar40 = (float)((ulong)param_3[2] >> 0x20);
  iVar41 = -(uint)(fVar40 <= fVar52);
  iVar43 = -(uint)((float)param_3[3] <= fVar53);
  iVar28 = -(uint)(fVar38 <= fVar49);
  iVar33 = -(uint)(fVar40 <= fVar31);
  iVar34 = -(uint)((float)param_3[3] <= fVar32);
  iVar35 = -(uint)(fVar44 <= fVar42);
  iVar36 = -(uint)(fVar29 <= fVar48);
  iVar37 = -(uint)(fVar30 <= (float)param_3[5]);
  bVar3 = CONCAT13((byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar41 >> 0x18) &
                   (byte)((uint)iVar45 >> 0x18) & (byte)((uint)iVar39 >> 0x18) &
                   (byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar43 >> 0x18),
                   CONCAT12((byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar41 >> 0x10) &
                            (byte)((uint)iVar45 >> 0x10) & (byte)((uint)iVar39 >> 0x10) &
                            (byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar43 >> 0x10),
                            CONCAT11((byte)((uint)iVar46 >> 8) & (byte)((uint)iVar41 >> 8) &
                                     (byte)((uint)iVar45 >> 8) & (byte)((uint)iVar39 >> 8) &
                                     (byte)((uint)iVar47 >> 8) & (byte)((uint)iVar43 >> 8),
                                     (byte)iVar46 & (byte)iVar41 & (byte)iVar45 & (byte)iVar39 &
                                     (byte)iVar47 & (byte)iVar43))) != 0 |
          (CONCAT13((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar33 >> 0x18) &
                    (byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                    (byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar34 >> 0x18),
                    CONCAT12((byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar33 >> 0x10) &
                             (byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                             (byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar34 >> 0x10),
                             CONCAT11((byte)((uint)iVar36 >> 8) & (byte)((uint)iVar33 >> 8) &
                                      (byte)((uint)iVar35 >> 8) & (byte)((uint)iVar28 >> 8) &
                                      (byte)((uint)iVar37 >> 8) & (byte)((uint)iVar34 >> 8),
                                      (byte)iVar36 & (byte)iVar33 & (byte)iVar35 & (byte)iVar28 &
                                      (byte)iVar37 & (byte)iVar34))) != 0) << 1;
  uVar16 = uVar2 & 0xffffffff;
  if (bVar3 != 1) {
    if (bVar3 == 3) {
      iVar28 = (int)param_2[1];
      lVar13 = (long)iVar28;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar28) {
        FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar13 + 1);
        iVar28 = (int)param_2[1];
      }
      plVar14 = (long *)(*param_2 + (long)iVar28 * 0x30);
      *(int *)(param_2 + 1) = (int)(lVar13 + 1);
      *(uint *)(plVar14 + 4) = uVar26;
      uVar16 = uVar2 & 0xffffffff;
      plVar14[1] = (ulong)(uint)fVar30;
      *plVar14 = lVar19;
      plVar14[3] = (ulong)(uint)fVar32;
      plVar14[2] = lVar21;
    }
    else if (bVar3 == 2) {
      uVar16 = (ulong)uVar26;
      pbVar23 = pbVar1;
      lVar25 = lVar21;
      uVar11 = (ulong)(uint)fVar32;
      lVar10 = lVar19;
      uVar55 = (ulong)(uint)fVar30;
    }
    else {
LAB_02ec4bbc:
      if ((int)param_2[1] <= (int)lVar8) {
        return;
      }
      iVar28 = (int)param_2[1] + -1;
      *(int *)(param_2 + 1) = iVar28;
      plVar14 = (long *)(*param_2 + (long)iVar28 * 0x30);
      uVar16 = (ulong)(int)plVar14[4];
      pbVar23 = (byte *)((long)param_1 + uVar16 * 4 + *param_1);
      lVar25 = plVar14[2];
      uVar11 = plVar14[3];
      lVar10 = *plVar14;
      uVar55 = plVar14[1];
    }
  }
  goto LAB_02ec44e4;
}


