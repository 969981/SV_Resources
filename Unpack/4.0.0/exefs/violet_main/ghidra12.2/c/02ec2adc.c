/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ec2adc; name: FUN_02ec2adc
 */


void FUN_02ec2adc(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined2 *puVar18;
  byte *pbVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  float fVar33;
  int iVar34;
  float fVar35;
  int iVar36;
  float fVar37;
  int iVar38;
  float fVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  long lVar49;
  float fVar50;
  long lVar51;
  ulong uVar52;
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
    lVar10 = param_1[2];
    lVar20 = param_1[4];
    iVar23 = -(uint)((float)param_3[2] <= (float)lVar20);
    iVar28 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= (float)((ulong)lVar20 >> 0x20));
    iVar29 = -(uint)((float)param_3[3] <= (float)param_1[5]);
    iVar30 = -(uint)((float)lVar10 <= (float)param_3[4]);
    iVar31 = -(uint)((float)((ulong)lVar10 >> 0x20) <= (float)((ulong)param_3[4] >> 0x20));
    iVar32 = -(uint)((float)param_1[3] <= (float)param_3[5]);
    if (CONCAT13((byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                 (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar23 >> 0x18) &
                 (byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar29 >> 0x18),
                 CONCAT12((byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                          (byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar23 >> 0x10) &
                          (byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar29 >> 0x10),
                          CONCAT11((byte)((uint)iVar31 >> 8) & (byte)((uint)iVar28 >> 8) &
                                   (byte)((uint)iVar30 >> 8) & (byte)((uint)iVar23 >> 8) &
                                   (byte)((uint)iVar32 >> 8) & (byte)((uint)iVar29 >> 8),
                                   (byte)iVar31 & (byte)iVar28 & (byte)iVar30 & (byte)iVar23 &
                                   (byte)iVar32 & (byte)iVar29))) != 0) {
      lVar9 = param_2[1];
      uVar15 = 0;
      pbVar19 = (byte *)(*param_1 + (long)param_1);
      uVar11 = param_1[5];
      uVar52 = param_1[3];
LAB_02ec2b84:
      bVar4 = pbVar19[3];
      if ((bVar4 & 1) != 0) goto LAB_02ec2bc8;
      lVar20 = *param_3;
      if (*(char *)(lVar20 + 0xf1) == '\0') {
        lVar10 = *(long *)(lVar20 + 0x68) + (ulong)(bVar4 >> 1) * 4;
        bVar5 = *(byte *)(lVar10 + 3);
        uVar22 = (uint)(bVar4 >> 1);
        if ((uint)*(byte *)(lVar10 + 1) == (uint)bVar5) {
          if (*(byte *)(lVar10 + 2) - 3 < 2) goto LAB_02ec2dec;
        }
        else {
          if ((uint)*(byte *)(lVar10 + 2) == (uint)bVar5) {
LAB_02ec2dec:
            uVar21 = uVar22 << 1 | *(int *)(lVar20 + 0x94) << 8;
            iVar23 = 1;
          }
          else {
            uVar21 = uVar22 << 1 | *(int *)(lVar20 + 0x94) << 8;
            iVar23 = 1;
            if ((*(byte *)(lVar20 + 0x58) & *(byte *)(lVar10 + 1)) <= bVar5) {
              iVar23 = 2;
            }
          }
          iVar28 = 0;
          do {
            puVar13 = *(undefined8 **)(lVar20 + 0xd8);
            lVar10 = puVar13[5];
            if (lVar10 == 0) {
LAB_02ec2ebc:
              uVar6 = *(uint *)(PTR_DAT_047d1a60 + (long)*(int *)((long)puVar13 + 0x1c) * 4) &
                      *(uint *)(puVar13 + 3) |
                      (uVar21 + 1 <<
                      (ulong)(-(*(int *)(*(long *)(lVar20 + 0x50) + 0x34) +
                               *(int *)((long)puVar13 + 0x1c)) & 0x1f)) - 1;
              if (**(long **)(lVar20 + 0xc0) != 0) {
                lVar10 = *(long *)(lVar20 + 0x88);
                uVar17 = (uint)*(byte *)(*(long *)(lVar20 + 0x60) + 0x5a);
                if (uVar17 < 5) {
                  iVar29 = 0;
                }
                else {
                  iVar29 = 0;
                  iVar30 = uVar17 - 1;
                  do {
                    iVar31 = iVar29 + iVar30 >> 1;
                    iVar32 = uVar22 - *(byte *)(lVar10 + (long)iVar31 * 4 + 2);
                    if (iVar32 < 0) {
                      iVar30 = iVar31;
                    }
                    else {
                      puVar18 = (undefined2 *)
                                (lVar10 + ((long)((ulong)(uint)(iVar29 + iVar30) << 0x20) >> 0x21) *
                                          4);
                      if (iVar32 < (int)(uint)*(byte *)((long)puVar18 + 3)) goto LAB_02ec2f94;
                      iVar29 = iVar31 + 1;
                    }
                  } while (3 < iVar30 - iVar29);
                }
                for (puVar18 = (undefined2 *)(lVar10 + (long)iVar29 * 4);
                    ((int)(uVar22 - *(byte *)(puVar18 + 1)) < 0 ||
                    ((int)(uint)*(byte *)((long)puVar18 + 3) <=
                     (int)(uVar22 - *(byte *)(puVar18 + 1)))); puVar18 = puVar18 + 2) {
                }
LAB_02ec2f94:
                local_78 = **(undefined8 **)(lVar20 + 0xe0);
                uStack_70 = (*(undefined8 **)(lVar20 + 0xe0))[1];
                plVar14 = (long *)**(long **)(lVar20 + 0xc0);
                (**(code **)(*plVar14 + 0x40))
                          (plVar14,*puVar18,6,*puVar13,puVar13[1],*(undefined8 *)(lVar20 + 0xd0),
                           uVar6,0,&local_78);
                lVar10 = *(long *)(lVar20 + 0xc0);
                if (*(long *)(lVar10 + 8) != 0) {
                  local_b0[0] = *(undefined2 *)(lVar10 + 0x10);
                  uVar16 = *(undefined8 *)(lVar10 + 0x14);
                  *(undefined4 *)((undefined8 *)((ulong)local_b0 | 4) + 1) =
                       *(undefined4 *)(lVar10 + 0x1c);
                  *(undefined8 *)((ulong)local_b0 | 4) = uVar16;
                  puVar13 = *(undefined8 **)(lVar20 + 200);
                  local_a0 = *puVar13;
                  local_98 = puVar13[1];
                  local_90 = puVar13[2];
                  local_88 = *(undefined4 *)(puVar13 + 3);
                  local_e8[0] = (undefined2)local_78;
                  uVar16 = *(undefined8 *)((ulong)&local_78 | 4);
                  local_80 = 0;
                  *(undefined4 *)((undefined8 *)((ulong)local_e8 | 4) + 1) =
                       *(undefined4 *)((undefined8 *)((ulong)&local_78 | 4) + 1);
                  *(undefined8 *)((ulong)local_e8 | 4) = uVar16;
                  local_d8 = **(undefined8 **)(lVar20 + 0xd8);
                  local_d0 = (*(undefined8 **)(lVar20 + 0xd8))[1];
                  uStack_c8 = *(undefined8 *)(lVar20 + 0xd0);
                  local_b8 = 0;
                  local_c0 = uVar6;
                  uVar11 = (**(code **)(**(long **)(lVar10 + 8) + 0x40))
                                     (*(long **)(lVar10 + 8),6,1,local_b0,local_e8);
                  if ((uVar11 & 1) == 0) goto LAB_02ec30bc;
                }
              }
              plVar14 = *(long **)(lVar20 + 0xe8);
              iVar29 = (int)plVar14[1];
              lVar10 = (long)iVar29;
              if ((int)(*(uint *)((long)plVar14 + 0xc) & 0x7fffffff) <= iVar29) {
                FUN_02e931c8(plVar14,PTR_PTR_047d1a50,lVar10 + 1);
                iVar29 = (int)plVar14[1];
              }
              *(uint *)(*plVar14 + (long)iVar29 * 4) = uVar6;
              *(int *)(plVar14 + 1) = (int)(lVar10 + 1);
            }
            else {
              uVar11 = (**(code **)(*(long *)PTR_DAT_047d19f0 +
                                    (ulong)*(byte *)(lVar10 + 0x18) * 0x40 + 0x4020))
                                 (lVar10,uVar21 << (ulong)(*(uint *)(lVar20 + 0xa0) & 0x1f));
              if ((uVar11 & 1) != 0) {
                puVar13 = *(undefined8 **)(lVar20 + 0xd8);
                goto LAB_02ec2ebc;
              }
            }
LAB_02ec30bc:
            uVar21 = uVar21 + 1;
            iVar28 = iVar28 + 1;
          } while (iVar28 != iVar23);
          bVar1 = false;
          if (*(char *)(lVar20 + 0xf0) != '\0') {
            bVar1 = 0 < *(int *)(*(long *)(lVar20 + 0xe8) + 8);
          }
          *(byte *)(lVar20 + 0xf1) = *(byte *)(lVar20 + 0xf1) | bVar1;
        }
      }
      goto LAB_02ec30f4;
    }
  }
  return;
LAB_02ec2bc8:
  uVar3 = (long)(int)uVar15 + 1;
  fVar44 = (float)lVar20;
  fVar39 = (float)lVar10;
  fVar26 = (float)((ulong)lVar20 >> 0x20);
  fVar24 = (float)((ulong)lVar10 >> 0x20);
  fVar27 = (float)uVar11;
  fVar25 = (float)uVar52;
  pbVar19 = (byte *)((long)param_1 + uVar3 * 4 + *param_1);
  uVar22 = (int)uVar15 + (bVar4 & 0xfe);
  pbVar2 = (byte *)((long)param_1 + (long)(int)uVar22 * 4 + *param_1);
  fVar33 = (fVar44 - fVar39) * 0.0044247787;
  fVar35 = (fVar26 - fVar24) * 0.0044247787;
  fVar37 = (fVar27 - fVar25) * 0.0044247787;
  bVar5 = *pbVar19 >> 4;
  bVar4 = *pbVar19 & 0xf;
  bVar7 = pbVar19[1] >> 4;
  fVar43 = fVar39 + (float)(byte)(bVar5 * bVar5) * fVar33;
  bVar5 = pbVar19[2] >> 4;
  bVar8 = *pbVar2 >> 4;
  fVar45 = fVar24 + (float)(byte)(bVar7 * bVar7) * fVar35;
  lVar10 = CONCAT44(fVar45,fVar43);
  fVar50 = fVar25 + (float)(byte)(bVar5 * bVar5) * fVar37;
  fVar39 = fVar39 + (float)(byte)(bVar8 * bVar8) * fVar33;
  uVar52 = (ulong)(uint)fVar50;
  fVar46 = fVar44 - (float)(byte)(bVar4 * bVar4) * fVar33;
  bVar4 = pbVar19[1] & 0xf;
  bVar5 = pbVar19[2] & 0xf;
  fVar47 = fVar26 - (float)(byte)(bVar4 * bVar4) * fVar35;
  bVar4 = *pbVar2 & 0xf;
  lVar20 = CONCAT44(fVar47,fVar46);
  fVar44 = fVar44 - (float)(byte)(bVar4 * bVar4) * fVar33;
  bVar7 = pbVar2[1] >> 4;
  bVar4 = pbVar2[1] & 0xf;
  fVar48 = fVar27 - (float)(byte)(bVar5 * bVar5) * fVar37;
  uVar11 = (ulong)(uint)fVar48;
  fVar24 = fVar24 + (float)(byte)(bVar7 * bVar7) * fVar35;
  bVar7 = pbVar2[2] >> 4;
  lVar49 = CONCAT44(fVar24,fVar39);
  bVar5 = pbVar2[2] & 0xf;
  fVar25 = fVar25 + (float)(byte)(bVar7 * bVar7) * fVar37;
  fVar26 = fVar26 - (float)(byte)(bVar4 * bVar4) * fVar35;
  lVar51 = CONCAT44(fVar26,fVar44);
  fVar27 = fVar27 - (float)(byte)(bVar5 * bVar5) * fVar37;
  fVar37 = (float)param_3[4];
  iVar40 = -(uint)(fVar43 <= fVar37);
  fVar43 = (float)((ulong)param_3[4] >> 0x20);
  iVar41 = -(uint)(fVar45 <= fVar43);
  iVar42 = -(uint)(fVar50 <= (float)param_3[5]);
  fVar33 = (float)param_3[2];
  iVar34 = -(uint)(fVar33 <= fVar46);
  fVar35 = (float)((ulong)param_3[2] >> 0x20);
  iVar36 = -(uint)(fVar35 <= fVar47);
  iVar38 = -(uint)((float)param_3[3] <= fVar48);
  iVar23 = -(uint)(fVar33 <= fVar44);
  iVar28 = -(uint)(fVar35 <= fVar26);
  iVar29 = -(uint)((float)param_3[3] <= fVar27);
  iVar30 = -(uint)(fVar39 <= fVar37);
  iVar31 = -(uint)(fVar24 <= fVar43);
  iVar32 = -(uint)(fVar25 <= (float)param_3[5]);
  bVar4 = CONCAT13((byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar36 >> 0x18) &
                   (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar34 >> 0x18) &
                   (byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar38 >> 0x18),
                   CONCAT12((byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar36 >> 0x10) &
                            (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar34 >> 0x10) &
                            (byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar38 >> 0x10),
                            CONCAT11((byte)((uint)iVar41 >> 8) & (byte)((uint)iVar36 >> 8) &
                                     (byte)((uint)iVar40 >> 8) & (byte)((uint)iVar34 >> 8) &
                                     (byte)((uint)iVar42 >> 8) & (byte)((uint)iVar38 >> 8),
                                     (byte)iVar41 & (byte)iVar36 & (byte)iVar40 & (byte)iVar34 &
                                     (byte)iVar42 & (byte)iVar38))) != 0 |
          (CONCAT13((byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                    (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar23 >> 0x18) &
                    (byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar29 >> 0x18),
                    CONCAT12((byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                             (byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar23 >> 0x10) &
                             (byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar29 >> 0x10),
                             CONCAT11((byte)((uint)iVar31 >> 8) & (byte)((uint)iVar28 >> 8) &
                                      (byte)((uint)iVar30 >> 8) & (byte)((uint)iVar23 >> 8) &
                                      (byte)((uint)iVar32 >> 8) & (byte)((uint)iVar29 >> 8),
                                      (byte)iVar31 & (byte)iVar28 & (byte)iVar30 & (byte)iVar23 &
                                      (byte)iVar32 & (byte)iVar29))) != 0) << 1;
  uVar15 = uVar3 & 0xffffffff;
  if (bVar4 != 1) {
    if (bVar4 == 3) {
      iVar23 = (int)param_2[1];
      lVar12 = (long)iVar23;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar23) {
        FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar12 + 1);
        iVar23 = (int)param_2[1];
      }
      plVar14 = (long *)(*param_2 + (long)iVar23 * 0x30);
      *(int *)(param_2 + 1) = (int)(lVar12 + 1);
      *(uint *)(plVar14 + 4) = uVar22;
      uVar15 = uVar3 & 0xffffffff;
      plVar14[1] = (ulong)(uint)fVar25;
      *plVar14 = lVar49;
      plVar14[3] = (ulong)(uint)fVar27;
      plVar14[2] = lVar51;
    }
    else if (bVar4 == 2) {
      uVar15 = (ulong)uVar22;
      pbVar19 = pbVar2;
      lVar20 = lVar51;
      uVar11 = (ulong)(uint)fVar27;
      lVar10 = lVar49;
      uVar52 = (ulong)(uint)fVar25;
    }
    else {
LAB_02ec30f4:
      if ((int)param_2[1] <= (int)lVar9) {
        return;
      }
      iVar23 = (int)param_2[1] + -1;
      *(int *)(param_2 + 1) = iVar23;
      plVar14 = (long *)(*param_2 + (long)iVar23 * 0x30);
      uVar15 = (ulong)(int)plVar14[4];
      pbVar19 = (byte *)((long)param_1 + uVar15 * 4 + *param_1);
      lVar20 = plVar14[2];
      uVar11 = plVar14[3];
      lVar10 = *plVar14;
      uVar52 = plVar14[1];
    }
  }
  goto LAB_02ec2b84;
}


