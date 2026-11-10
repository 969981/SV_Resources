/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00db9848; name: FUN_00db9848
 */


void FUN_00db9848(long param_1,long param_2,long param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  short sVar7;
  long lVar8;
  char cVar9;
  short sVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  bool bVar16;
  ulong uVar17;
  long lVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  int iVar22;
  int iVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  if (((*PTR_DAT_047daf58 & 1) == 0) &&
     (iVar22 = __cxa_guard_acquire(PTR_DAT_047daf58), iVar22 != 0)) {
    FUN_00100190(PTR_LAB_047dd580,PTR_DAT_047daf60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047daf58);
  }
  plVar2 = (long *)PTR_DAT_047daf60;
  if (*(long *)(param_2 + 0xc0) != 0) {
    plVar2 = (long *)(*(long *)(param_2 + 0xc0) + 0x70);
  }
  lVar18 = *plVar2;
  pcVar3 = (code *)&LAB_02e4c1d0;
  if (param_4 != 0) {
    pcVar3 = FUN_02e4c370;
  }
  plVar1 = (long *)(lVar18 + 0x450);
  lVar12 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(lVar18 + 0x458) == 0) {
    cVar9 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = lVar12;
      *(undefined8 *)(lVar18 + 0x458) = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') goto LAB_00db98dc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x460));
  do {
    if (*plVar1 != 0 || *(long *)(lVar18 + 0x458) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x460));
        while (*plVar1 == 0 && *(long *)(lVar18 + 0x458) == 0) {
          cVar9 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar16) {
            *plVar1 = lVar12;
            *(undefined8 *)(lVar18 + 0x458) = 0;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 == '\0') goto LAB_00db98dc;
        }
      } while( true );
    }
    cVar9 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = lVar12;
      *(undefined8 *)(lVar18 + 0x458) = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
LAB_00db98dc:
  if ((int)((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) >> 6) != 0) {
    uVar17 = 0;
    do {
      if ((-1 < (int)uVar17) &&
         (uVar17 < (ulong)(*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 2))) {
        uVar6 = *(uint *)(*(long *)(param_1 + 0x88) + uVar17 * 4);
        if ((-1 < (int)uVar6) &&
           (((*(ulong *)(*(long *)(param_3 + 0x78) + ((ulong)(uVar6 >> 3) & 0x1ffffff8)) >>
              ((ulong)uVar6 & 0x3f) & 1) != 0 &&
            (lVar12 = *plVar2,
            (int)uVar6 <
            (int)(short)((short)((uint)(*(int *)(lVar12 + 0x250) - *(int *)(lVar12 + 0x248)) >> 4) *
                        -0x5555))))) {
          if (*(char *)(lVar12 + 0x420) != '\0') {
            plVar13 = *(long **)(lVar12 + 0x30);
            plVar14 = *(long **)(lVar12 + 0x38);
            if (plVar13 != plVar14) {
              do {
                sVar7 = *(short *)((long)plVar13 + 10);
                sVar10 = (**(code **)(*(long *)(*(long *)(*plVar13 + 0x30) + 0x30) + 0x10))();
                if ((int)(short)uVar6 < (int)sVar7 + (int)sVar10) {
                  iVar22 = (int)(short)uVar6 - (uint)*(ushort *)((long)plVar13 + 10);
                  if (((*(char *)(lVar12 + 0x438) == '\0') ||
                      (plVar14 = (long *)(*(long *)(*plVar13 + 0x30) + 0x30),
                      uVar15 = (**(code **)(*plVar14 + 0x68))(plVar14,iVar22), (uVar15 & 1) == 0))
                     && (plVar13 = (long *)(*(long *)(*plVar13 + 0x30) + 0x30),
                        uVar11 = (**(code **)(*plVar13 + 0x60))(plVar13,iVar22),
                        *(uint *)(lVar12 + 0x424) < uVar11)) goto LAB_00db998c;
                  break;
                }
                plVar13 = plVar13 + 2;
              } while (plVar14 != plVar13);
            }
          }
          if ((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 6) <= uVar17) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          lVar12 = *(long *)(param_1 + 0x10) + uVar17 * 0x40;
          fVar20 = (float)*(undefined8 *)(lVar12 + 0x20);
          fVar21 = (float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20);
          fVar25 = (float)*(undefined8 *)(lVar12 + 0x28);
          fVar25 = fVar25 * fVar25;
          fVar26 = (float)((ulong)*(undefined8 *)(lVar12 + 0x28) >> 0x20);
          fVar26 = fVar26 * fVar26;
          auVar23._0_4_ = fVar20 * fVar20 + fVar21 * fVar21;
          auVar23._4_4_ = fVar25 + fVar26;
          auVar23._8_4_ = fVar20 * fVar20 + fVar21 * fVar21;
          auVar23._12_4_ = fVar25 + fVar26;
          auVar23 = NEON_ext(auVar23,auVar23,4,1);
          auVar19._0_4_ = auVar23._0_4_ + auVar23._4_4_;
          auVar19._4_4_ = auVar23._8_4_ + auVar23._12_4_;
          auVar19._8_4_ = auVar23._0_4_ + auVar23._4_4_;
          auVar19._12_4_ = auVar23._8_4_ + auVar23._12_4_;
          auVar23 = NEON_frsqrte(auVar19,4);
          auVar28._0_4_ = auVar19._0_4_ * auVar23._0_4_;
          auVar28._4_4_ = auVar19._4_4_ * auVar23._4_4_;
          auVar28._8_4_ = auVar19._8_4_ * auVar23._8_4_;
          auVar28._12_4_ = auVar19._12_4_ * auVar23._12_4_;
          auVar29 = NEON_frsqrts(auVar23,auVar28,4);
          auVar27._0_4_ = auVar23._0_4_ * auVar29._0_4_;
          auVar27._4_4_ = auVar23._4_4_ * auVar29._4_4_;
          auVar27._8_4_ = auVar23._8_4_ * auVar29._8_4_;
          auVar27._12_4_ = auVar23._12_4_ * auVar29._12_4_;
          auVar30._0_4_ = auVar19._0_4_ * auVar27._0_4_;
          auVar30._4_4_ = auVar19._4_4_ * auVar27._4_4_;
          auVar30._8_4_ = auVar19._8_4_ * auVar27._8_4_;
          auVar30._12_4_ = auVar19._12_4_ * auVar27._12_4_;
          iVar22 = -(uint)(auVar19._0_4_ == 0.0);
          iVar24 = -(uint)(auVar19._4_4_ == 0.0);
          auVar23 = NEON_frsqrts(auVar27,auVar30,4);
          auVar29._0_4_ = auVar27._0_4_ * auVar23._0_4_;
          auVar29._4_4_ = auVar27._4_4_ * auVar23._4_4_;
          auVar29._8_4_ = auVar27._8_4_ * auVar23._8_4_;
          auVar29._12_4_ = auVar27._12_4_ * auVar23._12_4_;
          fVar20 = fVar20 * auVar29._0_4_;
          fVar21 = fVar21 * auVar29._4_4_;
          (*pcVar3)(*(undefined8 *)(lVar12 + 0x10),
                    CONCAT17((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                             CONCAT16((byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                                      CONCAT15((byte)((uint)fVar21 >> 8) &
                                               ~(byte)((uint)iVar24 >> 8),
                                               CONCAT14(SUB41(fVar21,0) & ~(byte)iVar24,
                                                        CONCAT13((byte)((uint)fVar20 >> 0x18) &
                                                                 ~(byte)((uint)iVar22 >> 0x18),
                                                                 CONCAT12((byte)((uint)fVar20 >>
                                                                                0x10) &
                                                                          ~(byte)((uint)iVar22 >>
                                                                                 0x10),
                                                                          CONCAT11((byte)((uint)
                                                  fVar20 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                                  SUB41(fVar20,0) & ~(byte)iVar22))))))),
                    *(undefined1 (*) [16])(lVar12 + 0x30),auVar29,auVar23,*plVar2,(ulong)uVar6);
        }
      }
LAB_00db998c:
      uVar17 = uVar17 + 1;
    } while (uVar17 < ((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) >> 6 &
                      0xffffffff));
  }
  do {
    lVar12 = *plVar1;
    lVar8 = *(long *)(lVar18 + 0x458);
    cVar9 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = lVar12;
      *(long *)(lVar18 + 0x458) = lVar8;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  do {
    lVar4 = *plVar1;
    lVar5 = *(long *)(lVar18 + 0x458);
    if (lVar4 != lVar12 || lVar5 != lVar8) {
      bVar16 = false;
      ClearExclusiveLocal();
      goto LAB_00db9b40;
    }
    cVar9 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = 0;
      *(long *)(lVar18 + 0x454) = lVar8;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  bVar16 = true;
LAB_00db9b40:
  if (!bVar16) {
    do {
      lVar12 = *plVar1;
      lVar8 = *(long *)(lVar18 + 0x458);
      if (lVar12 != lVar4 || lVar8 != lVar5) {
        bVar16 = false;
        ClearExclusiveLocal();
        goto joined_r0x00db9b94;
      }
      cVar9 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar16) {
        *plVar1 = 0;
        *(long *)(lVar18 + 0x454) = lVar5;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    bVar16 = true;
joined_r0x00db9b94:
    if (!bVar16) {
      do {
        lVar4 = *plVar1;
        lVar5 = *(long *)(lVar18 + 0x458);
        if (lVar4 != lVar12 || lVar5 != lVar8) {
          bVar16 = false;
          ClearExclusiveLocal();
          lVar12 = lVar4;
          lVar8 = lVar5;
          goto joined_r0x00db9b94;
        }
        cVar9 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar16) {
          *plVar1 = 0;
          *(long *)(lVar18 + 0x454) = lVar8;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      bVar16 = true;
      lVar12 = lVar4;
      lVar8 = lVar5;
      goto joined_r0x00db9b94;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar18 + 0x460));
  return;
}


