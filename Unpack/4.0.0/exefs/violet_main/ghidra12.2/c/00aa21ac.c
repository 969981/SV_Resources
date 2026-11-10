/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00aa21ac; name: FUN_00aa21ac
 */


void FUN_00aa21ac(long param_1)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  short sVar12;
  long *plVar13;
  bool bVar14;
  long lVar15;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  long *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar11 = *(long *)(param_1 + 0x28);
  if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar11 + 0x1a);
    sVar12 = *(short *)(lVar11 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar12) {
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar14) {
          *psVar1 = sVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00aa2220;
        bVar14 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00aa2220:
        bVar14 = false;
      }
      if (bVar14) {
        lVar11 = *(long *)(lVar11 + 0x10);
        if (lVar11 == 0) {
          return;
        }
        iVar7 = *(int *)(param_1 + 4);
        plVar13 = (long *)(lVar11 + -0x28);
        if ((iVar7 != 1) && (iVar7 != 8)) {
          local_60 = 0;
          local_98[0] = 5;
          if (iVar7 != 0) {
            local_98[0] = 3;
          }
          local_70 = 0;
          uStack_68 = 0;
          local_80 = 0;
          uStack_78 = 0;
          local_90 = 0;
          uStack_88 = 0;
          FUN_013dbad8(&local_80);
          local_60 = *(int *)(param_1 + 4) == 0;
          plVar10 = (long *)(lVar11 + 0xe8);
          lVar15 = *plVar10;
          lVar8 = nn::os::GetCurrentThread();
          if (lVar8 == lVar15) {
            bVar14 = true;
          }
          else {
            lVar8 = nn::os::GetCurrentThread();
            do {
              if (*plVar10 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
                  while (*plVar10 == 0) {
                    cVar5 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                    if (bVar14) {
                      *plVar10 = lVar8;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 == '\0') goto LAB_00aa22c0;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar5 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *plVar10 = lVar8;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
LAB_00aa22c0:
            bVar14 = false;
          }
          plVar9 = (long *)FUN_01e29e60(*(undefined8 *)(lVar11 + 0x100),
                                        *(undefined8 *)(lVar11 + 0x108));
          if ((*(long **)(lVar11 + 0x108) == plVar9) || (*plVar9 == 0)) {
            plVar9 = (long *)FUN_01e29e60(*(undefined8 *)(lVar11 + 0x138),
                                          *(undefined8 *)(lVar11 + 0x140));
            if (*(long **)(lVar11 + 0x140) == plVar9) {
              lVar8 = 0;
            }
            else {
              lVar8 = 0;
              if (*plVar9 != 0) {
                lVar8 = *plVar9 + -0x20;
              }
            }
          }
          else {
            lVar8 = *plVar9 + -0x20;
          }
          if (!bVar14) {
            *(undefined8 *)(lVar11 + 0xe8) = 0;
            nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0xf0));
          }
          if (lVar8 != 0) {
            local_58 = (long *)0x0;
            uStack_50 = 0;
            FUN_00c43ef0(&local_58,lVar8 + 0x98);
            local_a8 = (undefined8 *)0x0;
            uStack_a0 = 0;
            if (local_58[2] == lVar8 + 0x28) {
              FUN_00c92210(&local_a8,&local_58);
            }
            plVar9 = local_58;
            if (local_58 != (long *)0x0) {
              plVar2 = local_58 + 3;
              do {
                sVar12 = (short)*plVar2;
                cVar5 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar14) {
                  *(short *)plVar2 = sVar12 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar12 == 1) {
                piVar3 = (int *)((long)local_58 + 0x1c);
                do {
                  iVar7 = *piVar3;
                  cVar5 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar14) {
                    *piVar3 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar7 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar8 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar8;
                  local_48 = *plVar9;
                  FUN_00c44438(lVar8 + 0x8040,&local_48);
                }
              }
              else if (sVar12 == 0) goto LAB_00aa2a78;
            }
            FUN_00c93a38(&local_90,&local_a8);
            puVar6 = local_a8;
            if (local_a8 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_a8 + 3);
              do {
                sVar12 = *psVar1;
                cVar5 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar14) {
                  *psVar1 = sVar12 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar12 == 1) {
                piVar3 = (int *)((long)local_a8 + 0x1c);
                do {
                  iVar7 = *piVar3;
                  cVar5 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar14) {
                    *piVar3 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar7 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar8 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar8;
                  local_58 = (long *)*puVar6;
                  FUN_00c44438(lVar8 + 0x8040,&local_58);
                }
              }
              else if (sVar12 == 0) goto LAB_00aa2a78;
            }
          }
          lVar15 = *plVar10;
          lVar8 = nn::os::GetCurrentThread();
          if (lVar8 == lVar15) {
            bVar14 = true;
          }
          else {
            lVar8 = nn::os::GetCurrentThread();
            do {
              if (*plVar10 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
                  while (*plVar10 == 0) {
                    cVar5 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                    if (bVar14) {
                      *plVar10 = lVar8;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 == '\0') goto LAB_00aa2410;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar5 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *plVar10 = lVar8;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
LAB_00aa2410:
            bVar14 = false;
          }
          plVar10 = (long *)FUN_01e39fb0(*(undefined8 *)(lVar11 + 0x100),
                                         *(undefined8 *)(lVar11 + 0x108));
          if ((*(long **)(lVar11 + 0x108) == plVar10) || (*plVar10 == 0)) {
            plVar10 = (long *)FUN_01e39fb0(*(undefined8 *)(lVar11 + 0x138),
                                           *(undefined8 *)(lVar11 + 0x140));
            if (*(long **)(lVar11 + 0x140) == plVar10) {
              lVar8 = 0;
            }
            else {
              lVar8 = 0;
              if (*plVar10 != 0) {
                lVar8 = *plVar10 + -0x20;
              }
            }
          }
          else {
            lVar8 = *plVar10 + -0x20;
          }
          if (!bVar14) {
            *(undefined8 *)(lVar11 + 0xe8) = 0;
            nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0xf0));
          }
          if (lVar8 != 0) {
            local_58 = (long *)0x0;
            uStack_50 = 0;
            FUN_00c43ef0(&local_58,lVar8 + 0x98);
            local_a8 = (undefined8 *)0x0;
            uStack_a0 = 0;
            if (local_58[2] == lVar8 + 0x28) {
              FUN_0125f3ac(&local_a8,&local_58);
            }
            plVar10 = local_58;
            if (local_58 != (long *)0x0) {
              plVar9 = local_58 + 3;
              do {
                sVar12 = (short)*plVar9;
                cVar5 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar14) {
                  *(short *)plVar9 = sVar12 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar12 == 1) {
                piVar3 = (int *)((long)local_58 + 0x1c);
                do {
                  iVar7 = *piVar3;
                  cVar5 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar14) {
                    *piVar3 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar7 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar8 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar8;
                  local_48 = *plVar10;
                  FUN_00c44438(lVar8 + 0x8040,&local_48);
                }
              }
              else if (sVar12 == 0) goto LAB_00aa2a78;
            }
            FUN_00f5a410(&local_70,&local_a8);
            puVar6 = local_a8;
            if (local_a8 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_a8 + 3);
              do {
                sVar12 = *psVar1;
                cVar5 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar14) {
                  *psVar1 = sVar12 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar12 == 1) {
                piVar3 = (int *)((long)local_a8 + 0x1c);
                do {
                  iVar7 = *piVar3;
                  cVar5 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar14) {
                    *piVar3 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar7 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar8 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar8;
                  local_58 = (long *)*puVar6;
                  FUN_00c44438(lVar8 + 0x8040,&local_58);
                }
              }
              else if (sVar12 == 0) {
LAB_00aa2a78:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
          }
          plVar10 = *(long **)(lVar11 + -0x20);
          if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar8 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar10;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          plVar9 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x1b8,8);
          if (plVar9 == (long *)0x0) {
            (**(code **)(*plVar10 + 0xe8))(plVar10);
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("ptr","Create",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                       ,0x40);
          }
          FUN_0144ed9c(plVar9,local_98);
          *(undefined4 *)(plVar9 + 3) = 0x801b8;
          plVar9[1] = (long)plVar10;
          plVar9[2] = (long)plVar9;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
          (**(code **)(*plVar9 + 0x58))(plVar9);
          plVar10 = plVar9 + 4;
          (**(code **)(*plVar10 + 0xe8))(plVar10,plVar13);
          (**(code **)(*plVar10 + 0x68))(plVar10);
          local_58 = plVar9;
          FUN_00df8c30(lVar11 + 0xe0,&local_58);
          if (local_58 != (long *)0x0) {
            lVar8 = local_58[0x13];
            psVar1 = (short *)(lVar8 + 0x1a);
            do {
              sVar12 = *psVar1;
              cVar5 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar14) {
                *psVar1 = sVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar12 == 1) {
              *(undefined8 *)(lVar8 + 0x10) = 0;
              (**(code **)(*local_58 + 0x50))();
            }
            else if (sVar12 == 0) goto LAB_00aa2658;
          }
          (**(code **)(*(long *)(lVar11 + -0x28) + 0x100))(plVar13,plVar10);
          plVar9 = (long *)(lVar11 + 0x418);
          lVar15 = *plVar9;
          lVar8 = nn::os::GetCurrentThread();
          if (lVar8 == lVar15) {
            plVar9 = (long *)0x0;
            bVar14 = true;
          }
          else {
            lVar8 = nn::os::GetCurrentThread();
            do {
              if (*plVar9 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x420));
                  while (*plVar9 == 0) {
                    cVar5 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                    if (bVar14) {
                      *plVar9 = lVar8;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 == '\0') goto LAB_00aa2600;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar5 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar14) {
                *plVar9 = lVar8;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
LAB_00aa2600:
            bVar14 = false;
          }
          if ((*(byte *)(lVar11 + 0x430) >> 2 & 1) == 0) {
            FUN_00d37964(plVar13,0,0);
          }
          else {
            (**(code **)(*plVar10 + 0xf8))(plVar10);
          }
          if (!bVar14) {
            *plVar9 = 0;
            nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
          }
          FUN_00aa4e9c(local_98);
        }
        lVar11 = *(long *)(lVar11 + 8);
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar14) {
            *psVar1 = sVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar13 + 0x50))(plVar13);
          return;
        }
        if (sVar12 != 0) {
          return;
        }
LAB_00aa2658:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      sVar12 = sVar4;
    } while (sVar4 != 0);
  }
  return;
}


