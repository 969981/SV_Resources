/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e1613c; name: FUN_00e1613c
 */


void FUN_00e1613c(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  long *local_60;
  long *plStack_58;
  
  FUN_00c4e600();
  FUN_00c4e600();
  lVar8 = FUN_00c4e600();
  iVar6 = *(int *)(lVar8 + 0x12c8);
  iVar1 = iVar6 + 1;
  *(int *)(lVar8 + 0x12c8) = iVar1;
  if (*(int *)(lVar8 + 0x12cc) <= iVar6) {
    *(int *)(lVar8 + 0x12cc) = iVar1;
  }
  lVar8 = *param_2;
  if (lVar8 != 0) {
    lVar11 = param_2[1];
    if (lVar11 == lVar8) {
      lVar11 = lVar8;
    }
    else {
      do {
        plVar10 = (long *)(lVar11 + -8);
        lVar11 = lVar11 + -0x20;
        if ((long *)*plVar10 != (long *)0x0) {
          (**(code **)(*(long *)*plVar10 + 0x20))();
        }
      } while (lVar8 != lVar11);
      lVar11 = *param_2;
    }
    lVar4 = param_2[2];
    plVar10 = (long *)param_2[3];
    param_2[1] = lVar8;
    uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,lVar4 - lVar11,8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar11,lVar4 - lVar11,8);
    }
  }
  plVar10 = (long *)*param_1;
  uVar5 = param_1[1];
  uVar12 = param_1[2];
  uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
  if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
    (**(code **)(*plVar10 + 0x18))(plVar10,param_2,uVar5,uVar12);
  }
  else {
    FUN_00c48fe8(plVar10,param_2,uVar5,uVar12);
  }
  lVar8 = FUN_00c4e600();
  iVar1 = *(int *)(lVar8 + 0x12c8) + -1;
  *(int *)(lVar8 + 0x12c8) = iVar1;
  if (iVar1 == 0) {
    plVar10 = (long *)FUN_00c4e600();
    if (plVar10[600] != 0) {
      local_60 = plVar10 + plVar10[600] * 3;
      plStack_58 = plVar10;
      FUN_00c4ea30(&plStack_58,&local_60);
      plVar13 = (long *)*plVar10;
      plVar3 = plVar10;
      if (plVar10[600] != 0) {
        plVar3 = plVar10 + plVar10[600] * 3;
      }
      if (plVar3 == plVar10) {
        uVar14 = 0;
        uVar9 = 0;
      }
      else {
        (**(code **)(*(long *)*plVar10 + 0xd0))();
        if ((long *)*plVar10 != plVar13) {
          (**(code **)(*plVar13 + 0x100))(plVar13,plVar10,plVar10);
          plVar13 = (long *)*plVar10;
        }
        plVar2 = plVar10 + 3;
        if (plVar3 == plVar2) {
          uVar14 = 0;
          uVar9 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar2 + 0xd0))();
          bVar7 = (long *)*plVar2 != plVar13;
          if (bVar7) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar10,plVar10 + 3);
            plVar13 = (long *)plVar10[3];
          }
          uVar14 = (ulong)bVar7;
          plVar2 = plVar10 + 6;
          if (plVar3 == plVar2) {
            uVar9 = 2;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            if ((long *)*plVar2 != plVar13) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar10 + uVar14 * 3,plVar10 + 6);
              plVar13 = (long *)plVar10[6];
              uVar14 = 2;
            }
            plVar2 = plVar10 + 9;
            if (plVar3 == plVar2) {
              uVar9 = 3;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar10 + uVar14 * 3,plVar10 + 9);
                plVar13 = (long *)plVar10[9];
                uVar14 = 3;
              }
              plVar2 = plVar10 + 0xc;
              if (plVar3 == plVar2) {
                uVar9 = 4;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar10 + uVar14 * 3,plVar10 + 0xc);
                  plVar13 = (long *)plVar10[0xc];
                  uVar14 = 4;
                }
                plVar2 = plVar10 + 0xf;
                if (plVar3 == plVar2) {
                  uVar9 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar10 + uVar14 * 3,plVar10 + 0xf);
                    plVar13 = (long *)plVar10[0xf];
                    uVar14 = 5;
                  }
                  uVar9 = 6;
                  for (plVar2 = plVar10 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar10 + uVar14 * 3,plVar2);
                      plVar13 = (long *)*plVar2;
                      uVar14 = uVar9;
                    }
                    uVar9 = uVar9 + 1;
                  }
                }
              }
            }
          }
        }
      }
      (**(code **)(*plVar13 + 0x100))(plVar13,plVar10 + uVar14 * 3,plVar10 + uVar9 * 3);
      plVar10[600] = 0;
    }
    *(undefined4 *)(lVar8 + 0x12cc) = 0;
  }
  return;
}


