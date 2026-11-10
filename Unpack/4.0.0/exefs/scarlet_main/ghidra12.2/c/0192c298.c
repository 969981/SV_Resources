/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0192c298; name: FUN_0192c298
 */


void FUN_0192c298(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *local_70;
  long *plStack_68;
  
  lVar8 = *param_2;
  *param_2 = 0;
  lVar9 = *param_1;
  *param_1 = lVar8;
  if (lVar9 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar8 = FUN_00c4e600();
    iVar3 = *(int *)(lVar8 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar8 + 0x12c8) = iVar1;
    if (*(int *)(lVar8 + 0x12cc) <= iVar3) {
      *(int *)(lVar8 + 0x12cc) = iVar1;
    }
    plVar6 = (long *)param_1[1];
    lVar8 = param_1[2];
    lVar10 = param_1[3];
    uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar5 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar9,lVar8,lVar10);
    }
    else {
      FUN_00c48fe8(plVar6,lVar9,lVar8,lVar10);
    }
    lVar8 = FUN_00c4e600();
    iVar1 = *(int *)(lVar8 + 0x12c8) + -1;
    *(int *)(lVar8 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar6 = (long *)FUN_00c4e600();
      if (plVar6[600] != 0) {
        local_70 = plVar6 + plVar6[600] * 3;
        plStack_68 = plVar6;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar11 = (long *)*plVar6;
        plVar2 = plVar6;
        if (plVar6[600] != 0) {
          plVar2 = plVar6 + plVar6[600] * 3;
        }
        if (plVar2 == plVar6) {
          uVar12 = 0;
          uVar5 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar6 + 0xd0))();
          if ((long *)*plVar6 != plVar11) {
            (**(code **)(*plVar11 + 0x100))(plVar11,plVar6,plVar6);
            plVar11 = (long *)*plVar6;
          }
          plVar13 = plVar6 + 3;
          if (plVar2 == plVar13) {
            uVar12 = 0;
            uVar5 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar13 + 0xd0))();
            bVar4 = (long *)*plVar13 != plVar11;
            if (bVar4) {
              (**(code **)(*plVar11 + 0x100))(plVar11,plVar6,plVar6 + 3);
              plVar11 = (long *)plVar6[3];
            }
            uVar12 = (ulong)bVar4;
            plVar13 = plVar6 + 6;
            if (plVar2 == plVar13) {
              uVar5 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar13 + 0xd0))();
              if ((long *)*plVar13 != plVar11) {
                (**(code **)(*plVar11 + 0x100))(plVar11,plVar6 + uVar12 * 3,plVar6 + 6);
                plVar11 = (long *)plVar6[6];
                uVar12 = 2;
              }
              plVar13 = plVar6 + 9;
              if (plVar2 == plVar13) {
                uVar5 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar13 + 0xd0))();
                if ((long *)*plVar13 != plVar11) {
                  (**(code **)(*plVar11 + 0x100))(plVar11,plVar6 + uVar12 * 3,plVar6 + 9);
                  plVar11 = (long *)plVar6[9];
                  uVar12 = 3;
                }
                plVar13 = plVar6 + 0xc;
                if (plVar2 == plVar13) {
                  uVar5 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar13 + 0xd0))();
                  if ((long *)*plVar13 != plVar11) {
                    (**(code **)(*plVar11 + 0x100))(plVar11,plVar6 + uVar12 * 3,plVar6 + 0xc);
                    plVar11 = (long *)plVar6[0xc];
                    uVar12 = 4;
                  }
                  plVar13 = plVar6 + 0xf;
                  if (plVar2 == plVar13) {
                    uVar5 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar13 + 0xd0))();
                    if ((long *)*plVar13 != plVar11) {
                      (**(code **)(*plVar11 + 0x100))(plVar11,plVar6 + uVar12 * 3,plVar6 + 0xf);
                      plVar11 = (long *)plVar6[0xf];
                      uVar12 = 5;
                    }
                    plVar13 = plVar6 + 0x12;
                    uVar5 = 6;
                    if (plVar2 != plVar13) {
                      do {
                        (**(code **)(*(long *)*plVar13 + 0xd0))();
                        if ((long *)*plVar13 != plVar11) {
                          (**(code **)(*plVar11 + 0x100))(plVar11,plVar6 + uVar12 * 3,plVar13);
                          plVar11 = (long *)*plVar13;
                          uVar12 = uVar5;
                        }
                        plVar13 = plVar13 + 3;
                        uVar5 = uVar5 + 1;
                      } while (plVar2 != plVar13);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar11 + 0x100))(plVar11,plVar6 + uVar12 * 3,plVar6 + uVar5 * 3);
        plVar6[600] = 0;
      }
      *(undefined4 *)(lVar8 + 0x12cc) = 0;
    }
  }
  lVar8 = param_2[1];
  lVar9 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar9;
  param_1[1] = lVar8;
  return;
}


