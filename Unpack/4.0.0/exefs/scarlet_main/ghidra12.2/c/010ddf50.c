/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010ddf50; name: FUN_010ddf50
 */


void FUN_010ddf50(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long *local_60;
  long *local_58;
  
  lVar9 = param_1[1];
  lVar14 = param_1[2];
  while (lVar14 != lVar9) {
    param_1[2] = lVar14 + -0x28;
    lVar8 = *(long *)(lVar14 + -0x28);
    *(undefined8 *)(lVar14 + -0x28) = 0;
    if (lVar8 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar7 = FUN_00c4e600();
      iVar4 = *(int *)(lVar7 + 0x12c8);
      iVar1 = iVar4 + 1;
      *(int *)(lVar7 + 0x12c8) = iVar1;
      if (*(int *)(lVar7 + 0x12cc) <= iVar4) {
        *(int *)(lVar7 + 0x12cc) = iVar1;
      }
      if (*(long **)(lVar8 + 0x20) != (long *)0x0) {
        (**(code **)(**(long **)(lVar8 + 0x20) + 0x20))();
      }
      plVar10 = *(long **)(lVar14 + -0x20);
      uVar3 = *(undefined8 *)(lVar14 + -0x18);
      uVar11 = *(undefined8 *)(lVar14 + -0x10);
      uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar6 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,uVar3,uVar11);
      }
      else {
        FUN_00c48fe8(plVar10,lVar8,uVar3,uVar11);
      }
      lVar14 = FUN_00c4e600();
      iVar1 = *(int *)(lVar14 + 0x12c8) + -1;
      *(int *)(lVar14 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar10 = (long *)FUN_00c4e600();
        if (plVar10[600] != 0) {
          local_60 = plVar10 + plVar10[600] * 3;
          local_58 = plVar10;
          FUN_00c4ea30(&local_58,&local_60);
          plVar12 = (long *)*plVar10;
          plVar2 = plVar10;
          if (plVar10[600] != 0) {
            plVar2 = plVar10 + plVar10[600] * 3;
          }
          if (plVar2 == plVar10) {
            uVar15 = 0;
            uVar6 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar12) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar10,plVar10);
              plVar12 = (long *)*plVar10;
            }
            plVar13 = plVar10 + 3;
            if (plVar2 == plVar13) {
              uVar15 = 0;
              uVar6 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar13 + 0xd0))();
              bVar5 = (long *)*plVar13 != plVar12;
              if (bVar5) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar10,plVar10 + 3);
                plVar12 = (long *)plVar10[3];
              }
              uVar15 = (ulong)bVar5;
              plVar13 = plVar10 + 6;
              if (plVar2 == plVar13) {
                uVar6 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar13 + 0xd0))();
                if ((long *)*plVar13 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar15 * 3,plVar10 + 6);
                  plVar12 = (long *)plVar10[6];
                  uVar15 = 2;
                }
                plVar13 = plVar10 + 9;
                if (plVar2 == plVar13) {
                  uVar6 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar13 + 0xd0))();
                  if ((long *)*plVar13 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar15 * 3,plVar10 + 9);
                    plVar12 = (long *)plVar10[9];
                    uVar15 = 3;
                  }
                  plVar13 = plVar10 + 0xc;
                  if (plVar2 == plVar13) {
                    uVar6 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar13 + 0xd0))();
                    if ((long *)*plVar13 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar15 * 3,plVar10 + 0xc);
                      plVar12 = (long *)plVar10[0xc];
                      uVar15 = 4;
                    }
                    plVar13 = plVar10 + 0xf;
                    if (plVar2 == plVar13) {
                      uVar6 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar13 + 0xd0))();
                      if ((long *)*plVar13 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar15 * 3,plVar10 + 0xf);
                        plVar12 = (long *)plVar10[0xf];
                        uVar15 = 5;
                      }
                      uVar6 = 6;
                      for (plVar13 = plVar10 + 0x12; plVar2 != plVar13; plVar13 = plVar13 + 3) {
                        (**(code **)(*(long *)*plVar13 + 0xd0))();
                        if ((long *)*plVar13 != plVar12) {
                          (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar15 * 3,plVar13);
                          plVar12 = (long *)*plVar13;
                          uVar15 = uVar6;
                        }
                        uVar6 = uVar6 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar15 * 3,plVar10 + uVar6 * 3);
          plVar10[600] = 0;
        }
        *(undefined4 *)(lVar14 + 0x12cc) = 0;
      }
    }
    lVar14 = param_1[2];
  }
  lVar9 = *param_1;
  if (lVar9 != 0) {
    lVar14 = param_1[3];
    plVar10 = *(long **)param_1[4];
    uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar9,lVar14 - lVar9,8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar9,lVar14 - lVar9,8);
    }
  }
  return;
}


