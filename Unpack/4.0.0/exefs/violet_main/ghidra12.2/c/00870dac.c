/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00870dac; name: FUN_00870dac
 */


void FUN_00870dac(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  int iVar22;
  float fVar23;
  int iVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  
  puVar5 = PTR_PTR_047d1a50;
  if (*(uint *)((long)param_1 + 0x1c) != 0) {
    lVar4 = 0;
    if (*param_1 != 0) {
      lVar4 = *param_1 + (long)param_1;
    }
    puVar6 = (undefined8 *)(lVar4 + (ulong)*(uint *)((long)param_1 + 0x1c) * 0x30);
    iVar11 = -(uint)((float)param_3[2] <= (float)puVar6[2]);
    iVar15 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= (float)((ulong)puVar6[2] >> 0x20));
    iVar16 = -(uint)((float)param_3[3] <= (float)puVar6[3]);
    iVar17 = -(uint)((float)*puVar6 <= (float)param_3[4]);
    iVar18 = -(uint)((float)((ulong)*puVar6 >> 0x20) <= (float)((ulong)param_3[4] >> 0x20));
    iVar19 = -(uint)((float)puVar6[1] <= (float)param_3[5]);
    uVar12 = CONCAT13((byte)((uint)iVar17 >> 0x18) & (byte)((uint)iVar11 >> 0x18),
                      CONCAT12((byte)((uint)iVar17 >> 0x10) & (byte)((uint)iVar11 >> 0x10),
                               CONCAT11((byte)((uint)iVar17 >> 8) & (byte)((uint)iVar11 >> 8),
                                        (byte)iVar17 & (byte)iVar11)));
    if ((uVar12 & (uint)(CONCAT17((byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar15 >> 0x18),
                                  CONCAT16((byte)((uint)iVar18 >> 0x10) &
                                           (byte)((uint)iVar15 >> 0x10),
                                           CONCAT15((byte)((uint)iVar18 >> 8) &
                                                    (byte)((uint)iVar15 >> 8),
                                                    CONCAT14((byte)iVar18 & (byte)iVar15,uVar12))))
                        >> 0x20) &
        CONCAT13((byte)((uint)iVar19 >> 0x18) & (byte)((uint)iVar16 >> 0x18),
                 CONCAT12((byte)((uint)iVar19 >> 0x10) & (byte)((uint)iVar16 >> 0x10),
                          CONCAT11((byte)((uint)iVar19 >> 8) & (byte)((uint)iVar16 >> 8),
                                   (byte)iVar19 & (byte)iVar16)))) != 0) {
      lVar4 = param_2[1];
      puVar1 = PTR_PTR_047d1a50 + 0x20;
LAB_00870e4c:
      if (*(uint *)((long)puVar6 + 0x24) != 0) goto code_r0x00870e54;
      plVar9 = *(long **)*param_3;
      uVar3 = *(undefined4 *)(puVar6 + 5);
      iVar11 = (int)plVar9[1];
      lVar7 = (long)iVar11;
      if ((int)(*(uint *)((long)plVar9 + 0xc) & 0x7fffffff) <= iVar11) {
        FUN_02ed686c(plVar9,puVar1,lVar7 + 1);
        iVar11 = (int)plVar9[1];
      }
      *(undefined4 *)(*plVar9 + (long)iVar11 * 4) = uVar3;
      *(int *)(plVar9 + 1) = (int)(lVar7 + 1);
      iVar11 = (int)param_2[1];
      if ((int)lVar4 < iVar11) goto LAB_00870f48;
    }
  }
  return;
code_r0x00870e54:
  lVar7 = 0;
  if (*param_1 != 0) {
    lVar7 = *param_1 + (long)param_1;
  }
  puVar10 = (undefined8 *)(lVar7 + (ulong)*(uint *)((long)puVar6 + 0x24) * 0x30);
  uVar12 = *(uint *)(puVar6 + 5);
  fVar21 = (float)param_3[2];
  iVar16 = -(uint)(fVar21 <= (float)puVar10[2]);
  fVar23 = (float)((ulong)param_3[2] >> 0x20);
  iVar19 = -(uint)(fVar23 <= (float)((ulong)puVar10[2] >> 0x20));
  iVar20 = -(uint)((float)param_3[3] <= (float)puVar10[3]);
  puVar8 = (undefined8 *)(lVar7 + (ulong)uVar12 * 0x30);
  fVar26 = (float)param_3[4];
  iVar11 = -(uint)((float)*puVar10 <= fVar26);
  fVar27 = (float)((ulong)param_3[4] >> 0x20);
  iVar15 = -(uint)((float)((ulong)*puVar10 >> 0x20) <= fVar27);
  iVar17 = -(uint)((float)puVar10[1] <= (float)param_3[5]);
  uVar13 = CONCAT13((byte)((uint)iVar11 >> 0x18) & (byte)((uint)iVar16 >> 0x18),
                    CONCAT12((byte)((uint)iVar11 >> 0x10) & (byte)((uint)iVar16 >> 0x10),
                             CONCAT11((byte)((uint)iVar11 >> 8) & (byte)((uint)iVar16 >> 8),
                                      (byte)iVar11 & (byte)iVar16)));
  iVar22 = -(uint)(fVar21 <= (float)puVar8[2]);
  iVar24 = -(uint)(fVar23 <= (float)((ulong)puVar8[2] >> 0x20));
  iVar25 = -(uint)((float)param_3[3] <= (float)puVar8[3]);
  iVar11 = -(uint)((float)*puVar8 <= fVar26);
  iVar16 = -(uint)((float)((ulong)*puVar8 >> 0x20) <= fVar27);
  iVar18 = -(uint)((float)puVar8[1] <= (float)param_3[5]);
  uVar14 = CONCAT13((byte)((uint)iVar11 >> 0x18) & (byte)((uint)iVar22 >> 0x18),
                    CONCAT12((byte)((uint)iVar11 >> 0x10) & (byte)((uint)iVar22 >> 0x10),
                             CONCAT11((byte)((uint)iVar11 >> 8) & (byte)((uint)iVar22 >> 8),
                                      (byte)iVar11 & (byte)iVar22)));
  bVar2 = (uVar13 & (uint)(CONCAT17((byte)((uint)iVar15 >> 0x18) & (byte)((uint)iVar19 >> 0x18),
                                    CONCAT16((byte)((uint)iVar15 >> 0x10) &
                                             (byte)((uint)iVar19 >> 0x10),
                                             CONCAT15((byte)((uint)iVar15 >> 8) &
                                                      (byte)((uint)iVar19 >> 8),
                                                      CONCAT14((byte)iVar15 & (byte)iVar19,uVar13)))
                                   ) >> 0x20) &
          CONCAT13((byte)((uint)iVar17 >> 0x18) & (byte)((uint)iVar20 >> 0x18),
                   CONCAT12((byte)((uint)iVar17 >> 0x10) & (byte)((uint)iVar20 >> 0x10),
                            CONCAT11((byte)((uint)iVar17 >> 8) & (byte)((uint)iVar20 >> 8),
                                     (byte)iVar17 & (byte)iVar20)))) != 0 |
          ((uVar14 & (uint)(CONCAT17((byte)((uint)iVar16 >> 0x18) & (byte)((uint)iVar24 >> 0x18),
                                     CONCAT16((byte)((uint)iVar16 >> 0x10) &
                                              (byte)((uint)iVar24 >> 0x10),
                                              CONCAT15((byte)((uint)iVar16 >> 8) &
                                                       (byte)((uint)iVar24 >> 8),
                                                       CONCAT14((byte)iVar16 & (byte)iVar24,uVar14))
                                             )) >> 0x20) &
           CONCAT13((byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar25 >> 0x18),
                    CONCAT12((byte)((uint)iVar18 >> 0x10) & (byte)((uint)iVar25 >> 0x10),
                             CONCAT11((byte)((uint)iVar18 >> 8) & (byte)((uint)iVar25 >> 8),
                                      (byte)iVar18 & (byte)iVar25)))) != 0) << 1;
  puVar6 = puVar10;
  if (bVar2 != 1) {
    if (bVar2 == 3) {
      iVar11 = (int)param_2[1];
      lVar7 = (long)iVar11;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar11) {
        FUN_02eb1f88(param_2,puVar5,lVar7 + 1);
        iVar11 = (int)param_2[1];
      }
      *(int *)(param_2 + 1) = (int)(lVar7 + 1);
      *(uint *)(*param_2 + (long)iVar11 * 4) = uVar12;
    }
    else {
      puVar6 = puVar8;
      if (bVar2 != 2) {
        iVar11 = (int)param_2[1];
        if (iVar11 <= (int)lVar4) {
          return;
        }
LAB_00870f48:
        *(int *)(param_2 + 1) = iVar11 + -1;
        lVar7 = 0;
        if (*param_1 != 0) {
          lVar7 = *param_1 + (long)param_1;
        }
        puVar6 = (undefined8 *)(lVar7 + (ulong)*(uint *)(*param_2 + (long)(iVar11 + -1) * 4) * 0x30)
        ;
      }
    }
  }
  goto LAB_00870e4c;
}


