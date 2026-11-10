/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01484e2c; name: FUN_01484e2c
 */


long * FUN_01484e2c(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *local_70;
  long *plStack_68;
  
  plVar8 = *(long **)(param_2 + 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = *(long **)(param_2 + 0x10);
    if (*plVar8 != param_2) {
      lVar10 = *(long *)(param_2 + 0x10);
      while( true ) {
        plVar8 = *(long **)(lVar10 + 0x10);
        if (*plVar8 == lVar10) break;
        lVar10 = *(long *)(lVar10 + 0x10);
      }
    }
  }
  else {
    for (plVar9 = (long *)*plVar8; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      plVar8 = plVar9;
    }
  }
  if (*param_1 == param_2) {
    *param_1 = (long)plVar8;
  }
  param_1[6] = param_1[6] + -1;
  FUN_01336080(param_1[1],param_2);
  lVar10 = *(long *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  if (lVar10 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar7 = FUN_00c4e600();
    iVar4 = *(int *)(lVar7 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar7 + 0x12c8) = iVar1;
    if (*(int *)(lVar7 + 0x12cc) <= iVar4) {
      *(int *)(lVar7 + 0x12cc) = iVar1;
    }
    FUN_014f0a98(lVar10);
    plVar9 = *(long **)(param_2 + 0x30);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    uVar11 = *(undefined8 *)(param_2 + 0x40);
    uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,uVar3,uVar11);
    }
    else {
      FUN_00c48fe8(plVar9,lVar10,uVar3,uVar11);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar9 = (long *)FUN_00c4e600();
      if (plVar9[600] != 0) {
        local_70 = plVar9 + plVar9[600] * 3;
        plStack_68 = plVar9;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar12 = (long *)*plVar9;
        plVar2 = plVar9;
        if (plVar9[600] != 0) {
          plVar2 = plVar9 + plVar9[600] * 3;
        }
        if (plVar2 == plVar9) {
          uVar14 = 0;
          uVar6 = 0;
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
            uVar6 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar13 + 0xd0))();
            bVar5 = (long *)*plVar13 != plVar12;
            if (bVar5) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar9,plVar9 + 3);
              plVar12 = (long *)plVar9[3];
            }
            uVar14 = (ulong)bVar5;
            plVar13 = plVar9 + 6;
            if (plVar2 == plVar13) {
              uVar6 = 2;
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
                uVar6 = 3;
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
                  uVar6 = 4;
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
                    uVar6 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar13 + 0xd0))();
                    if ((long *)*plVar13 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar14 * 3,plVar9 + 0xf);
                      plVar12 = (long *)plVar9[0xf];
                      uVar14 = 5;
                    }
                    uVar6 = 6;
                    for (plVar13 = plVar9 + 0x12; plVar2 != plVar13; plVar13 = plVar13 + 3) {
                      (**(code **)(*(long *)*plVar13 + 0xd0))();
                      if ((long *)*plVar13 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar14 * 3,plVar13);
                        plVar12 = (long *)*plVar13;
                        uVar14 = uVar6;
                      }
                      uVar6 = uVar6 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar14 * 3,plVar9 + uVar6 * 3);
        plVar9[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar9 = (long *)param_1[2];
  uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if (((uVar6 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
    (**(code **)(*plVar9 + 0x18))(plVar9,param_2,0x48,8);
  }
  else {
    FUN_00c48fe8(plVar9,param_2,0x48,8);
  }
  return plVar8;
}


