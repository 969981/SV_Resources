/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fb4e68; name: FUN_01fb4e68
 */


void FUN_01fb4e68(long param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long *local_70;
  long *plStack_68;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_01fb4e68(param_1,*param_2);
    FUN_01fb4e68(param_1,param_2[1]);
    lVar10 = param_2[5];
    param_2[5] = 0;
    if (lVar10 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar8 = FUN_00c4e600();
      iVar5 = *(int *)(lVar8 + 0x12c8);
      iVar1 = iVar5 + 1;
      *(int *)(lVar8 + 0x12c8) = iVar1;
      if (*(int *)(lVar8 + 0x12cc) <= iVar5) {
        *(int *)(lVar8 + 0x12cc) = iVar1;
      }
      FUN_014f0a98(lVar10);
      plVar9 = (long *)param_2[6];
      uVar4 = param_2[7];
      uVar11 = param_2[8];
      uVar7 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,uVar4,uVar11);
      }
      else {
        FUN_00c48fe8(plVar9,lVar10,uVar4,uVar11);
      }
      lVar10 = FUN_00c4e600();
      iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
      *(int *)(lVar10 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar9 = (long *)FUN_00c4e600();
        if (plVar9[600] != 0) {
          local_70 = plVar9 + plVar9[600] * 3;
          plStack_68 = plVar9;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar12 = (long *)*plVar9;
          plVar3 = plVar9;
          if (plVar9[600] != 0) {
            plVar3 = plVar9 + plVar9[600] * 3;
          }
          if (plVar3 == plVar9) {
            uVar13 = 0;
            uVar7 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar9 + 0xd0))();
            if ((long *)*plVar9 != plVar12) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar9,plVar9);
              plVar12 = (long *)*plVar9;
            }
            plVar2 = plVar9 + 3;
            if (plVar3 == plVar2) {
              uVar13 = 0;
              uVar7 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar6 = (long *)*plVar2 != plVar12;
              if (bVar6) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar9,plVar9 + 3);
                plVar12 = (long *)plVar9[3];
              }
              uVar13 = (ulong)bVar6;
              plVar2 = plVar9 + 6;
              if (plVar3 == plVar2) {
                uVar7 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar13 * 3,plVar9 + 6);
                  plVar12 = (long *)plVar9[6];
                  uVar13 = 2;
                }
                plVar2 = plVar9 + 9;
                if (plVar3 == plVar2) {
                  uVar7 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar13 * 3,plVar9 + 9);
                    plVar12 = (long *)plVar9[9];
                    uVar13 = 3;
                  }
                  plVar2 = plVar9 + 0xc;
                  if (plVar3 == plVar2) {
                    uVar7 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar13 * 3,plVar9 + 0xc);
                      plVar12 = (long *)plVar9[0xc];
                      uVar13 = 4;
                    }
                    plVar2 = plVar9 + 0xf;
                    if (plVar3 == plVar2) {
                      uVar7 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar13 * 3,plVar9 + 0xf);
                        plVar12 = (long *)plVar9[0xf];
                        uVar13 = 5;
                      }
                      uVar7 = 6;
                      for (plVar2 = plVar9 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar12) {
                          (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar13 * 3,plVar2);
                          plVar12 = (long *)*plVar2;
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
          (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar13 * 3,plVar9 + uVar7 * 3);
          plVar9[600] = 0;
        }
        *(undefined4 *)(lVar10 + 0x12cc) = 0;
      }
    }
    plVar9 = *(long **)(param_1 + 0x10);
    uVar7 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,param_2,0x48,8);
    }
    else {
      FUN_00c48fe8(plVar9,param_2,0x48,8);
    }
  }
  return;
}


