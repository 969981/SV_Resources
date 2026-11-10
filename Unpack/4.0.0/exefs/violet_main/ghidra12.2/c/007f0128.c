/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f0128; name: FUN_007f0128
 */


uint FUN_007f0128(undefined8 param_1,long param_2,uint param_3)

{
  if (*(char *)(param_2 + 0x10) == '\0') {
    return 1;
  }
  return *(uint *)(param_2 + ((ulong)(param_3 >> 3) & 0x1c) + 0x14) >> (ulong)(param_3 & 0x1f) & 1;
}


