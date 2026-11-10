/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018c43d4; name: FUN_018c43d4
 */


void FUN_018c43d4(undefined8 *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *local_60;
  long *plStack_58;
  
  FUN_00c4e600();
  FUN_00c4e600();
  lVar5 = FUN_00c4e600();
  iVar4 = *(int *)(lVar5 + 0x12c8);
  iVar1 = iVar4 + 1;
  *(int *)(lVar5 + 0x12c8) = iVar1;
  if (*(int *)(lVar5 + 0x12cc) <= iVar4) {
    *(int *)(lVar5 + 0x12cc) = iVar1;
  }
  FUN_01f9cdf4(param_2 + 0x98);
  FUN_00db239c(param_2 + 0x58);
  FUN_00db239c(param_2 + 0x18);
  plVar7 = (long *)*param_1;
  uVar3 = param_1[1];
  uVar8 = param_1[2];
  uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
  if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
    (**(code **)(*plVar7 + 0x18))(plVar7,param_2,uVar3,uVar8);
  }
  else {
    FUN_00c48fe8(plVar7,param_2,uVar3,uVar8);
  }
  lVar5 = FUN_00c4e600();
  iVar1 = *(int *)(lVar5 + 0x12c8) + -1;
  *(int *)(lVar5 + 0x12c8) = iVar1;
  if (iVar1 == 0) {
    plVar7 = (long *)FUN_00c4e600();
    if (plVar7[600] != 0) {
      local_60 = plVar7 + plVar7[600] * 3;
      plStack_58 = plVar7;
      FUN_00c4ea30(&plStack_58,&local_60);
      plVar9 = (long *)*plVar7;
      plVar2 = plVar7;
      if (plVar7[600] != 0) {
        plVar2 = plVar7 + plVar7[600] * 3;
      }
      if (plVar2 == plVar7) {
        lVar12 = 0;
        lVar11 = 0;
      }
      else {
        lVar11 = 0;
        lVar12 = 0;
        plVar10 = plVar7;
        do {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar9) {
            (**(code **)(*plVar9 + 0x100))(plVar9,plVar7 + lVar12 * 3,plVar10);
            plVar9 = (long *)*plVar10;
            lVar12 = lVar11;
          }
          plVar10 = plVar10 + 3;
          lVar11 = lVar11 + 1;
        } while (plVar2 != plVar10);
      }
      (**(code **)(*plVar9 + 0x100))(plVar9,plVar7 + lVar12 * 3,plVar7 + lVar11 * 3);
      plVar7[600] = 0;
    }
    *(undefined4 *)(lVar5 + 0x12cc) = 0;
  }
  return;
}


