/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01668084; name: FUN_01668084
 */


void FUN_01668084(long *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long *plStack_58;
  
  lVar5 = param_1[1];
  if (lVar5 != param_1[2]) {
    FUN_016682d4(param_1 + 3,lVar5,param_2);
    param_1[1] = lVar5 + 0x18;
    return;
  }
  plVar4 = param_1 + 3;
  lVar1 = FUN_01668278(param_1,(param_1[1] - *param_1 >> 3) * -0x5555555555555555 + 1);
  lVar5 = *param_1;
  lVar3 = param_1[1];
  local_60 = 0;
  plStack_58 = plVar4;
  if (lVar1 == 0) {
    local_78 = 0;
  }
  else {
    local_78 = (**(code **)(*(long *)*plVar4 + 0x10))((long *)*plVar4,lVar1 * 0x18,8);
    if (local_78 == 0) {
      (**(code **)(*(long *)*plVar4 + 0xe8))();
    }
  }
  lVar5 = local_78 + (lVar3 - lVar5 >> 3) * 8;
  local_60 = local_78 + lVar1 * 0x18;
  local_70 = lVar5;
  FUN_016682d4(plVar4,lVar5,param_2);
  local_68 = lVar5 + 0x18;
  FUN_016683e4(plVar4,*param_1,param_1[1],&local_70);
  local_78 = *param_1;
  lVar3 = param_1[1];
  *param_1 = local_70;
  param_1[1] = local_68;
  lVar5 = param_1[2];
  param_1[2] = local_60;
  local_70 = local_78;
  local_68 = lVar3;
  local_60 = lVar5;
  FUN_0166852c(&local_78);
  lVar5 = local_78;
  if (local_78 != 0) {
    lVar3 = local_60 - local_78;
    plVar4 = (long *)*plStack_58;
    uVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4);
    if (((uVar2 & 1) != 0) && (lVar1 = FUN_00c4e600(), 0 < *(int *)(lVar1 + 0x12c8))) {
      FUN_00c48fe8(plVar4,lVar5,lVar3,8);
      return;
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar5,lVar3,8);
  }
  return;
}


