/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e4e5a0; name: FUN_00e4e5a0
 */


void FUN_00e4e5a0(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long local_88;
  long *local_80;
  long local_78;
  long local_70;
  long *local_68;
  long *local_48;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00e4ed40(&local_88,*(undefined8 *)(param_2 + 0x60));
  lVar6 = local_88;
  local_88 = 0;
  lVar10 = *param_1;
  *param_1 = lVar6;
  if (lVar10 == 0) {
    param_1[2] = local_78;
    param_1[3] = local_70;
    param_1[1] = (long)local_80;
  }
  else {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar6 = FUN_00c4e600();
    iVar4 = *(int *)(lVar6 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar6 + 0x12c8) = iVar1;
    if (*(int *)(lVar6 + 0x12cc) <= iVar4) {
      *(int *)(lVar6 + 0x12cc) = iVar1;
    }
    FUN_00e4f414(lVar10);
    plVar8 = (long *)param_1[1];
    lVar6 = param_1[2];
    lVar12 = param_1[3];
    uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar7 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar10,lVar6,lVar12);
    }
    else {
      FUN_00c48fe8(plVar8,lVar10,lVar6,lVar12);
    }
    lVar6 = FUN_00c4e600();
    iVar1 = *(int *)(lVar6 + 0x12c8) + -1;
    *(int *)(lVar6 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_68 = plVar8 + plVar8[600] * 3;
        local_48 = plVar8;
        FUN_00c4ea30(&local_48,&local_68);
        plVar11 = (long *)*plVar8;
        plVar3 = plVar8;
        if (plVar8[600] != 0) {
          plVar3 = plVar8 + plVar8[600] * 3;
        }
        if (plVar3 == plVar8) {
          uVar13 = 0;
          uVar7 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar11) {
            (**(code **)(*plVar11 + 0x100))(plVar11,plVar8,plVar8);
            plVar11 = (long *)*plVar8;
          }
          plVar2 = plVar8 + 3;
          if (plVar3 == plVar2) {
            uVar13 = 0;
            uVar7 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar5 = (long *)*plVar2 != plVar11;
            if (bVar5) {
              (**(code **)(*plVar11 + 0x100))(plVar11,plVar8,plVar8 + 3);
              plVar11 = (long *)plVar8[3];
            }
            uVar13 = (ulong)bVar5;
            plVar2 = plVar8 + 6;
            if (plVar3 == plVar2) {
              uVar7 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar11) {
                (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + uVar13 * 3,plVar8 + 6);
                plVar11 = (long *)plVar8[6];
                uVar13 = 2;
              }
              plVar2 = plVar8 + 9;
              if (plVar3 == plVar2) {
                uVar7 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar11) {
                  (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + uVar13 * 3,plVar8 + 9);
                  plVar11 = (long *)plVar8[9];
                  uVar13 = 3;
                }
                plVar2 = plVar8 + 0xc;
                if (plVar3 == plVar2) {
                  uVar7 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar11) {
                    (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + uVar13 * 3,plVar8 + 0xc);
                    plVar11 = (long *)plVar8[0xc];
                    uVar13 = 4;
                  }
                  plVar2 = plVar8 + 0xf;
                  if (plVar3 == plVar2) {
                    uVar7 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar11) {
                      (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + uVar13 * 3,plVar8 + 0xf);
                      plVar11 = (long *)plVar8[0xf];
                      uVar13 = 5;
                    }
                    uVar7 = 6;
                    for (plVar2 = plVar8 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar11) {
                        (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + uVar13 * 3,plVar2);
                        plVar11 = (long *)*plVar2;
                        uVar13 = uVar7;
                      }
                      uVar7 = uVar7 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + uVar13 * 3,plVar8 + uVar7 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar6 + 0x12cc) = 0;
    }
    lVar6 = local_88;
    param_1[1] = (long)local_80;
    param_1[2] = local_78;
    param_1[3] = local_70;
    local_88 = 0;
    if (lVar6 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar10 = FUN_00c4e600();
      iVar4 = *(int *)(lVar10 + 0x12c8);
      iVar1 = iVar4 + 1;
      *(int *)(lVar10 + 0x12c8) = iVar1;
      if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
        *(int *)(lVar10 + 0x12cc) = iVar1;
      }
      FUN_00e4f414(lVar6);
      uVar7 = (**(code **)(*local_80 + 0xf8))(local_80);
      if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*local_80 + 0x18))(local_80,lVar6,local_78,local_70);
      }
      else {
        FUN_00c48fe8(local_80,lVar6,local_78,local_70);
      }
      lVar6 = FUN_00c4e600();
      iVar1 = *(int *)(lVar6 + 0x12c8) + -1;
      *(int *)(lVar6 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar8 = (long *)FUN_00c4e600();
        if (plVar8[600] != 0) {
          local_68 = plVar8 + plVar8[600] * 3;
          local_48 = plVar8;
          FUN_00c4ea30(&local_48,&local_68);
          plVar11 = (long *)*plVar8;
          plVar3 = plVar8;
          if (plVar8[600] != 0) {
            plVar3 = plVar8 + plVar8[600] * 3;
          }
          if (plVar3 == plVar8) {
            uVar13 = 0;
            uVar7 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar8 + 0xd0))();
            if ((long *)*plVar8 != plVar11) {
              (**(code **)(*plVar11 + 0x100))(plVar11,plVar8,plVar8);
              plVar11 = (long *)*plVar8;
            }
            plVar2 = plVar8 + 3;
            if (plVar3 == plVar2) {
              uVar13 = 0;
              uVar7 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar5 = (long *)*plVar2 != plVar11;
              if (bVar5) {
                (**(code **)(*plVar11 + 0x100))(plVar11,plVar8,plVar8 + 3);
                plVar11 = (long *)plVar8[3];
              }
              uVar13 = (ulong)bVar5;
              plVar2 = plVar8 + 6;
              if (plVar3 == plVar2) {
                uVar7 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar11) {
                  (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + uVar13 * 3,plVar8 + 6);
                  plVar11 = (long *)plVar8[6];
                  uVar13 = 2;
                }
                plVar2 = plVar8 + 9;
                if (plVar3 == plVar2) {
                  uVar7 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar11) {
                    (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + uVar13 * 3,plVar8 + 9);
                    plVar11 = (long *)plVar8[9];
                    uVar13 = 3;
                  }
                  plVar2 = plVar8 + 0xc;
                  if (plVar3 == plVar2) {
                    uVar7 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar11) {
                      (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + uVar13 * 3,plVar8 + 0xc);
                      plVar11 = (long *)plVar8[0xc];
                      uVar13 = 4;
                    }
                    plVar2 = plVar8 + 0xf;
                    if (plVar3 == plVar2) {
                      uVar7 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar11) {
                        (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + uVar13 * 3,plVar8 + 0xf);
                        plVar11 = (long *)plVar8[0xf];
                        uVar13 = 5;
                      }
                      uVar7 = 6;
                      for (plVar2 = plVar8 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar11) {
                          (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + uVar13 * 3,plVar2);
                          plVar11 = (long *)*plVar2;
                          uVar13 = uVar7;
                        }
                        uVar7 = uVar7 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + uVar13 * 3,plVar8 + uVar7 * 3);
          plVar8[600] = 0;
        }
        *(undefined4 *)(lVar6 + 0x12cc) = 0;
      }
    }
  }
  return;
}


