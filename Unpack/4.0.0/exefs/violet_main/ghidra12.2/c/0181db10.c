/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0181db10; name: FUN_0181db10
 */


void FUN_0181db10(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long *local_60;
  long *plStack_58;
  
  FUN_00c4e600();
  FUN_00c4e600();
  lVar8 = FUN_00c4e600();
  iVar5 = *(int *)(lVar8 + 0x12c8);
  iVar1 = iVar5 + 1;
  *(int *)(lVar8 + 0x12c8) = iVar1;
  if (*(int *)(lVar8 + 0x12cc) <= iVar5) {
    *(int *)(lVar8 + 0x12cc) = iVar1;
  }
  puVar6 = PTR_DAT_047dd0d0;
  lVar8 = param_2[8];
  param_2[8] = 0;
  *param_2 = (long)(puVar6 + 0x10);
  if (lVar8 != 0) {
    FUN_017a157c(param_2 + 9);
  }
  FUN_0181def0(param_2 + 4);
  plVar10 = (long *)*param_1;
  uVar4 = param_1[1];
  uVar11 = param_1[2];
  uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
  if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
    (**(code **)(*plVar10 + 0x18))(plVar10,param_2,uVar4,uVar11);
  }
  else {
    FUN_00c48fe8(plVar10,param_2,uVar4,uVar11);
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
      plVar12 = (long *)*plVar10;
      plVar3 = plVar10;
      if (plVar10[600] != 0) {
        plVar3 = plVar10 + plVar10[600] * 3;
      }
      if (plVar3 == plVar10) {
        uVar13 = 0;
        uVar9 = 0;
      }
      else {
        (**(code **)(*(long *)*plVar10 + 0xd0))();
        if ((long *)*plVar10 != plVar12) {
          (**(code **)(*plVar12 + 0x100))(plVar12,plVar10,plVar10);
          plVar12 = (long *)*plVar10;
        }
        plVar2 = plVar10 + 3;
        if (plVar3 == plVar2) {
          uVar13 = 0;
          uVar9 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar2 + 0xd0))();
          bVar7 = (long *)*plVar2 != plVar12;
          if (bVar7) {
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar10,plVar10 + 3);
            plVar12 = (long *)plVar10[3];
          }
          uVar13 = (ulong)bVar7;
          plVar2 = plVar10 + 6;
          if (plVar3 == plVar2) {
            uVar9 = 2;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            if ((long *)*plVar2 != plVar12) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar13 * 3,plVar10 + 6);
              plVar12 = (long *)plVar10[6];
              uVar13 = 2;
            }
            plVar2 = plVar10 + 9;
            if (plVar3 == plVar2) {
              uVar9 = 3;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar13 * 3,plVar10 + 9);
                plVar12 = (long *)plVar10[9];
                uVar13 = 3;
              }
              plVar2 = plVar10 + 0xc;
              if (plVar3 == plVar2) {
                uVar9 = 4;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar13 * 3,plVar10 + 0xc);
                  plVar12 = (long *)plVar10[0xc];
                  uVar13 = 4;
                }
                plVar2 = plVar10 + 0xf;
                if (plVar3 == plVar2) {
                  uVar9 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar13 * 3,plVar10 + 0xf);
                    plVar12 = (long *)plVar10[0xf];
                    uVar13 = 5;
                  }
                  uVar9 = 6;
                  for (plVar2 = plVar10 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar13 * 3,plVar2);
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
      (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar13 * 3,plVar10 + uVar9 * 3);
      plVar10[600] = 0;
    }
    *(undefined4 *)(lVar8 + 0x12cc) = 0;
  }
  return;
}


