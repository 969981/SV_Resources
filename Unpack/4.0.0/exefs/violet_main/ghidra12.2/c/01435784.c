/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01435784; name: FUN_01435784
 */


void FUN_01435784(long *param_1,ulong param_2)

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
  if ((ulong)((param_1[2] - lVar2 >> 4) * -0x5555555555555555) < param_2) {
    lVar3 = param_1[1];
    plVar1 = param_1 + 3;
    local_60 = 0;
    plStack_58 = plVar1;
    local_78 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x30,8);
    if (local_78 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
    lVar5 = local_78 + (lVar3 - lVar2 >> 4) * 0x10;
    lVar6 = local_78 + param_2 * 0x30;
    lVar2 = *param_1;
    lVar3 = param_1[1];
    if (lVar3 == lVar2) {
      lVar4 = lVar5;
      local_68 = lVar2;
    }
    else {
      lVar4 = lVar5 + -0x30;
      local_70 = lVar5;
      local_68 = lVar5;
      local_60 = lVar6;
      FUN_01437c14(plVar1,lVar4,lVar3 + -0x30);
      if (lVar3 + -0x30 != lVar2) {
        do {
          lVar4 = lVar4 + -0x30;
          FUN_01437c14(plVar1,lVar4,lVar3 + -0x60);
          lVar3 = lVar3 + -0x30;
        } while (lVar2 + 0x30 != lVar3);
      }
      lVar2 = *param_1;
      local_68 = param_1[1];
    }
    *param_1 = lVar4;
    param_1[1] = lVar5;
    local_60 = param_1[2];
    param_1[2] = lVar6;
    local_78 = lVar2;
    local_70 = lVar2;
    FUN_014358d4(&local_78);
  }
  return;
}


