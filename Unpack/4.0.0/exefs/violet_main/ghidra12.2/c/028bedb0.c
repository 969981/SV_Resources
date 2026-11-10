/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028bedb0; name: FUN_028bedb0
 */


void FUN_028bedb0(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  undefined2 uVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *local_60;
  long *plStack_58;
  
  if ((*(byte *)((long)param_1 + 0x249) & 1) == 0) {
    (**(code **)(*param_1 + 0x80))(param_1);
  }
  plVar11 = (long *)param_1[1];
  lVar10 = param_1[2];
  lVar6 = param_1[3];
  uVar5 = *(undefined2 *)((long)param_1 + 0x1a);
  FUN_00c4e600();
  FUN_00c4e600();
  lVar8 = FUN_00c4e600();
  iVar4 = *(int *)(lVar8 + 0x12c8);
  iVar1 = iVar4 + 1;
  *(int *)(lVar8 + 0x12c8) = iVar1;
  if (*(int *)(lVar8 + 0x12cc) <= iVar4) {
    *(int *)(lVar8 + 0x12cc) = iVar1;
  }
  (**(code **)*param_1)(param_1);
  uVar9 = (**(code **)(*plVar11 + 0xf8))(plVar11);
  if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar10,(short)lVar6,uVar5);
  }
  else {
    FUN_00c48fe8(plVar11,lVar10,(short)lVar6,uVar5);
  }
  lVar10 = FUN_00c4e600();
  iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
  *(int *)(lVar10 + 0x12c8) = iVar1;
  if (iVar1 == 0) {
    plVar11 = (long *)FUN_00c4e600();
    if (plVar11[600] != 0) {
      local_60 = plVar11 + plVar11[600] * 3;
      plStack_58 = plVar11;
      FUN_00c4ea30(&plStack_58,&local_60);
      plVar12 = (long *)*plVar11;
      plVar3 = plVar11;
      if (plVar11[600] != 0) {
        plVar3 = plVar11 + plVar11[600] * 3;
      }
      if (plVar3 == plVar11) {
        uVar13 = 0;
        uVar9 = 0;
      }
      else {
        (**(code **)(*(long *)*plVar11 + 0xd0))();
        if ((long *)*plVar11 != plVar12) {
          (**(code **)(*plVar12 + 0x100))(plVar12,plVar11,plVar11);
          plVar12 = (long *)*plVar11;
        }
        plVar2 = plVar11 + 3;
        if (plVar3 == plVar2) {
          uVar13 = 0;
          uVar9 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar2 + 0xd0))();
          bVar7 = (long *)*plVar2 != plVar12;
          if (bVar7) {
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar11,plVar11 + 3);
            plVar12 = (long *)plVar11[3];
          }
          uVar13 = (ulong)bVar7;
          plVar2 = plVar11 + 6;
          if (plVar3 == plVar2) {
            uVar9 = 2;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            if ((long *)*plVar2 != plVar12) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar13 * 3,plVar11 + 6);
              plVar12 = (long *)plVar11[6];
              uVar13 = 2;
            }
            plVar2 = plVar11 + 9;
            if (plVar3 == plVar2) {
              uVar9 = 3;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar13 * 3,plVar11 + 9);
                plVar12 = (long *)plVar11[9];
                uVar13 = 3;
              }
              plVar2 = plVar11 + 0xc;
              if (plVar3 == plVar2) {
                uVar9 = 4;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar13 * 3,plVar11 + 0xc);
                  plVar12 = (long *)plVar11[0xc];
                  uVar13 = 4;
                }
                plVar2 = plVar11 + 0xf;
                if (plVar3 == plVar2) {
                  uVar9 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar13 * 3,plVar11 + 0xf);
                    plVar12 = (long *)plVar11[0xf];
                    uVar13 = 5;
                  }
                  uVar9 = 6;
                  for (plVar2 = plVar11 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar13 * 3,plVar2);
                      plVar12 = (long *)*plVar2;
                      uVar13 = uVar9;
                    }
                    uVar9 = uVar9 + 1;
                  }
                }
              }
            }
          }
        }
      }
      (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar13 * 3,plVar11 + uVar9 * 3);
      plVar11[600] = 0;
    }
    *(undefined4 *)(lVar10 + 0x12cc) = 0;
  }
  return;
}


