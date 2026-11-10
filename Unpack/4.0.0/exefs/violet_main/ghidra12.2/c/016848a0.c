/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016848a0; name: FUN_016848a0
 */


void FUN_016848a0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long local_70;
  long local_68;
  long local_60;
  long *local_58;
  
  lVar1 = param_1[1];
  if (lVar1 != param_1[2]) {
    FUN_01684ae0(param_1 + 3,lVar1,param_2);
    param_1[1] = lVar1 + 0x40;
    return;
  }
  plVar6 = param_1 + 3;
  lVar2 = FUN_01684a90(param_1,(param_1[1] - *param_1 >> 6) + 1);
  lVar1 = *param_1;
  lVar5 = param_1[1];
  local_60 = 0;
  local_58 = plVar6;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,lVar2 << 6,8);
    if (lVar3 == 0) {
      (**(code **)(*(long *)*plVar6 + 0xe8))();
    }
  }
  lVar1 = lVar3 + (lVar5 - lVar1 >> 6) * 0x40;
  local_60 = lVar3 + lVar2 * 0x40;
  local_70 = lVar1;
  FUN_01684ae0(plVar6,lVar1,param_2);
  local_68 = lVar1 + 0x40;
  FUN_01684d40(plVar6,*param_1,param_1[1],&local_70);
  lVar1 = *param_1;
  lVar5 = param_1[1];
  *param_1 = local_70;
  param_1[1] = local_68;
  lVar2 = param_1[2];
  param_1[2] = local_60;
  local_70 = lVar1;
  local_68 = lVar5;
  local_60 = lVar2;
  if (lVar5 != lVar1) {
    do {
      lVar5 = lVar5 + -0x40;
      FUN_00fa65c0(lVar5);
    } while (lVar1 != lVar5);
    local_68 = lVar1;
  }
  if (lVar1 != 0) {
    plVar6 = (long *)*local_58;
    uVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar4 & 1) != 0) && (lVar5 = FUN_00c4e600(), 0 < *(int *)(lVar5 + 0x12c8))) {
      FUN_00c48fe8(plVar6,lVar1,lVar2 - lVar1,8);
      return;
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar1,lVar2 - lVar1,8);
  }
  return;
}


