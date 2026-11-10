/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02740e28; name: FUN_02740e28
 */


void FUN_02740e28(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_68;
  long lStack_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  lVar4 = param_1[1];
  if ((ulong)(param_1[2] - lVar4 >> 3) < param_2) {
    plVar1 = param_1 + 3;
    lVar3 = FUN_0274131c(param_1,param_2 + (lVar4 - *param_1 >> 3));
    lVar4 = *param_1;
    lVar2 = param_1[1];
    local_50 = 0;
    plStack_48 = plVar1;
    if (lVar3 == 0) {
      local_68 = 0;
    }
    else {
      local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar3 << 3,8);
      if (local_68 == 0) {
        (**(code **)(*(long *)*plVar1 + 0xe8))();
      }
    }
    lVar4 = local_68 + (lVar2 - lVar4 >> 3) * 8;
    local_50 = local_68 + lVar3 * 8;
    lVar2 = lVar4 + param_2 * 8;
    lVar3 = param_2 << 3;
    lStack_60 = lVar4;
    local_58 = lVar4;
    do {
      FUN_0274124c(plVar1,lVar4);
      lVar4 = lVar4 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
    local_58 = lVar2;
    FUN_0274136c(param_1,&local_68);
    FUN_02741414(&local_68);
  }
  else {
    lVar2 = lVar4 + param_2 * 8;
    lVar3 = param_2 << 3;
    do {
      FUN_0274124c(param_1 + 3,lVar4);
      lVar4 = lVar4 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
    param_1[1] = lVar2;
  }
  return;
}


