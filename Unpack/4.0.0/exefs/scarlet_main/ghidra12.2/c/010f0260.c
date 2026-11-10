/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010f0260; name: FUN_010f0260
 */


void FUN_010f0260(long param_1,long *param_2)

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
  long *plVar13;
  ulong uVar14;
  long *local_70;
  long *local_68;
  
  if (param_2 != (long *)0x0) {
    do {
      lVar8 = param_2[6];
      param_2[6] = 0;
      plVar10 = (long *)*param_2;
      if (lVar8 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar6 = FUN_00c4e600();
        iVar3 = *(int *)(lVar6 + 0x12c8);
        iVar1 = iVar3 + 1;
        *(int *)(lVar6 + 0x12c8) = iVar1;
        if (*(int *)(lVar6 + 0x12cc) <= iVar3) {
          *(int *)(lVar6 + 0x12cc) = iVar1;
        }
        FUN_00db239c(lVar8);
        plVar9 = (long *)param_2[7];
        lVar6 = param_2[8];
        lVar11 = param_2[9];
        uVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9);
        if (((uVar5 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
          (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,lVar6,lVar11);
        }
        else {
          FUN_00c48fe8(plVar9,lVar8,lVar6,lVar11);
        }
        lVar8 = FUN_00c4e600();
        iVar1 = *(int *)(lVar8 + 0x12c8) + -1;
        *(int *)(lVar8 + 0x12c8) = iVar1;
        if (iVar1 == 0) {
          plVar9 = (long *)FUN_00c4e600();
          if (plVar9[600] != 0) {
            local_70 = plVar9 + plVar9[600] * 3;
            local_68 = plVar9;
            FUN_00c4ea30(&local_68,&local_70);
            plVar12 = (long *)*plVar9;
            plVar2 = plVar9;
            if (plVar9[600] != 0) {
              plVar2 = plVar9 + plVar9[600] * 3;
            }
            if (plVar2 == plVar9) {
              uVar14 = 0;
              uVar5 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar9 + 0xd0))();
              if ((long *)*plVar9 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar9,plVar9);
                plVar12 = (long *)*plVar9;
              }
              plVar13 = plVar9 + 3;
              if (plVar2 == plVar13) {
                uVar14 = 0;
                uVar5 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar13 + 0xd0))();
                bVar4 = (long *)*plVar13 != plVar12;
                if (bVar4) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar9,plVar9 + 3);
                  plVar12 = (long *)plVar9[3];
                }
                uVar14 = (ulong)bVar4;
                plVar13 = plVar9 + 6;
                if (plVar2 == plVar13) {
                  uVar5 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar13 + 0xd0))();
                  if ((long *)*plVar13 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar14 * 3,plVar9 + 6);
                    plVar12 = (long *)plVar9[6];
                    uVar14 = 2;
                  }
                  plVar13 = plVar9 + 9;
                  if (plVar2 == plVar13) {
                    uVar5 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar13 + 0xd0))();
                    if ((long *)*plVar13 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar14 * 3,plVar9 + 9);
                      plVar12 = (long *)plVar9[9];
                      uVar14 = 3;
                    }
                    plVar13 = plVar9 + 0xc;
                    if (plVar2 == plVar13) {
                      uVar5 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar13 + 0xd0))();
                      if ((long *)*plVar13 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar14 * 3,plVar9 + 0xc);
                        plVar12 = (long *)plVar9[0xc];
                        uVar14 = 4;
                      }
                      plVar13 = plVar9 + 0xf;
                      if (plVar2 == plVar13) {
                        uVar5 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar13 + 0xd0))();
                        if ((long *)*plVar13 != plVar12) {
                          (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar14 * 3,plVar9 + 0xf);
                          plVar12 = (long *)plVar9[0xf];
                          uVar14 = 5;
                        }
                        uVar5 = 6;
                        for (plVar13 = plVar9 + 0x12; plVar2 != plVar13; plVar13 = plVar13 + 3) {
                          (**(code **)(*(long *)*plVar13 + 0xd0))();
                          if ((long *)*plVar13 != plVar12) {
                            (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar14 * 3,plVar13);
                            plVar12 = (long *)*plVar13;
                            uVar14 = uVar5;
                          }
                          uVar5 = uVar5 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar14 * 3,plVar9 + uVar5 * 3);
            plVar9[600] = 0;
          }
          *(undefined4 *)(lVar8 + 0x12cc) = 0;
        }
      }
      if ((long *)param_2[5] != (long *)0x0) {
        (**(code **)(*(long *)param_2[5] + 0x20))();
      }
      plVar9 = *(long **)(param_1 + 0x38);
      uVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar5 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,param_2,0x50,8);
      }
      else {
        FUN_00c48fe8(plVar9,param_2,0x50,8);
      }
      param_2 = plVar10;
    } while (plVar10 != (long *)0x0);
  }
  return;
}


