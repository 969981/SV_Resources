/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01425954; name: FUN_01425954
 */


void FUN_01425954(undefined8 *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *local_60;
  long *plStack_58;
  
  FUN_00c4e600();
  FUN_00c4e600();
  lVar6 = FUN_00c4e600();
  iVar4 = *(int *)(lVar6 + 0x12c8);
  iVar1 = iVar4 + 1;
  *(int *)(lVar6 + 0x12c8) = iVar1;
  if (*(int *)(lVar6 + 0x12cc) <= iVar4) {
    *(int *)(lVar6 + 0x12cc) = iVar1;
  }
  uVar8 = param_1[1];
  uVar10 = uVar8 >> 6;
  if (uVar10 != 0) {
    lVar6 = param_2;
    do {
      FUN_0132d0d8(lVar6);
      uVar10 = uVar10 - 1;
      lVar6 = lVar6 + 0x40;
    } while (uVar10 != 0);
    uVar8 = param_1[1];
  }
  plVar11 = (long *)*param_1;
  uVar7 = param_1[2];
  uVar10 = (**(code **)(*plVar11 + 0xf8))(plVar11);
  if (((uVar10 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
    (**(code **)(*plVar11 + 0x18))(plVar11,param_2,uVar8,uVar7);
  }
  else {
    FUN_00c48fe8(plVar11,param_2,uVar8,uVar7);
  }
  lVar6 = FUN_00c4e600();
  iVar1 = *(int *)(lVar6 + 0x12c8) + -1;
  *(int *)(lVar6 + 0x12c8) = iVar1;
  if (iVar1 == 0) {
    plVar11 = (long *)FUN_00c4e600();
    if (plVar11[600] != 0) {
      local_60 = plVar11 + plVar11[600] * 3;
      plStack_58 = plVar11;
      FUN_00c4ea30(&plStack_58,&local_60);
      plVar9 = (long *)*plVar11;
      plVar3 = plVar11;
      if (plVar11[600] != 0) {
        plVar3 = plVar11 + plVar11[600] * 3;
      }
      if (plVar3 == plVar11) {
        uVar8 = 0;
        uVar10 = 0;
      }
      else {
        (**(code **)(*(long *)*plVar11 + 0xd0))();
        if ((long *)*plVar11 != plVar9) {
          (**(code **)(*plVar9 + 0x100))(plVar9,plVar11,plVar11);
          plVar9 = (long *)*plVar11;
        }
        plVar2 = plVar11 + 3;
        if (plVar3 == plVar2) {
          uVar8 = 0;
          uVar10 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar2 + 0xd0))();
          bVar5 = (long *)*plVar2 != plVar9;
          if (bVar5) {
            (**(code **)(*plVar9 + 0x100))(plVar9,plVar11,plVar11 + 3);
            plVar9 = (long *)plVar11[3];
          }
          uVar8 = (ulong)bVar5;
          plVar2 = plVar11 + 6;
          if (plVar3 == plVar2) {
            uVar10 = 2;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            if ((long *)*plVar2 != plVar9) {
              (**(code **)(*plVar9 + 0x100))(plVar9,plVar11 + uVar8 * 3,plVar11 + 6);
              plVar9 = (long *)plVar11[6];
              uVar8 = 2;
            }
            plVar2 = plVar11 + 9;
            if (plVar3 == plVar2) {
              uVar10 = 3;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar9) {
                (**(code **)(*plVar9 + 0x100))(plVar9,plVar11 + uVar8 * 3,plVar11 + 9);
                plVar9 = (long *)plVar11[9];
                uVar8 = 3;
              }
              plVar2 = plVar11 + 0xc;
              if (plVar3 == plVar2) {
                uVar10 = 4;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar9) {
                  (**(code **)(*plVar9 + 0x100))(plVar9,plVar11 + uVar8 * 3,plVar11 + 0xc);
                  plVar9 = (long *)plVar11[0xc];
                  uVar8 = 4;
                }
                plVar2 = plVar11 + 0xf;
                if (plVar3 == plVar2) {
                  uVar10 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar9) {
                    (**(code **)(*plVar9 + 0x100))(plVar9,plVar11 + uVar8 * 3,plVar11 + 0xf);
                    plVar9 = (long *)plVar11[0xf];
                    uVar8 = 5;
                  }
                  uVar10 = 6;
                  for (plVar2 = plVar11 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar9) {
                      (**(code **)(*plVar9 + 0x100))(plVar9,plVar11 + uVar8 * 3,plVar2);
                      plVar9 = (long *)*plVar2;
                      uVar8 = uVar10;
                    }
                    uVar10 = uVar10 + 1;
                  }
                }
              }
            }
          }
        }
      }
      (**(code **)(*plVar9 + 0x100))(plVar9,plVar11 + uVar8 * 3,plVar11 + uVar10 * 3);
      plVar11[600] = 0;
    }
    *(undefined4 *)(lVar6 + 0x12cc) = 0;
  }
  return;
}


