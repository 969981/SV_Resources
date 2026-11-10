/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008731cc; name: FUN_008731cc
 */


void FUN_008731cc(long *param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  long lVar11;
  undefined *puVar12;
  byte bVar13;
  long lVar14;
  long *plVar15;
  byte *pbVar16;
  byte *pbVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  float fVar28;
  int iVar30;
  undefined8 uVar29;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  ulong local_d8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  long local_90;
  ulong uStack_88;
  long local_80;
  ulong uStack_78;
  int local_70;
  byte *local_68;
  
  puVar12 = PTR_PTR_047d1a50;
  if ((int)param_1[1] != 0) {
    uStack_88 = param_1[3];
    local_90 = param_1[2];
    uStack_78 = param_1[5];
    local_80 = param_1[4];
    lVar11 = param_2[1];
    local_70 = 0;
    if (*(int *)(param_3 + 1) != 0) {
      iVar33 = -(uint)((float)local_90 <= (float)param_3[4]);
      iVar35 = -(uint)((float)((ulong)local_90 >> 0x20) <= (float)((ulong)param_3[4] >> 0x20));
      iVar37 = -(uint)((float)uStack_88 <= (float)param_3[5]);
      iVar27 = -(uint)((float)param_3[2] <= (float)local_80);
      iVar30 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= (float)((ulong)local_80 >> 0x20));
      iVar31 = -(uint)((float)param_3[3] <= (float)uStack_78);
      uVar20 = CONCAT13((byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar27 >> 0x18),
                        CONCAT12((byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar27 >> 0x10),
                                 CONCAT11((byte)((uint)iVar33 >> 8) & (byte)((uint)iVar27 >> 8),
                                          (byte)iVar33 & (byte)iVar27)));
      if ((uVar20 & (uint)(CONCAT17((byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar30 >> 0x18),
                                    CONCAT16((byte)((uint)iVar35 >> 0x10) &
                                             (byte)((uint)iVar30 >> 0x10),
                                             CONCAT15((byte)((uint)iVar35 >> 8) &
                                                      (byte)((uint)iVar30 >> 8),
                                                      CONCAT14((byte)iVar35 & (byte)iVar30,uVar20)))
                                   ) >> 0x20) &
          CONCAT13((byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar31 >> 0x18),
                   CONCAT12((byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar31 >> 0x10),
                            CONCAT11((byte)((uint)iVar37 >> 8) & (byte)((uint)iVar31 >> 8),
                                     (byte)iVar37 & (byte)iVar31)))) != 0) {
        uVar29 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x1e0);
        fVar28 = (float)uVar29;
        local_68 = (byte *)(*param_1 + (long)param_1);
LAB_00873298:
        while ((char)local_68[3] < '\0') {
          iVar30 = (int)((long)local_70 + 1);
          fVar18 = (float)local_80;
          fVar22 = (float)local_90;
          fVar19 = (float)((ulong)local_80 >> 0x20);
          fVar39 = (float)((ulong)local_90 >> 0x20);
          fVar24 = (float)uStack_78;
          fVar23 = (float)uStack_88;
          iVar27 = ((uint)*(ushort *)(local_68 + 4) << 1 | (local_68[3] & 0x7f) << 0x11) + local_70;
          pbVar16 = (byte *)((long)param_1 + (long)iVar27 * 6 + *param_1);
          pbVar17 = (byte *)((long)param_1 + ((long)local_70 + 1) * 6 + *param_1);
          fVar40 = (fVar18 - fVar22) * fVar28;
          fVar41 = (fVar19 - fVar39) * (float)((ulong)uVar29 >> 0x20);
          fVar42 = (fVar24 - fVar23) * fVar28;
          bVar6 = *pbVar17 >> 4;
          bVar13 = *pbVar17 & 0xf;
          bVar7 = *pbVar16 >> 4;
          bVar8 = pbVar17[1] >> 4;
          bVar9 = pbVar17[2] >> 4;
          bVar10 = pbVar16[1] >> 4;
          bVar1 = pbVar17[2] & 0xf;
          bVar2 = pbVar16[2] & 0xf;
          bVar5 = pbVar16[2] >> 4;
          bVar3 = *pbVar16 & 0xf;
          bVar4 = pbVar16[1] & 0xf;
          fVar43 = (float)(byte)(bVar6 * bVar6) * fVar40 + fVar22;
          fVar22 = (float)(byte)(bVar7 * bVar7) * fVar40 + fVar22;
          fVar45 = (float)(byte)(bVar8 * bVar8) * fVar41 + fVar39;
          local_f0 = CONCAT44(fVar45,fVar43);
          fVar46 = (float)(byte)(bVar9 * bVar9) * fVar42 + fVar23;
          bVar6 = pbVar17[1] & 0xf;
          uStack_e8 = (ulong)(uint)fVar46;
          fVar39 = (float)(byte)(bVar10 * bVar10) * fVar41 + fVar39;
          fVar44 = fVar19 - (float)(byte)(bVar6 * bVar6) * fVar41;
          fVar47 = fVar24 - (float)(byte)(bVar1 * bVar1) * fVar42;
          fVar48 = fVar18 - (float)(byte)(bVar13 * bVar13) * fVar40;
          local_d8 = (ulong)(uint)fVar47;
          local_e0 = CONCAT44(fVar44,fVar48);
          local_c0 = CONCAT44(fVar39,fVar22);
          fVar23 = (float)(byte)(bVar5 * bVar5) * fVar42 + fVar23;
          fVar18 = fVar18 - (float)(byte)(bVar3 * bVar3) * fVar40;
          uStack_b8 = (ulong)(uint)fVar23;
          fVar19 = fVar19 - (float)(byte)(bVar4 * bVar4) * fVar41;
          fVar24 = fVar24 - (float)(byte)(bVar2 * bVar2) * fVar42;
          local_b0 = CONCAT44(fVar19,fVar18);
          uStack_a8 = (ulong)(uint)fVar24;
          bVar13 = false;
          if (*(int *)(param_3 + 1) == 0) {
LAB_00873598:
            if (bVar13 == 3) goto LAB_008734d8;
LAB_008735a8:
            if (bVar13 == 2) {
              uStack_88 = uStack_b8;
              local_90 = local_c0;
              uStack_78 = uStack_a8;
              local_80 = local_b0;
              local_70 = iVar27;
              local_68 = pbVar16;
            }
            else {
              if (bVar13 != 1) goto LAB_0087354c;
              uStack_88 = uStack_e8;
              local_90 = local_f0;
              uStack_78 = local_d8;
              local_80 = local_e0;
              local_70 = iVar30;
              local_68 = pbVar17;
            }
          }
          else {
            fVar40 = (float)param_3[2];
            iVar31 = -(uint)(fVar40 <= fVar48);
            fVar41 = (float)((ulong)param_3[2] >> 0x20);
            iVar33 = -(uint)(fVar41 <= fVar44);
            iVar35 = -(uint)((float)param_3[3] <= fVar47);
            fVar42 = (float)param_3[4];
            iVar37 = -(uint)(fVar43 <= fVar42);
            fVar43 = (float)((ulong)param_3[4] >> 0x20);
            iVar25 = -(uint)(fVar45 <= fVar43);
            iVar26 = -(uint)(fVar46 <= (float)param_3[5]);
            uVar20 = CONCAT13((byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar31 >> 0x18),
                              CONCAT12((byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar31 >> 0x10),
                                       CONCAT11((byte)((uint)iVar37 >> 8) &
                                                (byte)((uint)iVar31 >> 8),
                                                (byte)iVar37 & (byte)iVar31)));
            iVar31 = -(uint)(fVar40 <= fVar18);
            iVar37 = -(uint)(fVar41 <= fVar19);
            iVar32 = -(uint)((float)param_3[3] <= fVar24);
            iVar34 = -(uint)(fVar22 <= fVar42);
            iVar36 = -(uint)(fVar39 <= fVar43);
            iVar38 = -(uint)(fVar23 <= (float)param_3[5]);
            uVar21 = CONCAT13((byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar31 >> 0x18),
                              CONCAT12((byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar31 >> 0x10),
                                       CONCAT11((byte)((uint)iVar34 >> 8) &
                                                (byte)((uint)iVar31 >> 8),
                                                (byte)iVar34 & (byte)iVar31)));
            bVar13 = (uVar20 & (uint)(CONCAT17((byte)((uint)iVar25 >> 0x18) &
                                               (byte)((uint)iVar33 >> 0x18),
                                               CONCAT16((byte)((uint)iVar25 >> 0x10) &
                                                        (byte)((uint)iVar33 >> 0x10),
                                                        CONCAT15((byte)((uint)iVar25 >> 8) &
                                                                 (byte)((uint)iVar33 >> 8),
                                                                 CONCAT14((byte)iVar25 &
                                                                          (byte)iVar33,uVar20)))) >>
                                     0x20) &
                     CONCAT13((byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar35 >> 0x18),
                              CONCAT12((byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar35 >> 0x10),
                                       CONCAT11((byte)((uint)iVar26 >> 8) &
                                                (byte)((uint)iVar35 >> 8),
                                                (byte)iVar26 & (byte)iVar35)))) != 0;
            if ((uVar21 & (uint)(CONCAT17((byte)((uint)iVar36 >> 0x18) &
                                          (byte)((uint)iVar37 >> 0x18),
                                          CONCAT16((byte)((uint)iVar36 >> 0x10) &
                                                   (byte)((uint)iVar37 >> 0x10),
                                                   CONCAT15((byte)((uint)iVar36 >> 8) &
                                                            (byte)((uint)iVar37 >> 8),
                                                            CONCAT14((byte)iVar36 & (byte)iVar37,
                                                                     uVar21)))) >> 0x20) &
                CONCAT13((byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar32 >> 0x18),
                         CONCAT12((byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar32 >> 0x10),
                                  CONCAT11((byte)((uint)iVar38 >> 8) & (byte)((uint)iVar32 >> 8),
                                           (byte)iVar38 & (byte)iVar32)))) == 0) goto LAB_00873598;
            bVar13 = bVar13 | 2;
            if (bVar13 != 3) goto LAB_008735a8;
LAB_008734d8:
            iVar31 = (int)param_2[1];
            lVar14 = (long)iVar31;
            if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar31) {
              FUN_02ec1dcc(param_2,puVar12,lVar14 + 1);
              iVar31 = (int)param_2[1];
            }
            *(int *)(param_2 + 1) = (int)(lVar14 + 1);
            plVar15 = (long *)(*param_2 + (long)iVar31 * 0x30);
            plVar15[1] = uStack_b8;
            *plVar15 = local_c0;
            plVar15[3] = uStack_a8;
            plVar15[2] = local_b0;
            *(int *)(plVar15 + 4) = iVar27;
            uStack_88 = uStack_e8;
            local_90 = local_f0;
            uStack_78 = local_d8;
            local_80 = local_e0;
            local_70 = iVar30;
            local_68 = pbVar17;
          }
        }
        if (*(int *)(param_3 + 1) == 0) {
          uVar20 = 0;
        }
        else {
          iVar27 = (**(code **)(**(long **)*param_3 + 0x10))
                             (*(long **)*param_3,
                              (ulong)CONCAT12(local_68[3],*(undefined2 *)(local_68 + 4)),&local_90);
          uVar20 = (uint)(iVar27 != 0);
        }
        *(uint *)(param_3 + 1) = uVar20;
LAB_0087354c:
        if ((int)lVar11 < (int)param_2[1]) {
          iVar27 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar27;
          plVar15 = (long *)(*param_2 + (long)iVar27 * 0x30);
          uStack_88 = plVar15[1];
          local_90 = *plVar15;
          uStack_78 = plVar15[3];
          local_80 = plVar15[2];
          local_70 = (int)plVar15[4];
          local_68 = (byte *)((long)param_1 + (long)(int)plVar15[4] * 6 + *param_1);
          goto LAB_00873298;
        }
      }
    }
  }
  return;
}


