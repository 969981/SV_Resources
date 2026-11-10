/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f739c0; name: FUN_01f739c0
 */


void FUN_01f739c0(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  long local_50;
  long *plStack_48;
  
  plVar1 = param_1 + 3;
  lVar4 = FUN_01f781b8(param_1,(param_1[1] - *param_1 >> 2) + 1);
  lVar2 = *param_1;
  lVar3 = param_1[1];
  local_50 = 0;
  lVar5 = 0;
  plStack_48 = plVar1;
  if (lVar4 != 0) {
    lVar5 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar4 << 2,4);
  }
  local_60 = (undefined4 *)(lVar5 + (lVar3 - lVar2 >> 2) * 4);
  puVar6 = local_60 + 1;
  *local_60 = *param_2;
  local_58 = (undefined4 *)*param_1;
  puVar7 = (undefined4 *)param_1[1];
  if (puVar7 == local_58) {
    local_68 = local_58;
  }
  else {
    do {
      puVar7 = puVar7 + -1;
      local_60[-1] = *puVar7;
      local_60 = local_60 + -1;
    } while (local_58 != puVar7);
    local_58 = (undefined4 *)param_1[1];
    local_68 = (undefined4 *)*param_1;
  }
  *param_1 = (long)local_60;
  param_1[1] = (long)puVar6;
  local_50 = param_1[2];
  param_1[2] = lVar5 + lVar4 * 4;
  local_60 = local_68;
  FUN_01f781fc(&local_68);
  return;
}


