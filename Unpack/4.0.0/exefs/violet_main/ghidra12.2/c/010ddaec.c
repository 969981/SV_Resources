/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010ddaec; name: FUN_010ddaec
 */


void FUN_010ddaec(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *local_58;
  long *local_38;
  
  lVar9 = param_1[1];
  while (lVar10 = param_1[2], lVar10 != lVar9) {
    param_1[2] = lVar10 + -0x28;
    lVar8 = *(long *)(lVar10 + -0x28);
    *(undefined8 *)(lVar10 + -0x28) = 0;
    if (lVar8 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar6 = FUN_00c4e600();
      iVar4 = *(int *)(lVar6 + 0x12c8);
      iVar1 = iVar4 + 1;
      *(int *)(lVar6 + 0x12c8) = iVar1;
      if (*(int *)(lVar6 + 0x12cc) <= iVar4) {
        *(int *)(lVar6 + 0x12cc) = iVar1;
      }
      if (*(long **)(lVar8 + 0x20) != (long *)0x0) {
        (**(code **)(**(long **)(lVar8 + 0x20) + 0x20))();
      }
      plVar12 = *(long **)(lVar10 + -0x20);
      uVar3 = *(undefined8 *)(lVar10 + -0x18);
      uVar11 = *(undefined8 *)(lVar10 + -0x10);
      uVar7 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,lVar8,uVar3,uVar11);
      }
      else {
        FUN_00c48fe8(plVar12,lVar8,uVar3,uVar11);
      }
      lVar10 = FUN_00c4e600();
      iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
      *(int *)(lVar10 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar12 = (long *)FUN_00c4e600();
        if (plVar12[600] != 0) {
          local_58 = plVar12 + plVar12[600] * 3;
          local_38 = plVar12;
          FUN_00c4ea30(&local_38,&local_58);
          plVar13 = (long *)*plVar12;
          plVar2 = plVar12;
          if (plVar12[600] != 0) {
            plVar2 = plVar12 + plVar12[600] * 3;
          }
          if (plVar2 == plVar12) {
            uVar15 = 0;
            uVar7 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar12 + 0xd0))();
            if ((long *)*plVar12 != plVar13) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar12,plVar12);
              plVar13 = (long *)*plVar12;
            }
            plVar14 = plVar12 + 3;
            if (plVar2 == plVar14) {
              uVar15 = 0;
              uVar7 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              bVar5 = (long *)*plVar14 != plVar13;
              if (bVar5) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar12,plVar12 + 3);
                plVar13 = (long *)plVar12[3];
              }
              uVar15 = (ulong)bVar5;
              plVar14 = plVar12 + 6;
              if (plVar2 == plVar14) {
                uVar7 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar12 + uVar15 * 3,plVar12 + 6);
                  plVar13 = (long *)plVar12[6];
                  uVar15 = 2;
                }
                plVar14 = plVar12 + 9;
                if (plVar2 == plVar14) {
                  uVar7 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar14 + 0xd0))();
                  if ((long *)*plVar14 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar12 + uVar15 * 3,plVar12 + 9);
                    plVar13 = (long *)plVar12[9];
                    uVar15 = 3;
                  }
                  plVar14 = plVar12 + 0xc;
                  if (plVar2 == plVar14) {
                    uVar7 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar14 + 0xd0))();
                    if ((long *)*plVar14 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar12 + uVar15 * 3,plVar12 + 0xc);
                      plVar13 = (long *)plVar12[0xc];
                      uVar15 = 4;
                    }
                    plVar14 = plVar12 + 0xf;
                    if (plVar2 == plVar14) {
                      uVar7 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar14 + 0xd0))();
                      if ((long *)*plVar14 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar12 + uVar15 * 3,plVar12 + 0xf);
                        plVar13 = (long *)plVar12[0xf];
                        uVar15 = 5;
                      }
                      uVar7 = 6;
                      for (plVar14 = plVar12 + 0x12; plVar2 != plVar14; plVar14 = plVar14 + 3) {
                        (**(code **)(*(long *)*plVar14 + 0xd0))();
                        if ((long *)*plVar14 != plVar13) {
                          (**(code **)(*plVar13 + 0x100))(plVar13,plVar12 + uVar15 * 3,plVar14);
                          plVar13 = (long *)*plVar14;
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
          (**(code **)(*plVar13 + 0x100))(plVar13,plVar12 + uVar15 * 3,plVar12 + uVar7 * 3);
          plVar12[600] = 0;
        }
        *(undefined4 *)(lVar10 + 0x12cc) = 0;
      }
    }
  }
  lVar9 = *param_1;
  if (lVar9 != 0) {
    lVar10 = param_1[3];
    plVar12 = *(long **)param_1[4];
    uVar7 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar9,lVar10 - lVar9,8);
    }
    else {
      FUN_00c48fe8(plVar12,lVar9,lVar10 - lVar9,8);
    }
  }
  return;
}


