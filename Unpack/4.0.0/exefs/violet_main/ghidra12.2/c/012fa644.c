/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012fa644; name: FUN_012fa644
 */


void FUN_012fa644(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
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
  plVar12 = (long *)*param_2;
  if (plVar12 != (long *)0x0) {
    plVar10 = (long *)param_2[1];
    if (plVar10 == plVar12) {
      plVar10 = plVar12;
    }
    else {
      do {
        plVar10 = plVar10 + -1;
        if ((long *)*plVar10 != (long *)0x0) {
          (**(code **)(*(long *)*plVar10 + 0x60))();
        }
      } while (plVar12 != plVar10);
      plVar10 = (long *)*param_2;
    }
    lVar6 = param_2[2];
    plVar11 = (long *)param_2[3];
    param_2[1] = plVar12;
    uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,plVar10,lVar6 - (long)plVar10,8);
    }
    else {
      FUN_00c48fe8(plVar11,plVar10,lVar6 - (long)plVar10,8);
    }
  }
  plVar12 = (long *)*param_1;
  uVar3 = param_1[1];
  uVar9 = param_1[2];
  uVar7 = (**(code **)(*plVar12 + 0xf8))(plVar12);
  if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
    (**(code **)(*plVar12 + 0x18))(plVar12,param_2,uVar3,uVar9);
  }
  else {
    FUN_00c48fe8(plVar12,param_2,uVar3,uVar9);
  }
  lVar6 = FUN_00c4e600();
  iVar1 = *(int *)(lVar6 + 0x12c8) + -1;
  *(int *)(lVar6 + 0x12c8) = iVar1;
  if (iVar1 == 0) {
    plVar12 = (long *)FUN_00c4e600();
    if (plVar12[600] != 0) {
      local_60 = plVar12 + plVar12[600] * 3;
      plStack_58 = plVar12;
      FUN_00c4ea30(&plStack_58,&local_60);
      plVar11 = (long *)*plVar12;
      plVar10 = plVar12;
      if (plVar12[600] != 0) {
        plVar10 = plVar12 + plVar12[600] * 3;
      }
      if (plVar10 == plVar12) {
        uVar13 = 0;
        uVar7 = 0;
      }
      else {
        (**(code **)(*(long *)*plVar12 + 0xd0))();
        if ((long *)*plVar12 != plVar11) {
          (**(code **)(*plVar11 + 0x100))(plVar11,plVar12,plVar12);
          plVar11 = (long *)*plVar12;
        }
        plVar2 = plVar12 + 3;
        if (plVar10 == plVar2) {
          uVar13 = 0;
          uVar7 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar2 + 0xd0))();
          bVar5 = (long *)*plVar2 != plVar11;
          if (bVar5) {
            (**(code **)(*plVar11 + 0x100))(plVar11,plVar12,plVar12 + 3);
            plVar11 = (long *)plVar12[3];
          }
          uVar13 = (ulong)bVar5;
          plVar2 = plVar12 + 6;
          if (plVar10 == plVar2) {
            uVar7 = 2;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            if ((long *)*plVar2 != plVar11) {
              (**(code **)(*plVar11 + 0x100))(plVar11,plVar12 + uVar13 * 3,plVar12 + 6);
              plVar11 = (long *)plVar12[6];
              uVar13 = 2;
            }
            plVar2 = plVar12 + 9;
            if (plVar10 == plVar2) {
              uVar7 = 3;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar11) {
                (**(code **)(*plVar11 + 0x100))(plVar11,plVar12 + uVar13 * 3,plVar12 + 9);
                plVar11 = (long *)plVar12[9];
                uVar13 = 3;
              }
              plVar2 = plVar12 + 0xc;
              if (plVar10 == plVar2) {
                uVar7 = 4;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar11) {
                  (**(code **)(*plVar11 + 0x100))(plVar11,plVar12 + uVar13 * 3,plVar12 + 0xc);
                  plVar11 = (long *)plVar12[0xc];
                  uVar13 = 4;
                }
                plVar2 = plVar12 + 0xf;
                if (plVar10 == plVar2) {
                  uVar7 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar11) {
                    (**(code **)(*plVar11 + 0x100))(plVar11,plVar12 + uVar13 * 3,plVar12 + 0xf);
                    plVar11 = (long *)plVar12[0xf];
                    uVar13 = 5;
                  }
                  uVar7 = 6;
                  for (plVar2 = plVar12 + 0x12; plVar10 != plVar2; plVar2 = plVar2 + 3) {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar11) {
                      (**(code **)(*plVar11 + 0x100))(plVar11,plVar12 + uVar13 * 3,plVar2);
                      plVar11 = (long *)*plVar2;
                      uVar13 = uVar7;
                    }
                    uVar7 = uVar7 + 1;
                  }
                }
              }
            }
          }
        }
      }
      (**(code **)(*plVar11 + 0x100))(plVar11,plVar12 + uVar13 * 3,plVar12 + uVar7 * 3);
      plVar12[600] = 0;
    }
    *(undefined4 *)(lVar6 + 0x12cc) = 0;
  }
  return;
}


