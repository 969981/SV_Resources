/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029beba4; name: FUN_029beba4
 */


void FUN_029beba4(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong local_78;
  long *local_70;
  long *local_68;
  
  plVar13 = (long *)*param_1;
  if (plVar13 != (long *)0x0) {
    if ((long *)param_1[1] == plVar13) {
      plVar5 = plVar13;
    }
    else {
      plVar5 = (long *)param_1[1];
      do {
        plVar14 = plVar5 + -5;
        lVar9 = *plVar14;
        *plVar14 = 0;
        if (lVar9 != 0) {
          FUN_00c4e600();
          FUN_00c4e600();
          lVar7 = FUN_00c4e600();
          iVar3 = *(int *)(lVar7 + 0x12c8);
          iVar1 = iVar3 + 1;
          *(int *)(lVar7 + 0x12c8) = iVar1;
          if (*(int *)(lVar7 + 0x12cc) <= iVar3) {
            *(int *)(lVar7 + 0x12cc) = iVar1;
          }
          if (*(long **)(lVar9 + 0x20) != (long *)0x0) {
            (**(code **)(**(long **)(lVar9 + 0x20) + 0x20))();
          }
          plVar2 = (long *)plVar5[-4];
          lVar7 = plVar5[-3];
          lVar10 = plVar5[-2];
          uVar6 = (**(code **)(*plVar2 + 0xf8))(plVar2);
          if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
            (**(code **)(*plVar2 + 0x18))(plVar2,lVar9,lVar7,lVar10);
          }
          else {
            FUN_00c48fe8(plVar2,lVar9,lVar7,lVar10);
          }
          lVar9 = FUN_00c4e600();
          iVar1 = *(int *)(lVar9 + 0x12c8) + -1;
          *(int *)(lVar9 + 0x12c8) = iVar1;
          if (iVar1 == 0) {
            plVar5 = (long *)FUN_00c4e600();
            if (plVar5[600] != 0) {
              local_70 = plVar5 + plVar5[600] * 3;
              local_68 = plVar5;
              FUN_00c4ea30(&local_68,&local_70);
              plVar11 = (long *)*plVar5;
              plVar2 = plVar5;
              if (plVar5[600] != 0) {
                plVar2 = plVar5 + plVar5[600] * 3;
              }
              if (plVar2 == plVar5) {
                local_78 = 0;
                uVar6 = 0;
              }
              else {
                (**(code **)(*(long *)*plVar5 + 0xd0))();
                if ((long *)*plVar5 != plVar11) {
                  (**(code **)(*plVar11 + 0x100))(plVar11,plVar5,plVar5);
                  plVar11 = (long *)*plVar5;
                }
                plVar12 = plVar5 + 3;
                if (plVar2 == plVar12) {
                  local_78 = 0;
                  uVar6 = 1;
                }
                else {
                  (**(code **)(*(long *)*plVar12 + 0xd0))();
                  bVar4 = (long *)*plVar12 != plVar11;
                  if (bVar4) {
                    (**(code **)(*plVar11 + 0x100))(plVar11,plVar5,plVar5 + 3);
                    plVar11 = (long *)plVar5[3];
                  }
                  local_78 = (ulong)bVar4;
                  plVar12 = plVar5 + 6;
                  if (plVar2 == plVar12) {
                    uVar6 = 2;
                  }
                  else {
                    (**(code **)(*(long *)*plVar12 + 0xd0))();
                    if ((long *)*plVar12 != plVar11) {
                      (**(code **)(*plVar11 + 0x100))(plVar11,plVar5 + local_78 * 3,plVar5 + 6);
                      plVar11 = (long *)plVar5[6];
                      local_78 = 2;
                    }
                    plVar12 = plVar5 + 9;
                    if (plVar2 == plVar12) {
                      uVar6 = 3;
                    }
                    else {
                      (**(code **)(*(long *)*plVar12 + 0xd0))();
                      if ((long *)*plVar12 != plVar11) {
                        (**(code **)(*plVar11 + 0x100))(plVar11,plVar5 + local_78 * 3,plVar5 + 9);
                        plVar11 = (long *)plVar5[9];
                        local_78 = 3;
                      }
                      plVar12 = plVar5 + 0xc;
                      if (plVar2 == plVar12) {
                        uVar6 = 4;
                      }
                      else {
                        (**(code **)(*(long *)*plVar12 + 0xd0))();
                        if ((long *)*plVar12 != plVar11) {
                          (**(code **)(*plVar11 + 0x100))
                                    (plVar11,plVar5 + local_78 * 3,plVar5 + 0xc);
                          plVar11 = (long *)plVar5[0xc];
                          local_78 = 4;
                        }
                        plVar12 = plVar5 + 0xf;
                        if (plVar2 == plVar12) {
                          uVar6 = 5;
                        }
                        else {
                          (**(code **)(*(long *)*plVar12 + 0xd0))();
                          if ((long *)*plVar12 != plVar11) {
                            (**(code **)(*plVar11 + 0x100))
                                      (plVar11,plVar5 + local_78 * 3,plVar5 + 0xf);
                            plVar11 = (long *)plVar5[0xf];
                            local_78 = 5;
                          }
                          plVar12 = plVar5 + 0x12;
                          uVar6 = 6;
                          if (plVar2 != plVar12) {
                            do {
                              (**(code **)(*(long *)*plVar12 + 0xd0))();
                              if ((long *)*plVar12 != plVar11) {
                                (**(code **)(*plVar11 + 0x100))
                                          (plVar11,plVar5 + local_78 * 3,plVar12);
                                plVar11 = (long *)*plVar12;
                                local_78 = uVar6;
                              }
                              plVar12 = plVar12 + 3;
                              uVar6 = uVar6 + 1;
                            } while (plVar2 != plVar12);
                          }
                        }
                      }
                    }
                  }
                }
              }
              (**(code **)(*plVar11 + 0x100))(plVar11,plVar5 + local_78 * 3,plVar5 + uVar6 * 3);
              plVar5[600] = 0;
            }
            *(undefined4 *)(lVar9 + 0x12cc) = 0;
          }
        }
        plVar5 = plVar14;
      } while (plVar14 != plVar13);
      plVar5 = (long *)*param_1;
    }
    lVar9 = param_1[2];
    plVar14 = (long *)param_1[3];
    param_1[1] = plVar13;
    uVar6 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,plVar5,lVar9 - (long)plVar5,8);
    }
    else {
      FUN_00c48fe8(plVar14,plVar5,lVar9 - (long)plVar5,8);
    }
  }
  return;
}


