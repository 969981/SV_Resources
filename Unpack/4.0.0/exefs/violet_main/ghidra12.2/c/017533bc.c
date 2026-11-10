/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017533bc; name: FUN_017533bc
 */


ulong FUN_017533bc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_18;
  
  lVar2 = *(long *)(param_1 + 0x1d8);
  if (lVar2 == 0) {
    local_18 = *(undefined8 *)(param_1 + 8);
    FUN_016772b0(&local_50,local_18,&local_18);
    lVar2 = local_50;
    local_50 = 0;
    lVar3 = *(long *)(param_1 + 0x1d8);
    *(long *)(param_1 + 0x1d8) = lVar2;
    if (lVar3 == 0) {
      *(undefined8 *)(param_1 + 0x1e8) = local_40;
      *(undefined8 *)(param_1 + 0x1f0) = local_38;
      *(undefined8 *)(param_1 + 0x1e0) = local_48;
      local_50 = 0;
    }
    else {
      FUN_018f3f44(param_1 + 0x1e0);
      lVar2 = local_50;
      *(undefined8 *)(param_1 + 0x1e0) = local_48;
      *(undefined8 *)(param_1 + 0x1e8) = local_40;
      *(undefined8 *)(param_1 + 0x1f0) = local_38;
      local_50 = 0;
      if (lVar2 != 0) {
        FUN_018f3f44(&local_48);
      }
    }
    lVar2 = *(long *)(param_1 + 0x1d8);
  }
  local_48 = FUN_01753510(lVar2,param_2);
  local_50 = 2;
  do {
    lVar2 = *(long *)(param_1 + 0x160) - *(long *)(param_1 + 0x158);
    if (lVar2 == 0) {
      uVar5 = *(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 4;
      FUN_01677288(param_1 + 0xe8,&local_50);
      goto LAB_01753460;
    }
    uVar5 = *(ulong *)(*(long *)(param_1 + 0x160) + -8);
    *(long *)(param_1 + 0x160) = lVar2 + *(long *)(param_1 + 0x158) + -8;
    uVar4 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(param_1 + 0x120) + uVar4) =
         *(ulong *)(*(long *)(param_1 + 0x120) + uVar4) &
         (1L << (uVar5 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 4) <= uVar5);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0xe8) + uVar5 * 0x10);
  *puVar1 = 2;
  puVar1[1] = local_48;
  if (*(ulong *)(param_1 + 400) <= uVar5) {
LAB_01753460:
    *(ulong *)(param_1 + 400) = uVar5 + 1;
  }
  return uVar5;
}


