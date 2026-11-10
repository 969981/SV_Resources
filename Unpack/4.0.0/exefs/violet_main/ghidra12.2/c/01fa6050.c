/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fa6050; name: FUN_01fa6050
 */


void FUN_01fa6050(long param_1,long *param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *local_88;
  ulong local_80;
  long *local_70;
  long *plStack_68;
  
  if (param_2 != param_3) {
    plVar13 = *(long **)(param_1 + 8);
    for (; param_3 != plVar13; param_3 = param_3 + 4) {
      lVar9 = *param_3;
      *param_3 = 0;
      lVar10 = *param_2;
      *param_2 = lVar9;
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
        FUN_018cec38(lVar10);
        plVar7 = (long *)param_2[1];
        lVar9 = param_2[2];
        lVar11 = param_2[3];
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
            plVar3 = plVar7;
            if (plVar7[600] != 0) {
              plVar3 = plVar7 + plVar7[600] * 3;
            }
            if (plVar3 == plVar7) {
              local_80 = 0;
              uVar6 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar7 + 0xd0))();
              if ((long *)*plVar7 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar7,plVar7);
                plVar12 = (long *)*plVar7;
              }
              plVar2 = plVar7 + 3;
              if (plVar3 == plVar2) {
                local_80 = 0;
                uVar6 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                bVar5 = (long *)*plVar2 != plVar12;
                if (bVar5) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar7,plVar7 + 3);
                  plVar12 = (long *)plVar7[3];
                }
                local_80 = (ulong)bVar5;
                plVar2 = plVar7 + 6;
                if (plVar3 == plVar2) {
                  uVar6 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + local_80 * 3,plVar7 + 6);
                    plVar12 = (long *)plVar7[6];
                    local_80 = 2;
                  }
                  plVar2 = plVar7 + 9;
                  if (plVar3 == plVar2) {
                    uVar6 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + local_80 * 3,plVar7 + 9);
                      plVar12 = (long *)plVar7[9];
                      local_80 = 3;
                    }
                    plVar2 = plVar7 + 0xc;
                    if (plVar3 == plVar2) {
                      uVar6 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + local_80 * 3,plVar7 + 0xc);
                        plVar12 = (long *)plVar7[0xc];
                        local_80 = 4;
                      }
                      plVar2 = plVar7 + 0xf;
                      if (plVar3 == plVar2) {
                        uVar6 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar12) {
                          (**(code **)(*plVar12 + 0x100))
                                    (plVar12,plVar7 + local_80 * 3,plVar7 + 0xf);
                          plVar12 = (long *)plVar7[0xf];
                          local_80 = 5;
                        }
                        local_88 = plVar7 + 0x12;
                        uVar6 = 6;
                        if (plVar3 != local_88) {
                          do {
                            (**(code **)(*(long *)*local_88 + 0xd0))();
                            if ((long *)*local_88 != plVar12) {
                              (**(code **)(*plVar12 + 0x100))
                                        (plVar12,plVar7 + local_80 * 3,local_88);
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
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + local_80 * 3,plVar7 + uVar6 * 3);
            plVar7[600] = 0;
          }
          *(undefined4 *)(lVar9 + 0x12cc) = 0;
        }
      }
      lVar9 = param_3[2];
      lVar10 = param_3[3];
      param_2[1] = param_3[1];
      param_2[2] = lVar9;
      param_2[3] = lVar10;
      param_2 = param_2 + 4;
    }
    FUN_018ce7fc(param_1,param_2);
  }
  return;
}


