/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f1da48; name: FUN_00f1da48
 */


void FUN_00f1da48(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *local_88;
  ulong local_80;
  long *local_70;
  long *plStack_68;
  
  if (param_2 != (long *)0x0) {
    do {
      lVar9 = param_2[6];
      param_2[6] = 0;
      plVar13 = (long *)*param_2;
      if (lVar9 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar7 = FUN_00c4e600();
        iVar4 = *(int *)(lVar7 + 0x12c8);
        iVar1 = iVar4 + 1;
        *(int *)(lVar7 + 0x12c8) = iVar1;
        if (*(int *)(lVar7 + 0x12cc) <= iVar4) {
          *(int *)(lVar7 + 0x12cc) = iVar1;
        }
        plVar10 = (long *)param_2[7];
        lVar7 = param_2[8];
        lVar11 = param_2[9];
        uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
        if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
          (**(code **)(*plVar10 + 0x18))(plVar10,lVar9,lVar7,lVar11);
        }
        else {
          FUN_00c48fe8(plVar10,lVar9,lVar7,lVar11);
        }
        lVar9 = FUN_00c4e600();
        iVar1 = *(int *)(lVar9 + 0x12c8) + -1;
        *(int *)(lVar9 + 0x12c8) = iVar1;
        if (iVar1 == 0) {
          plVar10 = (long *)FUN_00c4e600();
          if (plVar10[600] != 0) {
            local_70 = plVar10 + plVar10[600] * 3;
            plStack_68 = plVar10;
            FUN_00c4ea30(&plStack_68,&local_70);
            plVar12 = (long *)*plVar10;
            plVar3 = plVar10;
            if (plVar10[600] != 0) {
              plVar3 = plVar10 + plVar10[600] * 3;
            }
            if (plVar3 == plVar10) {
              local_80 = 0;
              uVar6 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar10 + 0xd0))();
              if ((long *)*plVar10 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar10,plVar10);
                plVar12 = (long *)*plVar10;
              }
              plVar2 = plVar10 + 3;
              if (plVar3 == plVar2) {
                local_80 = 0;
                uVar6 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                bVar5 = (long *)*plVar2 != plVar12;
                if (bVar5) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar10,plVar10 + 3);
                  plVar12 = (long *)plVar10[3];
                }
                local_80 = (ulong)bVar5;
                plVar2 = plVar10 + 6;
                if (plVar3 == plVar2) {
                  uVar6 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + local_80 * 3,plVar10 + 6);
                    plVar12 = (long *)plVar10[6];
                    local_80 = 2;
                  }
                  plVar2 = plVar10 + 9;
                  if (plVar3 == plVar2) {
                    uVar6 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + local_80 * 3,plVar10 + 9);
                      plVar12 = (long *)plVar10[9];
                      local_80 = 3;
                    }
                    plVar2 = plVar10 + 0xc;
                    if (plVar3 == plVar2) {
                      uVar6 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))
                                  (plVar12,plVar10 + local_80 * 3,plVar10 + 0xc);
                        plVar12 = (long *)plVar10[0xc];
                        local_80 = 4;
                      }
                      plVar2 = plVar10 + 0xf;
                      if (plVar3 == plVar2) {
                        uVar6 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar12) {
                          (**(code **)(*plVar12 + 0x100))
                                    (plVar12,plVar10 + local_80 * 3,plVar10 + 0xf);
                          plVar12 = (long *)plVar10[0xf];
                          local_80 = 5;
                        }
                        local_88 = plVar10 + 0x12;
                        uVar6 = 6;
                        if (plVar3 != local_88) {
                          do {
                            (**(code **)(*(long *)*local_88 + 0xd0))();
                            if ((long *)*local_88 != plVar12) {
                              (**(code **)(*plVar12 + 0x100))
                                        (plVar12,plVar10 + local_80 * 3,local_88);
                              plVar12 = (long *)*local_88;
                              local_80 = uVar6;
                            }
                            local_88 = local_88 + 3;
                            uVar6 = uVar6 + 1;
                          } while (plVar3 != local_88);
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + local_80 * 3,plVar10 + uVar6 * 3);
            plVar10[600] = 0;
          }
          *(undefined4 *)(lVar9 + 0x12cc) = 0;
        }
      }
      if ((long *)param_2[5] != (long *)0x0) {
        (**(code **)(*(long *)param_2[5] + 0x20))();
      }
      plVar10 = *(long **)(param_1 + 0x38);
      uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar6 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,param_2,0x50,8);
      }
      else {
        FUN_00c48fe8(plVar10,param_2,0x50,8);
      }
      param_2 = plVar13;
    } while (plVar13 != (long *)0x0);
  }
  return;
}


