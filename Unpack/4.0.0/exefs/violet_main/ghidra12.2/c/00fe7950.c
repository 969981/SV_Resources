/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fe7950; name: FUN_00fe7950
 */


uint FUN_00fe7950(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  short sVar11;
  bool bVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined4 uVar17;
  undefined8 *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  plVar13 = param_1 + 3;
  if ((((*plVar13 == 0) || (*(short *)(*plVar13 + 0x1a) == 0)) && (lVar10 = param_1[1], lVar10 != 0)
      ) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00fe79b8;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00fe79b8:
        bVar12 = false;
      }
      if (bVar12) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 != 0) {
          plVar9 = (long *)(lVar10 + 0xe8);
          lVar14 = *plVar9;
          lVar8 = nn::os::GetCurrentThread();
          if (lVar8 != lVar14) {
            lVar8 = nn::os::GetCurrentThread();
            goto LAB_00fe7c28;
          }
          bVar12 = true;
          goto LAB_00fe7c3c;
        }
        break;
      }
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
LAB_00fe79e4:
  plVar9 = param_1 + 5;
  if ((((*plVar9 == 0) || (*(short *)(*plVar9 + 0x1a) == 0)) && (lVar10 = *plVar13, lVar10 != 0)) &&
     (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
LAB_00fe7ad8:
    sVar3 = *psVar1;
    if (sVar3 == sVar11) {
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00fe7b04;
      bVar12 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00fe7b04:
      bVar12 = false;
    }
    if (!bVar12) goto code_r0x00fe7b0c;
    lVar10 = *(long *)(lVar10 + 0x10);
    if (lVar10 != 0) {
      local_80 = (undefined8 *)&DAT_afc4d6c05abef19e;
      pcStack_78 = "default";
      plVar16 = (long *)(lVar10 + -0x28);
      local_70 = 7;
      local_68 = (long *)0x0;
      lVar8 = FUN_01132f14(plVar16,&local_80);
      if (lVar8 == 0) {
        local_60 = (long *)0x0;
      }
      else {
        FUN_01f86380(&local_60);
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      plVar5 = local_60;
      if (local_60 != (long *)0x0) {
        local_80 = (undefined8 *)0x0;
        pcStack_78 = (char *)0x0;
        FUN_00c43ef0(&local_80,local_60 + 6);
        local_58 = (undefined8 *)0x0;
        uStack_50 = 0;
        if ((long *)local_80[2] == plVar5 + 5) {
          FUN_01e14ab0(&local_58,&local_80);
        }
        puVar15 = local_80;
        if (local_80 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_80 + 3);
          do {
            sVar11 = *psVar1;
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar12) {
              *psVar1 = sVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar11 == 1) {
            piVar2 = (int *)((long)local_80 + 0x1c);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar12) {
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
              lVar8 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar8;
              local_48 = *puVar15;
              FUN_00c44438(lVar8 + 0x8040,&local_48);
            }
          }
          else if (sVar11 == 0) goto LAB_00fe7dec;
        }
        FUN_015b4c34(plVar9,&local_58);
        puVar15 = local_58;
        if (local_58 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_58 + 3);
          do {
            sVar11 = *psVar1;
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar12) {
              *psVar1 = sVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar11 == 1) {
            piVar2 = (int *)((long)local_58 + 0x1c);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar12) {
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
              lVar8 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar8;
              local_80 = (undefined8 *)*puVar15;
              FUN_00c44438(lVar8 + 0x8040,&local_80);
            }
          }
          else if (sVar11 == 0) goto LAB_00fe7dec;
        }
        if ((int)((ulong)(local_60[0x55] - local_60[0x54]) >> 4) * -0x3030303 < 1) {
          uVar17 = 0;
        }
        else {
          uVar17 = *(undefined4 *)(local_60[0x54] + 0x4e4);
        }
        *(undefined4 *)(param_1 + 0x16) = uVar17;
        *(undefined4 *)(param_1 + 0x1f) = 0x3f800000;
        if (local_60 != (long *)0x0) {
          lVar8 = local_60[6];
          psVar1 = (short *)(lVar8 + 0x1a);
          do {
            sVar11 = *psVar1;
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar12) {
              *psVar1 = sVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar11 == 1) {
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*local_60 + 0x50))();
          }
          else if (sVar11 == 0) goto LAB_00fe7bd4;
        }
      }
      lVar10 = *(long *)(lVar10 + 0x70);
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar16 + 0x50))(plVar16);
      }
      else if (sVar11 == 0) goto LAB_00fe7bd4;
    }
  }
LAB_00fe7a00:
  plVar16 = param_1 + 7;
  if ((*plVar16 == 0) || (*(short *)(*plVar16 + 0x1a) == 0)) {
    lVar10 = *plVar13;
    if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar10 + 0x1a);
      sVar11 = *(short *)(lVar10 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar11) {
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00fe7b6c;
          bVar12 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00fe7b6c:
          bVar12 = false;
        }
        if (bVar12) {
          lVar10 = *(long *)(lVar10 + 0x10);
          if (lVar10 != 0) {
            plVar13 = (long *)(lVar10 + -0x28);
            if (*(char *)param_1[0x18] != '\0') {
              lVar8 = FUN_01132f14(plVar13,param_1 + 0x17);
              if (lVar8 != 0) {
                lVar8 = FUN_01132f14(plVar13,param_1 + 0x17);
                if (lVar8 == 0) {
                  local_60 = (long *)0x0;
                }
                else {
                  FUN_01f86380(&local_60);
                  plVar9 = local_60;
                  if (local_60 != (long *)0x0) {
                    local_80 = (undefined8 *)0x0;
                    pcStack_78 = (char *)0x0;
                    FUN_00c43ef0(&local_80,local_60 + 6);
                    local_58 = (undefined8 *)0x0;
                    uStack_50 = 0;
                    if ((long *)local_80[2] == plVar9 + 5) {
                      FUN_01e14ab0(&local_58,&local_80);
                    }
                    puVar15 = local_80;
                    if (local_80 != (undefined8 *)0x0) {
                      psVar1 = (short *)(local_80 + 3);
                      do {
                        sVar11 = *psVar1;
                        cVar4 = '\x01';
                        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                        if (bVar12) {
                          *psVar1 = sVar11 + -1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if (sVar11 == 1) {
                        piVar2 = (int *)((long)local_80 + 0x1c);
                        do {
                          iVar7 = *piVar2;
                          cVar4 = '\x01';
                          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                          if (bVar12) {
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
                          lVar8 = *(long *)PTR_DAT_047d3910;
                          *(long *)PTR_DAT_047d3918 = lVar8;
                          local_48 = *puVar15;
                          FUN_00c44438(lVar8 + 0x8040,&local_48);
                        }
                      }
                      else if (sVar11 == 0) goto LAB_00fe7dec;
                    }
                    FUN_015b4c34(plVar16,&local_58);
                    puVar15 = local_58;
                    if (local_58 != (undefined8 *)0x0) {
                      psVar1 = (short *)(local_58 + 3);
                      do {
                        sVar11 = *psVar1;
                        cVar4 = '\x01';
                        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                        if (bVar12) {
                          *psVar1 = sVar11 + -1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if (sVar11 == 1) {
                        piVar2 = (int *)((long)local_58 + 0x1c);
                        do {
                          iVar7 = *piVar2;
                          cVar4 = '\x01';
                          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                          if (bVar12) {
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
                          lVar8 = *(long *)PTR_DAT_047d3910;
                          *(long *)PTR_DAT_047d3918 = lVar8;
                          local_80 = (undefined8 *)*puVar15;
                          FUN_00c44438(lVar8 + 0x8040,&local_80);
                        }
                      }
                      else if (sVar11 == 0) goto LAB_00fe7dec;
                    }
                    if (local_60 != (long *)0x0) {
                      lVar8 = local_60[6];
                      psVar1 = (short *)(lVar8 + 0x1a);
                      do {
                        sVar11 = *psVar1;
                        cVar4 = '\x01';
                        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                        if (bVar12) {
                          *psVar1 = sVar11 + -1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if (sVar11 == 1) {
                        *(undefined8 *)(lVar8 + 0x10) = 0;
                        (**(code **)(*local_60 + 0x50))();
                      }
                      else if (sVar11 == 0) goto LAB_00fe7bd4;
                    }
                  }
                }
LAB_00fe7ed4:
                lVar10 = *(long *)(lVar10 + 0x70);
                psVar1 = (short *)(lVar10 + 0x1a);
                do {
                  sVar11 = *psVar1;
                  cVar4 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar12) {
                    *psVar1 = sVar11 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (sVar11 != 1) {
                  if (sVar11 != 0) break;
                  goto LAB_00fe7bd4;
                }
                *(undefined8 *)(lVar10 + 0x10) = 0;
                (**(code **)(*plVar13 + 0x50))(plVar13);
                break;
              }
            }
            FUN_01f86580(plVar16,plVar9);
            goto LAB_00fe7ed4;
          }
          break;
        }
        sVar11 = sVar3;
      } while (sVar3 != 0);
    }
  }
  else if ((((*plVar9 == *plVar16) && (*(char *)param_1[0x18] != '\0')) &&
           (lVar10 = *plVar13, lVar10 != 0)) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00fe7aa4;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00fe7aa4:
        bVar12 = false;
      }
      if (bVar12) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 != 0) {
          plVar13 = (long *)(lVar10 + -0x28);
          lVar8 = FUN_01132f14(plVar13,param_1 + 0x17);
          if (lVar8 != 0) {
            lVar8 = FUN_01132f14(plVar13,param_1 + 0x17);
            if (lVar8 == 0) {
              local_60 = (long *)0x0;
            }
            else {
              FUN_01f86380(&local_60);
              plVar9 = local_60;
              if (local_60 != (long *)0x0) {
                local_80 = (undefined8 *)0x0;
                pcStack_78 = (char *)0x0;
                FUN_00c43ef0(&local_80,local_60 + 6);
                local_58 = (undefined8 *)0x0;
                uStack_50 = 0;
                if ((long *)local_80[2] == plVar9 + 5) {
                  FUN_01e14ab0(&local_58,&local_80);
                }
                puVar15 = local_80;
                if (local_80 != (undefined8 *)0x0) {
                  psVar1 = (short *)(local_80 + 3);
                  do {
                    sVar11 = *psVar1;
                    cVar4 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar12) {
                      *psVar1 = sVar11 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (sVar11 == 1) {
                    piVar2 = (int *)((long)local_80 + 0x1c);
                    do {
                      iVar7 = *piVar2;
                      cVar4 = '\x01';
                      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                      if (bVar12) {
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
                      lVar8 = *(long *)PTR_DAT_047d3910;
                      *(long *)PTR_DAT_047d3918 = lVar8;
                      local_48 = *puVar15;
                      FUN_00c44438(lVar8 + 0x8040,&local_48);
                    }
                  }
                  else if (sVar11 == 0) goto LAB_00fe7dec;
                }
                FUN_015b4c34(plVar16,&local_58);
                puVar15 = local_58;
                if (local_58 != (undefined8 *)0x0) {
                  psVar1 = (short *)(local_58 + 3);
                  do {
                    sVar11 = *psVar1;
                    cVar4 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar12) {
                      *psVar1 = sVar11 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (sVar11 == 1) {
                    piVar2 = (int *)((long)local_58 + 0x1c);
                    do {
                      iVar7 = *piVar2;
                      cVar4 = '\x01';
                      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                      if (bVar12) {
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
                      lVar8 = *(long *)PTR_DAT_047d3910;
                      *(long *)PTR_DAT_047d3918 = lVar8;
                      local_80 = (undefined8 *)*puVar15;
                      FUN_00c44438(lVar8 + 0x8040,&local_80);
                    }
                  }
                  else if (sVar11 == 0) {
LAB_00fe7dec:
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl
                              ("count != std::numeric_limits<uint16_t>::max()",
                               "ReleaseWeakReference",
                               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                               ,0x33,"Reference counter underflows.");
                  }
                }
                if (local_60 != (long *)0x0) {
                  lVar8 = local_60[6];
                  psVar1 = (short *)(lVar8 + 0x1a);
                  do {
                    sVar11 = *psVar1;
                    cVar4 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar12) {
                      *psVar1 = sVar11 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (sVar11 == 1) {
                    *(undefined8 *)(lVar8 + 0x10) = 0;
                    (**(code **)(*local_60 + 0x50))();
                  }
                  else if (sVar11 == 0) goto LAB_00fe7bd4;
                }
              }
            }
          }
          lVar10 = *(long *)(lVar10 + 0x70);
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar11 = *psVar1;
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar12) {
              *psVar1 = sVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar11 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar13 + 0x50))(plVar13);
          }
          else if (sVar11 == 0) {
LAB_00fe7bd4:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        break;
      }
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
  uVar6 = (**(code **)(*param_1 + 0x20))();
  return uVar6 & 1;
LAB_00fe7c28:
  if (*plVar9 == 0) goto code_r0x00fe7c30;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
        while (*plVar9 == 0) {
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar12) {
            *plVar9 = lVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00fe7c38;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar12) {
      *plVar9 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00fe7c38:
  bVar12 = false;
LAB_00fe7c3c:
  plVar9 = (long *)FUN_01f86270(*(undefined8 *)(lVar10 + 0x100),*(undefined8 *)(lVar10 + 0x108));
  if ((*(long **)(lVar10 + 0x108) == plVar9) || (*plVar9 == 0)) {
    plVar9 = (long *)FUN_01f86270(*(undefined8 *)(lVar10 + 0x138),*(undefined8 *)(lVar10 + 0x140));
    if (*(long **)(lVar10 + 0x140) == plVar9) {
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
  if (!bVar12) {
    *(undefined8 *)(lVar10 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0xf0));
  }
  if (lVar8 != 0) {
    local_80 = (undefined8 *)0x0;
    pcStack_78 = (char *)0x0;
    FUN_00c43ef0(&local_80,lVar8 + 0x98);
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    if (local_80[2] == lVar8 + 0x28) {
      FUN_00d94688(&local_58,&local_80);
    }
    puVar15 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_80 + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_80 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
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
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_48 = *puVar15;
          FUN_00c44438(lVar8 + 0x8040,&local_48);
        }
      }
      else if (sVar11 == 0) goto LAB_00fe7dec;
    }
    FUN_00d48230(plVar13,&local_58);
    puVar15 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_58 + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_58 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
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
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_80 = (undefined8 *)*puVar15;
          FUN_00c44438(lVar8 + 0x8040,&local_80);
        }
      }
      else if (sVar11 == 0) goto LAB_00fe7dec;
    }
    puVar15 = (undefined8 *)param_1[5];
    param_1[5] = 0;
    if (puVar15 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar15 + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)puVar15 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
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
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_80 = (undefined8 *)*puVar15;
          FUN_00c44438(lVar8 + 0x8040,&local_80);
        }
      }
      else if (sVar11 == 0) goto LAB_00fe7dec;
    }
    param_1[6] = 0;
    puVar15 = (undefined8 *)param_1[7];
    param_1[7] = 0;
    if (puVar15 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar15 + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)puVar15 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
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
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_80 = (undefined8 *)*puVar15;
          FUN_00c44438(lVar8 + 0x8040,&local_80);
        }
      }
      else if (sVar11 == 0) goto LAB_00fe7dec;
    }
    param_1[8] = 0;
  }
  (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))();
  goto LAB_00fe79e4;
code_r0x00fe7c30:
  cVar4 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar12) {
    *plVar9 = lVar8;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00fe7c38;
  goto LAB_00fe7c28;
code_r0x00fe7b0c:
  sVar11 = sVar3;
  if (sVar3 == 0) goto LAB_00fe7a00;
  goto LAB_00fe7ad8;
}


