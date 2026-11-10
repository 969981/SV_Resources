/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029b8f24; name: FUN_029b8f24
 */


void FUN_029b8f24(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)param_1[6];
  if (plVar4 != (long *)0x0) {
    plVar3 = (long *)*plVar4;
    if ((long *)plVar4[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar4[5] + 0x20))();
    }
    plVar5 = (long *)param_1[7];
    uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,plVar4,0x38,8);
    }
    else {
      FUN_00c48fe8(plVar5,plVar4,0x38,8);
    }
    while (plVar3 != (long *)0x0) {
      plVar4 = (long *)*plVar3;
      if ((long *)plVar3[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar3[5] + 0x20))();
      }
      plVar5 = (long *)param_1[7];
      uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,plVar3,0x38,8);
        plVar3 = plVar4;
      }
      else {
        FUN_00c48fe8(plVar5,plVar3,0x38,8);
        plVar3 = plVar4;
      }
    }
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 == 0) {
    return;
  }
  FUN_029b8e9c(param_1 + 1);
  return;
}


