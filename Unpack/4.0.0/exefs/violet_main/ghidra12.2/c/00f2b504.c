/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f2b504; name: FUN_00f2b504
 */


void FUN_00f2b504(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_50;
  long local_48;
  long local_40;
  long *local_38;
  
  lVar3 = *param_1;
  if ((ulong)(param_1[2] - lVar3 >> 5) < param_2) {
    plVar5 = param_1 + 3;
    lVar4 = param_1[1];
    local_40 = 0;
    local_38 = plVar5;
    lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 5,8);
    if (lVar1 == 0) {
      (**(code **)(*(long *)*plVar5 + 0xe8))((long *)*plVar5);
    }
    local_50 = lVar1 + (lVar4 - lVar3 >> 5) * 0x20;
    local_40 = lVar1 + param_2 * 0x20;
    local_48 = local_50;
    FUN_00f2b684(plVar5,*param_1,param_1[1],&local_50);
    lVar4 = *param_1;
    lVar3 = param_1[1];
    lVar1 = param_1[2];
    *param_1 = local_50;
    param_1[1] = local_48;
    param_1[2] = local_40;
    local_50 = lVar4;
    local_48 = lVar3;
    local_40 = lVar1;
    while (lVar3 != lVar4) {
      local_48 = lVar3 + -0x20;
      plVar5 = (long *)(lVar3 + -8);
      lVar3 = local_48;
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 0x20))();
      }
    }
    if (lVar4 != 0) {
      lVar1 = lVar1 - lVar4;
      plVar5 = (long *)*local_38;
      uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar1,8);
      }
      else {
        FUN_00c48fe8(plVar5,lVar4,lVar1,8);
      }
    }
  }
  return;
}


