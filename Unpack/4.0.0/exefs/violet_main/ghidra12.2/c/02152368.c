/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02152368; name: FUN_02152368
 */


byte FUN_02152368(long param_1,uint param_2)

{
  long lVar1;
  
  if (((int)param_2 < *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0xc)) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 0x20),
     **(char **)(lVar1 + (ulong)param_2 * 0x28 + 8) != '\0')) {
    return *(byte *)(lVar1 + (ulong)param_2 * 0x28 + 0x20) >> 1 & 1;
  }
  return 0;
}


