/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0128dae8; name: FUN_0128dae8
 */


void FUN_0128dae8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  int *piVar4;
  long *plVar5;
  short sVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long *local_60;
  long *local_58;
  
  lVar15 = param_1[0x1f];
  *param_1 = (long)&DAT_0459ca88;
  param_1[4] = (long)&PTR_LAB_0459cb68;
  param_1[5] = (long)&DAT_0459cbb8;
  param_1[0x1f] = 0;
  if (lVar15 != 0) {
    FUN_00ea621c(param_1 + 0x20);
  }
  plVar11 = (long *)param_1[0x1e];
  if (plVar11 != (long *)0x0) {
    plVar5 = plVar11 + 5;
    do {
      lVar15 = *plVar5;
      iVar10 = (int)lVar15 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar9) {
        *(int *)plVar5 = iVar10;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar15 == 0) goto LAB_0128dd7c;
  }
  plVar11 = (long *)param_1[0x1d];
  if (plVar11 != (long *)0x0) {
    plVar5 = plVar11 + 5;
    do {
      lVar15 = *plVar5;
      iVar10 = (int)lVar15 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar9) {
        *(int *)plVar5 = iVar10;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar15 == 0) goto LAB_0128dd7c;
  }
  lVar15 = param_1[0x14];
  param_1[0x14] = 0;
  if (lVar15 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar12 = FUN_00c4e600();
    iVar7 = *(int *)(lVar12 + 0x12c8);
    iVar10 = iVar7 + 1;
    *(int *)(lVar12 + 0x12c8) = iVar10;
    if (*(int *)(lVar12 + 0x12cc) <= iVar7) {
      *(int *)(lVar12 + 0x12cc) = iVar10;
    }
    plVar11 = (long *)param_1[0x15];
    lVar12 = param_1[0x16];
    lVar17 = param_1[0x17];
    uVar13 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar13 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar15,lVar12,lVar17);
    }
    else {
      FUN_00c48fe8(plVar11,lVar15,lVar12,lVar17);
    }
    lVar15 = FUN_00c4e600();
    iVar10 = *(int *)(lVar15 + 0x12c8) + -1;
    *(int *)(lVar15 + 0x12c8) = iVar10;
    if (iVar10 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_60 = plVar11 + plVar11[600] * 3;
        local_58 = plVar11;
        FUN_00c4ea30(&local_58,&local_60);
        plVar18 = (long *)*plVar11;
        plVar5 = plVar11;
        if (plVar11[600] != 0) {
          plVar5 = plVar11 + plVar11[600] * 3;
        }
        if (plVar5 == plVar11) {
          uVar20 = 0;
          uVar13 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar11 + 0xd0))();
          if ((long *)*plVar11 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar11,plVar11);
            plVar18 = (long *)*plVar11;
          }
          plVar19 = plVar11 + 3;
          if (plVar5 == plVar19) {
            uVar20 = 0;
            uVar13 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar19 + 0xd0))();
            bVar9 = (long *)*plVar19 != plVar18;
            if (bVar9) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar11,plVar11 + 3);
              plVar18 = (long *)plVar11[3];
            }
            uVar20 = (ulong)bVar9;
            plVar19 = plVar11 + 6;
            if (plVar5 == plVar19) {
              uVar13 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar19 + 0xd0))();
              if ((long *)*plVar19 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar11 + uVar20 * 3,plVar11 + 6);
                plVar18 = (long *)plVar11[6];
                uVar20 = 2;
              }
              plVar19 = plVar11 + 9;
              if (plVar5 == plVar19) {
                uVar13 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar19 + 0xd0))();
                if ((long *)*plVar19 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar11 + uVar20 * 3,plVar11 + 9);
                  plVar18 = (long *)plVar11[9];
                  uVar20 = 3;
                }
                plVar19 = plVar11 + 0xc;
                if (plVar5 == plVar19) {
                  uVar13 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar19 + 0xd0))();
                  if ((long *)*plVar19 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar11 + uVar20 * 3,plVar11 + 0xc);
                    plVar18 = (long *)plVar11[0xc];
                    uVar20 = 4;
                  }
                  plVar19 = plVar11 + 0xf;
                  if (plVar5 == plVar19) {
                    uVar13 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar19 + 0xd0))();
                    if ((long *)*plVar19 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar11 + uVar20 * 3,plVar11 + 0xf);
                      plVar18 = (long *)plVar11[0xf];
                      uVar20 = 5;
                    }
                    uVar13 = 6;
                    for (plVar19 = plVar11 + 0x12; plVar5 != plVar19; plVar19 = plVar19 + 3) {
                      (**(code **)(*(long *)*plVar19 + 0xd0))();
                      if ((long *)*plVar19 != plVar18) {
                        (**(code **)(*plVar18 + 0x100))(plVar18,plVar11 + uVar20 * 3,plVar19);
                        plVar18 = (long *)*plVar19;
                        uVar20 = uVar13;
                      }
                      uVar13 = uVar13 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar11 + uVar20 * 3,plVar11 + uVar13 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar15 + 0x12cc) = 0;
    }
  }
  lVar15 = param_1[0x10];
  param_1[0x10] = 0;
  if (lVar15 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar12 = FUN_00c4e600();
    iVar7 = *(int *)(lVar12 + 0x12c8);
    iVar10 = iVar7 + 1;
    *(int *)(lVar12 + 0x12c8) = iVar10;
    if (*(int *)(lVar12 + 0x12cc) <= iVar7) {
      *(int *)(lVar12 + 0x12cc) = iVar10;
    }
    plVar11 = (long *)param_1[0x11];
    lVar12 = param_1[0x12];
    lVar17 = param_1[0x13];
    uVar13 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar13 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar15,lVar12,lVar17);
    }
    else {
      FUN_00c48fe8(plVar11,lVar15,lVar12,lVar17);
    }
    lVar15 = FUN_00c4e600();
    iVar10 = *(int *)(lVar15 + 0x12c8) + -1;
    *(int *)(lVar15 + 0x12c8) = iVar10;
    if (iVar10 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_60 = plVar11 + plVar11[600] * 3;
        local_58 = plVar11;
        FUN_00c4ea30(&local_58,&local_60);
        plVar18 = (long *)*plVar11;
        plVar5 = plVar11;
        if (plVar11[600] != 0) {
          plVar5 = plVar11 + plVar11[600] * 3;
        }
        if (plVar5 == plVar11) {
          uVar20 = 0;
          uVar13 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar11 + 0xd0))();
          if ((long *)*plVar11 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar11,plVar11);
            plVar18 = (long *)*plVar11;
          }
          plVar19 = plVar11 + 3;
          if (plVar5 == plVar19) {
            uVar20 = 0;
            uVar13 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar19 + 0xd0))();
            bVar9 = (long *)*plVar19 != plVar18;
            if (bVar9) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar11,plVar11 + 3);
              plVar18 = (long *)plVar11[3];
            }
            uVar20 = (ulong)bVar9;
            plVar19 = plVar11 + 6;
            if (plVar5 == plVar19) {
              uVar13 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar19 + 0xd0))();
              if ((long *)*plVar19 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar11 + uVar20 * 3,plVar11 + 6);
                plVar18 = (long *)plVar11[6];
                uVar20 = 2;
              }
              plVar19 = plVar11 + 9;
              if (plVar5 == plVar19) {
                uVar13 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar19 + 0xd0))();
                if ((long *)*plVar19 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar11 + uVar20 * 3,plVar11 + 9);
                  plVar18 = (long *)plVar11[9];
                  uVar20 = 3;
                }
                plVar19 = plVar11 + 0xc;
                if (plVar5 == plVar19) {
                  uVar13 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar19 + 0xd0))();
                  if ((long *)*plVar19 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar11 + uVar20 * 3,plVar11 + 0xc);
                    plVar18 = (long *)plVar11[0xc];
                    uVar20 = 4;
                  }
                  plVar19 = plVar11 + 0xf;
                  if (plVar5 == plVar19) {
                    uVar13 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar19 + 0xd0))();
                    if ((long *)*plVar19 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar11 + uVar20 * 3,plVar11 + 0xf);
                      plVar18 = (long *)plVar11[0xf];
                      uVar20 = 5;
                    }
                    plVar19 = plVar11 + 0x12;
                    if (plVar5 == plVar19) {
                      uVar13 = 6;
                    }
                    else {
                      uVar13 = 6;
                      do {
                        (**(code **)(*(long *)*plVar19 + 0xd0))();
                        if ((long *)*plVar19 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar11 + uVar20 * 3,plVar19);
                          plVar18 = (long *)*plVar19;
                          uVar20 = uVar13;
                        }
                        plVar19 = plVar19 + 3;
                        uVar13 = uVar13 + 1;
                      } while (plVar5 != plVar19);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar11 + uVar20 * 3,plVar11 + uVar13 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar15 + 0x12cc) = 0;
    }
  }
  lVar15 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar15 != 0) {
    FUN_0128e4e0(param_1 + 0xd);
  }
  plVar11 = (long *)param_1[10];
  if (plVar11 != (long *)0x0) {
    plVar5 = plVar11 + 5;
    do {
      lVar15 = *plVar5;
      iVar10 = (int)lVar15 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar9) {
        *(int *)plVar5 = iVar10;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar15 == 0) goto LAB_0128dd7c;
  }
  plVar11 = (long *)param_1[9];
  if (plVar11 != (long *)0x0) {
    plVar5 = plVar11 + 5;
    do {
      lVar15 = *plVar5;
      iVar10 = (int)lVar15 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar9) {
        *(int *)plVar5 = iVar10;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar15 == 0) goto LAB_0128dd7c;
  }
  plVar11 = (long *)param_1[8];
  if (plVar11 != (long *)0x0) {
    plVar5 = plVar11 + 5;
    do {
      lVar15 = *plVar5;
      iVar10 = (int)lVar15 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar9) {
        *(int *)plVar5 = iVar10;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar15 == 0) {
LAB_0128dd7c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar16 = (undefined8 *)param_1[6];
  if (puVar16 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar16 + 3);
    do {
      sVar6 = *psVar3;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar9) {
        *psVar3 = sVar6 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar6 == 1) {
      piVar4 = (int *)((long)puVar16 + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar9) {
          *piVar4 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_58 = (long *)*puVar16;
        FUN_00c44438(lVar15 + 0x8040,&local_58);
      }
    }
    else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


