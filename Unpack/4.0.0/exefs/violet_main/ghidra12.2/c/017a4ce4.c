/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017a4ce4; name: FUN_017a4ce4
 */


void FUN_017a4ce4(undefined8 *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  short sVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  long *local_88;
  ulong local_80;
  long *local_70;
  long *local_68;
  
  FUN_00c4e600();
  FUN_00c4e600();
  lVar9 = FUN_00c4e600();
  iVar5 = *(int *)(lVar9 + 0x12c8);
  iVar8 = iVar5 + 1;
  *(int *)(lVar9 + 0x12c8) = iVar8;
  if (*(int *)(lVar9 + 0x12cc) <= iVar5) {
    *(int *)(lVar9 + 0x12cc) = iVar8;
  }
  uVar14 = param_1[1];
  if (0x8f < uVar14) {
    uVar14 = uVar14 / 0x90;
    uVar13 = 0;
    if (uVar14 < 2) {
      uVar14 = 1;
    }
    do {
      lVar9 = param_2 + uVar13 * 0x90;
      lVar15 = *(long *)(lVar9 + 0x60);
      *(undefined8 *)(lVar9 + 0x60) = 0;
      if (lVar15 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar9 = FUN_00c4e600();
        iVar5 = *(int *)(lVar9 + 0x12c8);
        iVar8 = iVar5 + 1;
        *(int *)(lVar9 + 0x12c8) = iVar8;
        if (*(int *)(lVar9 + 0x12cc) <= iVar5) {
          *(int *)(lVar9 + 0x12cc) = iVar8;
        }
        lVar9 = param_2 + uVar13 * 0x90;
        plVar16 = *(long **)(lVar9 + 0x68);
        uVar11 = *(undefined8 *)(lVar9 + 0x70);
        uVar17 = *(undefined8 *)(lVar9 + 0x78);
        uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
        if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar16 + 0x18))(plVar16,lVar15,uVar11,uVar17);
        }
        else {
          FUN_00c48fe8(plVar16,lVar15,uVar11,uVar17);
        }
        lVar9 = FUN_00c4e600();
        iVar8 = *(int *)(lVar9 + 0x12c8) + -1;
        *(int *)(lVar9 + 0x12c8) = iVar8;
        if (iVar8 == 0) {
          plVar16 = (long *)FUN_00c4e600();
          if (plVar16[600] != 0) {
            local_70 = plVar16 + plVar16[600] * 3;
            local_68 = plVar16;
            FUN_00c4ea30(&local_68,&local_70);
            plVar12 = (long *)*plVar16;
            plVar3 = plVar16;
            if (plVar16[600] != 0) {
              plVar3 = plVar16 + plVar16[600] * 3;
            }
            if (plVar3 == plVar16) {
              local_80 = 0;
              uVar10 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar16 + 0xd0))();
              if ((long *)*plVar16 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar16,plVar16);
                plVar12 = (long *)*plVar16;
              }
              plVar2 = plVar16 + 3;
              if (plVar3 == plVar2) {
                local_80 = 0;
                uVar10 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                bVar7 = (long *)*plVar2 != plVar12;
                if (bVar7) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar16,plVar16 + 3);
                  plVar12 = (long *)plVar16[3];
                }
                local_80 = (ulong)bVar7;
                plVar2 = plVar16 + 6;
                if (plVar3 == plVar2) {
                  uVar10 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar16 + local_80 * 3,plVar16 + 6);
                    plVar12 = (long *)plVar16[6];
                    local_80 = 2;
                  }
                  plVar2 = plVar16 + 9;
                  if (plVar3 == plVar2) {
                    uVar10 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar16 + local_80 * 3,plVar16 + 9);
                      plVar12 = (long *)plVar16[9];
                      local_80 = 3;
                    }
                    plVar2 = plVar16 + 0xc;
                    if (plVar3 == plVar2) {
                      uVar10 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))
                                  (plVar12,plVar16 + local_80 * 3,plVar16 + 0xc);
                        plVar12 = (long *)plVar16[0xc];
                        local_80 = 4;
                      }
                      plVar2 = plVar16 + 0xf;
                      if (plVar3 == plVar2) {
                        uVar10 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar12) {
                          (**(code **)(*plVar12 + 0x100))
                                    (plVar12,plVar16 + local_80 * 3,plVar16 + 0xf);
                          plVar12 = (long *)plVar16[0xf];
                          local_80 = 5;
                        }
                        local_88 = plVar16 + 0x12;
                        uVar10 = 6;
                        if (plVar3 != local_88) {
                          do {
                            (**(code **)(*(long *)*local_88 + 0xd0))();
                            if ((long *)*local_88 != plVar12) {
                              (**(code **)(*plVar12 + 0x100))
                                        (plVar12,plVar16 + local_80 * 3,local_88);
                              plVar12 = (long *)*local_88;
                              local_80 = uVar10;
                            }
                            local_88 = local_88 + 3;
                            uVar10 = uVar10 + 1;
                          } while (plVar3 != local_88);
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar16 + local_80 * 3,plVar16 + uVar10 * 3);
            plVar16[600] = 0;
          }
          *(undefined4 *)(lVar9 + 0x12cc) = 0;
        }
      }
      lVar9 = param_2 + uVar13 * 0x90;
      lVar15 = *(long *)(lVar9 + 0x40);
      *(undefined8 *)(lVar9 + 0x40) = 0;
      if (lVar15 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar9 = FUN_00c4e600();
        iVar5 = *(int *)(lVar9 + 0x12c8);
        iVar8 = iVar5 + 1;
        *(int *)(lVar9 + 0x12c8) = iVar8;
        if (*(int *)(lVar9 + 0x12cc) <= iVar5) {
          *(int *)(lVar9 + 0x12cc) = iVar8;
        }
        lVar9 = param_2 + uVar13 * 0x90;
        plVar16 = *(long **)(lVar9 + 0x48);
        uVar11 = *(undefined8 *)(lVar9 + 0x50);
        uVar17 = *(undefined8 *)(lVar9 + 0x58);
        uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
        if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar16 + 0x18))(plVar16,lVar15,uVar11,uVar17);
        }
        else {
          FUN_00c48fe8(plVar16,lVar15,uVar11,uVar17);
        }
        lVar9 = FUN_00c4e600();
        iVar8 = *(int *)(lVar9 + 0x12c8) + -1;
        *(int *)(lVar9 + 0x12c8) = iVar8;
        if (iVar8 == 0) {
          plVar16 = (long *)FUN_00c4e600();
          if (plVar16[600] != 0) {
            local_70 = plVar16 + plVar16[600] * 3;
            local_68 = plVar16;
            FUN_00c4ea30(&local_68,&local_70);
            plVar12 = (long *)*plVar16;
            plVar3 = plVar16;
            if (plVar16[600] != 0) {
              plVar3 = plVar16 + plVar16[600] * 3;
            }
            if (plVar3 == plVar16) {
              local_80 = 0;
              uVar10 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar16 + 0xd0))();
              if ((long *)*plVar16 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar16,plVar16);
                plVar12 = (long *)*plVar16;
              }
              plVar2 = plVar16 + 3;
              if (plVar3 == plVar2) {
                local_80 = 0;
                uVar10 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                bVar7 = (long *)*plVar2 != plVar12;
                if (bVar7) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar16,plVar16 + 3);
                  plVar12 = (long *)plVar16[3];
                }
                local_80 = (ulong)bVar7;
                plVar2 = plVar16 + 6;
                if (plVar3 == plVar2) {
                  uVar10 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar16 + local_80 * 3,plVar16 + 6);
                    plVar12 = (long *)plVar16[6];
                    local_80 = 2;
                  }
                  plVar2 = plVar16 + 9;
                  if (plVar3 == plVar2) {
                    uVar10 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar16 + local_80 * 3,plVar16 + 9);
                      plVar12 = (long *)plVar16[9];
                      local_80 = 3;
                    }
                    plVar2 = plVar16 + 0xc;
                    if (plVar3 == plVar2) {
                      uVar10 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))
                                  (plVar12,plVar16 + local_80 * 3,plVar16 + 0xc);
                        plVar12 = (long *)plVar16[0xc];
                        local_80 = 4;
                      }
                      plVar2 = plVar16 + 0xf;
                      if (plVar3 == plVar2) {
                        uVar10 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar12) {
                          (**(code **)(*plVar12 + 0x100))
                                    (plVar12,plVar16 + local_80 * 3,plVar16 + 0xf);
                          plVar12 = (long *)plVar16[0xf];
                          local_80 = 5;
                        }
                        local_88 = plVar16 + 0x12;
                        uVar10 = 6;
                        if (plVar3 != local_88) {
                          do {
                            (**(code **)(*(long *)*local_88 + 0xd0))();
                            if ((long *)*local_88 != plVar12) {
                              (**(code **)(*plVar12 + 0x100))
                                        (plVar12,plVar16 + local_80 * 3,local_88);
                              plVar12 = (long *)*local_88;
                              local_80 = uVar10;
                            }
                            local_88 = local_88 + 3;
                            uVar10 = uVar10 + 1;
                          } while (plVar3 != local_88);
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar16 + local_80 * 3,plVar16 + uVar10 * 3);
            plVar16[600] = 0;
          }
          *(undefined4 *)(lVar9 + 0x12cc) = 0;
        }
      }
      plVar16 = *(long **)(param_2 + uVar13 * 0x90 + 8);
      if (plVar16 != (long *)0x0) {
        plVar3 = plVar16 + 3;
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
          piVar1 = (int *)((long)plVar16 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = -1;
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
            local_68 = (long *)*plVar16;
            FUN_00c44438(lVar9 + 0x8040,&local_68);
          }
        }
        else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar14);
    uVar14 = param_1[1];
  }
  plVar16 = (long *)*param_1;
  uVar11 = param_1[2];
  uVar13 = (**(code **)(*plVar16 + 0xf8))(plVar16);
  if (((uVar13 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
    (**(code **)(*plVar16 + 0x18))(plVar16,param_2,uVar14,uVar11);
  }
  else {
    FUN_00c48fe8(plVar16,param_2,uVar14,uVar11);
  }
  lVar9 = FUN_00c4e600();
  iVar8 = *(int *)(lVar9 + 0x12c8) + -1;
  *(int *)(lVar9 + 0x12c8) = iVar8;
  if (iVar8 == 0) {
    plVar16 = (long *)FUN_00c4e600();
    if (plVar16[600] != 0) {
      local_70 = plVar16 + plVar16[600] * 3;
      local_68 = plVar16;
      FUN_00c4ea30(&local_68,&local_70);
      plVar12 = (long *)*plVar16;
      plVar3 = plVar16;
      if (plVar16[600] != 0) {
        plVar3 = plVar16 + plVar16[600] * 3;
      }
      if (plVar3 == plVar16) {
        uVar13 = 0;
        uVar14 = 0;
      }
      else {
        (**(code **)(*(long *)*plVar16 + 0xd0))();
        if ((long *)*plVar16 != plVar12) {
          (**(code **)(*plVar12 + 0x100))(plVar12,plVar16,plVar16);
          plVar12 = (long *)*plVar16;
        }
        plVar2 = plVar16 + 3;
        if (plVar3 == plVar2) {
          uVar13 = 0;
          uVar14 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar2 + 0xd0))();
          bVar7 = (long *)*plVar2 != plVar12;
          if (bVar7) {
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar16,plVar16 + 3);
            plVar12 = (long *)plVar16[3];
          }
          uVar13 = (ulong)bVar7;
          plVar2 = plVar16 + 6;
          if (plVar3 == plVar2) {
            uVar14 = 2;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            if ((long *)*plVar2 != plVar12) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar16 + uVar13 * 3,plVar16 + 6);
              plVar12 = (long *)plVar16[6];
              uVar13 = 2;
            }
            plVar2 = plVar16 + 9;
            if (plVar3 == plVar2) {
              uVar14 = 3;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar16 + uVar13 * 3,plVar16 + 9);
                plVar12 = (long *)plVar16[9];
                uVar13 = 3;
              }
              plVar2 = plVar16 + 0xc;
              if (plVar3 == plVar2) {
                uVar14 = 4;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar16 + uVar13 * 3,plVar16 + 0xc);
                  plVar12 = (long *)plVar16[0xc];
                  uVar13 = 4;
                }
                plVar2 = plVar16 + 0xf;
                if (plVar3 == plVar2) {
                  uVar14 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar16 + uVar13 * 3,plVar16 + 0xf);
                    plVar12 = (long *)plVar16[0xf];
                    uVar13 = 5;
                  }
                  uVar14 = 6;
                  for (plVar2 = plVar16 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar16 + uVar13 * 3,plVar2);
                      plVar12 = (long *)*plVar2;
                      uVar13 = uVar14;
                    }
                    uVar14 = uVar14 + 1;
                  }
                }
              }
            }
          }
        }
      }
      (**(code **)(*plVar12 + 0x100))(plVar12,plVar16 + uVar13 * 3,plVar16 + uVar14 * 3);
      plVar16[600] = 0;
    }
    *(undefined4 *)(lVar9 + 0x12cc) = 0;
  }
  return;
}


