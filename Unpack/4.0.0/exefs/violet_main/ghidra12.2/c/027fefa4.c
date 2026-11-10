/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027fefa4; name: FUN_027fefa4
 */


void FUN_027fefa4(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  long *plStack_58;
  
  plVar1 = param_1 + 3;
  lVar4 = FUN_027ff1fc(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar2 = *param_1;
  lVar3 = param_1[1];
  local_60 = 0;
  plStack_58 = plVar1;
  if (lVar4 == 0) {
    local_78 = 0;
  }
  else {
    local_78 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar4 << 3,8);
    if (local_78 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  lVar2 = local_78 + (lVar3 - lVar2);
  local_60 = local_78 + lVar4 * 8;
  lStack_70 = lVar2;
  FUN_027feeb4(plVar1,lVar2,param_2);
  local_68 = lVar2 + 8;
  FUN_027ff24c(param_1,&local_78);
  FUN_027ff2f4(&local_78);
  return;
}


