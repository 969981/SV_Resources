/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014220dc; name: FUN_014220dc
 */


void FUN_014220dc(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long local_68;
  long lStack_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  uVar5 = param_1[1] - *param_1 >> 4;
  if (param_2 <= uVar5) {
    if (uVar5 != param_2) {
      param_1[1] = *param_1 + param_2 * 0x10;
    }
    return;
  }
  param_2 = param_2 - uVar5;
  if (param_2 <= (ulong)(param_1[2] - param_1[1] >> 4)) {
    FUN_01423c30(param_1,param_2);
    return;
  }
  plVar1 = param_1 + 3;
  lVar4 = FUN_0142220c(param_1,param_2 + (param_1[1] - *param_1 >> 4));
  lVar2 = *param_1;
  lVar3 = param_1[1];
  local_50 = 0;
  plStack_48 = plVar1;
  if (lVar4 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar4 << 4,4);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  lStack_60 = local_68 + (lVar3 - lVar2 >> 4) * 0x10;
  local_50 = local_68 + lVar4 * 0x10;
  local_58 = lStack_60;
  FUN_014223c8(&local_68,param_2);
  FUN_0142225c(param_1,&local_68);
  FUN_01422304(&local_68);
  return;
}


