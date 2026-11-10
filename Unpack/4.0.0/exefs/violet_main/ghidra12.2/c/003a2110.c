/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a2110; name: FUN_003a2110
 */


long FUN_003a2110(long *param_1)

{
  if (param_1[1] == 0) {
    return *(long *)(*param_1 + 8) + param_1[2];
  }
  return param_1[1] + param_1[2];
}


