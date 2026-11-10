/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ead254; name: FUN_00ead254
 */


void FUN_00ead254(long param_1,byte param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 local_98;
  long local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long *plStack_68;
  
  local_98 = *(undefined8 *)(param_1 + 8);
  param_2 = param_2 & 1;
  if (*(long *)(param_1 + 0x180) == 0) {
    FUN_00eb3a30(&local_90,local_98,&local_98);
    lVar11 = local_90;
    local_90 = 0;
    lVar10 = *(long *)(param_1 + 0x180);
    *(long *)(param_1 + 0x180) = lVar11;
    if (lVar10 == 0) {
      *(undefined8 *)(param_1 + 400) = local_80;
      *(undefined8 *)(param_1 + 0x198) = local_78;
      *(long **)(param_1 + 0x188) = local_88;
    }
    else {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar11 = FUN_00c4e600();
      iVar5 = *(int *)(lVar11 + 0x12c8);
      iVar1 = iVar5 + 1;
      *(int *)(lVar11 + 0x12c8) = iVar1;
      if (*(int *)(lVar11 + 0x12cc) <= iVar5) {
        *(int *)(lVar11 + 0x12cc) = iVar1;
      }
      FUN_00eea34c(lVar10);
      plVar8 = *(long **)(param_1 + 0x188);
      uVar4 = *(undefined8 *)(param_1 + 400);
      uVar12 = *(undefined8 *)(param_1 + 0x198);
      uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar7 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar10,uVar4,uVar12);
      }
      else {
        FUN_00c48fe8(plVar8,lVar10,uVar4,uVar12);
      }
      lVar11 = FUN_00c4e600();
      iVar1 = *(int *)(lVar11 + 0x12c8) + -1;
      *(int *)(lVar11 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar8 = (long *)FUN_00c4e600();
        if (plVar8[600] != 0) {
          local_70 = plVar8 + plVar8[600] * 3;
          plStack_68 = plVar8;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar13 = (long *)*plVar8;
          plVar3 = plVar8;
          if (plVar8[600] != 0) {
            plVar3 = plVar8 + plVar8[600] * 3;
          }
          if (plVar3 == plVar8) {
            uVar14 = 0;
            uVar7 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar8 + 0xd0))();
            if ((long *)*plVar8 != plVar13) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
              plVar13 = (long *)*plVar8;
            }
            plVar2 = plVar8 + 3;
            if (plVar3 == plVar2) {
              uVar14 = 0;
              uVar7 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar6 = (long *)*plVar2 != plVar13;
              if (bVar6) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
                plVar13 = (long *)plVar8[3];
              }
              uVar14 = (ulong)bVar6;
              plVar2 = plVar8 + 6;
              if (plVar3 == plVar2) {
                uVar7 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 6);
                  plVar13 = (long *)plVar8[6];
                  uVar14 = 2;
                }
                plVar2 = plVar8 + 9;
                if (plVar3 == plVar2) {
                  uVar7 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 9);
                    plVar13 = (long *)plVar8[9];
                    uVar14 = 3;
                  }
                  plVar2 = plVar8 + 0xc;
                  if (plVar3 == plVar2) {
                    uVar7 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 0xc);
                      plVar13 = (long *)plVar8[0xc];
                      uVar14 = 4;
                    }
                    plVar2 = plVar8 + 0xf;
                    if (plVar3 == plVar2) {
                      uVar7 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 0xf);
                        plVar13 = (long *)plVar8[0xf];
                        uVar14 = 5;
                      }
                      uVar7 = 6;
                      for (plVar2 = plVar8 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar13) {
                          (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar2);
                          plVar13 = (long *)*plVar2;
                          uVar14 = uVar7;
                        }
                        uVar7 = uVar7 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + uVar7 * 3);
          plVar8[600] = 0;
        }
        *(undefined4 *)(lVar11 + 0x12cc) = 0;
      }
      lVar11 = local_90;
      *(long **)(param_1 + 0x188) = local_88;
      *(undefined8 *)(param_1 + 400) = local_80;
      *(undefined8 *)(param_1 + 0x198) = local_78;
      local_90 = 0;
      if (lVar11 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar10 = FUN_00c4e600();
        iVar5 = *(int *)(lVar10 + 0x12c8);
        iVar1 = iVar5 + 1;
        *(int *)(lVar10 + 0x12c8) = iVar1;
        if (*(int *)(lVar10 + 0x12cc) <= iVar5) {
          *(int *)(lVar10 + 0x12cc) = iVar1;
        }
        FUN_00eea34c(lVar11);
        uVar7 = (**(code **)(*local_88 + 0xf8))(local_88);
        if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*local_88 + 0x18))(local_88,lVar11,local_80,local_78);
        }
        else {
          FUN_00c48fe8(local_88,lVar11,local_80,local_78);
        }
        lVar11 = FUN_00c4e600();
        iVar1 = *(int *)(lVar11 + 0x12c8) + -1;
        *(int *)(lVar11 + 0x12c8) = iVar1;
        if (iVar1 == 0) {
          plVar8 = (long *)FUN_00c4e600();
          if (plVar8[600] != 0) {
            local_70 = plVar8 + plVar8[600] * 3;
            plStack_68 = plVar8;
            FUN_00c4ea30(&plStack_68,&local_70);
            plVar13 = (long *)*plVar8;
            plVar3 = plVar8;
            if (plVar8[600] != 0) {
              plVar3 = plVar8 + plVar8[600] * 3;
            }
            if (plVar3 == plVar8) {
              uVar14 = 0;
              uVar7 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar8 + 0xd0))();
              if ((long *)*plVar8 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
                plVar13 = (long *)*plVar8;
              }
              plVar2 = plVar8 + 3;
              if (plVar3 == plVar2) {
                uVar14 = 0;
                uVar7 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                bVar6 = (long *)*plVar2 != plVar13;
                if (bVar6) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
                  plVar13 = (long *)plVar8[3];
                }
                uVar14 = (ulong)bVar6;
                plVar2 = plVar8 + 6;
                if (plVar3 == plVar2) {
                  uVar7 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 6);
                    plVar13 = (long *)plVar8[6];
                    uVar14 = 2;
                  }
                  plVar2 = plVar8 + 9;
                  if (plVar3 == plVar2) {
                    uVar7 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 9);
                      plVar13 = (long *)plVar8[9];
                      uVar14 = 3;
                    }
                    plVar2 = plVar8 + 0xc;
                    if (plVar3 == plVar2) {
                      uVar7 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 0xc);
                        plVar13 = (long *)plVar8[0xc];
                        uVar14 = 4;
                      }
                      plVar2 = plVar8 + 0xf;
                      if (plVar3 == plVar2) {
                        uVar7 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar13) {
                          (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 0xf);
                          plVar13 = (long *)plVar8[0xf];
                          uVar14 = 5;
                        }
                        uVar7 = 6;
                        for (plVar2 = plVar8 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                          (**(code **)(*(long *)*plVar2 + 0xd0))();
                          if ((long *)*plVar2 != plVar13) {
                            (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar2);
                            plVar13 = (long *)*plVar2;
                            uVar14 = uVar7;
                          }
                          uVar7 = uVar7 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + uVar7 * 3);
            plVar8[600] = 0;
          }
          *(undefined4 *)(lVar11 + 0x12cc) = 0;
        }
      }
    }
    pbVar9 = (byte *)(*(long *)(param_1 + 0x180) + 0x44);
    if (*pbVar9 == param_2) goto LAB_00ead310;
  }
  else {
    pbVar9 = (byte *)(*(long *)(param_1 + 0x180) + 0x44);
    if (*pbVar9 == param_2) {
      return;
    }
  }
  *pbVar9 = param_2;
LAB_00ead310:
  lVar11 = *(long *)(param_1 + 0x208);
  lVar10 = *(long *)(param_1 + 0x210);
  if (((lVar11 != lVar10) && (*(undefined1 *)(lVar11 + 0x10) = 1, lVar11 + 0x18 != lVar10)) &&
     (*(undefined1 *)(lVar11 + 0x28) = 1, lVar11 + 0x30 != lVar10)) {
    *(undefined1 *)(lVar11 + 0x40) = 1;
    for (lVar11 = lVar11 + 0x48; lVar11 != lVar10; lVar11 = lVar11 + 0x18) {
      *(undefined1 *)(lVar11 + 0x10) = 1;
    }
  }
  return;
}


