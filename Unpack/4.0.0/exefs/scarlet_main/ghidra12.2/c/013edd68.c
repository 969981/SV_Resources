/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013edd68; name: FUN_013edd68
 */


void FUN_013edd68(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
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
  puVar10 = (undefined8 *)param_2[6];
  if (puVar10 != (undefined8 *)0x0) {
    plVar8 = (long *)*puVar10;
    if ((long *)puVar10[3] != (long *)0x0) {
      (**(code **)(*(long *)puVar10[3] + 0x20))();
    }
    plVar12 = (long *)param_2[7];
    uVar7 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar10,0x20,8);
    }
    else {
      FUN_00c48fe8(plVar12,puVar10,0x20,8);
    }
    if (plVar8 != (long *)0x0) {
      plVar12 = (long *)*plVar8;
      if ((long *)plVar8[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar8[3] + 0x20))();
      }
      plVar11 = (long *)param_2[7];
      uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,plVar8,0x20,8);
      }
      else {
        FUN_00c48fe8(plVar11,plVar8,0x20,8);
      }
      while (plVar12 != (long *)0x0) {
        plVar8 = (long *)*plVar12;
        if ((long *)plVar12[3] != (long *)0x0) {
          (**(code **)(*(long *)plVar12[3] + 0x20))();
        }
        plVar11 = (long *)param_2[7];
        uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
        if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
          (**(code **)(*plVar11 + 0x18))(plVar11,plVar12,0x20,8);
          plVar12 = plVar8;
        }
        else {
          FUN_00c48fe8(plVar11,plVar12,0x20,8);
          plVar12 = plVar8;
        }
      }
    }
  }
  lVar6 = *param_2;
  *param_2 = 0;
  if (lVar6 != 0) {
    FUN_013ee2b4(param_2 + 1);
  }
  plVar8 = (long *)*param_1;
  uVar3 = param_1[1];
  uVar9 = param_1[2];
  uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
    (**(code **)(*plVar8 + 0x18))(plVar8,param_2,uVar3,uVar9);
  }
  else {
    FUN_00c48fe8(plVar8,param_2,uVar3,uVar9);
  }
  lVar6 = FUN_00c4e600();
  iVar1 = *(int *)(lVar6 + 0x12c8) + -1;
  *(int *)(lVar6 + 0x12c8) = iVar1;
  if (iVar1 == 0) {
    plVar8 = (long *)FUN_00c4e600();
    if (plVar8[600] != 0) {
      local_60 = plVar8 + plVar8[600] * 3;
      plStack_58 = plVar8;
      FUN_00c4ea30(&plStack_58,&local_60);
      plVar11 = (long *)*plVar8;
      plVar12 = plVar8;
      if (plVar8[600] != 0) {
        plVar12 = plVar8 + plVar8[600] * 3;
      }
      if (plVar12 == plVar8) {
        uVar13 = 0;
        uVar7 = 0;
      }
      else {
        (**(code **)(*(long *)*plVar8 + 0xd0))();
        if ((long *)*plVar8 != plVar11) {
          (**(code **)(*plVar11 + 0x100))(plVar11,plVar8,plVar8);
          plVar11 = (long *)*plVar8;
        }
        plVar2 = plVar8 + 3;
        if (plVar12 == plVar2) {
          uVar13 = 0;
          uVar7 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar2 + 0xd0))();
          bVar5 = (long *)*plVar2 != plVar11;
          if (bVar5) {
            (**(code **)(*plVar11 + 0x100))(plVar11,plVar8,plVar8 + 3);
            plVar11 = (long *)plVar8[3];
          }
          uVar13 = (ulong)bVar5;
          plVar2 = plVar8 + 6;
          if (plVar12 == plVar2) {
            uVar7 = 2;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            if ((long *)*plVar2 != plVar11) {
              (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + uVar13 * 3,plVar8 + 6);
              plVar11 = (long *)plVar8[6];
              uVar13 = 2;
            }
            plVar2 = plVar8 + 9;
            if (plVar12 == plVar2) {
              uVar7 = 3;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar11) {
                (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + uVar13 * 3,plVar8 + 9);
                plVar11 = (long *)plVar8[9];
                uVar13 = 3;
              }
              plVar2 = plVar8 + 0xc;
              if (plVar12 == plVar2) {
                uVar7 = 4;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar11) {
                  (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + uVar13 * 3,plVar8 + 0xc);
                  plVar11 = (long *)plVar8[0xc];
                  uVar13 = 4;
                }
                plVar2 = plVar8 + 0xf;
                if (plVar12 == plVar2) {
                  uVar7 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar11) {
                    (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + uVar13 * 3,plVar8 + 0xf);
                    plVar11 = (long *)plVar8[0xf];
                    uVar13 = 5;
                  }
                  uVar7 = 6;
                  for (plVar2 = plVar8 + 0x12; plVar12 != plVar2; plVar2 = plVar2 + 3) {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar11) {
                      (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + uVar13 * 3,plVar2);
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
      (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + uVar13 * 3,plVar8 + uVar7 * 3);
      plVar8[600] = 0;
    }
    *(undefined4 *)(lVar6 + 0x12cc) = 0;
  }
  return;
}


