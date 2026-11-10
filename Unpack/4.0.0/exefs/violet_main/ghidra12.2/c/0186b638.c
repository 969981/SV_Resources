/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0186b638; name: FUN_0186b638
 */


void FUN_0186b638(undefined8 *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *local_70;
  long *plStack_68;
  
  FUN_00c4e600();
  FUN_00c4e600();
  lVar7 = FUN_00c4e600();
  iVar5 = *(int *)(lVar7 + 0x12c8);
  iVar1 = iVar5 + 1;
  *(int *)(lVar7 + 0x12c8) = iVar1;
  if (*(int *)(lVar7 + 0x12cc) <= iVar5) {
    *(int *)(lVar7 + 0x12cc) = iVar1;
  }
  lVar7 = *(long *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0;
  if (lVar7 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar8 = FUN_00c4e600();
    iVar5 = *(int *)(lVar8 + 0x12c8);
    iVar1 = iVar5 + 1;
    *(int *)(lVar8 + 0x12c8) = iVar1;
    if (*(int *)(lVar8 + 0x12cc) <= iVar5) {
      *(int *)(lVar8 + 0x12cc) = iVar1;
    }
    plVar10 = *(long **)(param_2 + 0x28);
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    uVar12 = *(undefined8 *)(param_2 + 0x38);
    uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar7,uVar4,uVar12);
    }
    else {
      FUN_00c48fe8(plVar10,lVar7,uVar4,uVar12);
    }
    lVar7 = FUN_00c4e600();
    iVar1 = *(int *)(lVar7 + 0x12c8) + -1;
    *(int *)(lVar7 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_70 = plVar10 + plVar10[600] * 3;
        plStack_68 = plVar10;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar11 = (long *)*plVar10;
        plVar3 = plVar10;
        if (plVar10[600] != 0) {
          plVar3 = plVar10 + plVar10[600] * 3;
        }
        if (plVar3 == plVar10) {
          uVar13 = 0;
          uVar9 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar11) {
            (**(code **)(*plVar11 + 0x100))(plVar11,plVar10,plVar10);
            plVar11 = (long *)*plVar10;
          }
          plVar2 = plVar10 + 3;
          if (plVar3 == plVar2) {
            uVar13 = 0;
            uVar9 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar11;
            if (bVar6) {
              (**(code **)(*plVar11 + 0x100))(plVar11,plVar10,plVar10 + 3);
              plVar11 = (long *)plVar10[3];
            }
            uVar13 = (ulong)bVar6;
            plVar2 = plVar10 + 6;
            if (plVar3 == plVar2) {
              uVar9 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar11) {
                (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + uVar13 * 3,plVar10 + 6);
                plVar11 = (long *)plVar10[6];
                uVar13 = 2;
              }
              plVar2 = plVar10 + 9;
              if (plVar3 == plVar2) {
                uVar9 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar11) {
                  (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + uVar13 * 3,plVar10 + 9);
                  plVar11 = (long *)plVar10[9];
                  uVar13 = 3;
                }
                plVar2 = plVar10 + 0xc;
                if (plVar3 == plVar2) {
                  uVar9 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar11) {
                    (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + uVar13 * 3,plVar10 + 0xc);
                    plVar11 = (long *)plVar10[0xc];
                    uVar13 = 4;
                  }
                  plVar2 = plVar10 + 0xf;
                  if (plVar3 == plVar2) {
                    uVar9 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar11) {
                      (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + uVar13 * 3,plVar10 + 0xf);
                      plVar11 = (long *)plVar10[0xf];
                      uVar13 = 5;
                    }
                    uVar9 = 6;
                    for (plVar2 = plVar10 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar11) {
                        (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + uVar13 * 3,plVar2);
                        plVar11 = (long *)*plVar2;
                        uVar13 = uVar9;
                      }
                      uVar9 = uVar9 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + uVar13 * 3,plVar10 + uVar9 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar7 + 0x12cc) = 0;
    }
  }
  if (*(long **)(param_2 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x18) + 0x20))();
  }
  plVar10 = (long *)*param_1;
  uVar4 = param_1[1];
  uVar12 = param_1[2];
  uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
  if (((uVar9 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
    (**(code **)(*plVar10 + 0x18))(plVar10,param_2,uVar4,uVar12);
  }
  else {
    FUN_00c48fe8(plVar10,param_2,uVar4,uVar12);
  }
  lVar7 = FUN_00c4e600();
  iVar1 = *(int *)(lVar7 + 0x12c8) + -1;
  *(int *)(lVar7 + 0x12c8) = iVar1;
  if (iVar1 == 0) {
    plVar10 = (long *)FUN_00c4e600();
    if (plVar10[600] != 0) {
      local_70 = plVar10 + plVar10[600] * 3;
      plStack_68 = plVar10;
      FUN_00c4ea30(&plStack_68,&local_70);
      plVar11 = (long *)*plVar10;
      plVar3 = plVar10;
      if (plVar10[600] != 0) {
        plVar3 = plVar10 + plVar10[600] * 3;
      }
      if (plVar3 == plVar10) {
        uVar13 = 0;
        uVar9 = 0;
      }
      else {
        (**(code **)(*(long *)*plVar10 + 0xd0))();
        if ((long *)*plVar10 != plVar11) {
          (**(code **)(*plVar11 + 0x100))(plVar11,plVar10,plVar10);
          plVar11 = (long *)*plVar10;
        }
        plVar2 = plVar10 + 3;
        if (plVar3 == plVar2) {
          uVar13 = 0;
          uVar9 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar2 + 0xd0))();
          bVar6 = (long *)*plVar2 != plVar11;
          if (bVar6) {
            (**(code **)(*plVar11 + 0x100))(plVar11,plVar10,plVar10 + 3);
            plVar11 = (long *)plVar10[3];
          }
          uVar13 = (ulong)bVar6;
          plVar2 = plVar10 + 6;
          if (plVar3 == plVar2) {
            uVar9 = 2;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            if ((long *)*plVar2 != plVar11) {
              (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + uVar13 * 3,plVar10 + 6);
              plVar11 = (long *)plVar10[6];
              uVar13 = 2;
            }
            plVar2 = plVar10 + 9;
            if (plVar3 == plVar2) {
              uVar9 = 3;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar11) {
                (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + uVar13 * 3,plVar10 + 9);
                plVar11 = (long *)plVar10[9];
                uVar13 = 3;
              }
              plVar2 = plVar10 + 0xc;
              if (plVar3 == plVar2) {
                uVar9 = 4;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar11) {
                  (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + uVar13 * 3,plVar10 + 0xc);
                  plVar11 = (long *)plVar10[0xc];
                  uVar13 = 4;
                }
                plVar2 = plVar10 + 0xf;
                if (plVar3 == plVar2) {
                  uVar9 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar11) {
                    (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + uVar13 * 3,plVar10 + 0xf);
                    plVar11 = (long *)plVar10[0xf];
                    uVar13 = 5;
                  }
                  uVar9 = 6;
                  for (plVar2 = plVar10 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar11) {
                      (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + uVar13 * 3,plVar2);
                      plVar11 = (long *)*plVar2;
                      uVar13 = uVar9;
                    }
                    uVar9 = uVar9 + 1;
                  }
                }
              }
            }
          }
        }
      }
      (**(code **)(*plVar11 + 0x100))(plVar11,plVar10 + uVar13 * 3,plVar10 + uVar9 * 3);
      plVar10[600] = 0;
    }
    *(undefined4 *)(lVar7 + 0x12cc) = 0;
  }
  return;
}


