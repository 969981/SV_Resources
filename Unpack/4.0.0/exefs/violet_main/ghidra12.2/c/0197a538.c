/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0197a538; name: FUN_0197a538
 */


void FUN_0197a538(undefined8 *param_1)

{
  int iVar1;
  short *psVar2;
  long *plVar3;
  long *plVar4;
  short sVar5;
  undefined8 uVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  long *local_68;
  long *local_48;
  
  lVar13 = param_1[0x1b];
  *param_1 = &DAT_04584d40;
  param_1[4] = &PTR_LAB_04584da0;
  param_1[0x1b] = 0;
  if (lVar13 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar7 = *(int *)(lVar11 + 0x12c8);
    iVar1 = iVar7 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar1;
    if (*(int *)(lVar11 + 0x12cc) <= iVar7) {
      *(int *)(lVar11 + 0x12cc) = iVar1;
    }
    FUN_0197ad90(lVar13);
    plVar10 = (long *)param_1[0x1c];
    uVar6 = param_1[0x1d];
    uVar14 = param_1[0x1e];
    uVar12 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar12 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar13,uVar6,uVar14);
    }
    else {
      FUN_00c48fe8(plVar10,lVar13,uVar6,uVar14);
    }
    lVar13 = FUN_00c4e600();
    iVar1 = *(int *)(lVar13 + 0x12c8) + -1;
    *(int *)(lVar13 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_48 = plVar10;
        FUN_00c4ea30(&local_48,&local_68);
        plVar15 = (long *)*plVar10;
        plVar4 = plVar10;
        if (plVar10[600] != 0) {
          plVar4 = plVar10 + plVar10[600] * 3;
        }
        if (plVar4 == plVar10) {
          uVar16 = 0;
          uVar12 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar15) {
            (**(code **)(*plVar15 + 0x100))(plVar15,plVar10,plVar10);
            plVar15 = (long *)*plVar10;
          }
          plVar3 = plVar10 + 3;
          if (plVar4 == plVar3) {
            uVar16 = 0;
            uVar12 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar3 + 0xd0))();
            bVar9 = (long *)*plVar3 != plVar15;
            if (bVar9) {
              (**(code **)(*plVar15 + 0x100))(plVar15,plVar10,plVar10 + 3);
              plVar15 = (long *)plVar10[3];
            }
            uVar16 = (ulong)bVar9;
            plVar3 = plVar10 + 6;
            if (plVar4 == plVar3) {
              uVar12 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar3 + 0xd0))();
              if ((long *)*plVar3 != plVar15) {
                (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + uVar16 * 3,plVar10 + 6);
                plVar15 = (long *)plVar10[6];
                uVar16 = 2;
              }
              plVar3 = plVar10 + 9;
              if (plVar4 == plVar3) {
                uVar12 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar3 + 0xd0))();
                if ((long *)*plVar3 != plVar15) {
                  (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + uVar16 * 3,plVar10 + 9);
                  plVar15 = (long *)plVar10[9];
                  uVar16 = 3;
                }
                plVar3 = plVar10 + 0xc;
                if (plVar4 == plVar3) {
                  uVar12 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  if ((long *)*plVar3 != plVar15) {
                    (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + uVar16 * 3,plVar10 + 0xc);
                    plVar15 = (long *)plVar10[0xc];
                    uVar16 = 4;
                  }
                  plVar3 = plVar10 + 0xf;
                  if (plVar4 == plVar3) {
                    uVar12 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar15) {
                      (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + uVar16 * 3,plVar10 + 0xf);
                      plVar15 = (long *)plVar10[0xf];
                      uVar16 = 5;
                    }
                    uVar12 = 6;
                    for (plVar3 = plVar10 + 0x12; plVar4 != plVar3; plVar3 = plVar3 + 3) {
                      (**(code **)(*(long *)*plVar3 + 0xd0))();
                      if ((long *)*plVar3 != plVar15) {
                        (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + uVar16 * 3,plVar3);
                        plVar15 = (long *)*plVar3;
                        uVar16 = uVar12;
                      }
                      uVar12 = uVar12 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + uVar16 * 3,plVar10 + uVar12 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar13 + 0x12cc) = 0;
    }
  }
  plVar10 = (long *)param_1[0x43];
  if (plVar10 != (long *)0x0) {
    plVar4 = plVar10 + 5;
    do {
      lVar13 = *plVar4;
      iVar1 = (int)lVar13 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *(int *)plVar4 = iVar1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar1 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar13 = param_1[0x1b];
  param_1[0x1b] = 0;
  if (lVar13 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar7 = *(int *)(lVar11 + 0x12c8);
    iVar1 = iVar7 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar1;
    if (*(int *)(lVar11 + 0x12cc) <= iVar7) {
      *(int *)(lVar11 + 0x12cc) = iVar1;
    }
    FUN_0197ad90(lVar13);
    plVar10 = (long *)param_1[0x1c];
    uVar6 = param_1[0x1d];
    uVar14 = param_1[0x1e];
    uVar12 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar12 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar13,uVar6,uVar14);
    }
    else {
      FUN_00c48fe8(plVar10,lVar13,uVar6,uVar14);
    }
    lVar13 = FUN_00c4e600();
    iVar1 = *(int *)(lVar13 + 0x12c8) + -1;
    *(int *)(lVar13 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_48 = plVar10;
        FUN_00c4ea30(&local_48,&local_68);
        plVar15 = (long *)*plVar10;
        plVar4 = plVar10;
        if (plVar10[600] != 0) {
          plVar4 = plVar10 + plVar10[600] * 3;
        }
        if (plVar4 == plVar10) {
          uVar16 = 0;
          uVar12 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar15) {
            (**(code **)(*plVar15 + 0x100))(plVar15,plVar10,plVar10);
            plVar15 = (long *)*plVar10;
          }
          plVar3 = plVar10 + 3;
          if (plVar4 == plVar3) {
            uVar16 = 0;
            uVar12 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar3 + 0xd0))();
            bVar9 = (long *)*plVar3 != plVar15;
            if (bVar9) {
              (**(code **)(*plVar15 + 0x100))(plVar15,plVar10,plVar10 + 3);
              plVar15 = (long *)plVar10[3];
            }
            uVar16 = (ulong)bVar9;
            plVar3 = plVar10 + 6;
            if (plVar4 == plVar3) {
              uVar12 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar3 + 0xd0))();
              if ((long *)*plVar3 != plVar15) {
                (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + uVar16 * 3,plVar10 + 6);
                plVar15 = (long *)plVar10[6];
                uVar16 = 2;
              }
              plVar3 = plVar10 + 9;
              if (plVar4 == plVar3) {
                uVar12 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar3 + 0xd0))();
                if ((long *)*plVar3 != plVar15) {
                  (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + uVar16 * 3,plVar10 + 9);
                  plVar15 = (long *)plVar10[9];
                  uVar16 = 3;
                }
                plVar3 = plVar10 + 0xc;
                if (plVar4 == plVar3) {
                  uVar12 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  if ((long *)*plVar3 != plVar15) {
                    (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + uVar16 * 3,plVar10 + 0xc);
                    plVar15 = (long *)plVar10[0xc];
                    uVar16 = 4;
                  }
                  plVar3 = plVar10 + 0xf;
                  if (plVar4 == plVar3) {
                    uVar12 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar15) {
                      (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + uVar16 * 3,plVar10 + 0xf);
                      plVar15 = (long *)plVar10[0xf];
                      uVar16 = 5;
                    }
                    uVar12 = 6;
                    for (plVar3 = plVar10 + 0x12; plVar4 != plVar3; plVar3 = plVar3 + 3) {
                      (**(code **)(*(long *)*plVar3 + 0xd0))();
                      if ((long *)*plVar3 != plVar15) {
                        (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + uVar16 * 3,plVar3);
                        plVar15 = (long *)*plVar3;
                        uVar16 = uVar12;
                      }
                      uVar12 = uVar12 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + uVar16 * 3,plVar10 + uVar12 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar13 + 0x12cc) = 0;
    }
  }
  plVar10 = (long *)param_1[7];
  *param_1 = &PTR_FUN_045850f0;
  param_1[4] = &PTR_LAB_04585150;
  if (plVar10 != (long *)0x0) {
    lVar13 = plVar10[6];
    psVar2 = (short *)(lVar13 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar9) {
        *psVar2 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


