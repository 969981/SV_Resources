/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e01dc8; name: FUN_00e01dc8
 */


void FUN_00e01dc8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  long *plStack_68;
  
  plVar1 = param_1 + 3;
  lVar4 = FUN_00e01ec4(param_1,(param_1[1] - *param_1 >> 4) + 1);
  lVar2 = *param_1;
  lVar3 = param_1[1];
  local_70 = 0;
  plStack_68 = plVar1;
  if (lVar4 == 0) {
    local_88 = 0;
  }
  else {
    local_88 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar4 << 4,8);
    if (local_88 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  lVar2 = local_88 + (lVar3 - lVar2);
  local_70 = local_88 + lVar4 * 0x10;
  lStack_80 = lVar2;
  FUN_00e02104(plVar1,lVar2,param_2,param_3,param_4);
  local_78 = lVar2 + 0x10;
  FUN_00e01f14(param_1,&local_88);
  FUN_00e01fbc(&local_88);
  return;
}


