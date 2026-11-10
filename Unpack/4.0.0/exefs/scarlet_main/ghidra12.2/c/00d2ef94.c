/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d2ef94; name: FUN_00d2ef94
 */


void FUN_00d2ef94(long *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  short sVar11;
  undefined8 *puVar12;
  undefined8 *local_58 [2];
  long *local_48;
  undefined8 local_28;
  
  plVar8 = (long *)(param_2 + 0x338);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00d2efd0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x340));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x340));
        while (*plVar8 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00d2efd0;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00d2efd0:
  FUN_00d2f4e8(&local_48);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x90))(local_58);
    if (local_58[0] != (undefined8 *)0x0) {
      if (*(short *)((long)local_58[0] + 0x1a) != 0) {
        if (local_58[0] == *(undefined8 **)(param_2 + 0x168)) {
          plVar8 = *(long **)(param_2 + 0x160);
          *param_1 = (long)plVar8;
          puVar12 = local_58[0];
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x58))();
            puVar12 = local_58[0];
          }
          if (puVar12 != (undefined8 *)0x0) {
            psVar1 = (short *)(puVar12 + 3);
            do {
              sVar11 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar11 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar11 == 1) {
              piVar2 = (int *)((long)puVar12 + 0x1c);
              do {
                iVar6 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar6 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar7 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar7;
                local_28 = *puVar12;
                FUN_00c44438(lVar7 + 0x8040,&local_28);
              }
            }
            else if (sVar11 == 0) goto LAB_00d2f148;
          }
          if (local_48 == (long *)0x0) goto LAB_00d2f028;
          lVar7 = local_48[6];
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar11 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        else {
          FUN_00ca1a48(param_2 + 0x168,local_58);
          if ((local_58[0] != (undefined8 *)0x0) && (*(short *)((long)local_58[0] + 0x1a) != 0)) {
            psVar1 = (short *)((long)local_58[0] + 0x1a);
            sVar11 = *(short *)((long)local_58[0] + 0x1a);
            do {
              sVar3 = *psVar1;
              if (sVar3 == sVar11) {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar5) {
                  *psVar1 = sVar11 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 != '\0') goto LAB_00d2f370;
                bVar5 = true;
              }
              else {
                ClearExclusiveLocal();
LAB_00d2f370:
                bVar5 = false;
              }
              if (bVar5) {
                lVar7 = local_58[0][2];
                if (lVar7 != 0) {
                  plVar8 = (long *)FUN_00ded3a0(lVar7 + 0xe0,&local_28);
                  if (plVar8 != (long *)0x0) {
                    (**(code **)(*plVar8 + 0x58))(plVar8);
                  }
                  plVar9 = *(long **)(param_2 + 0x160);
                  *(long **)(param_2 + 0x160) = plVar8;
                  if (plVar9 != (long *)0x0) {
                    (**(code **)(*plVar9 + 0x60))();
                  }
                  lVar10 = *(long *)(lVar7 + 8);
                  psVar1 = (short *)(lVar10 + 0x1a);
                  do {
                    sVar11 = *psVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar5) {
                      *psVar1 = sVar11 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (sVar11 == 1) {
                    *(undefined8 *)(lVar10 + 0x10) = 0;
                    (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))((long *)(lVar7 + -0x28));
                  }
                  else if (sVar11 == 0) goto LAB_00d2f100;
                }
                break;
              }
              sVar11 = sVar3;
            } while (sVar3 != 0);
          }
          plVar8 = *(long **)(param_2 + 0x160);
          *param_1 = (long)plVar8;
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x58))();
          }
          if (local_58[0] != (undefined8 *)0x0) {
            psVar1 = (short *)(local_58[0] + 3);
            do {
              sVar11 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar11 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar11 == 1) {
              piVar2 = (int *)((long)local_58[0] + 0x1c);
              do {
                iVar6 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar6 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar7 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar7;
                local_28 = *local_58[0];
                FUN_00c44438(lVar7 + 0x8040,&local_28);
              }
            }
            else if (sVar11 == 0) {
LAB_00d2f148:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          if (local_48 == (long *)0x0) goto LAB_00d2f028;
          lVar7 = local_48[6];
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar11 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (sVar11 != 1) {
          if (sVar11 != 0) goto LAB_00d2f028;
          goto LAB_00d2f100;
        }
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_48 + 0x50))();
        goto LAB_00d2f028;
      }
      if (local_58[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_58[0] + 3);
        do {
          sVar11 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          piVar2 = (int *)((long)local_58[0] + 0x1c);
          do {
            iVar6 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar7 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar7;
            local_28 = *local_58[0];
            FUN_00c44438(lVar7 + 0x8040,&local_28);
          }
        }
        else if (sVar11 == 0) goto LAB_00d2f148;
      }
    }
    if (local_48 != (long *)0x0) {
      lVar7 = local_48[6];
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_48 + 0x50))();
      }
      else if (sVar11 == 0) {
LAB_00d2f100:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  *param_1 = 0;
LAB_00d2f028:
  *(undefined8 *)(param_2 + 0x338) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x340));
  return;
}


