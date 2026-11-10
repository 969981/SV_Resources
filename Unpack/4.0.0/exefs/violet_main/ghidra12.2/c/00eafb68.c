/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00eafb68; name: FUN_00eafb68
 */


void FUN_00eafb68(long param_1,int param_2,int param_3)

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
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 local_98;
  long local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long *plStack_68;
  
  local_98 = *(undefined8 *)(param_1 + 8);
  lVar8 = *(long *)(param_1 + 0x180);
  if (lVar8 == 0) {
    FUN_00eb3a30(&local_90,local_98,&local_98);
    lVar8 = local_90;
    local_90 = 0;
    lVar9 = *(long *)(param_1 + 0x180);
    *(long *)(param_1 + 0x180) = lVar8;
    if (lVar9 == 0) {
      *(undefined8 *)(param_1 + 400) = local_80;
      *(undefined8 *)(param_1 + 0x198) = local_78;
      *(long **)(param_1 + 0x188) = local_88;
    }
    else {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar8 = FUN_00c4e600();
      iVar4 = *(int *)(lVar8 + 0x12c8);
      iVar1 = iVar4 + 1;
      *(int *)(lVar8 + 0x12c8) = iVar1;
      if (*(int *)(lVar8 + 0x12cc) <= iVar4) {
        *(int *)(lVar8 + 0x12cc) = iVar1;
      }
      FUN_00eea34c(lVar9);
      plVar7 = *(long **)(param_1 + 0x188);
      uVar3 = *(undefined8 *)(param_1 + 400);
      uVar11 = *(undefined8 *)(param_1 + 0x198);
      uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,uVar3,uVar11);
      }
      else {
        FUN_00c48fe8(plVar7,lVar9,uVar3,uVar11);
      }
      lVar8 = FUN_00c4e600();
      iVar1 = *(int *)(lVar8 + 0x12c8) + -1;
      *(int *)(lVar8 + 0x12c8) = iVar1;
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
            uVar13 = 0;
            uVar6 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar7 + 0xd0))();
            if ((long *)*plVar7 != plVar12) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar7,plVar7);
              plVar12 = (long *)*plVar7;
            }
            plVar10 = plVar7 + 3;
            if (plVar2 == plVar10) {
              uVar13 = 0;
              uVar6 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar10 + 0xd0))();
              bVar5 = (long *)*plVar10 != plVar12;
              if (bVar5) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar7,plVar7 + 3);
                plVar12 = (long *)plVar7[3];
              }
              uVar13 = (ulong)bVar5;
              plVar10 = plVar7 + 6;
              if (plVar2 == plVar10) {
                uVar6 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar10 + 0xd0))();
                if ((long *)*plVar10 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar13 * 3,plVar7 + 6);
                  plVar12 = (long *)plVar7[6];
                  uVar13 = 2;
                }
                plVar10 = plVar7 + 9;
                if (plVar2 == plVar10) {
                  uVar6 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar10 + 0xd0))();
                  if ((long *)*plVar10 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar13 * 3,plVar7 + 9);
                    plVar12 = (long *)plVar7[9];
                    uVar13 = 3;
                  }
                  plVar10 = plVar7 + 0xc;
                  if (plVar2 == plVar10) {
                    uVar6 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar10 + 0xd0))();
                    if ((long *)*plVar10 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar13 * 3,plVar7 + 0xc);
                      plVar12 = (long *)plVar7[0xc];
                      uVar13 = 4;
                    }
                    plVar10 = plVar7 + 0xf;
                    if (plVar2 == plVar10) {
                      uVar6 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar10 + 0xd0))();
                      if ((long *)*plVar10 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar13 * 3,plVar7 + 0xf);
                        plVar12 = (long *)plVar7[0xf];
                        uVar13 = 5;
                      }
                      uVar6 = 6;
                      for (plVar10 = plVar7 + 0x12; plVar2 != plVar10; plVar10 = plVar10 + 3) {
                        (**(code **)(*(long *)*plVar10 + 0xd0))();
                        if ((long *)*plVar10 != plVar12) {
                          (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar13 * 3,plVar10);
                          plVar12 = (long *)*plVar10;
                          uVar13 = uVar6;
                        }
                        uVar6 = uVar6 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar13 * 3,plVar7 + uVar6 * 3);
          plVar7[600] = 0;
        }
        *(undefined4 *)(lVar8 + 0x12cc) = 0;
      }
      lVar8 = local_90;
      *(long **)(param_1 + 0x188) = local_88;
      *(undefined8 *)(param_1 + 400) = local_80;
      *(undefined8 *)(param_1 + 0x198) = local_78;
      local_90 = 0;
      if (lVar8 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar9 = FUN_00c4e600();
        iVar4 = *(int *)(lVar9 + 0x12c8);
        iVar1 = iVar4 + 1;
        *(int *)(lVar9 + 0x12c8) = iVar1;
        if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
          *(int *)(lVar9 + 0x12cc) = iVar1;
        }
        FUN_00eea34c(lVar8);
        uVar6 = (**(code **)(*local_88 + 0xf8))(local_88);
        if (((uVar6 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*local_88 + 0x18))(local_88,lVar8,local_80,local_78);
        }
        else {
          FUN_00c48fe8(local_88,lVar8,local_80,local_78);
        }
        lVar8 = FUN_00c4e600();
        iVar1 = *(int *)(lVar8 + 0x12c8) + -1;
        *(int *)(lVar8 + 0x12c8) = iVar1;
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
              uVar13 = 0;
              uVar6 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar7 + 0xd0))();
              if ((long *)*plVar7 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar7,plVar7);
                plVar12 = (long *)*plVar7;
              }
              plVar10 = plVar7 + 3;
              if (plVar2 == plVar10) {
                uVar13 = 0;
                uVar6 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar10 + 0xd0))();
                bVar5 = (long *)*plVar10 != plVar12;
                if (bVar5) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar7,plVar7 + 3);
                  plVar12 = (long *)plVar7[3];
                }
                uVar13 = (ulong)bVar5;
                plVar10 = plVar7 + 6;
                if (plVar2 == plVar10) {
                  uVar6 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar10 + 0xd0))();
                  if ((long *)*plVar10 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar13 * 3,plVar7 + 6);
                    plVar12 = (long *)plVar7[6];
                    uVar13 = 2;
                  }
                  plVar10 = plVar7 + 9;
                  if (plVar2 == plVar10) {
                    uVar6 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar10 + 0xd0))();
                    if ((long *)*plVar10 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar13 * 3,plVar7 + 9);
                      plVar12 = (long *)plVar7[9];
                      uVar13 = 3;
                    }
                    plVar10 = plVar7 + 0xc;
                    if (plVar2 == plVar10) {
                      uVar6 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar10 + 0xd0))();
                      if ((long *)*plVar10 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar13 * 3,plVar7 + 0xc);
                        plVar12 = (long *)plVar7[0xc];
                        uVar13 = 4;
                      }
                      plVar10 = plVar7 + 0xf;
                      if (plVar2 == plVar10) {
                        uVar6 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar10 + 0xd0))();
                        if ((long *)*plVar10 != plVar12) {
                          (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar13 * 3,plVar7 + 0xf);
                          plVar12 = (long *)plVar7[0xf];
                          uVar13 = 5;
                        }
                        uVar6 = 6;
                        for (plVar10 = plVar7 + 0x12; plVar2 != plVar10; plVar10 = plVar10 + 3) {
                          (**(code **)(*(long *)*plVar10 + 0xd0))();
                          if ((long *)*plVar10 != plVar12) {
                            (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar13 * 3,plVar10);
                            plVar12 = (long *)*plVar10;
                            uVar13 = uVar6;
                          }
                          uVar6 = uVar6 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + uVar13 * 3,plVar7 + uVar6 * 3);
            plVar7[600] = 0;
          }
          *(undefined4 *)(lVar8 + 0x12cc) = 0;
        }
      }
    }
    lVar8 = *(long *)(param_1 + 0x180);
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (*(int *)(lVar8 + 0x8c) == param_2) {
    if (*(int *)(lVar8 + 0x90) == param_3) {
      if (bVar5) {
        return;
      }
      goto LAB_00eafbb8;
    }
  }
  else {
    *(int *)(lVar8 + 0x8c) = param_2;
    if (*(int *)(lVar8 + 0x90) == param_3) goto LAB_00eafbb8;
  }
  *(int *)(lVar8 + 0x90) = param_3;
LAB_00eafbb8:
  lVar8 = *(long *)(param_1 + 0x208);
  lVar9 = *(long *)(param_1 + 0x210);
  if (((lVar8 != lVar9) && (*(undefined1 *)(lVar8 + 0x10) = 1, lVar8 + 0x18 != lVar9)) &&
     (*(undefined1 *)(lVar8 + 0x28) = 1, lVar8 + 0x30 != lVar9)) {
    *(undefined1 *)(lVar8 + 0x40) = 1;
    for (lVar8 = lVar8 + 0x48; lVar8 != lVar9; lVar8 = lVar8 + 0x18) {
      *(undefined1 *)(lVar8 + 0x10) = 1;
    }
  }
  return;
}


