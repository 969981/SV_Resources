/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017adc74; name: FUN_017adc74
 */


ulong FUN_017adc74(long param_1,undefined8 param_2)

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
  
  lVar3 = *(long *)(param_1 + 0x198);
  if (lVar3 == 0) {
    local_18 = *(undefined8 *)(param_1 + 8);
    FUN_017adf40(&local_50,local_18,&local_18);
    lVar3 = local_50;
    local_50 = 0;
    lVar2 = *(long *)(param_1 + 0x198);
    *(long *)(param_1 + 0x198) = lVar3;
    if (lVar2 == 0) {
      *(undefined8 *)(param_1 + 0x1a8) = local_40;
      *(undefined8 *)(param_1 + 0x1b0) = local_38;
      *(undefined8 *)(param_1 + 0x1a0) = local_48;
      local_50 = 0;
    }
    else {
      FUN_013d4b20(param_1 + 0x1a0);
      lVar3 = local_50;
      *(undefined8 *)(param_1 + 0x1a0) = local_48;
      *(undefined8 *)(param_1 + 0x1a8) = local_40;
      *(undefined8 *)(param_1 + 0x1b0) = local_38;
      local_50 = 0;
      if (lVar3 != 0) {
        FUN_013d4b20(&local_48);
      }
    }
    lVar3 = *(long *)(param_1 + 0x198);
  }
  local_48 = FUN_017adde8(lVar3 + 8,param_2);
  local_50 = 0;
  do {
    lVar3 = *(long *)(param_1 + 0x160) - *(long *)(param_1 + 0x158);
    if (lVar3 == 0) {
      uVar5 = *(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 4;
      FUN_017addc0(param_1 + 0xe8,&local_50);
      goto LAB_017add58;
    }
    uVar5 = *(ulong *)(*(long *)(param_1 + 0x160) + -8);
    *(long *)(param_1 + 0x160) = lVar3 + *(long *)(param_1 + 0x158) + -8;
    uVar4 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(param_1 + 0x120) + uVar4) =
         *(ulong *)(*(long *)(param_1 + 0x120) + uVar4) &
         (1L << (uVar5 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 4) <= uVar5);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0xe8) + uVar5 * 0x10);
  *puVar1 = 0;
  puVar1[1] = local_48;
  if (*(ulong *)(param_1 + 400) <= uVar5) {
LAB_017add58:
    *(ulong *)(param_1 + 400) = uVar5 + 1;
  }
  return uVar5;
}


