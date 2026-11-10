/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0114b7a0; name: FUN_0114b7a0
 */


void FUN_0114b7a0(long *param_1,ulong param_2)

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
  if ((ulong)(param_1[2] - lVar3 >> 2) < param_2) {
    plVar5 = param_1 + 3;
    lVar4 = param_1[1];
    local_40 = 0;
    local_38 = plVar5;
    lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 2,4);
    if (lVar1 == 0) {
      (**(code **)(*(long *)*plVar5 + 0xe8))((long *)*plVar5);
    }
    local_50 = lVar1 + (lVar4 - lVar3 >> 2) * 4;
    local_40 = lVar1 + param_2 * 4;
    local_48 = local_50;
    FUN_0114b908(plVar5,*param_1,param_1[1],&local_50);
    lVar3 = *param_1;
    lVar1 = param_1[1];
    *param_1 = local_50;
    param_1[1] = local_48;
    lVar4 = param_1[2];
    param_1[2] = local_40;
    local_48 = lVar1;
    if (lVar1 - lVar3 != 0) {
      local_48 = lVar1 + ((lVar1 - lVar3) - 4U >> 2 ^ 0xffffffffffffffff) * 4;
    }
    if (lVar3 != 0) {
      lVar1 = lVar4 - lVar3;
      plVar5 = (long *)*local_38;
      local_50 = lVar3;
      local_40 = lVar4;
      uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar2 & 1) != 0) && (lVar4 = FUN_00c4e600(), 0 < *(int *)(lVar4 + 0x12c8))) {
        FUN_00c48fe8(plVar5,lVar3,lVar1,4);
        return;
      }
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar3,lVar1,4);
    }
  }
  return;
}


