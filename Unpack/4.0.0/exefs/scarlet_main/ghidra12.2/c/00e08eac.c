/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e08eac; name: FUN_00e08eac
 */


void FUN_00e08eac(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  float fVar15;
  int iVar18;
  undefined1 auVar13 [16];
  int iVar16;
  float fVar17;
  float fVar19;
  undefined1 auVar14 [16];
  float fVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  int iVar26;
  undefined1 auVar24 [12];
  int iVar27;
  float fVar28;
  int iVar29;
  int iVar30;
  float fVar31;
  undefined1 auVar25 [16];
  float fVar32;
  float fVar33;
  float fVar36;
  undefined1 auVar34 [12];
  float fVar37;
  undefined1 auVar35 [16];
  float fVar38;
  undefined1 auVar39 [12];
  undefined1 auVar40 [12];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 local_40 [2];
  undefined4 local_38 [2];
  
  if ((*(code **)(param_1 + 0xe0) != (code *)0x0) && (*(long *)(param_1 + 0x160) != 0)) {
    fVar9 = (float)(**(code **)(param_1 + 0xe0))(param_1 + 0x100);
    auVar13 = (**(code **)(param_1 + 0x160))(param_1 + 0x180);
    puVar4 = PTR_PTR_047d1bb0;
    uVar6 = (ulong)*(uint *)(param_1 + 0x98);
    if (0 < (int)*(uint *)(param_1 + 0x98)) {
      fVar15 = auVar13._4_4_;
      fVar32 = fVar9 * 0.5;
      fVar42 = fVar15 - fVar32;
      fVar45 = auVar13._0_4_;
      fVar46 = fVar45 - fVar32;
      fVar10 = fVar32 + fVar15;
      fVar20 = auVar13._8_4_;
      fVar43 = fVar20 - fVar32;
      fVar44 = fVar32 + fVar45;
      fVar32 = fVar32 + fVar20;
      uVar8 = 0;
      auVar25 = **(undefined1 (**) [16])PTR_PTR_047d1bb0;
      iVar11 = CONCAT13(auVar25[3] & (byte)((uint)fVar46 >> 0x18),
                        CONCAT12(auVar25[2] & (byte)((uint)fVar46 >> 0x10),
                                 CONCAT11(auVar25[1] & (byte)((uint)fVar46 >> 8),
                                          auVar25[0] & SUB41(fVar46,0))));
      auVar24._0_8_ =
           CONCAT17(auVar25[7] & (byte)((uint)fVar42 >> 0x18),
                    CONCAT16(auVar25[6] & (byte)((uint)fVar42 >> 0x10),
                             CONCAT15(auVar25[5] & (byte)((uint)fVar42 >> 8),
                                      CONCAT14(auVar25[4] & SUB41(fVar42,0),iVar11))));
      auVar24[8] = auVar25[8] & SUB41(fVar43,0);
      auVar24[9] = auVar25[9] & (byte)((uint)fVar43 >> 8);
      auVar24[10] = auVar25[10] & (byte)((uint)fVar43 >> 0x10);
      auVar24[0xb] = auVar25[0xb] & (byte)((uint)fVar43 >> 0x18);
      iVar21 = -(uint)(iVar11 == auVar25._0_4_);
      iVar26 = -(uint)((int)((ulong)auVar24._0_8_ >> 0x20) == auVar25._4_4_);
      iVar29 = -(uint)(auVar24._8_4_ == auVar25._8_4_);
      iVar11 = CONCAT13(auVar25[3] & (byte)((uint)fVar44 >> 0x18),
                        CONCAT12(auVar25[2] & (byte)((uint)fVar44 >> 0x10),
                                 CONCAT11(auVar25[1] & (byte)((uint)fVar44 >> 8),
                                          auVar25[0] & SUB41(fVar44,0))));
      auVar34._0_8_ =
           CONCAT17(auVar25[7] & (byte)((uint)fVar10 >> 0x18),
                    CONCAT16(auVar25[6] & (byte)((uint)fVar10 >> 0x10),
                             CONCAT15(auVar25[5] & (byte)((uint)fVar10 >> 8),
                                      CONCAT14(auVar25[4] & SUB41(fVar10,0),iVar11))));
      auVar34[8] = auVar25[8] & SUB41(fVar32,0);
      auVar34[9] = auVar25[9] & (byte)((uint)fVar32 >> 8);
      auVar34[10] = auVar25[10] & (byte)((uint)fVar32 >> 0x10);
      auVar34[0xb] = auVar25[0xb] & (byte)((uint)fVar32 >> 0x18);
      iVar11 = -(uint)(iVar11 == auVar25._0_4_);
      iVar16 = -(uint)((int)((ulong)auVar34._0_8_ >> 0x20) == auVar25._4_4_);
      iVar18 = -(uint)(auVar34._8_4_ == auVar25._8_4_);
      iVar22 = -(uint)(fVar46 <= fVar44);
      iVar27 = -(uint)(fVar42 <= fVar10);
      iVar30 = -(uint)(fVar43 <= fVar32);
      if ((CONCAT13((byte)((uint)iVar27 >> 0x18) & (byte)((uint)iVar22 >> 0x18) &
                    (byte)((uint)iVar30 >> 0x18),
                    CONCAT12((byte)((uint)iVar27 >> 0x10) & (byte)((uint)iVar22 >> 0x10) &
                             (byte)((uint)iVar30 >> 0x10),
                             CONCAT11((byte)((uint)iVar27 >> 8) & (byte)((uint)iVar22 >> 8) &
                                      (byte)((uint)iVar30 >> 8),
                                      (byte)iVar27 & (byte)iVar22 & (byte)iVar30))) == 0 ||
          CONCAT13(~(byte)((uint)iVar26 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18) &
                   ~(byte)((uint)iVar29 >> 0x18),
                   CONCAT12(~(byte)((uint)iVar26 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10) &
                            ~(byte)((uint)iVar29 >> 0x10),
                            CONCAT11(~(byte)((uint)iVar26 >> 8) & ~(byte)((uint)iVar21 >> 8) &
                                     ~(byte)((uint)iVar29 >> 8),
                                     ~(byte)iVar26 & ~(byte)iVar21 & ~(byte)iVar29))) == 0) ||
          CONCAT13(~(byte)((uint)iVar16 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18) &
                   ~(byte)((uint)iVar18 >> 0x18),
                   CONCAT12(~(byte)((uint)iVar16 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10) &
                            ~(byte)((uint)iVar18 >> 0x10),
                            CONCAT11(~(byte)((uint)iVar16 >> 8) & ~(byte)((uint)iVar11 >> 8) &
                                     ~(byte)((uint)iVar18 >> 8),
                                     ~(byte)iVar16 & ~(byte)iVar11 & ~(byte)iVar18))) == 0) {
        do {
          lVar7 = *(long *)(*(long *)(param_1 + 0x90) + uVar8 * 8);
          auVar14._0_4_ = (*(float *)(lVar7 + 0x90) + *(float *)(lVar7 + 0xa0)) * 0.5;
          auVar14._4_4_ = (*(float *)(lVar7 + 0x94) + *(float *)(lVar7 + 0xa4)) * 0.5;
          auVar14._8_4_ = (*(float *)(lVar7 + 0x98) + *(float *)(lVar7 + 0xa8)) * 0.5;
          auVar14._12_4_ = (*(float *)(lVar7 + 0x9c) + *(float *)(lVar7 + 0xac)) * 0.5;
          auVar25 = NEON_ext(auVar14,auVar14,8,1);
          fVar42 = auVar25._0_4_ - fVar20;
          fVar43 = 0.0 - auVar13._12_4_;
          fVar10 = (auVar14._0_4_ - fVar45) * (auVar14._0_4_ - fVar45);
          fVar32 = (auVar14._4_4_ - fVar15) * (auVar14._4_4_ - fVar15);
          fVar42 = fVar42 * fVar42;
          fVar43 = fVar43 * fVar43;
          auVar25._0_4_ = fVar10 + fVar32;
          auVar25._4_4_ = fVar42 + fVar43;
          auVar25._8_4_ = fVar10 + fVar32;
          auVar25._12_4_ = fVar42 + fVar43;
          auVar25 = NEON_ext(auVar25,auVar25,4,1);
          if (SQRT(auVar25._0_4_ + auVar25._4_4_) < fVar9) {
            FUN_00e09264(param_1,uVar8 & 0xffffffff);
          }
          else if ((((long)uVar8 < (long)(int)uVar6) &&
                   (lVar7 = *(long *)(*(long *)(param_1 + 0xa0) + uVar8 * 8), lVar7 != 0)) &&
                  (*(long *)(param_1 + 0x48) != 0)) {
            local_40[0] = *(undefined4 *)(*(long *)(lVar7 + 0x20) + 0x17c);
            FUN_00e09fe0(*(long *)(param_1 + 0x48),local_40,0);
            plVar5 = *(long **)(*(long *)(param_1 + 0xa0) + uVar8 * 8);
            *(undefined8 *)(*(long *)(param_1 + 0xa0) + uVar8 * 8) = 0;
            if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
              plVar1 = plVar5 + 2;
              do {
                lVar7 = *plVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar7 + -1 == 0) {
                (**(code **)(*plVar5 + 0x18))();
              }
            }
          }
          uVar6 = (ulong)*(int *)(param_1 + 0x98);
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)uVar6);
      }
      else {
        do {
          lVar7 = *(long *)(*(long *)(param_1 + 0x90) + uVar8 * 8);
          auVar25 = *(undefined1 (*) [16])(lVar7 + 0x90);
          auVar14 = *(undefined1 (*) [16])(lVar7 + 0xa0);
          fVar12 = auVar25._0_4_;
          fVar23 = auVar14._0_4_;
          fVar17 = auVar25._4_4_;
          fVar28 = auVar14._4_4_;
          fVar19 = auVar25._8_4_;
          fVar31 = auVar14._8_4_;
          auVar35._0_4_ = (fVar12 + fVar23) * 0.5;
          auVar35._4_4_ = (fVar17 + fVar28) * 0.5;
          auVar35._8_4_ = (fVar19 + fVar31) * 0.5;
          auVar35._12_4_ = (auVar25._12_4_ + auVar14._12_4_) * 0.5;
          auVar41 = NEON_ext(auVar35,auVar35,8,1);
          fVar37 = auVar41._0_4_ - fVar20;
          fVar38 = 0.0 - auVar13._12_4_;
          fVar33 = (auVar35._0_4_ - fVar45) * (auVar35._0_4_ - fVar45);
          fVar36 = (auVar35._4_4_ - fVar15) * (auVar35._4_4_ - fVar15);
          fVar37 = fVar37 * fVar37;
          fVar38 = fVar38 * fVar38;
          auVar41._0_4_ = fVar33 + fVar36;
          auVar41._4_4_ = fVar37 + fVar38;
          auVar41._8_4_ = fVar33 + fVar36;
          auVar41._12_4_ = fVar37 + fVar38;
          auVar41 = NEON_ext(auVar41,auVar41,4,1);
          if (SQRT(auVar41._0_4_ + auVar41._4_4_) < fVar9) {
LAB_00e090d0:
            FUN_00e09264(param_1,uVar8 & 0xffffffff);
          }
          else {
            iVar11 = -(uint)(fVar12 <= fVar23);
            iVar16 = -(uint)(fVar17 <= fVar28);
            iVar18 = -(uint)(fVar19 <= fVar31);
            if (CONCAT13((byte)((uint)iVar16 >> 0x18) & (byte)((uint)iVar11 >> 0x18) &
                         (byte)((uint)iVar18 >> 0x18),
                         CONCAT12((byte)((uint)iVar16 >> 0x10) & (byte)((uint)iVar11 >> 0x10) &
                                  (byte)((uint)iVar18 >> 0x10),
                                  CONCAT11((byte)((uint)iVar16 >> 8) & (byte)((uint)iVar11 >> 8) &
                                           (byte)((uint)iVar18 >> 8),
                                           (byte)iVar16 & (byte)iVar11 & (byte)iVar18))) != 0) {
              auVar41 = **(undefined1 (**) [16])puVar4;
              iVar11 = CONCAT13(auVar41[3] & auVar25[3],
                                CONCAT12(auVar41[2] & auVar25[2],
                                         CONCAT11(auVar41[1] & auVar25[1],auVar41[0] & auVar25[0])))
              ;
              auVar39._0_8_ =
                   CONCAT17(auVar41[7] & auVar25[7],
                            CONCAT16(auVar41[6] & auVar25[6],
                                     CONCAT15(auVar41[5] & auVar25[5],
                                              CONCAT14(auVar41[4] & auVar25[4],iVar11))));
              auVar39[8] = auVar41[8] & auVar25[8];
              auVar39[9] = auVar41[9] & auVar25[9];
              auVar39[10] = auVar41[10] & auVar25[10];
              auVar39[0xb] = auVar41[0xb] & auVar25[0xb];
              iVar11 = -(uint)(iVar11 == auVar41._0_4_);
              iVar16 = -(uint)((int)((ulong)auVar39._0_8_ >> 0x20) == auVar41._4_4_);
              iVar18 = -(uint)(auVar39._8_4_ == auVar41._8_4_);
              if (CONCAT13(~(byte)((uint)iVar16 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18) &
                           ~(byte)((uint)iVar18 >> 0x18),
                           CONCAT12(~(byte)((uint)iVar16 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10) &
                                    ~(byte)((uint)iVar18 >> 0x10),
                                    CONCAT11(~(byte)((uint)iVar16 >> 8) & ~(byte)((uint)iVar11 >> 8)
                                             & ~(byte)((uint)iVar18 >> 8),
                                             ~(byte)iVar16 & ~(byte)iVar11 & ~(byte)iVar18))) != 0)
              {
                iVar11 = CONCAT13(auVar41[3] & auVar14[3],
                                  CONCAT12(auVar41[2] & auVar14[2],
                                           CONCAT11(auVar41[1] & auVar14[1],auVar41[0] & auVar14[0])
                                          ));
                auVar40._0_8_ =
                     CONCAT17(auVar41[7] & auVar14[7],
                              CONCAT16(auVar41[6] & auVar14[6],
                                       CONCAT15(auVar41[5] & auVar14[5],
                                                CONCAT14(auVar41[4] & auVar14[4],iVar11))));
                auVar40[8] = auVar41[8] & auVar14[8];
                auVar40[9] = auVar41[9] & auVar14[9];
                auVar40[10] = auVar41[10] & auVar14[10];
                auVar40[0xb] = auVar41[0xb] & auVar14[0xb];
                iVar11 = -(uint)(iVar11 == auVar41._0_4_);
                iVar16 = -(uint)((int)((ulong)auVar40._0_8_ >> 0x20) == auVar41._4_4_);
                iVar18 = -(uint)(auVar40._8_4_ == auVar41._8_4_);
                if (CONCAT13(~(byte)((uint)iVar16 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18) &
                             ~(byte)((uint)iVar18 >> 0x18),
                             CONCAT12(~(byte)((uint)iVar16 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10)
                                      & ~(byte)((uint)iVar18 >> 0x10),
                                      CONCAT11(~(byte)((uint)iVar16 >> 8) &
                                               ~(byte)((uint)iVar11 >> 8) &
                                               ~(byte)((uint)iVar18 >> 8),
                                               ~(byte)iVar16 & ~(byte)iVar11 & ~(byte)iVar18))) != 0
                   ) {
                  iVar11 = -(uint)(fVar12 <= fVar44);
                  iVar16 = -(uint)(fVar17 <= fVar10);
                  iVar18 = -(uint)(fVar19 <= fVar32);
                  iVar21 = -(uint)(fVar46 <= fVar23);
                  iVar22 = -(uint)(fVar42 <= fVar28);
                  iVar26 = -(uint)(fVar43 <= fVar31);
                  if (CONCAT13((byte)((uint)iVar22 >> 0x18) & (byte)((uint)iVar16 >> 0x18) &
                               (byte)((uint)iVar21 >> 0x18) & (byte)((uint)iVar11 >> 0x18) &
                               (byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar18 >> 0x18),
                               CONCAT12((byte)((uint)iVar22 >> 0x10) & (byte)((uint)iVar16 >> 0x10)
                                        & (byte)((uint)iVar21 >> 0x10) &
                                          (byte)((uint)iVar11 >> 0x10) &
                                        (byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar18 >> 0x10),
                                        CONCAT11((byte)((uint)iVar22 >> 8) &
                                                 (byte)((uint)iVar16 >> 8) &
                                                 (byte)((uint)iVar21 >> 8) &
                                                 (byte)((uint)iVar11 >> 8) &
                                                 (byte)((uint)iVar26 >> 8) &
                                                 (byte)((uint)iVar18 >> 8),
                                                 (byte)iVar22 & (byte)iVar16 &
                                                 (byte)iVar21 & (byte)iVar11 &
                                                 (byte)iVar26 & (byte)iVar18))) != 0)
                  goto LAB_00e090d0;
                }
              }
            }
            if ((((long)uVar8 < (long)(int)uVar6) &&
                (lVar7 = *(long *)(*(long *)(param_1 + 0xa0) + uVar8 * 8), lVar7 != 0)) &&
               (*(long *)(param_1 + 0x48) != 0)) {
              local_38[0] = *(undefined4 *)(*(long *)(lVar7 + 0x20) + 0x17c);
              FUN_00e09fe0(*(long *)(param_1 + 0x48),local_38,0);
              plVar5 = *(long **)(*(long *)(param_1 + 0xa0) + uVar8 * 8);
              *(undefined8 *)(*(long *)(param_1 + 0xa0) + uVar8 * 8) = 0;
              if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
                plVar1 = plVar5 + 2;
                do {
                  lVar7 = *plVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar3) {
                    *plVar1 = lVar7 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar7 + -1 == 0) {
                  (**(code **)(*plVar5 + 0x18))();
                }
              }
            }
          }
          uVar6 = (ulong)*(int *)(param_1 + 0x98);
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)uVar6);
      }
    }
  }
  return;
}


