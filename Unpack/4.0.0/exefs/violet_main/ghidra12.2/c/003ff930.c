/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ff930; name: FUN_003ff930
 */


ulong FUN_003ff930(void *param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_30;
  size_t local_28;
  
  local_28 = 0;
  local_30 = 1;
  uVar2 = (**(code **)(*(long *)(param_3 + 0x78) + 0x10))();
  uVar4 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    uVar3 = 0;
    do {
      pcVar1 = (char *)((long)param_1 + uVar3);
      uVar3 = uVar3 + 1;
      local_30 = local_30 & *pcVar1 == '\0';
      local_28 = local_28 + local_30;
    } while (uVar4 != uVar3);
    uVar2 = uVar2 - (int)local_28;
    uVar4 = (ulong)uVar2;
    memmove(param_1,(void *)((long)param_1 + local_28),(long)(int)uVar2);
    memset((void *)((long)param_1 + (long)(int)uVar2),0,local_28);
  }
  return uVar4;
}


