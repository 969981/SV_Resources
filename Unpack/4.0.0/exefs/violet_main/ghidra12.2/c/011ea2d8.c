/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011ea2d8; name: FUN_011ea2d8
 */


void FUN_011ea2d8(undefined8 *param_1,long *param_2)

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
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long *local_60;
  long *plStack_58;
  
  FUN_00c4e600();
  FUN_00c4e600();
  lVar7 = FUN_00c4e600();
  iVar5 = *(int *)(lVar7 + 0x12c8);
  iVar1 = iVar5 + 1;
  *(int *)(lVar7 + 0x12c8) = iVar1;
  if (*(int *)(lVar7 + 0x12cc) <= iVar5) {
    *(int *)(lVar7 + 0x12cc) = iVar1;
  }
  lVar7 = *param_2;
  if (lVar7 != 0) {
    lVar13 = param_2[1];
    lVar11 = lVar7;
    if (lVar13 != lVar7) {
      FUN_011e675c(lVar13 + -0x110);
      if ((lVar13 + -0x110 != lVar7) && (FUN_011e675c(lVar13 + -0x220), lVar13 + -0x220 != lVar7)) {
        do {
          FUN_011e675c(lVar13 + -0x330);
          lVar13 = lVar13 + -0x110;
        } while (lVar7 + 0x220 != lVar13);
      }
      lVar11 = *param_2;
    }
    lVar13 = param_2[2];
    plVar9 = (long *)param_2[3];
    param_2[1] = lVar7;
    uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar11,lVar13 - lVar11,0x10);
    }
    else {
      FUN_00c48fe8(plVar9,lVar11,lVar13 - lVar11,0x10);
    }
  }
  plVar9 = (long *)*param_1;
  uVar4 = param_1[1];
  uVar10 = param_1[2];
  uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
    (**(code **)(*plVar9 + 0x18))(plVar9,param_2,uVar4,uVar10);
  }
  else {
    FUN_00c48fe8(plVar9,param_2,uVar4,uVar10);
  }
  lVar7 = FUN_00c4e600();
  iVar1 = *(int *)(lVar7 + 0x12c8) + -1;
  *(int *)(lVar7 + 0x12c8) = iVar1;
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
        uVar14 = 0;
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
          uVar14 = 0;
          uVar8 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar2 + 0xd0))();
          bVar6 = (long *)*plVar2 != plVar12;
          if (bVar6) {
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar9,plVar9 + 3);
            plVar12 = (long *)plVar9[3];
          }
          uVar14 = (ulong)bVar6;
          plVar2 = plVar9 + 6;
          if (plVar3 == plVar2) {
            uVar8 = 2;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            if ((long *)*plVar2 != plVar12) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar14 * 3,plVar9 + 6);
              plVar12 = (long *)plVar9[6];
              uVar14 = 2;
            }
            plVar2 = plVar9 + 9;
            if (plVar3 == plVar2) {
              uVar8 = 3;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar14 * 3,plVar9 + 9);
                plVar12 = (long *)plVar9[9];
                uVar14 = 3;
              }
              plVar2 = plVar9 + 0xc;
              if (plVar3 == plVar2) {
                uVar8 = 4;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar14 * 3,plVar9 + 0xc);
                  plVar12 = (long *)plVar9[0xc];
                  uVar14 = 4;
                }
                plVar2 = plVar9 + 0xf;
                if (plVar3 == plVar2) {
                  uVar8 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar14 * 3,plVar9 + 0xf);
                    plVar12 = (long *)plVar9[0xf];
                    uVar14 = 5;
                  }
                  uVar8 = 6;
                  for (plVar2 = plVar9 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar14 * 3,plVar2);
                      plVar12 = (long *)*plVar2;
                      uVar14 = uVar8;
                    }
                    uVar8 = uVar8 + 1;
                  }
                }
              }
            }
          }
        }
      }
      (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar14 * 3,plVar9 + uVar8 * 3);
      plVar9[600] = 0;
    }
    *(undefined4 *)(lVar7 + 0x12cc) = 0;
  }
  return;
}


