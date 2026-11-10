/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e0236c; name: FUN_01e0236c
 */


void FUN_01e0236c(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  short sVar21;
  long *plVar22;
  float fVar23;
  float fVar25;
  float fVar26;
  undefined1 auVar24 [16];
  float fVar27;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 *local_88 [3];
  undefined8 local_68 [3];
  
  if (((DAT_04837608 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04837608), iVar12 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
  }
  lVar11 = DAT_048375f8;
  DAT_04837610 = DAT_048375f8;
  *param_1 = 0;
  param_1[1] = 0;
  lVar18 = *param_2;
  if ((lVar18 != 0) && (*(short *)(lVar18 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar18 + 0x1a);
    sVar21 = *(short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar21) {
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar21 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01e02480;
        bVar16 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e02480:
        bVar16 = false;
      }
      if (bVar16) {
        if (*(long *)(lVar18 + 0x10) == 0) {
          return;
        }
        plVar22 = (long *)(*(long *)(lVar18 + 0x10) + -0x28);
        lVar18 = (**(code **)(*plVar22 + 0x68))(plVar22);
        uVar5 = *(undefined8 *)(lVar18 + 0x30);
        uVar6 = *(undefined8 *)(lVar18 + 0x38);
        plVar13 = (long *)(lVar11 + 0x2d8);
        lVar18 = nn::os::GetCurrentThread();
        goto LAB_01e024cc;
      }
      sVar21 = sVar3;
    } while (sVar3 != 0);
  }
  return;
LAB_01e024cc:
  if (*plVar13 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x2e0));
    do {
      if (*plVar13 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x2e0));
          while (*plVar13 == 0) {
            cVar4 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar16) {
              *plVar13 = lVar18;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_01e024dc;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar16) {
        *plVar13 = lVar18;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_01e024dc:
    local_68[0] = CONCAT71(local_68[0]._1_7_,1);
    local_98 = local_68;
    puVar17 = (undefined8 *)(lVar11 + 0x58);
    if ((undefined8 *)*puVar17 == (undefined8 *)0x0) {
      puVar15 = puVar17;
      goto LAB_01e02578;
    }
    puVar20 = (undefined8 *)(lVar11 + 0x58);
    puVar15 = (undefined8 *)*puVar17;
    do {
      if (*(byte *)(puVar15 + 4) < 2) {
        puVar17 = puVar20;
        if (*(byte *)(puVar15 + 4) != 0) {
LAB_01e02578:
          puVar20 = (undefined8 *)*puVar17;
          if ((undefined8 *)*puVar17 == (undefined8 *)0x0) {
            plVar13 = (long *)(lVar11 + 0x50);
            FUN_01e028e0(local_88,plVar13,&local_98);
            *local_88[0] = 0;
            local_88[0][1] = 0;
            local_88[0][2] = puVar15;
            *puVar17 = local_88[0];
            puVar15 = local_88[0];
            if (*(long *)*plVar13 != 0) {
              *plVar13 = *(long *)*plVar13;
              puVar15 = (undefined8 *)*puVar17;
            }
            FUN_010108e0(*(undefined8 *)(lVar11 + 0x58),puVar15);
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
            puVar20 = local_88[0];
          }
          puVar10 = PTR_LAB_047d3de8;
          puVar9 = PTR_DAT_047d3918;
          puVar8 = PTR_DAT_047d3910;
          puVar7 = PTR_DAT_047d3908;
          puVar17 = (undefined8 *)puVar20[6];
          if (puVar17 != puVar20 + 5) {
            fVar27 = 3.4028235e+38;
            do {
              lVar18 = puVar17[2];
              if ((lVar18 != 0) && (*(short *)(lVar18 + 0x1a) != 0)) {
                psVar1 = (short *)(lVar18 + 0x1a);
                sVar21 = *(short *)(lVar18 + 0x1a);
LAB_01e02674:
                sVar3 = *psVar1;
                if (sVar3 == sVar21) {
                  cVar4 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar16) {
                    *psVar1 = sVar21 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 != '\0') goto LAB_01e02698;
                  bVar16 = true;
                }
                else {
                  ClearExclusiveLocal();
LAB_01e02698:
                  bVar16 = false;
                }
                if (!bVar16) goto code_r0x01e026a0;
                lVar18 = *(long *)(lVar18 + 0x10);
                if (lVar18 != 0) {
                  plVar13 = (long *)(lVar18 + -0x28);
                  lVar14 = (**(code **)(*plVar13 + 0x68))();
                  fVar23 = *(float *)(lVar14 + 0x30) - (float)uVar5;
                  fVar25 = *(float *)(lVar14 + 0x34) - (float)((ulong)uVar5 >> 0x20);
                  fVar26 = *(float *)(lVar14 + 0x38) - (float)uVar6;
                  fVar23 = fVar23 * fVar23;
                  fVar25 = fVar25 * fVar25;
                  fVar26 = fVar26 * fVar26;
                  auVar24._0_4_ = fVar23 + fVar25;
                  auVar24._4_4_ = fVar26 + 0.0;
                  auVar24._8_4_ = fVar23 + fVar25;
                  auVar24._12_4_ = fVar26 + 0.0;
                  auVar24 = NEON_ext(auVar24,auVar24,4,1);
                  fVar23 = auVar24._0_4_ + auVar24._4_4_;
                  if (fVar23 < fVar27) {
                    (**(code **)(*(long *)(lVar18 + -0x28) + 0x18))(local_88,plVar13);
                    local_98 = (undefined8 *)0x0;
                    uStack_90 = 0;
                    if (local_88[0][2] == lVar18) {
                      FUN_00c9ea00(&local_98,local_88);
                    }
                    puVar15 = local_88[0];
                    if (local_88[0] != (undefined8 *)0x0) {
                      psVar1 = (short *)(local_88[0] + 3);
                      do {
                        sVar21 = *psVar1;
                        cVar4 = '\x01';
                        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                        if (bVar16) {
                          *psVar1 = sVar21 + -1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if (sVar21 == 1) {
                        piVar2 = (int *)((long)local_88[0] + 0x1c);
                        do {
                          iVar12 = *piVar2;
                          cVar4 = '\x01';
                          bVar16 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                          if (bVar16) {
                            *piVar2 = -1;
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                        if (iVar12 != -1) {
                          if (((*puVar7 & 1) == 0) &&
                             (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
                            FUN_00100190(puVar10,puVar8,&PTR_LOOP_04483000);
                            __cxa_guard_release(puVar7);
                          }
                          lVar18 = *(long *)puVar8;
                          *(long *)puVar9 = lVar18;
                          local_68[0] = *puVar15;
                          FUN_00c44438(lVar18 + 0x8040,local_68);
                        }
                      }
                      else if (sVar21 == 0) goto LAB_01e027d8;
                    }
                    FUN_00d0a34c(param_1,&local_98);
                    puVar15 = local_98;
                    fVar27 = fVar23;
                    if (local_98 != (undefined8 *)0x0) {
                      psVar1 = (short *)(local_98 + 3);
                      do {
                        sVar21 = *psVar1;
                        cVar4 = '\x01';
                        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                        if (bVar16) {
                          *psVar1 = sVar21 + -1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if (sVar21 == 1) {
                        piVar2 = (int *)((long)local_98 + 0x1c);
                        do {
                          iVar12 = *piVar2;
                          cVar4 = '\x01';
                          bVar16 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                          if (bVar16) {
                            *piVar2 = -1;
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                        if (iVar12 != -1) {
                          if (((*puVar7 & 1) == 0) &&
                             (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
                            FUN_00100190(puVar10,puVar8,&PTR_LOOP_04483000);
                            __cxa_guard_release(puVar7);
                          }
                          lVar18 = *(long *)puVar8;
                          *(long *)puVar9 = lVar18;
                          local_88[0] = (undefined8 *)*puVar15;
                          FUN_00c44438(lVar18 + 0x8040,local_88);
                        }
                      }
                      else if (sVar21 == 0) {
LAB_01e027d8:
                    /* WARNING: Subroutine does not return */
                        nn::diag::detail::AbortImpl
                                  ("count != std::numeric_limits<uint16_t>::max()",
                                   "ReleaseWeakReference",
                                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                                   ,0x33,"Reference counter underflows.");
                      }
                    }
                  }
                  (**(code **)(*plVar13 + 0x60))();
                }
              }
LAB_01e025cc:
              puVar17 = (undefined8 *)puVar17[1];
            } while (puVar17 != puVar20 + 5);
          }
          *(undefined8 *)(lVar11 + 0x2d8) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x2e0));
          (**(code **)(*plVar22 + 0x60))(plVar22);
          return;
        }
        puVar17 = puVar15 + 1;
        puVar19 = (undefined8 *)*puVar17;
        puVar20 = puVar17;
        if (puVar19 == (undefined8 *)0x0) goto LAB_01e02578;
      }
      else {
        puVar19 = (undefined8 *)*puVar15;
        if (puVar19 == (undefined8 *)0x0) {
          puVar17 = puVar15;
          goto LAB_01e02578;
        }
        puVar20 = puVar15;
      }
      puVar15 = puVar19;
    } while( true );
  }
  cVar4 = '\x01';
  bVar16 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar16) {
    *plVar13 = lVar18;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01e024dc;
  goto LAB_01e024cc;
code_r0x01e026a0:
  sVar21 = sVar3;
  if (sVar3 == 0) goto LAB_01e025cc;
  goto LAB_01e02674;
}


