/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029ee53c; name: FUN_029ee53c
 */


void FUN_029ee53c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *local_80;
  ulong local_78;
  long *local_70;
  long *local_68;
  
  plVar3 = (long *)*param_1;
  if ((long *)param_1[1] != plVar3) {
    plVar9 = (long *)param_1[1];
    do {
      plVar14 = plVar9 + -4;
      lVar11 = *plVar14;
      *plVar14 = 0;
      if (lVar11 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar7 = FUN_00c4e600();
        iVar5 = *(int *)(lVar7 + 0x12c8);
        iVar1 = iVar5 + 1;
        *(int *)(lVar7 + 0x12c8) = iVar1;
        if (*(int *)(lVar7 + 0x12cc) <= iVar5) {
          *(int *)(lVar7 + 0x12cc) = iVar1;
        }
        FUN_014b9b00(lVar11);
        plVar4 = (long *)plVar9[-3];
        lVar7 = plVar9[-2];
        lVar12 = plVar9[-1];
        uVar8 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*plVar4 + 0x18))(plVar4,lVar11,lVar7,lVar12);
        }
        else {
          FUN_00c48fe8(plVar4,lVar11,lVar7,lVar12);
        }
        lVar11 = FUN_00c4e600();
        iVar1 = *(int *)(lVar11 + 0x12c8) + -1;
        *(int *)(lVar11 + 0x12c8) = iVar1;
        if (iVar1 == 0) {
          plVar9 = (long *)FUN_00c4e600();
          if (plVar9[600] != 0) {
            local_70 = plVar9 + plVar9[600] * 3;
            local_68 = plVar9;
            FUN_00c4ea30(&local_68,&local_70);
            plVar13 = (long *)*plVar9;
            plVar4 = plVar9;
            if (plVar9[600] != 0) {
              plVar4 = plVar9 + plVar9[600] * 3;
            }
            if (plVar4 == plVar9) {
              local_78 = 0;
              uVar8 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar9 + 0xd0))();
              if ((long *)*plVar9 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar9,plVar9);
                plVar13 = (long *)*plVar9;
              }
              plVar2 = plVar9 + 3;
              if (plVar4 == plVar2) {
                local_78 = 0;
                uVar8 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                bVar6 = (long *)*plVar2 != plVar13;
                if (bVar6) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar9,plVar9 + 3);
                  plVar13 = (long *)plVar9[3];
                }
                local_78 = (ulong)bVar6;
                plVar2 = plVar9 + 6;
                if (plVar4 == plVar2) {
                  uVar8 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + local_78 * 3,plVar9 + 6);
                    plVar13 = (long *)plVar9[6];
                    local_78 = 2;
                  }
                  plVar2 = plVar9 + 9;
                  if (plVar4 == plVar2) {
                    uVar8 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + local_78 * 3,plVar9 + 9);
                      plVar13 = (long *)plVar9[9];
                      local_78 = 3;
                    }
                    plVar2 = plVar9 + 0xc;
                    if (plVar4 == plVar2) {
                      uVar8 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + local_78 * 3,plVar9 + 0xc);
                        plVar13 = (long *)plVar9[0xc];
                        local_78 = 4;
                      }
                      plVar2 = plVar9 + 0xf;
                      if (plVar4 == plVar2) {
                        uVar8 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar13) {
                          (**(code **)(*plVar13 + 0x100))
                                    (plVar13,plVar9 + local_78 * 3,plVar9 + 0xf);
                          plVar13 = (long *)plVar9[0xf];
                          local_78 = 5;
                        }
                        local_80 = plVar9 + 0x12;
                        uVar8 = 6;
                        if (plVar4 != local_80) {
                          do {
                            (**(code **)(*(long *)*local_80 + 0xd0))();
                            if ((long *)*local_80 != plVar13) {
                              (**(code **)(*plVar13 + 0x100))
                                        (plVar13,plVar9 + local_78 * 3,local_80);
                              plVar13 = (long *)*local_80;
                              local_78 = uVar8;
                            }
                            local_80 = local_80 + 3;
                            uVar8 = uVar8 + 1;
                          } while (plVar4 != local_80);
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + local_78 * 3,plVar9 + uVar8 * 3);
            plVar9[600] = 0;
          }
          *(undefined4 *)(lVar11 + 0x12cc) = 0;
        }
      }
      plVar9 = plVar14;
    } while (plVar14 != plVar3);
  }
  param_1[1] = plVar3;
  return;
}


