/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011ed074; name: FUN_011ed074
 */


void FUN_011ed074(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *local_70;
  long *local_68;
  
  *param_1 = &DAT_046091e0;
  param_1[4] = &PTR_LAB_04609340;
  param_1[5] = &DAT_04609468;
  plVar10 = param_1 + 0x28;
  param_1[6] = &PTR_LAB_046094c0;
  param_1[7] = &PTR_LAB_046094e8;
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar7) {
      *plVar10 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_011ed0d8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x29));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x29));
        while (*plVar10 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar7) {
            *plVar10 = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_011ed0d8;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar7) {
      *plVar10 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_011ed0d8:
  plVar10 = param_1 + 0x2b;
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar7) {
      *plVar10 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_011ed0f4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2c));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2c));
        while (*plVar10 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar7) {
            *plVar10 = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_011ed0f4;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar7) {
      *plVar10 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_011ed0f4:
  if (((*(byte *)(param_1 + 0x4f) & 1) != 0) || ((*(byte *)((long)param_1 + 0x221) & 1) != 0)) {
LAB_011ed100:
    param_1[0x2b] = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2c));
    param_1[0x28] = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x29));
    plVar10 = (long *)param_1[0x55];
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))();
      }
      else if (sVar4 == 0) goto LAB_011ed294;
    }
    plVar10 = (long *)param_1[0x53];
    if (plVar10 != (long *)0x0) {
      plVar3 = plVar10 + 5;
      do {
        lVar9 = *plVar3;
        iVar8 = (int)lVar9 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar7) {
          *(int *)plVar3 = iVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_011ed344;
    }
    plVar10 = (long *)param_1[0x51];
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))();
      }
      else if (sVar4 == 0) goto LAB_011ed294;
    }
    plVar10 = (long *)param_1[0x50];
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))();
      }
      else if (sVar4 == 0) goto LAB_011ed294;
    }
    plVar10 = (long *)param_1[0x4e];
    if (plVar10 != (long *)0x0) {
      plVar3 = plVar10 + 5;
      do {
        lVar9 = *plVar3;
        iVar8 = (int)lVar9 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar7) {
          *(int *)plVar3 = iVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar9 == 0) {
LAB_011ed344:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    puVar12 = (undefined8 *)param_1[0x4a];
    param_1[0x4a] = 0;
    if (puVar12 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar9 = FUN_00c4e600();
      iVar5 = *(int *)(lVar9 + 0x12c8);
      iVar8 = iVar5 + 1;
      *(int *)(lVar9 + 0x12c8) = iVar8;
      if (*(int *)(lVar9 + 0x12cc) <= iVar5) {
        *(int *)(lVar9 + 0x12cc) = iVar8;
      }
      (**(code **)*puVar12)(puVar12);
      plVar10 = (long *)param_1[0x4b];
      uVar13 = param_1[0x4c];
      uVar14 = param_1[0x4d];
      uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,puVar12,uVar13,uVar14);
      }
      else {
        FUN_00c48fe8(plVar10,puVar12,uVar13,uVar14);
      }
      lVar9 = FUN_00c4e600();
      iVar8 = *(int *)(lVar9 + 0x12c8) + -1;
      *(int *)(lVar9 + 0x12c8) = iVar8;
      if (iVar8 == 0) {
        plVar10 = (long *)FUN_00c4e600();
        if (plVar10[600] != 0) {
          local_70 = plVar10 + plVar10[600] * 3;
          local_68 = plVar10;
          FUN_00c4ea30(&local_68,&local_70);
          plVar15 = (long *)*plVar10;
          plVar3 = plVar10;
          if (plVar10[600] != 0) {
            plVar3 = plVar10 + plVar10[600] * 3;
          }
          if (plVar3 == plVar10) {
            uVar17 = 0;
            uVar11 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar15) {
              (**(code **)(*plVar15 + 0x100))(plVar15,plVar10,plVar10);
              plVar15 = (long *)*plVar10;
            }
            plVar16 = plVar10 + 3;
            if (plVar3 == plVar16) {
              uVar17 = 0;
              uVar11 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar16 + 0xd0))();
              bVar7 = (long *)*plVar16 != plVar15;
              if (bVar7) {
                (**(code **)(*plVar15 + 0x100))(plVar15,plVar10,plVar10 + 3);
                plVar15 = (long *)plVar10[3];
              }
              uVar17 = (ulong)bVar7;
              plVar16 = plVar10 + 6;
              if (plVar3 == plVar16) {
                uVar11 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar16 + 0xd0))();
                if ((long *)*plVar16 != plVar15) {
                  (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + uVar17 * 3,plVar10 + 6);
                  plVar15 = (long *)plVar10[6];
                  uVar17 = 2;
                }
                plVar16 = plVar10 + 9;
                if (plVar3 == plVar16) {
                  uVar11 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar16 + 0xd0))();
                  if ((long *)*plVar16 != plVar15) {
                    (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + uVar17 * 3,plVar10 + 9);
                    plVar15 = (long *)plVar10[9];
                    uVar17 = 3;
                  }
                  plVar16 = plVar10 + 0xc;
                  if (plVar3 == plVar16) {
                    uVar11 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar16 + 0xd0))();
                    if ((long *)*plVar16 != plVar15) {
                      (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + uVar17 * 3,plVar10 + 0xc);
                      plVar15 = (long *)plVar10[0xc];
                      uVar17 = 4;
                    }
                    plVar16 = plVar10 + 0xf;
                    if (plVar3 == plVar16) {
                      uVar11 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar16 + 0xd0))();
                      if ((long *)*plVar16 != plVar15) {
                        (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + uVar17 * 3,plVar10 + 0xf);
                        plVar15 = (long *)plVar10[0xf];
                        uVar17 = 5;
                      }
                      uVar11 = 6;
                      for (plVar16 = plVar10 + 0x12; plVar3 != plVar16; plVar16 = plVar16 + 3) {
                        (**(code **)(*(long *)*plVar16 + 0xd0))();
                        if ((long *)*plVar16 != plVar15) {
                          (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + uVar17 * 3,plVar16);
                          plVar15 = (long *)*plVar16;
                          uVar17 = uVar11;
                        }
                        uVar11 = uVar11 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + uVar17 * 3,plVar10 + uVar11 * 3);
          plVar10[600] = 0;
        }
        *(undefined4 *)(lVar9 + 0x12cc) = 0;
      }
    }
    nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x46));
    FUN_011ed998(param_1 + 0x3d);
    FUN_011ed998(param_1 + 0x36);
    FUN_011ed998(param_1 + 0x2f);
    plVar10 = (long *)param_1[0x2e];
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))();
      }
      else if (sVar4 == 0) {
LAB_011ed294:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x2c));
    nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x29));
    plVar10 = (long *)param_1[0x26];
    if (plVar10 != (long *)0x0) {
      plVar3 = plVar10 + 3;
      do {
        sVar4 = (short)*plVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar7) {
          *(short *)plVar3 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)plVar10 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_68 = (long *)*plVar10;
          FUN_00c44438(lVar9 + 0x8040,&local_68);
        }
      }
      else if (sVar4 == 0) goto LAB_011ed300;
    }
    plVar10 = (long *)param_1[0x24];
    if (plVar10 != (long *)0x0) {
      plVar3 = plVar10 + 3;
      do {
        sVar4 = (short)*plVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar7) {
          *(short *)plVar3 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)plVar10 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_68 = (long *)*plVar10;
          FUN_00c44438(lVar9 + 0x8040,&local_68);
        }
      }
      else if (sVar4 == 0) {
LAB_011ed300:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    FUN_00e6bfa4(param_1);
    return;
  }
  *(byte *)((long)param_1 + 0x221) = 1;
  plVar10 = param_1 + 0x45;
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar7) {
      *plVar10 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_011ed584;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x46));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x46));
        while (*plVar10 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar7) {
            *plVar10 = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_011ed584;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar7) {
      *plVar10 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_011ed584:
  param_1[0x45] = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x46));
  goto LAB_011ed100;
}


