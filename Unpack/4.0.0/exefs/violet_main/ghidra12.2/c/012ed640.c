/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012ed640; name: FUN_012ed640
 */


void FUN_012ed640(long *param_1)

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
  if ((ulong)(param_1[2] - lVar3 >> 3) >> 4 < 0x271) {
    plVar5 = param_1 + 3;
    lVar4 = param_1[1];
    local_40 = 0;
    local_38 = plVar5;
    lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],80000,8);
    if (lVar1 == 0) {
      (**(code **)(*(long *)*plVar5 + 0xe8))();
    }
    local_50 = lVar1 + (lVar4 - lVar3 >> 3) * 8;
    local_40 = lVar1 + 80000;
    local_48 = local_50;
    FUN_00f5fab0(plVar5,*param_1,param_1[1],&local_50);
    lVar3 = *param_1;
    lVar1 = param_1[1];
    *param_1 = local_50;
    param_1[1] = local_48;
    lVar4 = param_1[2];
    param_1[2] = local_40;
    local_48 = lVar1;
    if (lVar1 - lVar3 != 0) {
      local_48 = lVar1 + ((lVar1 - lVar3) - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
    if (lVar3 != 0) {
      lVar1 = lVar4 - lVar3;
      plVar5 = (long *)*local_38;
      local_50 = lVar3;
      local_40 = lVar4;
      uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar2 & 1) != 0) && (lVar4 = FUN_00c4e600(), 0 < *(int *)(lVar4 + 0x12c8))) {
        FUN_00c48fe8(plVar5,lVar3,lVar1,8);
        return;
      }
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar3,lVar1,8);
    }
  }
  return;
}


