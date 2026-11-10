/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e5e7a0; name: FUN_00e5e7a0
 */


uint FUN_00e5e7a0(long param_1)

{
  if (*(byte *)(param_1 + 0x5a) < 5) {
    return 6U >> (ulong)(*(byte *)(param_1 + 0x5a) & 0x1f) & 1;
  }
  return 0;
}


