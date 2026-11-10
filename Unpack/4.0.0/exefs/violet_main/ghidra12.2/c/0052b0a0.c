/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052b0a0; name: FUN_0052b0a0
 */


long FUN_0052b0a0(ulong *param_1)

{
  if ((*param_1 & 1) == 0) {
    return 0;
  }
  if (((ulong *)param_1[2] < param_1) || (param_1 + 3 <= (ulong *)param_1[2])) {
    return (*param_1 & 0xfffffffffffffffe) - 1;
  }
  return 0;
}


