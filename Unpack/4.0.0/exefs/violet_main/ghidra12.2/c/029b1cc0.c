/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029b1cc0; name: FUN_029b1cc0
 */


void FUN_029b1cc0(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_04603c88;
  param_1[4] = &PTR_LAB_04603cb8;
  FUN_00e953f8(param_1 + 0x83,param_1[0x89]);
  lVar4 = param_1[0x83];
  param_1[0x83] = 0;
  if (lVar4 != 0) {
    lVar3 = param_1[0x84];
    plVar5 = (long *)param_1[0x85];
    uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar1 & 1) != 0) {
      lVar2 = FUN_00c4e600();
      if (0 < *(int *)(lVar2 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar4,lVar3 << 3,8);
        goto LAB_029b1d00;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar3 << 3,8);
  }
LAB_029b1d00:
  FUN_00dad2bc(param_1 + 0x6d);
  FUN_00dad2bc(param_1 + 0x58);
  if ((long *)param_1[0x57] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x57] + 0x20))();
  }
  FUN_00dad2bc(param_1 + 0x3e);
  FUN_00e953f8(param_1 + 0x31,param_1[0x37]);
  lVar4 = param_1[0x31];
  param_1[0x31] = 0;
  if (lVar4 != 0) {
    lVar3 = param_1[0x32];
    plVar5 = (long *)param_1[0x33];
    uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar1 & 1) != 0) {
      lVar2 = FUN_00c4e600();
      if (0 < *(int *)(lVar2 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar4,lVar3 << 3,8);
        goto LAB_029b1d38;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar3 << 3,8);
  }
LAB_029b1d38:
  FUN_00dad2bc(param_1 + 0x1b);
  FUN_00dad2bc(param_1 + 6);
  return;
}


