/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00db0094; name: FUN_00db0094
 */


void FUN_00db0094(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  long *local_78;
  long *local_70;
  long *local_68;
  
  lVar12 = param_1[1];
  lVar9 = param_1[2];
  while (lVar9 != lVar12) {
    param_1[2] = lVar9 + -0x20;
    puVar11 = *(undefined8 **)(lVar9 + -0x20);
    *(undefined8 *)(lVar9 + -0x20) = 0;
    if (puVar11 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar7 = FUN_00c4e600();
      iVar5 = *(int *)(lVar7 + 0x12c8);
      iVar1 = iVar5 + 1;
      *(int *)(lVar7 + 0x12c8) = iVar1;
      if (*(int *)(lVar7 + 0x12cc) <= iVar5) {
        *(int *)(lVar7 + 0x12cc) = iVar1;
      }
      (**(code **)*puVar11)(puVar11);
      plVar10 = *(long **)(lVar9 + -0x18);
      uVar4 = *(undefined8 *)(lVar9 + -0x10);
      uVar13 = *(undefined8 *)(lVar9 + -8);
      uVar8 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,puVar11,uVar4,uVar13);
      }
      else {
        FUN_00c48fe8(plVar10,puVar11,uVar4,uVar13);
      }
      lVar9 = FUN_00c4e600();
      iVar1 = *(int *)(lVar9 + 0x12c8) + -1;
      *(int *)(lVar9 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar10 = (long *)FUN_00c4e600();
        if (plVar10[600] != 0) {
          local_70 = plVar10 + plVar10[600] * 3;
          local_68 = plVar10;
          FUN_00c4ea30(&local_68,&local_70);
          plVar14 = (long *)*plVar10;
          plVar3 = plVar10;
          if (plVar10[600] != 0) {
            plVar3 = plVar10 + plVar10[600] * 3;
          }
          if (plVar3 == plVar10) {
            uVar15 = 0;
            uVar8 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar14) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar10,plVar10);
              plVar14 = (long *)*plVar10;
            }
            plVar2 = plVar10 + 3;
            if (plVar3 == plVar2) {
              uVar15 = 0;
              uVar8 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar6 = (long *)*plVar2 != plVar14;
              if (bVar6) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar10,plVar10 + 3);
                plVar14 = (long *)plVar10[3];
              }
              uVar15 = (ulong)bVar6;
              plVar2 = plVar10 + 6;
              if (plVar3 == plVar2) {
                uVar8 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar15 * 3,plVar10 + 6);
                  plVar14 = (long *)plVar10[6];
                  uVar15 = 2;
                }
                plVar2 = plVar10 + 9;
                if (plVar3 == plVar2) {
                  uVar8 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar15 * 3,plVar10 + 9);
                    plVar14 = (long *)plVar10[9];
                    uVar15 = 3;
                  }
                  plVar2 = plVar10 + 0xc;
                  if (plVar3 == plVar2) {
                    uVar8 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar15 * 3,plVar10 + 0xc);
                      plVar14 = (long *)plVar10[0xc];
                      uVar15 = 4;
                    }
                    plVar2 = plVar10 + 0xf;
                    if (plVar3 == plVar2) {
                      uVar8 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar15 * 3,plVar10 + 0xf);
                        plVar14 = (long *)plVar10[0xf];
                        uVar15 = 5;
                      }
                      local_78 = plVar10 + 0x12;
                      if (plVar3 == local_78) {
                        uVar8 = 6;
                      }
                      else {
                        uVar8 = 6;
                        do {
                          (**(code **)(*(long *)*local_78 + 0xd0))();
                          if ((long *)*local_78 != plVar14) {
                            (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar15 * 3,local_78);
                            plVar14 = (long *)*local_78;
                            uVar15 = uVar8;
                          }
                          local_78 = local_78 + 3;
                          uVar8 = uVar8 + 1;
                        } while (plVar3 != local_78);
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar15 * 3,plVar10 + uVar8 * 3);
          plVar10[600] = 0;
        }
        *(undefined4 *)(lVar9 + 0x12cc) = 0;
      }
    }
    lVar9 = param_1[2];
  }
  lVar12 = *param_1;
  if (lVar12 != 0) {
    lVar9 = param_1[3];
    plVar10 = *(long **)param_1[4];
    uVar8 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,lVar9 - lVar12,8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar12,lVar9 - lVar12,8);
    }
  }
  return;
}


