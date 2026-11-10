/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018ce7fc; name: FUN_018ce7fc
 */


void FUN_018ce7fc(long param_1,long *param_2)

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
  long *plVar13;
  long *local_80;
  ulong local_78;
  long *local_70;
  long *local_68;
  
  if (*(long **)(param_1 + 8) != param_2) {
    plVar8 = *(long **)(param_1 + 8);
    do {
      plVar13 = plVar8 + -4;
      lVar10 = *plVar13;
      *plVar13 = 0;
      if (lVar10 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar6 = FUN_00c4e600();
        iVar4 = *(int *)(lVar6 + 0x12c8);
        iVar1 = iVar4 + 1;
        *(int *)(lVar6 + 0x12c8) = iVar1;
        if (*(int *)(lVar6 + 0x12cc) <= iVar4) {
          *(int *)(lVar6 + 0x12cc) = iVar1;
        }
        FUN_018cec38(lVar10);
        plVar3 = (long *)plVar8[-3];
        lVar6 = plVar8[-2];
        lVar12 = plVar8[-1];
        uVar7 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if (((uVar7 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar3 + 0x18))(plVar3,lVar10,lVar6,lVar12);
        }
        else {
          FUN_00c48fe8(plVar3,lVar10,lVar6,lVar12);
        }
        lVar10 = FUN_00c4e600();
        iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
        *(int *)(lVar10 + 0x12c8) = iVar1;
        if (iVar1 == 0) {
          plVar8 = (long *)FUN_00c4e600();
          if (plVar8[600] != 0) {
            local_70 = plVar8 + plVar8[600] * 3;
            local_68 = plVar8;
            FUN_00c4ea30(&local_68,&local_70);
            plVar11 = (long *)*plVar8;
            plVar3 = plVar8;
            if (plVar8[600] != 0) {
              plVar3 = plVar8 + plVar8[600] * 3;
            }
            if (plVar3 == plVar8) {
              local_78 = 0;
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
                local_78 = 0;
                uVar7 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                bVar5 = (long *)*plVar2 != plVar11;
                if (bVar5) {
                  (**(code **)(*plVar11 + 0x100))(plVar11,plVar8,plVar8 + 3);
                  plVar11 = (long *)plVar8[3];
                }
                local_78 = (ulong)bVar5;
                plVar2 = plVar8 + 6;
                if (plVar3 == plVar2) {
                  uVar7 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar11) {
                    (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + local_78 * 3,plVar8 + 6);
                    plVar11 = (long *)plVar8[6];
                    local_78 = 2;
                  }
                  plVar2 = plVar8 + 9;
                  if (plVar3 == plVar2) {
                    uVar7 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar11) {
                      (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + local_78 * 3,plVar8 + 9);
                      plVar11 = (long *)plVar8[9];
                      local_78 = 3;
                    }
                    plVar2 = plVar8 + 0xc;
                    if (plVar3 == plVar2) {
                      uVar7 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar11) {
                        (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + local_78 * 3,plVar8 + 0xc);
                        plVar11 = (long *)plVar8[0xc];
                        local_78 = 4;
                      }
                      plVar2 = plVar8 + 0xf;
                      if (plVar3 == plVar2) {
                        uVar7 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar11) {
                          (**(code **)(*plVar11 + 0x100))
                                    (plVar11,plVar8 + local_78 * 3,plVar8 + 0xf);
                          plVar11 = (long *)plVar8[0xf];
                          local_78 = 5;
                        }
                        uVar7 = 6;
                        for (local_80 = plVar8 + 0x12; plVar3 != local_80; local_80 = local_80 + 3)
                        {
                          (**(code **)(*(long *)*local_80 + 0xd0))();
                          if ((long *)*local_80 != plVar11) {
                            (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + local_78 * 3,local_80);
                            plVar11 = (long *)*local_80;
                            local_78 = uVar7;
                          }
                          uVar7 = uVar7 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + local_78 * 3,plVar8 + uVar7 * 3);
            plVar8[600] = 0;
          }
          *(undefined4 *)(lVar10 + 0x12cc) = 0;
        }
      }
      plVar8 = plVar13;
    } while (plVar13 != param_2);
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}


