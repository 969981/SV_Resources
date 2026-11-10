/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d4008c; name: FUN_00d4008c
 */


void FUN_00d4008c(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  long *local_78;
  long *local_70;
  long *local_68;
  
  lVar10 = param_1[1];
  lVar12 = param_1[2];
  while (lVar12 != lVar10) {
    param_1[2] = lVar12 + -0x20;
    puVar9 = *(undefined8 **)(lVar12 + -0x20);
    *(undefined8 *)(lVar12 + -0x20) = 0;
    if (puVar9 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar8 = FUN_00c4e600();
      iVar5 = *(int *)(lVar8 + 0x12c8);
      iVar1 = iVar5 + 1;
      *(int *)(lVar8 + 0x12c8) = iVar1;
      if (*(int *)(lVar8 + 0x12cc) <= iVar5) {
        *(int *)(lVar8 + 0x12cc) = iVar1;
      }
      (**(code **)*puVar9)(puVar9);
      plVar11 = *(long **)(lVar12 + -0x18);
      uVar4 = *(undefined8 *)(lVar12 + -0x10);
      uVar13 = *(undefined8 *)(lVar12 + -8);
      uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar7 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,puVar9,uVar4,uVar13);
      }
      else {
        FUN_00c48fe8(plVar11,puVar9,uVar4,uVar13);
      }
      lVar12 = FUN_00c4e600();
      iVar1 = *(int *)(lVar12 + 0x12c8) + -1;
      *(int *)(lVar12 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar11 = (long *)FUN_00c4e600();
        if (plVar11[600] != 0) {
          local_70 = plVar11 + plVar11[600] * 3;
          local_68 = plVar11;
          FUN_00c4ea30(&local_68,&local_70);
          plVar14 = (long *)*plVar11;
          plVar3 = plVar11;
          if (plVar11[600] != 0) {
            plVar3 = plVar11 + plVar11[600] * 3;
          }
          if (plVar3 == plVar11) {
            uVar15 = 0;
            uVar7 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar11 + 0xd0))();
            if ((long *)*plVar11 != plVar14) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar11,plVar11);
              plVar14 = (long *)*plVar11;
            }
            plVar2 = plVar11 + 3;
            if (plVar3 == plVar2) {
              uVar15 = 0;
              uVar7 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar6 = (long *)*plVar2 != plVar14;
              if (bVar6) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar11,plVar11 + 3);
                plVar14 = (long *)plVar11[3];
              }
              uVar15 = (ulong)bVar6;
              plVar2 = plVar11 + 6;
              if (plVar3 == plVar2) {
                uVar7 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar15 * 3,plVar11 + 6);
                  plVar14 = (long *)plVar11[6];
                  uVar15 = 2;
                }
                plVar2 = plVar11 + 9;
                if (plVar3 == plVar2) {
                  uVar7 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar15 * 3,plVar11 + 9);
                    plVar14 = (long *)plVar11[9];
                    uVar15 = 3;
                  }
                  plVar2 = plVar11 + 0xc;
                  if (plVar3 == plVar2) {
                    uVar7 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar15 * 3,plVar11 + 0xc);
                      plVar14 = (long *)plVar11[0xc];
                      uVar15 = 4;
                    }
                    plVar2 = plVar11 + 0xf;
                    if (plVar3 == plVar2) {
                      uVar7 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar15 * 3,plVar11 + 0xf);
                        plVar14 = (long *)plVar11[0xf];
                        uVar15 = 5;
                      }
                      uVar7 = 6;
                      for (local_78 = plVar11 + 0x12; plVar3 != local_78; local_78 = local_78 + 3) {
                        (**(code **)(*(long *)*local_78 + 0xd0))();
                        if ((long *)*local_78 != plVar14) {
                          (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar15 * 3,local_78);
                          plVar14 = (long *)*local_78;
                          uVar15 = uVar7;
                        }
                        uVar7 = uVar7 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar15 * 3,plVar11 + uVar7 * 3);
          plVar11[600] = 0;
        }
        *(undefined4 *)(lVar12 + 0x12cc) = 0;
      }
    }
    lVar12 = param_1[2];
  }
  lVar10 = *param_1;
  if (lVar10 != 0) {
    lVar12 = param_1[3];
    plVar11 = *(long **)param_1[4];
    uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar10,lVar12 - lVar10,8);
    }
    else {
      FUN_00c48fe8(plVar11,lVar10,lVar12 - lVar10,8);
    }
  }
  return;
}


