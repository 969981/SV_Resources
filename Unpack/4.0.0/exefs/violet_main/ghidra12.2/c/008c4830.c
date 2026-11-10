/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c4830; name: FUN_008c4830
 */


void FUN_008c4830(undefined8 param_1,ulong param_2,long param_3,long *param_4,long *param_5,
                 long *param_6,float *param_7,long param_8,uint param_9,uint param_10)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar30;
  ulong uVar28;
  ulong uVar29;
  float fVar32;
  float fVar33;
  ulong uVar31;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  undefined4 local_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  undefined8 local_c0;
  ulong local_b8;
  undefined8 local_b0 [2];
  
  if ((0.0 < *param_7) && (lVar5 = *(long *)(param_7 + 2), lVar5 != 0)) {
    iVar2 = *(int *)(param_3 + 0xe8);
    uVar9 = (ulong)(param_9 - 1);
    if (0 < (int)param_9) {
      uVar10 = 0;
      do {
        fVar24 = (float)param_2;
        uVar1 = uVar10 + 1;
        uVar31 = 0;
        if (uVar1 != param_9) {
          uVar31 = uVar1 & 0xffffffff;
        }
        if (*(char *)(param_8 + uVar10 * 0x18 + 0x14) == '\0') {
          puVar15 = (undefined8 *)(param_8 + uVar10 * 0x18);
          uVar11 = *puVar15;
          puVar6 = (undefined8 *)(param_8 + uVar31 * 0x18);
          uVar7 = *puVar6;
          plVar16 = puVar15 + 1;
          uVar12 = *(undefined8 *)*plVar16;
          local_b0[0] = uVar11;
          fVar21 = (float)(**(code **)(*param_4 + 0x30))(param_4);
          iVar4 = (**(code **)(*param_4 + 0x20))(param_4);
          fVar22 = (float)uVar11;
          fVar23 = (float)((ulong)uVar11 >> 0x20);
          fVar20 = (float)uVar12;
          fVar18 = (float)((ulong)uVar12 >> 0x20);
          if (iVar4 == 1) {
            fVar21 = fVar22 - fVar21;
            fVar24 = fVar23 - fVar24;
            fVar17 = fVar21 * fVar21 + fVar24 * fVar24;
            fVar19 = fVar21 * fVar21 + fVar24 * fVar24;
            uVar29 = CONCAT44(fVar19,fVar17);
            uVar28 = 0;
            if (0.00024414062 <= SQRT(fVar17)) {
              uVar11 = NEON_frsqrte(uVar29,4);
              fVar30 = (float)((ulong)uVar11 >> 0x20);
              uVar12 = NEON_frsqrts(uVar11,CONCAT44(fVar19 * fVar30,fVar17 * (float)uVar11),4);
              fVar26 = (float)uVar11 * (float)uVar12;
              fVar30 = fVar30 * (float)((ulong)uVar12 >> 0x20);
              iVar4 = -(uint)(fVar17 == 0.0);
              iVar25 = -(uint)(fVar19 == 0.0);
              uVar11 = NEON_frsqrts(CONCAT44(fVar30,fVar26),
                                    CONCAT44(fVar19 * fVar30,fVar17 * fVar26),4);
              uVar29 = CONCAT17(~(byte)((uint)iVar25 >> 0x18),
                                CONCAT16(~(byte)((uint)iVar25 >> 0x10),
                                         CONCAT15(~(byte)((uint)iVar25 >> 8),
                                                  CONCAT14(~(byte)iVar25,
                                                           CONCAT13(~(byte)((uint)iVar4 >> 0x18),
                                                                    CONCAT12(~(byte)((uint)iVar4 >>
                                                                                    0x10),
                                                                             CONCAT11(~(byte)((uint)
                                                  iVar4 >> 8),~(byte)iVar4)))))));
              uVar28 = CONCAT44(fVar24 * fVar30 * (float)((ulong)uVar11 >> 0x20),
                                fVar21 * fVar26 * (float)uVar11) & uVar29;
            }
            uVar28 = CONCAT44((int)uVar28,-(float)(uVar28 >> 0x20));
          }
          else {
            fVar17 = fVar20 - fVar22;
            fVar19 = fVar18 - fVar23;
            fVar24 = fVar17 * fVar17 + fVar19 * fVar19;
            fVar21 = fVar17 * fVar17 + fVar19 * fVar19;
            uVar29 = CONCAT44(fVar21,fVar24);
            uVar28 = 0;
            if (0.00024414062 <= SQRT(fVar24)) {
              uVar11 = NEON_frsqrte(uVar29,4);
              fVar30 = (float)((ulong)uVar11 >> 0x20);
              uVar12 = NEON_frsqrts(uVar11,CONCAT44(fVar21 * fVar30,fVar24 * (float)uVar11),4);
              fVar26 = (float)uVar11 * (float)uVar12;
              fVar30 = fVar30 * (float)((ulong)uVar12 >> 0x20);
              iVar4 = -(uint)(fVar24 == 0.0);
              iVar25 = -(uint)(fVar21 == 0.0);
              uVar11 = NEON_frsqrts(CONCAT44(fVar30,fVar26),
                                    CONCAT44(fVar21 * fVar30,fVar24 * fVar26),4);
              uVar29 = CONCAT17(~(byte)((uint)iVar25 >> 0x18),
                                CONCAT16(~(byte)((uint)iVar25 >> 0x10),
                                         CONCAT15(~(byte)((uint)iVar25 >> 8),
                                                  CONCAT14(~(byte)iVar25,
                                                           CONCAT13(~(byte)((uint)iVar4 >> 0x18),
                                                                    CONCAT12(~(byte)((uint)iVar4 >>
                                                                                    0x10),
                                                                             CONCAT11(~(byte)((uint)
                                                  iVar4 >> 8),~(byte)iVar4)))))));
              uVar28 = CONCAT44(fVar19 * fVar30 * (float)((ulong)uVar11 >> 0x20),
                                fVar17 * fVar26 * (float)uVar11) & uVar29;
            }
          }
          fVar17 = (float)(uVar28 >> 0x20);
          fVar21 = -fVar17;
          fVar24 = (float)uVar28;
          local_b8 = uVar28;
          local_c0._0_4_ = fVar21;
          local_c0._4_4_ = fVar24;
          if (uVar10 == 0 && (param_10 & 1) == 0) {
            FUN_008c4550(param_3,param_5,param_6,param_7,local_b0,&local_c0,&local_b8,1);
          }
          fVar27 = (float)uVar29;
          *(undefined4 *)*param_6 = *(undefined4 *)(param_3 + 0xe8);
          *param_6 = *param_6 + 4;
          *(int *)(param_3 + 0xec) = *(int *)(param_3 + 0xec) + 1;
          *(int *)*param_6 = *(int *)(param_3 + 0xe8) + 1;
          *param_6 = *param_6 + 4;
          *(int *)(param_3 + 0xec) = *(int *)(param_3 + 0xec) + 1;
          fVar19 = fVar21 * *param_7;
          fVar30 = fVar24 * *param_7;
          fVar26 = fVar19 + fVar22;
          fVar32 = fVar30 + fVar23;
          *(float *)*param_5 = fVar26;
          *(float *)(*param_5 + 4) = fVar32;
          *param_5 = *param_5 + 8;
          fVar22 = fVar22 - fVar19;
          fVar23 = fVar23 - fVar30;
          *(int *)(param_3 + 0xe8) = *(int *)(param_3 + 0xe8) + 1;
          *(float *)*param_5 = fVar22;
          *(float *)(*param_5 + 4) = fVar23;
          *param_5 = *param_5 + 8;
          iVar4 = *(int *)(param_3 + 0xe8) + 1;
          *(int *)(param_3 + 0xe8) = iVar4;
          puVar13 = (uint *)(param_8 + uVar10 * 0x18 + 0x10);
          if (*puVar13 != 0) {
            uVar14 = 0;
            do {
              fVar17 = (float)uVar29;
              *(int *)*param_6 = iVar4;
              *param_6 = *param_6 + 4;
              *(int *)(param_3 + 0xec) = *(int *)(param_3 + 0xec) + 1;
              *(int *)*param_6 = *(int *)(param_3 + 0xe8) + 1;
              *param_6 = *param_6 + 4;
              *(int *)(param_3 + 0xec) = *(int *)(param_3 + 0xec) + 1;
              uVar3 = *puVar13;
              if (uVar14 == uVar3 - 1) {
                if (uVar3 < 2) {
                  fVar22 = fVar21 * *param_7;
                  fVar23 = fVar24 * *param_7;
                  fVar26 = fVar22 + fVar20;
                  fVar32 = fVar23 + fVar18;
                  fVar22 = fVar20 - fVar22;
                  fVar23 = fVar18 - fVar23;
                }
                else {
                  uVar12 = *(undefined8 *)(*plVar16 + (ulong)(uVar3 - 2) * 8);
                  uVar11 = *(undefined8 *)(*plVar16 + uVar14 * 8);
                  fVar24 = (float)(**(code **)(*param_4 + 0x30))(param_4);
                  iVar4 = (**(code **)(*param_4 + 0x20))(param_4);
                  fVar21 = (float)uVar12;
                  fVar19 = (float)((ulong)uVar12 >> 0x20);
                  fVar22 = (float)uVar11;
                  fVar23 = (float)((ulong)uVar11 >> 0x20);
                  if (iVar4 == 1) {
                    fVar21 = fVar21 - fVar24;
                    fVar19 = fVar19 - fVar17;
                    fVar24 = fVar21 * fVar21 + fVar19 * fVar19;
                    fVar17 = fVar21 * fVar21 + fVar19 * fVar19;
                    uVar29 = 0;
                    if (0.00024414062 <= SQRT(fVar24)) {
                      uVar11 = NEON_frsqrte(CONCAT44(fVar17,fVar24),4);
                      fVar30 = (float)((ulong)uVar11 >> 0x20);
                      uVar12 = NEON_frsqrts(uVar11,CONCAT44(fVar17 * fVar30,fVar24 * (float)uVar11),
                                            4);
                      fVar26 = (float)uVar11 * (float)uVar12;
                      fVar30 = fVar30 * (float)((ulong)uVar12 >> 0x20);
                      iVar4 = -(uint)(fVar24 == 0.0);
                      iVar25 = -(uint)(fVar17 == 0.0);
                      uVar11 = NEON_frsqrts(CONCAT44(fVar30,fVar26),
                                            CONCAT44(fVar17 * fVar30,fVar24 * fVar26),4);
                      uVar29 = CONCAT44(fVar19 * fVar30 * (float)((ulong)uVar11 >> 0x20),
                                        fVar21 * fVar26 * (float)uVar11) &
                               CONCAT17(~(byte)((uint)iVar25 >> 0x18),
                                        CONCAT16(~(byte)((uint)iVar25 >> 0x10),
                                                 CONCAT15(~(byte)((uint)iVar25 >> 8),
                                                          CONCAT14(~(byte)iVar25,
                                                                   CONCAT13(~(byte)((uint)iVar4 >>
                                                                                   0x18),
                                                                            CONCAT12(~(byte)((uint)
                                                  iVar4 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar4 >> 8),~(byte)iVar4)))
                                                  ))));
                    }
                    uVar28 = CONCAT44((int)uVar29,-(float)(uVar29 >> 0x20));
                  }
                  else {
                    fVar21 = fVar22 - fVar21;
                    fVar19 = fVar23 - fVar19;
                    fVar24 = fVar21 * fVar21 + fVar19 * fVar19;
                    fVar17 = fVar21 * fVar21 + fVar19 * fVar19;
                    if (0.00024414062 <= SQRT(fVar24)) {
                      uVar11 = NEON_frsqrte(CONCAT44(fVar17,fVar24),4);
                      fVar30 = (float)((ulong)uVar11 >> 0x20);
                      uVar12 = NEON_frsqrts(uVar11,CONCAT44(fVar17 * fVar30,fVar24 * (float)uVar11),
                                            4);
                      fVar26 = (float)uVar11 * (float)uVar12;
                      fVar30 = fVar30 * (float)((ulong)uVar12 >> 0x20);
                      iVar4 = -(uint)(fVar24 == 0.0);
                      iVar25 = -(uint)(fVar17 == 0.0);
                      uVar11 = NEON_frsqrts(CONCAT44(fVar30,fVar26),
                                            CONCAT44(fVar17 * fVar30,fVar24 * fVar26),4);
                      uVar28 = CONCAT44(fVar19 * fVar30 * (float)((ulong)uVar11 >> 0x20),
                                        fVar21 * fVar26 * (float)uVar11) &
                               CONCAT17(~(byte)((uint)iVar25 >> 0x18),
                                        CONCAT16(~(byte)((uint)iVar25 >> 0x10),
                                                 CONCAT15(~(byte)((uint)iVar25 >> 8),
                                                          CONCAT14(~(byte)iVar25,
                                                                   CONCAT13(~(byte)((uint)iVar4 >>
                                                                                   0x18),
                                                                            CONCAT12(~(byte)((uint)
                                                  iVar4 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar4 >> 8),~(byte)iVar4)))
                                                  ))));
                    }
                    else {
                      uVar28 = 0;
                    }
                  }
                  fVar21 = -(float)(uVar28 >> 0x20);
                  fVar24 = (float)uVar28;
                  fVar17 = fVar21 * *param_7;
                  fVar19 = fVar24 * *param_7;
                  uVar29 = CONCAT44(fVar19,fVar17);
                  fVar26 = fVar17 + fVar22;
                  fVar32 = fVar19 + fVar23;
                  fVar22 = fVar22 - fVar17;
                  fVar23 = fVar23 - fVar19;
                }
              }
              else {
                puVar15 = (undefined8 *)(*plVar16 + uVar14 * 8);
                uVar11 = *puVar15;
                uVar12 = puVar15[1];
                fVar24 = (float)(**(code **)(*param_4 + 0x30))(param_4);
                iVar4 = (**(code **)(*param_4 + 0x20))(param_4);
                fVar22 = (float)uVar11;
                fVar23 = (float)((ulong)uVar11 >> 0x20);
                if (iVar4 == 1) {
                  fVar24 = fVar22 - fVar24;
                  fVar17 = fVar23 - fVar17;
                  fVar21 = fVar24 * fVar24 + fVar17 * fVar17;
                  fVar19 = fVar24 * fVar24 + fVar17 * fVar17;
                  uVar29 = 0;
                  if (0.00024414062 <= SQRT(fVar21)) {
                    uVar11 = NEON_frsqrte(CONCAT44(fVar19,fVar21),4);
                    fVar30 = (float)((ulong)uVar11 >> 0x20);
                    uVar12 = NEON_frsqrts(uVar11,CONCAT44(fVar19 * fVar30,fVar21 * (float)uVar11),4)
                    ;
                    fVar26 = (float)uVar11 * (float)uVar12;
                    fVar30 = fVar30 * (float)((ulong)uVar12 >> 0x20);
                    iVar4 = -(uint)(fVar21 == 0.0);
                    iVar25 = -(uint)(fVar19 == 0.0);
                    uVar11 = NEON_frsqrts(CONCAT44(fVar30,fVar26),
                                          CONCAT44(fVar19 * fVar30,fVar21 * fVar26),4);
                    uVar29 = CONCAT44(fVar17 * fVar30 * (float)((ulong)uVar11 >> 0x20),
                                      fVar24 * fVar26 * (float)uVar11) &
                             CONCAT17(~(byte)((uint)iVar25 >> 0x18),
                                      CONCAT16(~(byte)((uint)iVar25 >> 0x10),
                                               CONCAT15(~(byte)((uint)iVar25 >> 8),
                                                        CONCAT14(~(byte)iVar25,
                                                                 CONCAT13(~(byte)((uint)iVar4 >>
                                                                                 0x18),
                                                                          CONCAT12(~(byte)((uint)
                                                  iVar4 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar4 >> 8),~(byte)iVar4)))
                                                  ))));
                  }
                  uVar28 = CONCAT44((int)uVar29,-(float)(uVar29 >> 0x20));
                }
                else {
                  fVar17 = (float)uVar12 - fVar22;
                  fVar19 = (float)((ulong)uVar12 >> 0x20) - fVar23;
                  fVar24 = fVar17 * fVar17 + fVar19 * fVar19;
                  fVar21 = fVar17 * fVar17 + fVar19 * fVar19;
                  if (0.00024414062 <= SQRT(fVar24)) {
                    uVar11 = NEON_frsqrte(CONCAT44(fVar21,fVar24),4);
                    fVar30 = (float)((ulong)uVar11 >> 0x20);
                    uVar12 = NEON_frsqrts(uVar11,CONCAT44(fVar21 * fVar30,fVar24 * (float)uVar11),4)
                    ;
                    fVar26 = (float)uVar11 * (float)uVar12;
                    fVar30 = fVar30 * (float)((ulong)uVar12 >> 0x20);
                    iVar4 = -(uint)(fVar24 == 0.0);
                    iVar25 = -(uint)(fVar21 == 0.0);
                    uVar11 = NEON_frsqrts(CONCAT44(fVar30,fVar26),
                                          CONCAT44(fVar21 * fVar30,fVar24 * fVar26),4);
                    uVar28 = CONCAT44(fVar19 * fVar30 * (float)((ulong)uVar11 >> 0x20),
                                      fVar17 * fVar26 * (float)uVar11) &
                             CONCAT17(~(byte)((uint)iVar25 >> 0x18),
                                      CONCAT16(~(byte)((uint)iVar25 >> 0x10),
                                               CONCAT15(~(byte)((uint)iVar25 >> 8),
                                                        CONCAT14(~(byte)iVar25,
                                                                 CONCAT13(~(byte)((uint)iVar4 >>
                                                                                 0x18),
                                                                          CONCAT12(~(byte)((uint)
                                                  iVar4 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar4 >> 8),~(byte)iVar4)))
                                                  ))));
                  }
                  else {
                    uVar28 = 0;
                  }
                }
                fVar21 = -(float)(uVar28 >> 0x20);
                fVar24 = (float)uVar28;
                fVar17 = fVar21 * *param_7;
                fVar19 = fVar24 * *param_7;
                uVar29 = CONCAT44(fVar19,fVar17);
                fVar26 = fVar17 + fVar22;
                fVar32 = fVar19 + fVar23;
                fVar22 = fVar22 - fVar17;
                fVar23 = fVar23 - fVar19;
              }
              fVar27 = (float)uVar29;
              *(float *)*param_5 = fVar26;
              *(float *)(*param_5 + 4) = fVar32;
              *param_5 = *param_5 + 8;
              *(int *)(param_3 + 0xe8) = *(int *)(param_3 + 0xe8) + 1;
              *(float *)*param_5 = fVar22;
              *(float *)(*param_5 + 4) = fVar23;
              *param_5 = *param_5 + 8;
              iVar4 = *(int *)(param_3 + 0xe8) + 1;
              *(int *)(param_3 + 0xe8) = iVar4;
              uVar14 = uVar14 + 1;
            } while (uVar14 < *puVar13);
            fVar17 = (float)(uVar28 >> 0x20);
            local_b8 = uVar28;
            local_c0._0_4_ = fVar21;
            local_c0._4_4_ = fVar24;
          }
          uVar11 = *puVar6;
          uVar12 = **(undefined8 **)(param_8 + uVar31 * 0x18 + 8);
          local_f8 = uVar11;
          local_f0 = fVar26;
          fStack_ec = fVar32;
          local_e8 = fVar22;
          fStack_e4 = fVar23;
          local_e0 = (int)uVar28;
          fStack_dc = fVar17;
          fVar24 = (float)(**(code **)(*param_4 + 0x30))(param_4);
          iVar4 = (**(code **)(*param_4 + 0x20))(param_4);
          fVar20 = (float)uVar7;
          fVar21 = (float)((ulong)uVar7 >> 0x20);
          if (iVar4 == 1) {
            fVar24 = fVar20 - fVar24;
            fVar27 = fVar21 - fVar27;
            fVar18 = fVar24 * fVar24 + fVar27 * fVar27;
            fVar19 = fVar24 * fVar24 + fVar27 * fVar27;
            uVar31 = 0;
            if (0.00024414062 <= SQRT(fVar18)) {
              uVar7 = NEON_frsqrte(CONCAT44(fVar19,fVar18),4);
              fVar33 = (float)((ulong)uVar7 >> 0x20);
              uVar12 = NEON_frsqrts(uVar7,CONCAT44(fVar19 * fVar33,fVar18 * (float)uVar7),4);
              fVar30 = (float)uVar7 * (float)uVar12;
              fVar33 = fVar33 * (float)((ulong)uVar12 >> 0x20);
              iVar4 = -(uint)(fVar18 == 0.0);
              iVar25 = -(uint)(fVar19 == 0.0);
              uVar7 = NEON_frsqrts(CONCAT44(fVar33,fVar30),CONCAT44(fVar19 * fVar33,fVar18 * fVar30)
                                   ,4);
              uVar31 = CONCAT44(fVar27 * fVar33 * (float)((ulong)uVar7 >> 0x20),
                                fVar24 * fVar30 * (float)uVar7) &
                       CONCAT17(~(byte)((uint)iVar25 >> 0x18),
                                CONCAT16(~(byte)((uint)iVar25 >> 0x10),
                                         CONCAT15(~(byte)((uint)iVar25 >> 8),
                                                  CONCAT14(~(byte)iVar25,
                                                           CONCAT13(~(byte)((uint)iVar4 >> 0x18),
                                                                    CONCAT12(~(byte)((uint)iVar4 >>
                                                                                    0x10),
                                                                             CONCAT11(~(byte)((uint)
                                                  iVar4 >> 8),~(byte)iVar4)))))));
            }
            param_2 = CONCAT44((int)uVar31,-(float)(uVar31 >> 0x20));
          }
          else {
            fVar19 = (float)uVar12 - fVar20;
            fVar30 = (float)((ulong)uVar12 >> 0x20) - fVar21;
            fVar24 = fVar19 * fVar19 + fVar30 * fVar30;
            fVar18 = fVar19 * fVar19 + fVar30 * fVar30;
            if (0.00024414062 <= SQRT(fVar24)) {
              uVar7 = NEON_frsqrte(CONCAT44(fVar18,fVar24),4);
              fVar33 = (float)((ulong)uVar7 >> 0x20);
              uVar12 = NEON_frsqrts(uVar7,CONCAT44(fVar18 * fVar33,fVar24 * (float)uVar7),4);
              fVar27 = (float)uVar7 * (float)uVar12;
              fVar33 = fVar33 * (float)((ulong)uVar12 >> 0x20);
              iVar4 = -(uint)(fVar24 == 0.0);
              iVar25 = -(uint)(fVar18 == 0.0);
              uVar7 = NEON_frsqrts(CONCAT44(fVar33,fVar27),CONCAT44(fVar18 * fVar33,fVar24 * fVar27)
                                   ,4);
              param_2 = CONCAT44(fVar30 * fVar33 * (float)((ulong)uVar7 >> 0x20),
                                 fVar19 * fVar27 * (float)uVar7) &
                        CONCAT17(~(byte)((uint)iVar25 >> 0x18),
                                 CONCAT16(~(byte)((uint)iVar25 >> 0x10),
                                          CONCAT15(~(byte)((uint)iVar25 >> 8),
                                                   CONCAT14(~(byte)iVar25,
                                                            CONCAT13(~(byte)((uint)iVar4 >> 0x18),
                                                                     CONCAT12(~(byte)((uint)iVar4 >>
                                                                                     0x10),
                                                                              CONCAT11(~(byte)((uint
                                                  )iVar4 >> 8),~(byte)iVar4)))))));
            }
            else {
              param_2 = 0;
            }
          }
          fVar24 = -(float)(param_2 >> 0x20);
          local_c0 = CONCAT44((float)param_2,fVar24);
          fVar24 = fVar24 * *param_7;
          fVar18 = (float)param_2 * *param_7;
          local_d8 = CONCAT44(fVar18 + fVar21,fVar24 + fVar20);
          uStack_d0 = CONCAT44(fVar21 - fVar18,fVar20 - fVar24);
          local_c8 = param_2;
          local_b8 = param_2;
          if ((((long)uVar10 < (long)(int)(param_9 - 1)) || ((param_10 & 1) != 0)) &&
             (*(long *)(param_7 + 2) != 0)) {
            iVar4 = *(int *)(*(long *)(param_7 + 2) + 8);
            if (iVar4 == 1) {
              local_108 = CONCAT44((int)uVar28,-fVar17);
              local_100 = uVar11;
              FUN_008c42e4(param_3,param_5,param_6,param_7,&local_100,&local_108,uVar10 == uVar9);
            }
            else if (iVar4 == 0) {
              FUN_008c3e18(param_1,param_3,param_5,param_6,param_7,&local_f8,uVar10 == uVar9,iVar2);
            }
          }
          if ((uVar10 == uVar9) && ((param_10 & 1) == 0)) {
            fVar26 = fVar26 - fVar22;
            fVar32 = fVar32 - fVar23;
            fVar24 = fVar26 * fVar26 + fVar32 * fVar32;
            fVar20 = fVar26 * fVar26 + fVar32 * fVar32;
            param_2 = CONCAT44(fVar20,fVar24);
            local_c0 = 0;
            if (0.00024414062 <= SQRT(fVar24)) {
              uVar7 = NEON_frsqrte(param_2,4);
              fVar22 = (float)((ulong)uVar7 >> 0x20);
              uVar11 = NEON_frsqrts(uVar7,CONCAT44(fVar20 * fVar22,fVar24 * (float)uVar7),4);
              fVar21 = (float)uVar7 * (float)uVar11;
              fVar22 = fVar22 * (float)((ulong)uVar11 >> 0x20);
              iVar4 = -(uint)(fVar24 == 0.0);
              iVar25 = -(uint)(fVar20 == 0.0);
              uVar7 = NEON_frsqrts(CONCAT44(fVar22,fVar21),CONCAT44(fVar20 * fVar22,fVar24 * fVar21)
                                   ,4);
              param_2 = CONCAT17(~(byte)((uint)iVar25 >> 0x18),
                                 CONCAT16(~(byte)((uint)iVar25 >> 0x10),
                                          CONCAT15(~(byte)((uint)iVar25 >> 8),
                                                   CONCAT14(~(byte)iVar25,
                                                            CONCAT13(~(byte)((uint)iVar4 >> 0x18),
                                                                     CONCAT12(~(byte)((uint)iVar4 >>
                                                                                     0x10),
                                                                              CONCAT11(~(byte)((uint
                                                  )iVar4 >> 8),~(byte)iVar4)))))));
              local_c0 = CONCAT44(fVar32 * fVar22 * (float)((ulong)uVar7 >> 0x20),
                                  fVar26 * fVar21 * (float)uVar7) & param_2;
            }
            local_100 = *(undefined8 *)(*plVar16 + (ulong)(*puVar13 - 1) * 8);
            local_b8 = uVar28;
            FUN_008c4550(param_3,param_5,param_6,param_7,&local_100,&local_c0,&local_b8,0);
          }
        }
        uVar10 = uVar1;
      } while (uVar1 != param_9);
      lVar5 = *(long *)(param_7 + 2);
      if (lVar5 == 0) {
        return;
      }
    }
    if (*(int *)(lVar5 + 8) == 2) {
      piVar8 = (int *)*param_6;
      *param_6 = (long)(piVar8 + 1);
      *piVar8 = iVar2;
      piVar8 = (int *)*param_6;
      *param_6 = (long)(piVar8 + 1);
      *piVar8 = iVar2 + 1;
      *(int *)(param_3 + 0xec) = *(int *)(param_3 + 0xec) + 2;
    }
  }
  return;
}


