/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015214ac; name: FUN_015214ac
 */


void FUN_015214ac(long param_1,int param_2,uint param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  short sVar10;
  long lVar11;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  plVar9 = (long *)(param_1 + 0x178);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_015214f4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
        while (*plVar9 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_015214f4;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_015214f4:
  lVar8 = *(long *)(param_1 + 0x148);
  if (lVar8 == param_1 + 0x140) goto LAB_01521504;
  plVar9 = (long *)PTR_DAT_047d3918;
  do {
    lVar11 = *(long *)(lVar8 + 0x10);
    if ((lVar11 != 0) && (*(int *)(lVar11 + 0x40) == param_2 || 4 < *(int *)(lVar11 + 0x40) - 0x36U)
       ) {
      if ((param_3 & 1) == 0) {
        local_78 = (undefined8 *)0x0;
        uStack_70 = 0;
        FUN_00f351dc(&local_78,lVar11 + 0x58);
        puVar6 = local_78;
        if (local_78 == (undefined8 *)0x0) {
          *(undefined1 *)(*(long *)(lVar8 + 0x10) + 0xf0) = 1;
        }
        else if (*(short *)((long)local_78 + 0x1a) == 0) {
          *(undefined1 *)(*(long *)(lVar8 + 0x10) + 0xf0) = 1;
          if (local_78 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_78 + 3);
            do {
              sVar10 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar10 != 1) goto LAB_01521618;
            piVar2 = (int *)((long)local_78 + 0x1c);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar11 = *(long *)PTR_DAT_047d3910;
              *plVar9 = lVar11;
              local_68 = *puVar6;
              FUN_00c44438(lVar11 + 0x8040,&local_68);
            }
          }
        }
        else if (local_78 != (undefined8 *)0x0) {
          if (*(short *)((long)local_78 + 0x1a) != 0) {
            psVar1 = (short *)((long)local_78 + 0x1a);
            sVar10 = *(short *)((long)local_78 + 0x1a);
            do {
              sVar3 = *psVar1;
              if (sVar3 == sVar10) {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar5) {
                  *psVar1 = sVar10 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 != '\0') goto LAB_01521680;
                bVar5 = true;
              }
              else {
                ClearExclusiveLocal();
LAB_01521680:
                bVar5 = false;
              }
              if (bVar5) {
                if (local_78[2] == 0) goto LAB_015217dc;
                plVar9 = (long *)(local_78[2] + -0x28);
                FUN_013e0f3c(plVar9);
                (**(code **)(*plVar9 + 0x60))(plVar9);
                break;
              }
              sVar10 = sVar3;
            } while (sVar3 != 0);
            plVar9 = (long *)PTR_DAT_047d3918;
            if (local_78 == (undefined8 *)0x0) goto LAB_015215ec;
          }
LAB_015217dc:
          psVar1 = (short *)(local_78 + 3);
          do {
            sVar10 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar10 == 1) {
            piVar2 = (int *)((long)local_78 + 0x1c);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            goto LAB_01521864;
          }
LAB_015217f8:
          plVar9 = (long *)PTR_DAT_047d3918;
LAB_01521618:
          if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
      }
      else {
        *(undefined1 *)(lVar11 + 0xf0) = 1;
        local_78 = (undefined8 *)0x0;
        uStack_70 = 0;
        FUN_00ca1a48(&local_78,*(long *)(lVar8 + 0x10) + 0x48);
        if (local_78 != (undefined8 *)0x0) {
          if (*(short *)((long)local_78 + 0x1a) == 0) {
            if (local_78 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_78 + 3);
              do {
                sVar10 = *psVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar5) {
                  *psVar1 = sVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar10 != 1) goto LAB_015217f8;
              piVar2 = (int *)((long)local_78 + 0x1c);
              do {
                iVar7 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
LAB_01521864:
              puVar6 = local_78;
              plVar9 = (long *)PTR_DAT_047d3918;
              if (iVar7 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                plVar9 = (long *)PTR_DAT_047d3918;
                lVar11 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar11;
                local_68 = *puVar6;
                FUN_00c44438(lVar11 + 0x8040,&local_68);
              }
            }
          }
          else if (local_78 != (undefined8 *)0x0) {
            if (*(short *)((long)local_78 + 0x1a) != 0) {
              psVar1 = (short *)((long)local_78 + 0x1a);
              sVar10 = *(short *)((long)local_78 + 0x1a);
              do {
                sVar3 = *psVar1;
                if (sVar3 == sVar10) {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar5) {
                    *psVar1 = sVar10 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 != '\0') goto LAB_01521734;
                  bVar5 = true;
                }
                else {
                  ClearExclusiveLocal();
LAB_01521734:
                  bVar5 = false;
                }
                if (bVar5) {
                  lVar11 = local_78[2];
                  if (lVar11 != 0) {
                    plVar9 = (long *)(lVar11 + -0x28);
                    (**(code **)(*(long *)(lVar11 + -0x28) + 0x120))(plVar9,1);
                    lVar11 = *(long *)(lVar11 + 8);
                    psVar1 = (short *)(lVar11 + 0x1a);
                    do {
                      sVar10 = *psVar1;
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                      if (bVar5) {
                        *psVar1 = sVar10 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (sVar10 == 1) {
                      *(undefined8 *)(lVar11 + 0x10) = 0;
                      (**(code **)(*plVar9 + 0x50))(plVar9);
                    }
                    else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      nn::diag::detail::AbortImpl
                                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                                 ,0x60,"Reference counter underflows.");
                    }
                  }
                  break;
                }
                sVar10 = sVar3;
              } while (sVar3 != 0);
            }
            plVar9 = (long *)PTR_DAT_047d3918;
            if (local_78 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_78 + 3);
              do {
                sVar10 = *psVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar5) {
                  *psVar1 = sVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar10 == 1) {
                piVar2 = (int *)((long)local_78 + 0x1c);
                do {
                  iVar7 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                goto LAB_01521864;
              }
              goto LAB_015217f8;
            }
          }
        }
      }
    }
LAB_015215ec:
    lVar8 = *(long *)(lVar8 + 8);
    if (lVar8 == param_1 + 0x140) {
LAB_01521504:
      if ((*(long *)(param_1 + 400) != 0) &&
         (lVar8 = *(long *)(*(long *)(param_1 + 400) + 0x10), lVar8 != 0)) {
        plVar9 = (long *)(lVar8 + -8);
        (**(code **)(*plVar9 + 0x68))(plVar9,param_2,param_3 & 1);
      }
      *(undefined8 *)(param_1 + 0x178) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x180));
      return;
    }
  } while( true );
}


