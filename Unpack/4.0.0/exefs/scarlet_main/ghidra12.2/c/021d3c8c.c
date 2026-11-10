/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d3c8c; name: FUN_021d3c8c
 */


void FUN_021d3c8c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *local_70;
  long *plStack_68;
  
  uVar8 = *param_2;
  *param_2 = 0;
  puVar10 = (undefined8 *)*param_1;
  *param_1 = uVar8;
  if (puVar10 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar5 = FUN_00c4e600();
    iVar3 = *(int *)(lVar5 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar5 + 0x12c8) = iVar1;
    if (*(int *)(lVar5 + 0x12cc) <= iVar3) {
      *(int *)(lVar5 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar10)(puVar10);
    plVar7 = (long *)param_1[1];
    uVar8 = param_1[2];
    uVar9 = param_1[3];
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar10,uVar8,uVar9);
    }
    else {
      FUN_00c48fe8(plVar7,puVar10,uVar8,uVar9);
    }
    lVar5 = FUN_00c4e600();
    iVar1 = *(int *)(lVar5 + 0x12c8) + -1;
    *(int *)(lVar5 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar7 = (long *)FUN_00c4e600();
      if (plVar7[600] != 0) {
        local_70 = plVar7 + plVar7[600] * 3;
        plStack_68 = plVar7;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar11 = (long *)*plVar7;
        plVar2 = plVar7;
        if (plVar7[600] != 0) {
          plVar2 = plVar7 + plVar7[600] * 3;
        }
        if (plVar2 == plVar7) {
          uVar12 = 0;
          uVar6 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar7 + 0xd0))();
          if ((long *)*plVar7 != plVar11) {
            (**(code **)(*plVar11 + 0x100))(plVar11,plVar7,plVar7);
            plVar11 = (long *)*plVar7;
          }
          plVar13 = plVar7 + 3;
          if (plVar2 == plVar13) {
            uVar12 = 0;
            uVar6 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar13 + 0xd0))();
            bVar4 = (long *)*plVar13 != plVar11;
            if (bVar4) {
              (**(code **)(*plVar11 + 0x100))(plVar11,plVar7,plVar7 + 3);
              plVar11 = (long *)plVar7[3];
            }
            uVar12 = (ulong)bVar4;
            plVar13 = plVar7 + 6;
            if (plVar2 == plVar13) {
              uVar6 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar13 + 0xd0))();
              if ((long *)*plVar13 != plVar11) {
                (**(code **)(*plVar11 + 0x100))(plVar11,plVar7 + uVar12 * 3,plVar7 + 6);
                plVar11 = (long *)plVar7[6];
                uVar12 = 2;
              }
              plVar13 = plVar7 + 9;
              if (plVar2 == plVar13) {
                uVar6 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar13 + 0xd0))();
                if ((long *)*plVar13 != plVar11) {
                  (**(code **)(*plVar11 + 0x100))(plVar11,plVar7 + uVar12 * 3,plVar7 + 9);
                  plVar11 = (long *)plVar7[9];
                  uVar12 = 3;
                }
                plVar13 = plVar7 + 0xc;
                if (plVar2 == plVar13) {
                  uVar6 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar13 + 0xd0))();
                  if ((long *)*plVar13 != plVar11) {
                    (**(code **)(*plVar11 + 0x100))(plVar11,plVar7 + uVar12 * 3,plVar7 + 0xc);
                    plVar11 = (long *)plVar7[0xc];
                    uVar12 = 4;
                  }
                  plVar13 = plVar7 + 0xf;
                  if (plVar2 == plVar13) {
                    uVar6 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar13 + 0xd0))();
                    if ((long *)*plVar13 != plVar11) {
                      (**(code **)(*plVar11 + 0x100))(plVar11,plVar7 + uVar12 * 3,plVar7 + 0xf);
                      plVar11 = (long *)plVar7[0xf];
                      uVar12 = 5;
                    }
                    plVar13 = plVar7 + 0x12;
                    uVar6 = 6;
                    if (plVar2 != plVar13) {
                      do {
                        (**(code **)(*(long *)*plVar13 + 0xd0))();
                        if ((long *)*plVar13 != plVar11) {
                          (**(code **)(*plVar11 + 0x100))(plVar11,plVar7 + uVar12 * 3,plVar13);
                          plVar11 = (long *)*plVar13;
                          uVar12 = uVar6;
                        }
                        plVar13 = plVar13 + 3;
                        uVar6 = uVar6 + 1;
                      } while (plVar2 != plVar13);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar11 + 0x100))(plVar11,plVar7 + uVar12 * 3,plVar7 + uVar6 * 3);
        plVar7[600] = 0;
      }
      *(undefined4 *)(lVar5 + 0x12cc) = 0;
    }
  }
  uVar8 = param_2[1];
  uVar9 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar9;
  param_1[1] = uVar8;
  return;
}


