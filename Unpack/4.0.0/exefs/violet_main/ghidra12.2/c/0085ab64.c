/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0085ab64; name: FUN_0085ab64
 */


byte FUN_0085ab64(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 0x18) + 0x1fc) == '\0') {
    return 0;
  }
  return *(byte *)(*(long *)(param_1 + 0x18) + 0x1fd) ^ 1;
}


