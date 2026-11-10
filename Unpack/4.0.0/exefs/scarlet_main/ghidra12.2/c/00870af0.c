/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00870af0; name: FUN_00870af0
 */


void FUN_00870af0(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  int iVar11;
  undefined8 uVar10;
  int iVar12;
  int iVar13;
  int iVar15;
  undefined8 uVar14;
  int iVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  uint local_78;
  
  local_78 = *(uint *)((long)param_1 + 0x1c);
  if (local_78 != 0) {
    lVar1 = param_2[1];
    lVar4 = 0;
    if (*param_1 != 0) {
      lVar4 = *param_1 + (long)param_1;
    }
    local_80 = (undefined8 *)(lVar4 + (ulong)local_78 * 0x30);
    uStack_98 = local_80[1];
    local_a0 = *local_80;
    uStack_88 = local_80[3];
    local_90 = local_80[2];
    if (*(int *)(param_3 + 1) != 0) {
      iVar8 = -(uint)((float)local_a0 <= (float)param_3[4]);
      iVar11 = -(uint)((float)((ulong)local_a0 >> 0x20) <= (float)((ulong)param_3[4] >> 0x20));
      iVar12 = -(uint)((float)uStack_98 <= (float)param_3[5]);
      iVar13 = -(uint)((float)param_3[2] <= (float)local_90);
      iVar15 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= (float)((ulong)local_90 >> 0x20));
      iVar16 = -(uint)((float)param_3[3] <= (float)uStack_88);
      uVar9 = CONCAT13((byte)((uint)iVar8 >> 0x18) & (byte)((uint)iVar13 >> 0x18),
                       CONCAT12((byte)((uint)iVar8 >> 0x10) & (byte)((uint)iVar13 >> 0x10),
                                CONCAT11((byte)((uint)iVar8 >> 8) & (byte)((uint)iVar13 >> 8),
                                         (byte)iVar8 & (byte)iVar13)));
      if ((uVar9 & (uint)(CONCAT17((byte)((uint)iVar11 >> 0x18) & (byte)((uint)iVar15 >> 0x18),
                                   CONCAT16((byte)((uint)iVar11 >> 0x10) &
                                            (byte)((uint)iVar15 >> 0x10),
                                            CONCAT15((byte)((uint)iVar11 >> 8) &
                                                     (byte)((uint)iVar15 >> 8),
                                                     CONCAT14((byte)iVar11 & (byte)iVar15,uVar9))))
                         >> 0x20) &
          CONCAT13((byte)((uint)iVar12 >> 0x18) & (byte)((uint)iVar16 >> 0x18),
                   CONCAT12((byte)((uint)iVar12 >> 0x10) & (byte)((uint)iVar16 >> 0x10),
                            CONCAT11((byte)((uint)iVar12 >> 8) & (byte)((uint)iVar16 >> 8),
                                     (byte)iVar12 & (byte)iVar16)))) != 0) {
        uVar9 = *(uint *)((long)local_80 + 0x24);
joined_r0x00870ba4:
        while (uVar9 != 0) {
          lVar4 = 0;
          if (*param_1 != 0) {
            lVar4 = *param_1 + (long)param_1;
          }
          puVar6 = (undefined8 *)(lVar4 + (ulong)uVar9 * 0x30);
          uVar29 = puVar6[1];
          uVar28 = *puVar6;
          uVar31 = puVar6[3];
          uVar30 = puVar6[2];
          uVar5 = *(uint *)(local_80 + 5);
          puVar3 = (undefined8 *)(lVar4 + (ulong)uVar5 * 0x30);
          uVar10 = *puVar3;
          uVar14 = puVar3[2];
          bVar2 = false;
          if (*(int *)(param_3 + 1) == 0) {
LAB_00870d00:
            if (bVar2 == 3) goto LAB_00870cc4;
LAB_00870d10:
            if (bVar2 != 2) {
              if (bVar2 != 1) goto LAB_00870d20;
              goto LAB_00870bb8;
            }
            local_a0 = uVar10;
            uStack_98 = puVar3[1];
            local_90 = uVar14;
            uStack_88 = puVar3[3];
          }
          else {
            fVar20 = (float)param_3[4];
            iVar25 = -(uint)((float)uVar28 <= fVar20);
            fVar21 = (float)((ulong)param_3[4] >> 0x20);
            iVar26 = -(uint)((float)((ulong)uVar28 >> 0x20) <= fVar21);
            iVar27 = -(uint)((float)uVar29 <= (float)param_3[5]);
            fVar17 = (float)param_3[2];
            iVar22 = -(uint)(fVar17 <= (float)uVar30);
            fVar19 = (float)((ulong)param_3[2] >> 0x20);
            iVar23 = -(uint)(fVar19 <= (float)((ulong)uVar30 >> 0x20));
            iVar24 = -(uint)((float)param_3[3] <= (float)uVar31);
            iVar8 = -(uint)(fVar17 <= (float)uVar14);
            iVar11 = -(uint)(fVar19 <= (float)((ulong)uVar14 >> 0x20));
            iVar12 = -(uint)((float)param_3[3] <= (float)puVar3[3]);
            iVar13 = -(uint)((float)uVar10 <= fVar20);
            iVar15 = -(uint)((float)((ulong)uVar10 >> 0x20) <= fVar21);
            iVar16 = -(uint)((float)puVar3[1] <= (float)param_3[5]);
            uVar18 = CONCAT13((byte)((uint)iVar13 >> 0x18) & (byte)((uint)iVar8 >> 0x18),
                              CONCAT12((byte)((uint)iVar13 >> 0x10) & (byte)((uint)iVar8 >> 0x10),
                                       CONCAT11((byte)((uint)iVar13 >> 8) & (byte)((uint)iVar8 >> 8)
                                                ,(byte)iVar13 & (byte)iVar8)));
            bVar2 = (CONCAT13((byte)((uint)iVar25 >> 0x18) & (byte)((uint)iVar22 >> 0x18),
                              CONCAT12((byte)((uint)iVar25 >> 0x10) & (byte)((uint)iVar22 >> 0x10),
                                       CONCAT11((byte)((uint)iVar25 >> 8) &
                                                (byte)((uint)iVar22 >> 8),
                                                (byte)iVar25 & (byte)iVar22))) &
                     CONCAT13((byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar23 >> 0x18),
                              CONCAT12((byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar23 >> 0x10),
                                       CONCAT11((byte)((uint)iVar26 >> 8) &
                                                (byte)((uint)iVar23 >> 8),
                                                (byte)iVar26 & (byte)iVar23))) &
                    CONCAT13((byte)((uint)iVar27 >> 0x18) & (byte)((uint)iVar24 >> 0x18),
                             CONCAT12((byte)((uint)iVar27 >> 0x10) & (byte)((uint)iVar24 >> 0x10),
                                      CONCAT11((byte)((uint)iVar27 >> 8) & (byte)((uint)iVar24 >> 8)
                                               ,(byte)iVar27 & (byte)iVar24)))) != 0;
            if ((uVar18 & (uint)(CONCAT17((byte)((uint)iVar15 >> 0x18) &
                                          (byte)((uint)iVar11 >> 0x18),
                                          CONCAT16((byte)((uint)iVar15 >> 0x10) &
                                                   (byte)((uint)iVar11 >> 0x10),
                                                   CONCAT15((byte)((uint)iVar15 >> 8) &
                                                            (byte)((uint)iVar11 >> 8),
                                                            CONCAT14((byte)iVar15 & (byte)iVar11,
                                                                     uVar18)))) >> 0x20) &
                CONCAT13((byte)((uint)iVar16 >> 0x18) & (byte)((uint)iVar12 >> 0x18),
                         CONCAT12((byte)((uint)iVar16 >> 0x10) & (byte)((uint)iVar12 >> 0x10),
                                  CONCAT11((byte)((uint)iVar16 >> 8) & (byte)((uint)iVar12 >> 8),
                                           (byte)iVar16 & (byte)iVar12)))) == 0) goto LAB_00870d00;
            bVar2 = bVar2 | 2;
            if (bVar2 != 3) goto LAB_00870d10;
LAB_00870cc4:
            iVar8 = (int)param_2[1];
            lVar4 = (long)iVar8;
            if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar8) {
              FUN_02eb1f88(param_2,PTR_PTR_047d1a50,lVar4 + 1);
              iVar8 = (int)param_2[1];
            }
            *(int *)(param_2 + 1) = (int)(lVar4 + 1);
            *(uint *)(*param_2 + (long)iVar8 * 4) = uVar5;
LAB_00870bb8:
            puVar3 = puVar6;
            uVar5 = uVar9;
            local_a0 = uVar28;
            uStack_98 = uVar29;
            local_90 = uVar30;
            uStack_88 = uVar31;
          }
          local_78 = uVar5;
          local_80 = puVar3;
          uVar9 = *(uint *)((long)puVar3 + 0x24);
        }
        if (*(int *)(param_3 + 1) == 0) {
          uVar9 = 0;
        }
        else {
          iVar8 = (**(code **)(**(long **)*param_3 + 0x10))
                            (*(long **)*param_3,*(undefined4 *)(local_80 + 5),&local_a0);
          uVar9 = (uint)(iVar8 != 0);
        }
        *(uint *)(param_3 + 1) = uVar9;
LAB_00870d20:
        if ((int)lVar1 < (int)param_2[1]) {
          uVar9 = (int)param_2[1] - 1;
          uVar7 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2;
          *(uint *)(param_2 + 1) = uVar9;
          local_78 = *(uint *)(*param_2 + uVar7);
          lVar4 = 0;
          if (*param_1 != 0) {
            lVar4 = *param_1 + (long)param_1;
          }
          local_80 = (undefined8 *)(lVar4 + (ulong)*(uint *)(*param_2 + uVar7) * 0x30);
          uStack_98 = local_80[1];
          local_a0 = *local_80;
          uStack_88 = local_80[3];
          local_90 = local_80[2];
          uVar9 = *(uint *)((long)local_80 + 0x24);
          goto joined_r0x00870ba4;
        }
      }
    }
  }
  return;
}


