/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d58900; name: FUN_00d58900
 */


void FUN_00d58900(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  long *local_68;
  long *local_48;
  
  if (*(char *)((long)param_1 + 0x92) == '\0') {
    param_1[4] = 0;
    param_1[8] = 0;
  }
  else {
    if (param_1[8] != 0) {
      (**(code **)PTR_DAT_047e1cd0)();
    }
    if (param_1[4] != 0) {
      (**(code **)PTR_DAT_047e1cc8)();
    }
    lVar11 = param_1[8];
    param_1[8] = 0;
    if (lVar11 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar9 = FUN_00c4e600();
      iVar4 = *(int *)(lVar9 + 0x12c8);
      iVar6 = iVar4 + 1;
      *(int *)(lVar9 + 0x12c8) = iVar6;
      if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
        *(int *)(lVar9 + 0x12cc) = iVar6;
      }
      plVar8 = (long *)param_1[9];
      uVar3 = param_1[10];
      uVar12 = param_1[0xb];
      uVar10 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar11,uVar3,uVar12);
      }
      else {
        FUN_00c48fe8(plVar8,lVar11,uVar3,uVar12);
      }
      lVar11 = FUN_00c4e600();
      iVar6 = *(int *)(lVar11 + 0x12c8) + -1;
      *(int *)(lVar11 + 0x12c8) = iVar6;
      if (iVar6 == 0) {
        plVar8 = (long *)FUN_00c4e600();
        if (plVar8[600] != 0) {
          local_68 = plVar8 + plVar8[600] * 3;
          local_48 = plVar8;
          FUN_00c4ea30(&local_48,&local_68);
          plVar13 = (long *)*plVar8;
          plVar2 = plVar8;
          if (plVar8[600] != 0) {
            plVar2 = plVar8 + plVar8[600] * 3;
          }
          if (plVar2 == plVar8) {
            uVar14 = 0;
            uVar10 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar8 + 0xd0))();
            if ((long *)*plVar8 != plVar13) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
              plVar13 = (long *)*plVar8;
            }
            plVar1 = plVar8 + 3;
            if (plVar2 == plVar1) {
              uVar14 = 0;
              uVar10 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              bVar7 = (long *)*plVar1 != plVar13;
              if (bVar7) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
                plVar13 = (long *)plVar8[3];
              }
              uVar14 = (ulong)bVar7;
              plVar1 = plVar8 + 6;
              if (plVar2 == plVar1) {
                uVar10 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 6);
                  plVar13 = (long *)plVar8[6];
                  uVar14 = 2;
                }
                plVar1 = plVar8 + 9;
                if (plVar2 == plVar1) {
                  uVar10 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 9);
                    plVar13 = (long *)plVar8[9];
                    uVar14 = 3;
                  }
                  plVar1 = plVar8 + 0xc;
                  if (plVar2 == plVar1) {
                    uVar10 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 0xc);
                      plVar13 = (long *)plVar8[0xc];
                      uVar14 = 4;
                    }
                    plVar1 = plVar8 + 0xf;
                    if (plVar2 == plVar1) {
                      uVar10 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 0xf);
                        plVar13 = (long *)plVar8[0xf];
                        uVar14 = 5;
                      }
                      uVar10 = 6;
                      for (plVar1 = plVar8 + 0x12; plVar2 != plVar1; plVar1 = plVar1 + 3) {
                        (**(code **)(*(long *)*plVar1 + 0xd0))();
                        if ((long *)*plVar1 != plVar13) {
                          (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar1);
                          plVar13 = (long *)*plVar1;
                          uVar14 = uVar10;
                        }
                        uVar10 = uVar10 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + uVar10 * 3);
          plVar8[600] = 0;
        }
        *(undefined4 *)(lVar11 + 0x12cc) = 0;
      }
    }
  }
  lVar11 = param_1[4];
  param_1[4] = 0;
  if (lVar11 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar6 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar6;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar6;
    }
    plVar8 = (long *)param_1[5];
    uVar3 = param_1[6];
    uVar12 = param_1[7];
    uVar10 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar11,uVar3,uVar12);
    }
    else {
      FUN_00c48fe8(plVar8,lVar11,uVar3,uVar12);
    }
    lVar11 = FUN_00c4e600();
    iVar6 = *(int *)(lVar11 + 0x12c8) + -1;
    *(int *)(lVar11 + 0x12c8) = iVar6;
    if (iVar6 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_68 = plVar8 + plVar8[600] * 3;
        local_48 = plVar8;
        FUN_00c4ea30(&local_48,&local_68);
        plVar13 = (long *)*plVar8;
        plVar2 = plVar8;
        if (plVar8[600] != 0) {
          plVar2 = plVar8 + plVar8[600] * 3;
        }
        if (plVar2 == plVar8) {
          uVar14 = 0;
          uVar10 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
            plVar13 = (long *)*plVar8;
          }
          plVar1 = plVar8 + 3;
          if (plVar2 == plVar1) {
            uVar14 = 0;
            uVar10 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar7 = (long *)*plVar1 != plVar13;
            if (bVar7) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
              plVar13 = (long *)plVar8[3];
            }
            uVar14 = (ulong)bVar7;
            plVar1 = plVar8 + 6;
            if (plVar2 == plVar1) {
              uVar10 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 6);
                plVar13 = (long *)plVar8[6];
                uVar14 = 2;
              }
              plVar1 = plVar8 + 9;
              if (plVar2 == plVar1) {
                uVar10 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 9);
                  plVar13 = (long *)plVar8[9];
                  uVar14 = 3;
                }
                plVar1 = plVar8 + 0xc;
                if (plVar2 == plVar1) {
                  uVar10 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 0xc);
                    plVar13 = (long *)plVar8[0xc];
                    uVar14 = 4;
                  }
                  plVar1 = plVar8 + 0xf;
                  if (plVar2 == plVar1) {
                    uVar10 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 0xf);
                      plVar13 = (long *)plVar8[0xf];
                      uVar14 = 5;
                    }
                    uVar10 = 6;
                    for (plVar1 = plVar8 + 0x12; plVar2 != plVar1; plVar1 = plVar1 + 3) {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar1);
                        plVar13 = (long *)*plVar1;
                        uVar14 = uVar10;
                      }
                      uVar10 = uVar10 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + uVar10 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar11 + 0x12cc) = 0;
    }
  }
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x38))(plVar8,param_1);
    plVar8 = (long *)param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 5;
      do {
        lVar11 = *plVar2;
        iVar6 = (int)lVar11 + -1;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = iVar6;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar11 == 0) goto LAB_00d589f4;
    }
    plVar8 = (long *)param_1[1];
    param_1[2] = 0xffffffffffffffff;
    param_1[3] = 0;
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 5;
      do {
        lVar11 = *plVar2;
        iVar6 = (int)lVar11 + -1;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = iVar6;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar11 == 0) {
LAB_00d589f4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


