/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e38798; name: FUN_01e38798
 */


void FUN_01e38798(undefined8 *param_1,long param_2)

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
  lVar7 = *(long *)(param_2 + 0xf8);
  if (lVar7 != 0) {
    plVar9 = *(long **)(param_2 + 0x110);
    *(long *)(param_2 + 0x100) = lVar7;
    lVar13 = *(long *)(param_2 + 0x108) - lVar7;
    uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar7,lVar13,8);
    }
    else {
      FUN_00c48fe8(plVar9,lVar7,lVar13,8);
    }
  }
  lVar7 = *(long *)(param_2 + 0xc0);
  if (lVar7 != 0) {
    plVar9 = *(long **)(param_2 + 0xd8);
    *(long *)(param_2 + 200) = lVar7;
    lVar13 = *(long *)(param_2 + 0xd0) - lVar7;
    uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar7,lVar13,8);
    }
    else {
      FUN_00c48fe8(plVar9,lVar7,lVar13,8);
    }
  }
  FUN_011c3e8c(param_2 + 8);
  plVar9 = (long *)*param_1;
  uVar4 = param_1[1];
  uVar11 = param_1[2];
  uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
    (**(code **)(*plVar9 + 0x18))(plVar9,param_2,uVar4,uVar11);
  }
  else {
    FUN_00c48fe8(plVar9,param_2,uVar4,uVar11);
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


