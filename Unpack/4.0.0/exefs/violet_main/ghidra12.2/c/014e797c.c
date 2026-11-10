/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014e797c; name: FUN_014e797c
 */


byte FUN_014e797c(long param_1,uint param_2)

{
  if (param_2 < 6) {
    return *(byte *)(param_1 + 0x56e) >> (ulong)(param_2 & 0x1f) & 1;
  }
  return 0;
}


