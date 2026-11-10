/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a4e18c; name: FUN_00a4e18c
 */


ulong FUN_00a4e18c(long param_1)

{
  if (*(int *)(param_1 + 0x64b8) == 0) {
    return (ulong)(*(long *)(param_1 + 0x61f8) - *(long *)(param_1 + 0x61f0)) >> 4;
  }
  return 1;
}


