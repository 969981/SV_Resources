/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0220c67c; name: FUN_0220c67c
 */


ulong FUN_0220c67c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_18;
  
  lVar3 = *(long *)(param_1 + 0x1d8);
  if (lVar3 == 0) {
    local_18 = *(undefined8 *)(param_1 + 8);
    FUN_015aa2c0(&local_50,local_18,&local_18);
    uVar2 = local_50;
    local_50 = 0;
    FUN_0199d5a4(param_1 + 0x1d8,uVar2);
    *(undefined8 *)(param_1 + 0x1e0) = local_48;
    *(undefined8 *)(param_1 + 0x1e8) = uStack_40;
    *(undefined8 *)(param_1 + 0x1f0) = local_38;
    FUN_0199d5a4(&local_50,0);
    lVar3 = *(long *)(param_1 + 0x1d8);
  }
  local_48 = FUN_0220c7f4(lVar3,param_2);
  local_50 = 2;
  do {
    lVar3 = *(long *)(param_1 + 0x160) - *(long *)(param_1 + 0x158);
    if (lVar3 == 0) {
      uVar5 = *(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 4;
      FUN_013d2fe0(param_1 + 0xe8,&local_50);
      goto LAB_0220c784;
    }
    uVar5 = *(ulong *)(*(long *)(param_1 + 0x160) + -8);
    *(long *)(param_1 + 0x160) = lVar3 + *(long *)(param_1 + 0x158) + -8;
    uVar4 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(param_1 + 0x120) + uVar4) =
         *(ulong *)(*(long *)(param_1 + 0x120) + uVar4) &
         (1L << (uVar5 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 4) <= uVar5);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0xe8) + uVar5 * 0x10);
  *puVar1 = 2;
  puVar1[1] = local_48;
  if (*(ulong *)(param_1 + 400) <= uVar5) {
LAB_0220c784:
    *(ulong *)(param_1 + 400) = uVar5 + 1;
  }
  return uVar5;
}


