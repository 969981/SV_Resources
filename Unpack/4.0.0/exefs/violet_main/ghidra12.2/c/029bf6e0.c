/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029bf6e0; name: FUN_029bf6e0
 */


void FUN_029bf6e0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *local_80;
  ulong local_78;
  long *local_70;
  long *local_68;
  
  plVar13 = (long *)*param_1;
  if (plVar13 != (long *)0x0) {
    if ((long *)param_1[1] == plVar13) {
      plVar6 = plVar13;
    }
    else {
      plVar6 = (long *)param_1[1];
      do {
        plVar14 = plVar6 + -5;
        lVar10 = *plVar14;
        *plVar14 = 0;
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
          if (*(long **)(lVar10 + 0x20) != (long *)0x0) {
            (**(code **)(**(long **)(lVar10 + 0x20) + 0x20))();
          }
          plVar3 = (long *)plVar6[-4];
          lVar9 = plVar6[-3];
          lVar11 = plVar6[-2];
          uVar7 = (**(code **)(*plVar3 + 0xf8))(plVar3);
          if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
            (**(code **)(*plVar3 + 0x18))(plVar3,lVar10,lVar9,lVar11);
          }
          else {
            FUN_00c48fe8(plVar3,lVar10,lVar9,lVar11);
          }
          lVar10 = FUN_00c4e600();
          iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
          *(int *)(lVar10 + 0x12c8) = iVar1;
          if (iVar1 == 0) {
            plVar6 = (long *)FUN_00c4e600();
            if (plVar6[600] != 0) {
              local_70 = plVar6 + plVar6[600] * 3;
              local_68 = plVar6;
              FUN_00c4ea30(&local_68,&local_70);
              plVar12 = (long *)*plVar6;
              plVar3 = plVar6;
              if (plVar6[600] != 0) {
                plVar3 = plVar6 + plVar6[600] * 3;
              }
              if (plVar3 == plVar6) {
                local_78 = 0;
                uVar7 = 0;
              }
              else {
                (**(code **)(*(long *)*plVar6 + 0xd0))();
                if ((long *)*plVar6 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar6,plVar6);
                  plVar12 = (long *)*plVar6;
                }
                plVar2 = plVar6 + 3;
                if (plVar3 == plVar2) {
                  local_78 = 0;
                  uVar7 = 1;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  bVar5 = (long *)*plVar2 != plVar12;
                  if (bVar5) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar6,plVar6 + 3);
                    plVar12 = (long *)plVar6[3];
                  }
                  local_78 = (ulong)bVar5;
                  plVar2 = plVar6 + 6;
                  if (plVar3 == plVar2) {
                    uVar7 = 2;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar6 + local_78 * 3,plVar6 + 6);
                      plVar12 = (long *)plVar6[6];
                      local_78 = 2;
                    }
                    plVar2 = plVar6 + 9;
                    if (plVar3 == plVar2) {
                      uVar7 = 3;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))(plVar12,plVar6 + local_78 * 3,plVar6 + 9);
                        plVar12 = (long *)plVar6[9];
                        local_78 = 3;
                      }
                      plVar2 = plVar6 + 0xc;
                      if (plVar3 == plVar2) {
                        uVar7 = 4;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar12) {
                          (**(code **)(*plVar12 + 0x100))
                                    (plVar12,plVar6 + local_78 * 3,plVar6 + 0xc);
                          plVar12 = (long *)plVar6[0xc];
                          local_78 = 4;
                        }
                        plVar2 = plVar6 + 0xf;
                        if (plVar3 == plVar2) {
                          uVar7 = 5;
                        }
                        else {
                          (**(code **)(*(long *)*plVar2 + 0xd0))();
                          if ((long *)*plVar2 != plVar12) {
                            (**(code **)(*plVar12 + 0x100))
                                      (plVar12,plVar6 + local_78 * 3,plVar6 + 0xf);
                            plVar12 = (long *)plVar6[0xf];
                            local_78 = 5;
                          }
                          local_80 = plVar6 + 0x12;
                          if (plVar3 == local_80) {
                            uVar7 = 6;
                          }
                          else {
                            uVar7 = 6;
                            do {
                              (**(code **)(*(long *)*local_80 + 0xd0))();
                              if ((long *)*local_80 != plVar12) {
                                (**(code **)(*plVar12 + 0x100))
                                          (plVar12,plVar6 + local_78 * 3,local_80);
                                plVar12 = (long *)*local_80;
                                local_78 = uVar7;
                              }
                              local_80 = local_80 + 3;
                              uVar7 = uVar7 + 1;
                            } while (plVar3 != local_80);
                          }
                        }
                      }
                    }
                  }
                }
              }
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar6 + local_78 * 3,plVar6 + uVar7 * 3);
              plVar6[600] = 0;
            }
            *(undefined4 *)(lVar10 + 0x12cc) = 0;
          }
        }
        plVar6 = plVar14;
      } while (plVar14 != plVar13);
      plVar6 = (long *)*param_1;
    }
    lVar10 = param_1[2];
    plVar14 = (long *)param_1[3];
    param_1[1] = plVar13;
    uVar7 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar7 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,plVar6,lVar10 - (long)plVar6,8);
    }
    else {
      FUN_00c48fe8(plVar14,plVar6,lVar10 - (long)plVar6,8);
    }
  }
  return;
}


