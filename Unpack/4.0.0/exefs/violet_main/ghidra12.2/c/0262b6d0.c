/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0262b6d0; name: FUN_0262b6d0
 */


void FUN_0262b6d0(long *param_1,undefined8 param_2)

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
  lVar4 = FUN_0262832c(param_1,(param_1[1] - *param_1 >> 7) + 1);
  lVar2 = *param_1;
  lVar3 = param_1[1];
  local_60 = 0;
  plStack_58 = plVar1;
  if (lVar4 == 0) {
    local_78 = 0;
  }
  else {
    local_78 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar4 << 7,0x10);
    if (local_78 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  lVar2 = local_78 + (lVar3 - lVar2);
  local_60 = local_78 + lVar4 * 0x80;
  lStack_70 = lVar2;
  FUN_0262b5d0(plVar1,lVar2,param_2);
  local_68 = lVar2 + 0x80;
  FUN_02263d84(param_1,&local_78);
  FUN_02263e2c(&local_78);
  return;
}


