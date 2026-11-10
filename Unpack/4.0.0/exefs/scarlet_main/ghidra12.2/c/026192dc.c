/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026192dc; name: FUN_026192dc
 */


void FUN_026192dc(long *param_1,undefined8 param_2)

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
  lVar4 = FUN_026193c0(param_1,(param_1[1] - *param_1 >> 7) + 1);
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
  FUN_026191dc(plVar1,lVar2,param_2);
  local_68 = lVar2 + 0x80;
  FUN_017fc8a8(param_1,&local_78);
  FUN_017fca60(&local_78);
  return;
}


