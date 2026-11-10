/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c3444; name: FUN_014c3444
 */


void FUN_014c3444(char *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long *local_60;
  long *plStack_58;
  
  if (*param_1 == '\x01') {
    lVar10 = *(long *)(param_1 + 8);
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    if (lVar10 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar7 = FUN_00c4e600();
      iVar5 = *(int *)(lVar7 + 0x12c8);
      iVar1 = iVar5 + 1;
      *(int *)(lVar7 + 0x12c8) = iVar1;
      if (*(int *)(lVar7 + 0x12cc) <= iVar5) {
        *(int *)(lVar7 + 0x12cc) = iVar1;
      }
      FUN_013e6dc0(lVar10);
      plVar9 = *(long **)(param_1 + 0x10);
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,uVar4,uVar11);
      }
      else {
        FUN_00c48fe8(plVar9,lVar10,uVar4,uVar11);
      }
      lVar10 = FUN_00c4e600();
      iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
      *(int *)(lVar10 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar9 = (long *)FUN_00c4e600();
        if (plVar9[600] != 0) {
          local_60 = plVar9 + plVar9[600] * 3;
          plStack_58 = plVar9;
          FUN_00c4ea30(&plStack_58,&local_60);
          plVar12 = (long *)*plVar9;
          plVar3 = plVar9;
          if (plVar9[600] != 0) {
            plVar3 = plVar9 + plVar9[600] * 3;
          }
          if (plVar3 == plVar9) {
            uVar13 = 0;
            uVar8 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar9 + 0xd0))();
            if ((long *)*plVar9 != plVar12) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar9,plVar9);
              plVar12 = (long *)*plVar9;
            }
            plVar2 = plVar9 + 3;
            if (plVar3 == plVar2) {
              uVar13 = 0;
              uVar8 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar6 = (long *)*plVar2 != plVar12;
              if (bVar6) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar9,plVar9 + 3);
                plVar12 = (long *)plVar9[3];
              }
              uVar13 = (ulong)bVar6;
              plVar2 = plVar9 + 6;
              if (plVar3 == plVar2) {
                uVar8 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar13 * 3,plVar9 + 6);
                  plVar12 = (long *)plVar9[6];
                  uVar13 = 2;
                }
                plVar2 = plVar9 + 9;
                if (plVar3 == plVar2) {
                  uVar8 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar13 * 3,plVar9 + 9);
                    plVar12 = (long *)plVar9[9];
                    uVar13 = 3;
                  }
                  plVar2 = plVar9 + 0xc;
                  if (plVar3 == plVar2) {
                    uVar8 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar13 * 3,plVar9 + 0xc);
                      plVar12 = (long *)plVar9[0xc];
                      uVar13 = 4;
                    }
                    plVar2 = plVar9 + 0xf;
                    if (plVar3 == plVar2) {
                      uVar8 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar13 * 3,plVar9 + 0xf);
                        plVar12 = (long *)plVar9[0xf];
                        uVar13 = 5;
                      }
                      uVar8 = 6;
                      for (plVar2 = plVar9 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar12) {
                          (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar13 * 3,plVar2);
                          plVar12 = (long *)*plVar2;
                          uVar13 = uVar8;
                        }
                        uVar8 = uVar8 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar13 * 3,plVar9 + uVar8 * 3);
          plVar9[600] = 0;
        }
        *(undefined4 *)(lVar10 + 0x12cc) = 0;
      }
    }
  }
  return;
}


