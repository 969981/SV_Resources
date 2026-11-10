/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01366944; name: FUN_01366944
 */


void FUN_01366944(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long *plStack_58;
  
  plVar1 = param_1 + 3;
  lVar3 = FUN_0188b618(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar2 = *param_1;
  lVar5 = param_1[1];
  local_60 = 0;
  plStack_58 = plVar1;
  if (lVar3 == 0) {
    local_78 = 0;
  }
  else {
    local_78 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar3 << 3,8);
    if (local_78 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  lVar5 = local_78 + (lVar5 - lVar2 >> 3) * 8;
  lVar3 = local_78 + lVar3 * 8;
  local_70 = lVar5;
  local_60 = lVar3;
  FUN_013642b4(plVar1,lVar5,param_2);
  lVar2 = lVar5 + 8;
  lVar4 = *param_1;
  lVar6 = param_1[1];
  if (lVar6 == lVar4) {
    local_68 = lVar4;
  }
  else {
    lVar5 = lVar5 + -8;
    local_68 = lVar2;
    FUN_01366a9c(plVar1,lVar5,lVar6 + -8);
    if (lVar6 + -8 != lVar4) {
      do {
        lVar5 = lVar5 + -8;
        FUN_01366a9c(plVar1,lVar5,lVar6 + -0x10);
        lVar6 = lVar6 + -8;
      } while (lVar4 + 8 != lVar6);
    }
    lVar4 = *param_1;
    local_68 = param_1[1];
  }
  *param_1 = lVar5;
  param_1[1] = lVar2;
  local_60 = param_1[2];
  param_1[2] = lVar3;
  local_78 = lVar4;
  local_70 = lVar4;
  FUN_0136442c(&local_78);
  return;
}


