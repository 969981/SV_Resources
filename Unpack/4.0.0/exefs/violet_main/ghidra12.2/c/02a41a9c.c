/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a41a9c; name: FUN_02a41a9c
 */


void FUN_02a41a9c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  lVar3 = param_1[1];
  lVar5 = *param_1;
  lVar2 = lVar3 - lVar5;
  if ((ulong)(lVar2 >> 4) < (ulong)(param_1[2] - lVar5 >> 4)) {
    plVar1 = param_1 + 3;
    local_50 = 0;
    plStack_48 = plVar1;
    if (lVar2 == 0) {
      local_68 = 0;
    }
    else {
      local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar2,8);
      if (local_68 == 0) {
        (**(code **)(*(long *)*plVar1 + 0xe8))();
      }
      lVar5 = *param_1;
      lVar3 = param_1[1];
    }
    lVar2 = local_68 + (lVar2 >> 4) * 0x10;
    lVar4 = lVar2;
    local_60 = lVar2;
    local_58 = lVar2;
    local_50 = lVar2;
    if (lVar3 == lVar5) {
      local_58 = lVar3;
    }
    else {
      do {
        lVar4 = lVar4 + -0x10;
        lVar3 = lVar3 + -0x10;
        FUN_01266934(plVar1,lVar4,lVar3);
      } while (lVar5 != lVar3);
      lVar3 = *param_1;
      local_58 = param_1[1];
    }
    *param_1 = lVar4;
    param_1[1] = lVar2;
    local_50 = param_1[2];
    param_1[2] = lVar2;
    local_68 = lVar3;
    local_60 = lVar3;
    FUN_01266730(&local_68);
  }
  return;
}


