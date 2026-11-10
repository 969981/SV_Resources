/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e5310; name: FUN_007e5310
 */


byte FUN_007e5310(long param_1)

{
  return *(byte *)(param_1 + 0x38) >> 2 & 3;
}


