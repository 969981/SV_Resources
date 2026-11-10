/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00302e90; name: FUN_00302e90
 */


bool FUN_00302e90(long *param_1)

{
  if (*param_1 == 0) {
    return true;
  }
  return param_1[4] == param_1[2];
}


