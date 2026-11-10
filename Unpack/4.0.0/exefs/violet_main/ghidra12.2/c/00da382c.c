/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00da382c; name: FUN_00da382c
 */


void FUN_00da382c(long *param_1,ulong param_2)

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
  
  lVar2 = *param_1;
  if ((ulong)(param_1[2] - lVar2 >> 3) < param_2) {
    plVar1 = param_1 + 3;
    lVar4 = param_1[1];
    local_60 = 0;
    plStack_58 = plVar1;
    local_78 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 3,8);
    if (local_78 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
    lVar2 = local_78 + (lVar4 - lVar2 >> 3) * 8;
    lVar4 = local_78 + param_2 * 8;
    lVar3 = *param_1;
    lVar6 = param_1[1];
    if (lVar6 == lVar3) {
      lVar5 = lVar2;
      local_68 = lVar3;
    }
    else {
      lVar5 = lVar2 + -8;
      local_70 = lVar2;
      local_68 = lVar2;
      local_60 = lVar4;
      FUN_00da3d74(plVar1,lVar5,lVar6 + -8);
      if (lVar6 + -8 != lVar3) {
        do {
          lVar5 = lVar5 + -8;
          FUN_00da3d74(plVar1,lVar5,lVar6 + -0x10);
          lVar6 = lVar6 + -8;
        } while (lVar3 + 8 != lVar6);
      }
      lVar3 = *param_1;
      local_68 = param_1[1];
    }
    *param_1 = lVar5;
    param_1[1] = lVar2;
    local_60 = param_1[2];
    param_1[2] = lVar4;
    local_78 = lVar3;
    local_70 = lVar3;
    FUN_00da3960(&local_78);
  }
  return;
}


