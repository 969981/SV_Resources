/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0123f5b8; name: FUN_0123f5b8
 */


byte FUN_0123f5b8(long param_1)

{
  return *(byte *)(*(long *)(param_1 + 0x38) + 0x499) >> 2 & 1;
}


