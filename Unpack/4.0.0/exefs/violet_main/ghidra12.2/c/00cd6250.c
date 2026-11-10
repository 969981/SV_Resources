/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cd6250; name: FUN_00cd6250
 */


void FUN_00cd6250(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_68;
  long lStack_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  if (param_2 <= (ulong)(param_1[2] - param_1[1] >> 4)) {
    FUN_00cdfd00(param_1,param_2);
    return;
  }
  plVar1 = param_1 + 3;
  lVar4 = FUN_00cd6354(param_1,param_2 + (param_1[1] - *param_1 >> 4));
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
  FUN_00cd6510(&local_68,param_2);
  FUN_00cd63a4(param_1,&local_68);
  FUN_00cd644c(&local_68);
  return;
}


