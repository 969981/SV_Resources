/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d6d310; name: FUN_00d6d310
 */


void FUN_00d6d310(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int iVar30;
  int iVar32;
  int iVar33;
  undefined1 auVar31 [16];
  int iVar34;
  int iVar35;
  int iVar37;
  int iVar38;
  undefined1 auVar36 [16];
  int iVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  
  lVar6 = param_2[0x10];
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00d6d4a0;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d6d4a0:
        bVar4 = false;
      }
      if (bVar4) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 != 0) {
          plVar8 = (long *)(lVar6 + -0x28);
          FUN_00d3c698(plVar8,1);
          lVar6 = *(long *)(lVar6 + 0x70);
          psVar1 = (short *)(lVar6 + 0x1a);
          do {
            sVar7 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar7 == 1) {
            *(undefined8 *)(lVar6 + 0x10) = 0;
            (**(code **)(*plVar8 + 0x50))(plVar8);
          }
          else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        break;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  *(undefined1 *)((long)param_1 + 0x135) = 0;
  lVar6 = *param_2;
  if ((lVar6 == 0) || (*(short *)(lVar6 + 0x1a) == 0)) {
    plVar8 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00d6d54c;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d6d54c:
        bVar4 = false;
      }
      if (bVar4) {
        plVar8 = (long *)0x0;
        if (*(long *)(lVar6 + 0x10) != 0) {
          plVar8 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
        }
        break;
      }
      plVar8 = (long *)0x0;
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  puVar5 = (undefined8 *)(**(code **)(*plVar8 + 0x68))(plVar8);
  fVar26 = (float)puVar5[2];
  fVar27 = (float)((ulong)puVar5[2] >> 0x20);
  fVar28 = (float)puVar5[3];
  fVar29 = (float)((ulong)puVar5[3] >> 0x20);
  uVar13 = puVar5[7];
  uVar12 = puVar5[6];
  fVar22 = (float)*puVar5;
  fVar23 = (float)((ulong)*puVar5 >> 0x20);
  fVar24 = (float)puVar5[1];
  fVar25 = (float)((ulong)puVar5[1] >> 0x20);
  auVar36._0_4_ = fVar26 * fVar26 + fVar27 * fVar27;
  auVar36._4_4_ = fVar28 * fVar28 + fVar29 * fVar29;
  auVar36._8_4_ = fVar26 * fVar26 + fVar27 * fVar27;
  auVar36._12_4_ = fVar28 * fVar28 + fVar29 * fVar29;
  auVar31._0_4_ = fVar22 * fVar22 + fVar23 * fVar23;
  auVar31._4_4_ = fVar24 * fVar24 + fVar25 * fVar25;
  auVar31._8_4_ = fVar22 * fVar22 + fVar23 * fVar23;
  auVar31._12_4_ = fVar24 * fVar24 + fVar25 * fVar25;
  auVar31 = NEON_ext(auVar31,auVar31,4,1);
  fVar14 = (float)puVar5[4];
  fVar15 = (float)((ulong)puVar5[4] >> 0x20);
  fVar16 = (float)puVar5[5];
  fVar17 = (float)((ulong)puVar5[5] >> 0x20);
  auVar9._0_4_ = auVar31._0_4_ + auVar31._4_4_;
  auVar9._4_4_ = auVar31._8_4_ + auVar31._12_4_;
  auVar9._8_4_ = auVar31._0_4_ + auVar31._4_4_;
  auVar9._12_4_ = auVar31._8_4_ + auVar31._12_4_;
  auVar31 = NEON_frsqrte(auVar9,4);
  auVar36 = NEON_ext(auVar36,auVar36,4,1);
  auVar10._0_4_ = auVar36._0_4_ + auVar36._4_4_;
  auVar10._4_4_ = auVar36._8_4_ + auVar36._12_4_;
  auVar10._8_4_ = auVar36._0_4_ + auVar36._4_4_;
  auVar10._12_4_ = auVar36._8_4_ + auVar36._12_4_;
  auVar41 = NEON_frsqrte(auVar10,4);
  auVar43._0_4_ = auVar9._0_4_ * auVar31._0_4_;
  auVar43._4_4_ = auVar9._4_4_ * auVar31._4_4_;
  auVar43._8_4_ = auVar9._8_4_ * auVar31._8_4_;
  auVar43._12_4_ = auVar9._12_4_ * auVar31._12_4_;
  auVar44._0_4_ = fVar14 * fVar14 + fVar15 * fVar15;
  auVar44._4_4_ = fVar16 * fVar16 + fVar17 * fVar17;
  auVar44._8_4_ = fVar14 * fVar14 + fVar15 * fVar15;
  auVar44._12_4_ = fVar16 * fVar16 + fVar17 * fVar17;
  auVar36 = NEON_ext(auVar44,auVar44,4,1);
  auVar44 = NEON_frsqrts(auVar31,auVar43,4);
  auVar11._0_4_ = auVar36._0_4_ + auVar36._4_4_;
  auVar11._4_4_ = auVar36._8_4_ + auVar36._12_4_;
  auVar11._8_4_ = auVar36._0_4_ + auVar36._4_4_;
  auVar11._12_4_ = auVar36._8_4_ + auVar36._12_4_;
  auVar36 = NEON_frsqrte(auVar11,4);
  auVar40._0_4_ = auVar31._0_4_ * auVar44._0_4_;
  auVar40._4_4_ = auVar31._4_4_ * auVar44._4_4_;
  auVar40._8_4_ = auVar31._8_4_ * auVar44._8_4_;
  auVar40._12_4_ = auVar31._12_4_ * auVar44._12_4_;
  auVar45._0_4_ = auVar10._0_4_ * auVar41._0_4_;
  auVar45._4_4_ = auVar10._4_4_ * auVar41._4_4_;
  auVar45._8_4_ = auVar10._8_4_ * auVar41._8_4_;
  auVar45._12_4_ = auVar10._12_4_ * auVar41._12_4_;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  auVar31 = NEON_frsqrts(auVar41,auVar45,4);
  auVar42._0_4_ = auVar41._0_4_ * auVar31._0_4_;
  auVar42._4_4_ = auVar41._4_4_ * auVar31._4_4_;
  auVar42._8_4_ = auVar41._8_4_ * auVar31._8_4_;
  auVar42._12_4_ = auVar41._12_4_ * auVar31._12_4_;
  auVar46._0_4_ = auVar11._0_4_ * auVar36._0_4_;
  auVar46._4_4_ = auVar11._4_4_ * auVar36._4_4_;
  auVar46._8_4_ = auVar11._8_4_ * auVar36._8_4_;
  auVar46._12_4_ = auVar11._12_4_ * auVar36._12_4_;
  auVar31 = NEON_frsqrts(auVar36,auVar46,4);
  auVar41._0_4_ = auVar36._0_4_ * auVar31._0_4_;
  auVar41._4_4_ = auVar36._4_4_ * auVar31._4_4_;
  auVar41._8_4_ = auVar36._8_4_ * auVar31._8_4_;
  auVar41._12_4_ = auVar36._12_4_ * auVar31._12_4_;
  auVar47._0_4_ = auVar9._0_4_ * auVar40._0_4_;
  auVar47._4_4_ = auVar9._4_4_ * auVar40._4_4_;
  auVar47._8_4_ = auVar9._8_4_ * auVar40._8_4_;
  auVar47._12_4_ = auVar9._12_4_ * auVar40._12_4_;
  iVar30 = -(uint)(auVar9._0_4_ == 0.0);
  iVar32 = -(uint)(auVar9._4_4_ == 0.0);
  iVar33 = -(uint)(auVar9._8_4_ == 0.0);
  iVar34 = -(uint)(auVar9._12_4_ == 0.0);
  auVar36 = NEON_frsqrts(auVar40,auVar47,4);
  auVar48._0_4_ = auVar11._0_4_ * auVar41._0_4_;
  auVar48._4_4_ = auVar11._4_4_ * auVar41._4_4_;
  auVar48._8_4_ = auVar11._8_4_ * auVar41._8_4_;
  auVar48._12_4_ = auVar11._12_4_ * auVar41._12_4_;
  iVar18 = -(uint)(auVar11._0_4_ == 0.0);
  iVar19 = -(uint)(auVar11._4_4_ == 0.0);
  iVar20 = -(uint)(auVar11._8_4_ == 0.0);
  iVar21 = -(uint)(auVar11._12_4_ == 0.0);
  auVar31 = NEON_frsqrts(auVar41,auVar48,4);
  fVar22 = fVar22 * auVar40._0_4_ * auVar36._0_4_;
  fVar23 = fVar23 * auVar40._4_4_ * auVar36._4_4_;
  fVar24 = fVar24 * auVar40._8_4_ * auVar36._8_4_;
  fVar25 = fVar25 * auVar40._12_4_ * auVar36._12_4_;
  auVar49._0_4_ = auVar10._0_4_ * auVar42._0_4_;
  auVar49._4_4_ = auVar10._4_4_ * auVar42._4_4_;
  auVar49._8_4_ = auVar10._8_4_ * auVar42._8_4_;
  auVar49._12_4_ = auVar10._12_4_ * auVar42._12_4_;
  iVar35 = -(uint)(auVar10._0_4_ == 0.0);
  iVar37 = -(uint)(auVar10._4_4_ == 0.0);
  iVar38 = -(uint)(auVar10._8_4_ == 0.0);
  iVar39 = -(uint)(auVar10._12_4_ == 0.0);
  auVar36 = NEON_frsqrts(auVar42,auVar49,4);
  fVar14 = fVar14 * auVar41._0_4_ * auVar31._0_4_;
  fVar15 = fVar15 * auVar41._4_4_ * auVar31._4_4_;
  fVar16 = fVar16 * auVar41._8_4_ * auVar31._8_4_;
  fVar17 = fVar17 * auVar41._12_4_ * auVar31._12_4_;
  param_1[5] = CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                        CONCAT16((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10),
                                 CONCAT15((byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar21 >> 8),
                                          CONCAT14(SUB41(fVar17,0) & ~(byte)iVar21,
                                                   CONCAT13((byte)((uint)fVar16 >> 0x18) &
                                                            ~(byte)((uint)iVar20 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar16 >> 0x10) &
                                                                     ~(byte)((uint)iVar20 >> 0x10),
                                                                     CONCAT11((byte)((uint)fVar16 >>
                                                                                    8) &
                                                                              ~(byte)((uint)iVar20
                                                                                     >> 8),
                                                                              SUB41(fVar16,0) &
                                                                              ~(byte)iVar20)))))));
  param_1[4] = CONCAT17((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                        CONCAT16((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                 CONCAT15((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar19 >> 8),
                                          CONCAT14(SUB41(fVar15,0) & ~(byte)iVar19,
                                                   CONCAT13((byte)((uint)fVar14 >> 0x18) &
                                                            ~(byte)((uint)iVar18 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar14 >> 0x10) &
                                                                     ~(byte)((uint)iVar18 >> 0x10),
                                                                     CONCAT11((byte)((uint)fVar14 >>
                                                                                    8) &
                                                                              ~(byte)((uint)iVar18
                                                                                     >> 8),
                                                                              SUB41(fVar14,0) &
                                                                              ~(byte)iVar18)))))));
  param_1[7] = uVar13;
  param_1[6] = uVar12;
  fVar26 = fVar26 * auVar42._0_4_ * auVar36._0_4_;
  fVar27 = fVar27 * auVar42._4_4_ * auVar36._4_4_;
  fVar28 = fVar28 * auVar42._8_4_ * auVar36._8_4_;
  fVar29 = fVar29 * auVar42._12_4_ * auVar36._12_4_;
  param_1[1] = CONCAT17((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                        CONCAT16((byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10),
                                 CONCAT15((byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar34 >> 8),
                                          CONCAT14(SUB41(fVar25,0) & ~(byte)iVar34,
                                                   CONCAT13((byte)((uint)fVar24 >> 0x18) &
                                                            ~(byte)((uint)iVar33 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar24 >> 0x10) &
                                                                     ~(byte)((uint)iVar33 >> 0x10),
                                                                     CONCAT11((byte)((uint)fVar24 >>
                                                                                    8) &
                                                                              ~(byte)((uint)iVar33
                                                                                     >> 8),
                                                                              SUB41(fVar24,0) &
                                                                              ~(byte)iVar33)))))));
  *param_1 = CONCAT17((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                      CONCAT16((byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10),
                               CONCAT15((byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar32 >> 8),
                                        CONCAT14(SUB41(fVar23,0) & ~(byte)iVar32,
                                                 CONCAT13((byte)((uint)fVar22 >> 0x18) &
                                                          ~(byte)((uint)iVar30 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                                                   ~(byte)((uint)iVar30 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar22 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar30 >> 8),SUB41(fVar22,0) & ~(byte)iVar30))))))
                     );
  param_1[3] = CONCAT17((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                        CONCAT16((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10),
                                 CONCAT15((byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar39 >> 8),
                                          CONCAT14(SUB41(fVar29,0) & ~(byte)iVar39,
                                                   CONCAT13((byte)((uint)fVar28 >> 0x18) &
                                                            ~(byte)((uint)iVar38 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar28 >> 0x10) &
                                                                     ~(byte)((uint)iVar38 >> 0x10),
                                                                     CONCAT11((byte)((uint)fVar28 >>
                                                                                    8) &
                                                                              ~(byte)((uint)iVar38
                                                                                     >> 8),
                                                                              SUB41(fVar28,0) &
                                                                              ~(byte)iVar38)))))));
  param_1[2] = CONCAT17((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18),
                        CONCAT16((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10),
                                 CONCAT15((byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar37 >> 8),
                                          CONCAT14(SUB41(fVar27,0) & ~(byte)iVar37,
                                                   CONCAT13((byte)((uint)fVar26 >> 0x18) &
                                                            ~(byte)((uint)iVar35 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar26 >> 0x10) &
                                                                     ~(byte)((uint)iVar35 >> 0x10),
                                                                     CONCAT11((byte)((uint)fVar26 >>
                                                                                    8) &
                                                                              ~(byte)((uint)iVar35
                                                                                     >> 8),
                                                                              SUB41(fVar26,0) &
                                                                              ~(byte)iVar35)))))));
  FUN_00d6f7c8(uVar12,0,param_2,param_1 + 0x24,(long)param_1 + 0x124,param_1 + 0x20,param_1 + 0x22,
               param_1 + 0x25);
  if (plVar8 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d6d468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x60))(plVar8);
  return;
}


