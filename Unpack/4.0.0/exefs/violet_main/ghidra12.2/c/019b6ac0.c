/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019b6ac0; name: FUN_019b6ac0
 */


void FUN_019b6ac0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  long *plStack_58;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    FUN_019b6c48(param_1 + 3,uVar2,param_2);
    param_1[1] = uVar2 + 0x10;
    return;
  }
  plVar1 = param_1 + 3;
  lVar5 = FUN_019b6bf8(param_1,(param_1[1] - *param_1 >> 4) + 1);
  lVar3 = *param_1;
  lVar4 = param_1[1];
  local_60 = 0;
  plStack_58 = plVar1;
  if (lVar5 == 0) {
    local_78 = 0;
  }
  else {
    local_78 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar5 << 4,8);
    if (local_78 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  lVar3 = local_78 + (lVar4 - lVar3);
  local_60 = local_78 + lVar5 * 0x10;
  lStack_70 = lVar3;
  FUN_019b6c48(plVar1,lVar3,param_2);
  local_68 = lVar3 + 0x10;
  FUN_019b6de4(param_1,&local_78);
  FUN_019b6d24(&local_78);
  return;
}


