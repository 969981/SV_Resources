/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0154b6dc; name: FUN_0154b6dc
 */


uint FUN_0154b6dc(uint param_1)

{
  if (param_1 < 3) {
    return 3U >> (ulong)(param_1 & 7) & 1;
  }
  return 0;
}


