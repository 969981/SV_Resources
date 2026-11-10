/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0291b2b8; name: FUN_0291b2b8
 */


void FUN_0291b2b8(long *param_1,undefined8 param_2)

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
  lVar4 = FUN_0291b398(param_1,(param_1[1] - *param_1 >> 3) + 1);
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
  FUN_0291b23c(plVar1,lVar2,param_2);
  local_68 = lVar2 + 8;
  FUN_0291b3e8(param_1,&local_78);
  FUN_0291b490(&local_78);
  return;
}


