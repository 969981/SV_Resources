/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e15860; name: FUN_00e15860
 */


void FUN_00e15860(long *param_1)

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
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  long *local_78;
  long *local_70;
  long *local_68;
  
  lVar10 = param_1[1];
  lVar7 = param_1[2];
  while (lVar7 != lVar10) {
    param_1[2] = lVar7 + -0x20;
    puVar11 = *(undefined8 **)(lVar7 + -0x20);
    *(undefined8 *)(lVar7 + -0x20) = 0;
    if (puVar11 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar9 = FUN_00c4e600();
      iVar5 = *(int *)(lVar9 + 0x12c8);
      iVar1 = iVar5 + 1;
      *(int *)(lVar9 + 0x12c8) = iVar1;
      if (*(int *)(lVar9 + 0x12cc) <= iVar5) {
        *(int *)(lVar9 + 0x12cc) = iVar1;
      }
      (**(code **)*puVar11)(puVar11);
      plVar12 = *(long **)(lVar7 + -0x18);
      uVar4 = *(undefined8 *)(lVar7 + -0x10);
      uVar13 = *(undefined8 *)(lVar7 + -8);
      uVar8 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar11,uVar4,uVar13);
      }
      else {
        FUN_00c48fe8(plVar12,puVar11,uVar4,uVar13);
      }
      lVar7 = FUN_00c4e600();
      iVar1 = *(int *)(lVar7 + 0x12c8) + -1;
      *(int *)(lVar7 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar12 = (long *)FUN_00c4e600();
        if (plVar12[600] != 0) {
          local_70 = plVar12 + plVar12[600] * 3;
          local_68 = plVar12;
          FUN_00c4ea30(&local_68,&local_70);
          plVar14 = (long *)*plVar12;
          plVar3 = plVar12;
          if (plVar12[600] != 0) {
            plVar3 = plVar12 + plVar12[600] * 3;
          }
          if (plVar3 == plVar12) {
            uVar15 = 0;
            uVar8 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar12 + 0xd0))();
            if ((long *)*plVar12 != plVar14) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar12,plVar12);
              plVar14 = (long *)*plVar12;
            }
            plVar2 = plVar12 + 3;
            if (plVar3 == plVar2) {
              uVar15 = 0;
              uVar8 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar6 = (long *)*plVar2 != plVar14;
              if (bVar6) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar12,plVar12 + 3);
                plVar14 = (long *)plVar12[3];
              }
              uVar15 = (ulong)bVar6;
              plVar2 = plVar12 + 6;
              if (plVar3 == plVar2) {
                uVar8 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + 6);
                  plVar14 = (long *)plVar12[6];
                  uVar15 = 2;
                }
                plVar2 = plVar12 + 9;
                if (plVar3 == plVar2) {
                  uVar8 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + 9);
                    plVar14 = (long *)plVar12[9];
                    uVar15 = 3;
                  }
                  plVar2 = plVar12 + 0xc;
                  if (plVar3 == plVar2) {
                    uVar8 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + 0xc);
                      plVar14 = (long *)plVar12[0xc];
                      uVar15 = 4;
                    }
                    plVar2 = plVar12 + 0xf;
                    if (plVar3 == plVar2) {
                      uVar8 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + 0xf);
                        plVar14 = (long *)plVar12[0xf];
                        uVar15 = 5;
                      }
                      uVar8 = 6;
                      for (local_78 = plVar12 + 0x12; plVar3 != local_78; local_78 = local_78 + 3) {
                        (**(code **)(*(long *)*local_78 + 0xd0))();
                        if ((long *)*local_78 != plVar14) {
                          (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,local_78);
                          plVar14 = (long *)*local_78;
                          uVar15 = uVar8;
                        }
                        uVar8 = uVar8 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + uVar8 * 3);
          plVar12[600] = 0;
        }
        *(undefined4 *)(lVar7 + 0x12cc) = 0;
      }
    }
    lVar7 = param_1[2];
  }
  lVar10 = *param_1;
  if (lVar10 != 0) {
    lVar7 = param_1[3];
    plVar12 = *(long **)param_1[4];
    uVar8 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar10,lVar7 - lVar10,8);
    }
    else {
      FUN_00c48fe8(plVar12,lVar10,lVar7 - lVar10,8);
    }
  }
  return;
}


