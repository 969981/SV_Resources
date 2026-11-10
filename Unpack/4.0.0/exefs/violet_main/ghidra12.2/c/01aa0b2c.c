/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01aa0b2c; name: FUN_01aa0b2c
 */


void FUN_01aa0b2c(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long *local_68;
  long *local_48;
  
  plVar12 = (long *)param_1[0x85];
  *param_1 = &PTR_FUN_04561068;
  if (plVar12 != (long *)0x0) {
    plVar3 = plVar12 + 3;
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
      piVar2 = (int *)((long)plVar12 + 0x1c);
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48 = (long *)*plVar12;
        FUN_00c44438(lVar11 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) goto LAB_01aa0d98;
  }
  plVar12 = (long *)param_1[0x81];
  if (plVar12 != (long *)0x0) {
    plVar3 = plVar12 + 3;
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
      piVar2 = (int *)((long)plVar12 + 0x1c);
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48 = (long *)*plVar12;
        FUN_00c44438(lVar11 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) goto LAB_01aa0d98;
  }
  plVar12 = (long *)param_1[0x7d];
  if (plVar12 != (long *)0x0) {
    plVar3 = plVar12 + 3;
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
      piVar2 = (int *)((long)plVar12 + 0x1c);
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48 = (long *)*plVar12;
        FUN_00c44438(lVar11 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) goto LAB_01aa0d98;
  }
  plVar12 = (long *)param_1[0x7b];
  if (plVar12 != (long *)0x0) {
    plVar3 = plVar12 + 3;
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
      piVar2 = (int *)((long)plVar12 + 0x1c);
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48 = (long *)*plVar12;
        FUN_00c44438(lVar11 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) goto LAB_01aa0d98;
  }
  plVar12 = (long *)param_1[0x79];
  if (plVar12 != (long *)0x0) {
    plVar3 = plVar12 + 3;
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
      piVar2 = (int *)((long)plVar12 + 0x1c);
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48 = (long *)*plVar12;
        FUN_00c44438(lVar11 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) goto LAB_01aa0d98;
  }
  plVar12 = (long *)param_1[0x77];
  if (plVar12 != (long *)0x0) {
    plVar3 = plVar12 + 3;
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
      piVar2 = (int *)((long)plVar12 + 0x1c);
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48 = (long *)*plVar12;
        FUN_00c44438(lVar11 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) goto LAB_01aa0d98;
  }
  puVar13 = (undefined8 *)param_1[0x73];
  param_1[0x73] = 0;
  if (puVar13 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar5 = *(int *)(lVar11 + 0x12c8);
    iVar8 = iVar5 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar8;
    if (*(int *)(lVar11 + 0x12cc) <= iVar5) {
      *(int *)(lVar11 + 0x12cc) = iVar8;
    }
    (**(code **)*puVar13)(puVar13);
    plVar12 = (long *)param_1[0x74];
    uVar14 = param_1[0x75];
    uVar15 = param_1[0x76];
    uVar9 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar9 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar13,uVar14,uVar15);
    }
    else {
      FUN_00c48fe8(plVar12,puVar13,uVar14,uVar15);
    }
    lVar11 = FUN_00c4e600();
    iVar8 = *(int *)(lVar11 + 0x12c8) + -1;
    *(int *)(lVar11 + 0x12c8) = iVar8;
    if (iVar8 == 0) {
      plVar12 = (long *)FUN_00c4e600();
      if (plVar12[600] != 0) {
        local_68 = plVar12 + plVar12[600] * 3;
        local_48 = plVar12;
        FUN_00c4ea30(&local_48,&local_68);
        plVar16 = (long *)*plVar12;
        plVar3 = plVar12;
        if (plVar12[600] != 0) {
          plVar3 = plVar12 + plVar12[600] * 3;
        }
        if (plVar3 == plVar12) {
          uVar17 = 0;
          uVar9 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar12 + 0xd0))();
          if ((long *)*plVar12 != plVar16) {
            (**(code **)(*plVar16 + 0x100))(plVar16,plVar12,plVar12);
            plVar16 = (long *)*plVar12;
          }
          plVar18 = plVar12 + 3;
          if (plVar3 == plVar18) {
            uVar17 = 0;
            uVar9 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar18 + 0xd0))();
            bVar7 = (long *)*plVar18 != plVar16;
            if (bVar7) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar12,plVar12 + 3);
              plVar16 = (long *)plVar12[3];
            }
            uVar17 = (ulong)bVar7;
            plVar18 = plVar12 + 6;
            if (plVar3 == plVar18) {
              uVar9 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar18 + 0xd0))();
              if ((long *)*plVar18 != plVar16) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar12 + uVar17 * 3,plVar12 + 6);
                plVar16 = (long *)plVar12[6];
                uVar17 = 2;
              }
              plVar18 = plVar12 + 9;
              if (plVar3 == plVar18) {
                uVar9 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar18 + 0xd0))();
                if ((long *)*plVar18 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar12 + uVar17 * 3,plVar12 + 9);
                  plVar16 = (long *)plVar12[9];
                  uVar17 = 3;
                }
                plVar18 = plVar12 + 0xc;
                if (plVar3 == plVar18) {
                  uVar9 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar18 + 0xd0))();
                  if ((long *)*plVar18 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar12 + uVar17 * 3,plVar12 + 0xc);
                    plVar16 = (long *)plVar12[0xc];
                    uVar17 = 4;
                  }
                  plVar18 = plVar12 + 0xf;
                  if (plVar3 == plVar18) {
                    uVar9 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar18 + 0xd0))();
                    if ((long *)*plVar18 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar12 + uVar17 * 3,plVar12 + 0xf);
                      plVar16 = (long *)plVar12[0xf];
                      uVar17 = 5;
                    }
                    plVar18 = plVar12 + 0x12;
                    uVar9 = 6;
                    if (plVar3 != plVar18) {
                      do {
                        (**(code **)(*(long *)*plVar18 + 0xd0))();
                        if ((long *)*plVar18 != plVar16) {
                          (**(code **)(*plVar16 + 0x100))(plVar16,plVar12 + uVar17 * 3,plVar18);
                          plVar16 = (long *)*plVar18;
                          uVar17 = uVar9;
                        }
                        plVar18 = plVar18 + 3;
                        uVar9 = uVar9 + 1;
                      } while (plVar3 != plVar18);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar16 + 0x100))(plVar16,plVar12 + uVar17 * 3,plVar12 + uVar9 * 3);
        plVar12[600] = 0;
      }
      *(undefined4 *)(lVar11 + 0x12cc) = 0;
    }
  }
  FUN_01454b58(param_1 + 0x6c);
  pcVar10 = (code *)param_1[0x5d];
  if (pcVar10 != (code *)0x0) {
    param_1[0x5f] = 0;
    param_1[0x5e] = 0;
    param_1[0x5d] = 0;
    param_1[0x5c] = 0;
    (*pcVar10)(param_1 + 0x60);
  }
  if ((long *)param_1[0x52] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x52] + 0x20))();
  }
  plVar12 = (long *)param_1[0x4d];
  if (plVar12 != (long *)0x0) {
    plVar3 = plVar12 + 3;
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
      piVar2 = (int *)((long)plVar12 + 0x1c);
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48 = (long *)*plVar12;
        FUN_00c44438(lVar11 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) goto LAB_01aa0d98;
  }
  pcVar10 = (code *)param_1[0x3d];
  if (pcVar10 != (code *)0x0) {
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    (*pcVar10)(param_1 + 0x40);
  }
  if ((long *)param_1[0x3a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3a] + 0x20))();
  }
  if ((long *)param_1[0x36] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x36] + 0x20))();
  }
  if ((long *)param_1[0x26] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x26] + 0x20))();
  }
  plVar12 = (long *)param_1[0x21];
  if (plVar12 != (long *)0x0) {
    plVar3 = plVar12 + 3;
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
      piVar2 = (int *)((long)plVar12 + 0x1c);
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48 = (long *)*plVar12;
        FUN_00c44438(lVar11 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) goto LAB_01aa0d98;
  }
  pcVar10 = (code *)param_1[0x11];
  if (pcVar10 != (code *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    (*pcVar10)(param_1 + 0x14);
  }
  if ((long *)param_1[0xe] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xe] + 0x20))();
  }
  if ((long *)param_1[10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[10] + 0x20))();
  }
  puVar13 = (undefined8 *)param_1[1];
  if (puVar13 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar13 + 3);
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
      piVar2 = (int *)((long)puVar13 + 0x1c);
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48 = (long *)*puVar13;
        FUN_00c44438(lVar11 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) {
LAB_01aa0d98:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


