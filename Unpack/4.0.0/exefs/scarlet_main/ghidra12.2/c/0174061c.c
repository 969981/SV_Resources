/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0174061c; name: FUN_0174061c
 */


void FUN_0174061c(undefined8 *param_1,undefined1 param_2 [16],float param_3,long param_4)

{
  short *psVar1;
  long *plVar2;
  long **pplVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  long **pplVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  short sVar14;
  long *plVar15;
  long *plVar16;
  float fVar18;
  undefined1 auVar17 [16];
  float local_a4;
  float local_a0;
  float fStack_9c;
  long *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  long *local_70;
  undefined8 local_68;
  long **local_60 [2];
  long *local_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar16 = (long *)(param_4 + 0x2d8);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar16 == 0) {
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar8) {
      *plVar16 = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_01740668;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_4 + 0x2e0));
  do {
    if (*plVar16 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_4 + 0x2e0));
        while (*plVar16 == 0) {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar8) {
            *plVar16 = lVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_01740668;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar8) {
      *plVar16 = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_01740668:
  local_88 = (long *)CONCAT71(local_88._1_7_,3);
  local_60[0] = &local_88;
  puVar12 = (undefined8 *)(param_4 + 0x58);
  puVar11 = (undefined8 *)*puVar12;
  if (puVar11 == (undefined8 *)0x0) {
    puVar11 = puVar12;
    goto LAB_01740708;
  }
  puVar12 = (undefined8 *)(param_4 + 0x58);
  do {
    if (*(byte *)(puVar11 + 4) < 4) {
      if (*(byte *)(puVar11 + 4) == 3) {
LAB_01740708:
        puVar13 = (undefined8 *)*puVar12;
        if ((undefined8 *)*puVar12 == (undefined8 *)0x0) {
          plVar16 = (long *)(param_4 + 0x50);
          FUN_01e028e0(&local_78,plVar16,local_60);
          *local_78 = 0;
          local_78[1] = 0;
          local_78[2] = puVar11;
          *puVar12 = local_78;
          puVar11 = local_78;
          if (*(long *)*plVar16 != 0) {
            *plVar16 = *(long *)*plVar16;
            puVar11 = (undefined8 *)*puVar12;
          }
          FUN_010108e0(*(undefined8 *)(param_4 + 0x58),puVar11);
          *(long *)(param_4 + 0x80) = *(long *)(param_4 + 0x80) + 1;
          puVar13 = local_78;
        }
        puVar12 = (undefined8 *)puVar13[6];
        if (puVar12 != puVar13 + 5) {
          local_a4 = 3.4028235e+38;
          do {
            lVar10 = puVar12[2];
            if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
              psVar1 = (short *)(lVar10 + 0x1a);
              sVar14 = *(short *)(lVar10 + 0x1a);
LAB_017407f4:
              sVar5 = *psVar1;
              if (sVar5 == sVar14) {
                cVar6 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar8) {
                  *psVar1 = sVar14 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 != '\0') goto LAB_01740818;
                bVar8 = true;
              }
              else {
                ClearExclusiveLocal();
LAB_01740818:
                bVar8 = false;
              }
              if (!bVar8) goto code_r0x01740820;
              plVar16 = *(long **)(lVar10 + 0x10);
              if (plVar16 != (long *)0x0) {
                local_78 = (undefined8 *)puVar12[4];
                plVar15 = plVar16 + -5;
                local_68 = 0;
                local_70 = (long *)0x0;
                FUN_00c93e08(&local_70,puVar12 + 5);
                if (*(char *)((long)local_78 + 0x143) == '\0') {
                  lVar10 = (**(code **)(*plVar15 + 0x68))(plVar15);
                  local_a0 = param_2._0_4_;
                  fStack_9c = param_2._4_4_;
                  local_a0 = *(float *)(lVar10 + 0x30) - local_a0;
                  fStack_9c = *(float *)(lVar10 + 0x34) - fStack_9c;
                  fVar18 = *(float *)(lVar10 + 0x38) - param_2._8_4_;
                  local_a0 = local_a0 * local_a0;
                  fStack_9c = fStack_9c * fStack_9c;
                  fVar18 = fVar18 * fVar18;
                  auVar17._0_4_ = local_a0 + fStack_9c;
                  auVar17._4_4_ = fVar18 + 0.0;
                  auVar17._8_4_ = local_a0 + fStack_9c;
                  auVar17._12_4_ = fVar18 + 0.0;
                  auVar17 = NEON_ext(auVar17,auVar17,4,1);
                  fVar18 = auVar17._0_4_ + auVar17._4_4_;
                  bVar8 = false;
                  if ((fVar18 < param_3 * param_3) &&
                     (bVar8 = false, !NAN(fVar18) && !NAN(local_a4))) {
                    bVar8 = fVar18 < local_a4;
                  }
                  if (bVar8) {
                    (**(code **)(plVar16[-5] + 0x18))(local_60,plVar15);
                    local_88 = (long *)0x0;
                    uStack_80 = 0;
                    if (local_60[0][2] == plVar16) {
                      FUN_00c9ea00(&local_88,local_60);
                    }
                    pplVar7 = local_60[0];
                    if (local_60[0] != (long **)0x0) {
                      pplVar3 = local_60[0] + 3;
                      do {
                        sVar14 = *(short *)pplVar3;
                        cVar6 = '\x01';
                        bVar8 = (bool)ExclusiveMonitorPass(pplVar3,0x10);
                        if (bVar8) {
                          *(short *)pplVar3 = sVar14 + -1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if (sVar14 == 1) {
                        piVar4 = (int *)((long)local_60[0] + 0x1c);
                        do {
                          iVar9 = *piVar4;
                          cVar6 = '\x01';
                          bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                          if (bVar8) {
                            *piVar4 = -1;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        if (iVar9 != -1) {
                          if (((*PTR_DAT_047d3908 & 1) == 0) &&
                             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                            __cxa_guard_release(PTR_DAT_047d3908);
                          }
                          lVar10 = *(long *)PTR_DAT_047d3910;
                          *(long *)PTR_DAT_047d3918 = lVar10;
                          local_48 = *pplVar7;
                          FUN_00c44438(lVar10 + 0x8040,&local_48);
                        }
                      }
                      else if (sVar14 == 0) goto LAB_017408e8;
                    }
                    FUN_00d0a34c(param_1,&local_88);
                    plVar16 = local_88;
                    if (local_88 != (long *)0x0) {
                      plVar2 = local_88 + 3;
                      do {
                        sVar14 = (short)*plVar2;
                        cVar6 = '\x01';
                        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                        if (bVar8) {
                          *(short *)plVar2 = sVar14 + -1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if (sVar14 == 1) {
                        piVar4 = (int *)((long)local_88 + 0x1c);
                        do {
                          iVar9 = *piVar4;
                          cVar6 = '\x01';
                          bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                          if (bVar8) {
                            *piVar4 = -1;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        if (iVar9 != -1) {
                          if (((*PTR_DAT_047d3908 & 1) == 0) &&
                             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                            __cxa_guard_release(PTR_DAT_047d3908);
                          }
                          lVar10 = *(long *)PTR_DAT_047d3910;
                          *(long *)PTR_DAT_047d3918 = lVar10;
                          local_60[0] = (long **)*plVar16;
                          FUN_00c44438(lVar10 + 0x8040,local_60);
                        }
                      }
                      else if (sVar14 == 0) goto LAB_017408e8;
                    }
                    local_a4 = fVar18;
                  }
                }
                plVar16 = local_70;
                if (local_70 != (long *)0x0) {
                  plVar2 = local_70 + 3;
                  do {
                    sVar14 = (short)*plVar2;
                    cVar6 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar8) {
                      *(short *)plVar2 = sVar14 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (sVar14 == 1) {
                    piVar4 = (int *)((long)local_70 + 0x1c);
                    do {
                      iVar9 = *piVar4;
                      cVar6 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                      if (bVar8) {
                        *piVar4 = -1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (iVar9 != -1) {
                      if (((*PTR_DAT_047d3908 & 1) == 0) &&
                         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                        __cxa_guard_release(PTR_DAT_047d3908);
                      }
                      lVar10 = *(long *)PTR_DAT_047d3910;
                      *(long *)PTR_DAT_047d3918 = lVar10;
                      local_60[0] = (long **)*plVar16;
                      FUN_00c44438(lVar10 + 0x8040,local_60);
                    }
                  }
                  else if (sVar14 == 0) {
LAB_017408e8:
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl
                              ("count != std::numeric_limits<uint16_t>::max()",
                               "ReleaseWeakReference",
                               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                               ,0x33,"Reference counter underflows.");
                  }
                }
                (**(code **)(*plVar15 + 0x60))(plVar15);
              }
            }
LAB_0174073c:
            puVar12 = (undefined8 *)puVar12[1];
          } while (puVar12 != puVar13 + 5);
        }
        *(undefined8 *)(param_4 + 0x2d8) = 0;
        nn::os::SignalLightEvent((LightEventType *)(param_4 + 0x2e0));
        return;
      }
      puVar12 = puVar11 + 1;
      puVar13 = (undefined8 *)*puVar12;
      if ((undefined8 *)*puVar12 == (undefined8 *)0x0) goto LAB_01740708;
    }
    else {
      puVar12 = puVar11;
      if ((undefined8 *)*puVar11 == (undefined8 *)0x0) {
        goto LAB_01740708;
      }
      puVar13 = (undefined8 *)*puVar11;
    }
    puVar11 = puVar13;
  } while( true );
code_r0x01740820:
  sVar14 = sVar5;
  if (sVar5 == 0) goto LAB_0174073c;
  goto LAB_017407f4;
}


