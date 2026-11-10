/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078ce3c; name: FUN_0078ce3c
 */


uint FUN_0078ce3c(long param_1)

{
  if (*(uint *)(param_1 + 8) < 9) {
    return 0x70U >> (ulong)(*(uint *)(param_1 + 8) & 0x1f) & 1;
  }
  return 0;
}


