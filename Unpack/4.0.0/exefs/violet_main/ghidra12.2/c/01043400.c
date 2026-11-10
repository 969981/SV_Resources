/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01043400; name: FUN_01043400
 */


long * FUN_01043400(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *local_80;
  ulong local_78;
  long *local_70;
  long *local_68;
  
  if (param_1 != param_2) {
    do {
      lVar7 = *param_1;
      *param_1 = 0;
      lVar8 = *param_3;
      *param_3 = lVar7;
      if (lVar8 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar7 = FUN_00c4e600();
        iVar3 = *(int *)(lVar7 + 0x12c8);
        iVar1 = iVar3 + 1;
        *(int *)(lVar7 + 0x12c8) = iVar1;
        if (*(int *)(lVar7 + 0x12cc) <= iVar3) {
          *(int *)(lVar7 + 0x12cc) = iVar1;
        }
        plVar10 = *(long **)(lVar8 + 0x20);
        if (plVar10 != (long *)0x0) {
          plVar9 = *(long **)(lVar8 + 0x28);
          if (plVar9 == plVar10) {
            plVar9 = plVar10;
          }
          else {
            plVar12 = plVar9 + -4;
            lVar7 = *plVar12;
            *plVar12 = 0;
            if (lVar7 != 0) {
              FUN_010476cc(plVar9 + -3);
            }
            if (plVar12 != plVar10) {
              plVar12 = plVar9 + -8;
              lVar7 = *plVar12;
              *plVar12 = 0;
              if (lVar7 != 0) {
                FUN_010476cc(plVar9 + -7);
              }
              if (plVar12 != plVar10) {
                plVar12 = plVar9 + -0xc;
                lVar7 = *plVar12;
                *plVar12 = 0;
                if (lVar7 != 0) {
                  FUN_010476cc(plVar9 + -0xb);
                }
                if (plVar12 != plVar10) {
                  do {
                    lVar7 = plVar9[-0x10];
                    plVar9[-0x10] = 0;
                    if (lVar7 != 0) {
                      FUN_010476cc(plVar9 + -0xf);
                    }
                    plVar9 = plVar9 + -4;
                  } while (plVar10 + 0xc != plVar9);
                }
              }
            }
            plVar9 = *(long **)(lVar8 + 0x20);
          }
          plVar12 = *(long **)(lVar8 + 0x38);
          *(long **)(lVar8 + 0x28) = plVar10;
          lVar7 = *(long *)(lVar8 + 0x30) - (long)plVar9;
          uVar5 = (**(code **)(*plVar12 + 0xf8))(plVar12);
          if (((uVar5 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
            (**(code **)(*plVar12 + 0x18))(plVar12,plVar9,lVar7,8);
          }
          else {
            FUN_00c48fe8(plVar12,plVar9,lVar7,8);
          }
        }
        if (*(long **)(lVar8 + 0x18) != (long *)0x0) {
          (**(code **)(**(long **)(lVar8 + 0x18) + 0x20))();
        }
        plVar10 = (long *)param_3[1];
        lVar7 = param_3[2];
        lVar11 = param_3[3];
        uVar5 = (**(code **)(*plVar10 + 0xf8))(plVar10);
        if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
          (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar7,lVar11);
        }
        else {
          FUN_00c48fe8(plVar10,lVar8,lVar7,lVar11);
        }
        lVar7 = FUN_00c4e600();
        iVar1 = *(int *)(lVar7 + 0x12c8) + -1;
        *(int *)(lVar7 + 0x12c8) = iVar1;
        if (iVar1 == 0) {
          plVar10 = (long *)FUN_00c4e600();
          if (plVar10[600] != 0) {
            local_70 = plVar10 + plVar10[600] * 3;
            local_68 = plVar10;
            FUN_00c4ea30(&local_68,&local_70);
            plVar12 = (long *)*plVar10;
            plVar9 = plVar10;
            if (plVar10[600] != 0) {
              plVar9 = plVar10 + plVar10[600] * 3;
            }
            if (plVar9 == plVar10) {
              local_78 = 0;
              uVar5 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar10 + 0xd0))();
              if ((long *)*plVar10 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar10,plVar10);
                plVar12 = (long *)*plVar10;
              }
              plVar2 = plVar10 + 3;
              if (plVar9 == plVar2) {
                local_78 = 0;
                uVar5 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                bVar4 = (long *)*plVar2 != plVar12;
                if (bVar4) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar10,plVar10 + 3);
                  plVar12 = (long *)plVar10[3];
                }
                local_78 = (ulong)bVar4;
                plVar2 = plVar10 + 6;
                if (plVar9 == plVar2) {
                  uVar5 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + local_78 * 3,plVar10 + 6);
                    plVar12 = (long *)plVar10[6];
                    local_78 = 2;
                  }
                  plVar2 = plVar10 + 9;
                  if (plVar9 == plVar2) {
                    uVar5 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + local_78 * 3,plVar10 + 9);
                      plVar12 = (long *)plVar10[9];
                      local_78 = 3;
                    }
                    plVar2 = plVar10 + 0xc;
                    if (plVar9 == plVar2) {
                      uVar5 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))
                                  (plVar12,plVar10 + local_78 * 3,plVar10 + 0xc);
                        plVar12 = (long *)plVar10[0xc];
                        local_78 = 4;
                      }
                      plVar2 = plVar10 + 0xf;
                      if (plVar9 == plVar2) {
                        uVar5 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar12) {
                          (**(code **)(*plVar12 + 0x100))
                                    (plVar12,plVar10 + local_78 * 3,plVar10 + 0xf);
                          plVar12 = (long *)plVar10[0xf];
                          local_78 = 5;
                        }
                        local_80 = plVar10 + 0x12;
                        if (plVar9 == local_80) {
                          uVar5 = 6;
                        }
                        else {
                          uVar5 = 6;
                          do {
                            (**(code **)(*(long *)*local_80 + 0xd0))();
                            if ((long *)*local_80 != plVar12) {
                              (**(code **)(*plVar12 + 0x100))
                                        (plVar12,plVar10 + local_78 * 3,local_80);
                              plVar12 = (long *)*local_80;
                              local_78 = uVar5;
                            }
                            local_80 = local_80 + 3;
                            uVar5 = uVar5 + 1;
                          } while (plVar9 != local_80);
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + local_78 * 3,plVar10 + uVar5 * 3);
            plVar10[600] = 0;
          }
          *(undefined4 *)(lVar7 + 0x12cc) = 0;
        }
      }
      plVar10 = param_1 + 1;
      lVar7 = param_1[2];
      lVar8 = param_1[3];
      param_1 = param_1 + 4;
      param_3[1] = *plVar10;
      param_3[2] = lVar7;
      param_3[3] = lVar8;
      param_3 = param_3 + 4;
    } while (param_1 != param_2);
  }
  return param_3;
}


