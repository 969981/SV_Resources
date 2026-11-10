/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014ba27c; name: FUN_014ba27c
 */


void FUN_014ba27c(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  long *local_70;
  long *plStack_68;
  
  lVar9 = *param_2;
  *param_2 = 0;
  lVar10 = *param_1;
  *param_1 = lVar9;
  if (lVar10 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar1;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar1;
    }
    lVar9 = *(long *)(lVar10 + 0x28);
    *(undefined8 *)(lVar10 + 0x28) = 0;
    if (lVar9 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar11 = FUN_00c4e600();
      iVar4 = *(int *)(lVar11 + 0x12c8);
      iVar1 = iVar4 + 1;
      *(int *)(lVar11 + 0x12c8) = iVar1;
      if (*(int *)(lVar11 + 0x12cc) <= iVar4) {
        *(int *)(lVar11 + 0x12cc) = iVar1;
      }
      FUN_01449c9c(lVar9);
      plVar7 = *(long **)(lVar10 + 0x30);
      uVar3 = *(undefined8 *)(lVar10 + 0x38);
      uVar13 = *(undefined8 *)(lVar10 + 0x40);
      uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar6 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,uVar3,uVar13);
      }
      else {
        FUN_00c48fe8(plVar7,lVar9,uVar3,uVar13);
      }
      lVar9 = FUN_00c4e600();
      iVar1 = *(int *)(lVar9 + 0x12c8) + -1;
      *(int *)(lVar9 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar7 = (long *)FUN_00c4e600();
        if (plVar7[600] != 0) {
          local_70 = plVar7 + plVar7[600] * 3;
          plStack_68 = plVar7;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar12 = (long *)*plVar7;
          plVar2 = plVar7;
          if (plVar7[600] != 0) {
            plVar2 = plVar7 + plVar7[600] * 3;
          }
          if (plVar2 == plVar7) {
            uVar15 = 0;
            uVar6 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar7 + 0xd0))();
            if ((long *)*plVar7 != plVar12) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar7,plVar7);
              plVar12 = (long *)*plVar7;
            }
            plVar14 = plVar7 + 3;
            if (plVar2 == plVar14) {
              uVar15 = 0;
              uVar6 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              bVar5 = (long *)*plVar14 != plVar12;
              if (bVar5) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar7,plVar7 + 3);
                plVar12 = (long *)plVar7[3];
              }
              uVar15 = (ulong)bVar5;
              plVar14 = plVar7 + 6;
              if (plVar2 == plVar14) {
                uVar6 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar15 * 3,plVar7 + 6);
                  plVar12 = (long *)plVar7[6];
                  uVar15 = 2;
                }
                plVar14 = plVar7 + 9;
                if (plVar2 == plVar14) {
                  uVar6 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar14 + 0xd0))();
                  if ((long *)*plVar14 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar15 * 3,plVar7 + 9);
                    plVar12 = (long *)plVar7[9];
                    uVar15 = 3;
                  }
                  plVar14 = plVar7 + 0xc;
                  if (plVar2 == plVar14) {
                    uVar6 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar14 + 0xd0))();
                    if ((long *)*plVar14 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar15 * 3,plVar7 + 0xc);
                      plVar12 = (long *)plVar7[0xc];
                      uVar15 = 4;
                    }
                    plVar14 = plVar7 + 0xf;
                    if (plVar2 == plVar14) {
                      uVar6 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar14 + 0xd0))();
                      if ((long *)*plVar14 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar15 * 3,plVar7 + 0xf);
                        plVar12 = (long *)plVar7[0xf];
                        uVar15 = 5;
                      }
                      uVar6 = 6;
                      for (plVar14 = plVar7 + 0x12; plVar2 != plVar14; plVar14 = plVar14 + 3) {
                        (**(code **)(*(long *)*plVar14 + 0xd0))();
                        if ((long *)*plVar14 != plVar12) {
                          (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar15 * 3,plVar14);
                          plVar12 = (long *)*plVar14;
                          uVar15 = uVar6;
                        }
                        uVar6 = uVar6 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar15 * 3,plVar7 + uVar6 * 3);
          plVar7[600] = 0;
        }
        *(undefined4 *)(lVar9 + 0x12cc) = 0;
      }
    }
    if (*(long **)(lVar10 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(lVar10 + 0x18) + 0x20))();
    }
    plVar7 = (long *)param_1[1];
    lVar9 = param_1[2];
    lVar11 = param_1[3];
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar10,lVar9,lVar11);
    }
    else {
      FUN_00c48fe8(plVar7,lVar10,lVar9,lVar11);
    }
    lVar9 = FUN_00c4e600();
    iVar1 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar7 = (long *)FUN_00c4e600();
      if (plVar7[600] != 0) {
        local_70 = plVar7 + plVar7[600] * 3;
        plStack_68 = plVar7;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar12 = (long *)*plVar7;
        plVar2 = plVar7;
        if (plVar7[600] != 0) {
          plVar2 = plVar7 + plVar7[600] * 3;
        }
        if (plVar2 == plVar7) {
          uVar15 = 0;
          uVar6 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar7 + 0xd0))();
          if ((long *)*plVar7 != plVar12) {
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar7,plVar7);
            plVar12 = (long *)*plVar7;
          }
          plVar14 = plVar7 + 3;
          if (plVar2 == plVar14) {
            uVar15 = 0;
            uVar6 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            bVar5 = (long *)*plVar14 != plVar12;
            if (bVar5) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar7,plVar7 + 3);
              plVar12 = (long *)plVar7[3];
            }
            uVar15 = (ulong)bVar5;
            plVar14 = plVar7 + 6;
            if (plVar2 == plVar14) {
              uVar6 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              if ((long *)*plVar14 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar15 * 3,plVar7 + 6);
                plVar12 = (long *)plVar7[6];
                uVar15 = 2;
              }
              plVar14 = plVar7 + 9;
              if (plVar2 == plVar14) {
                uVar6 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar15 * 3,plVar7 + 9);
                  plVar12 = (long *)plVar7[9];
                  uVar15 = 3;
                }
                plVar14 = plVar7 + 0xc;
                if (plVar2 == plVar14) {
                  uVar6 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar14 + 0xd0))();
                  if ((long *)*plVar14 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar15 * 3,plVar7 + 0xc);
                    plVar12 = (long *)plVar7[0xc];
                    uVar15 = 4;
                  }
                  plVar14 = plVar7 + 0xf;
                  if (plVar2 == plVar14) {
                    uVar6 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar14 + 0xd0))();
                    if ((long *)*plVar14 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar15 * 3,plVar7 + 0xf);
                      plVar12 = (long *)plVar7[0xf];
                      uVar15 = 5;
                    }
                    uVar6 = 6;
                    for (plVar14 = plVar7 + 0x12; plVar2 != plVar14; plVar14 = plVar14 + 3) {
                      (**(code **)(*(long *)*plVar14 + 0xd0))();
                      if ((long *)*plVar14 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar15 * 3,plVar14);
                        plVar12 = (long *)*plVar14;
                        uVar15 = uVar6;
                      }
                      uVar6 = uVar6 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar15 * 3,plVar7 + uVar6 * 3);
        plVar7[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  lVar9 = param_2[1];
  lVar10 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar10;
  param_1[1] = lVar9;
  return;
}


