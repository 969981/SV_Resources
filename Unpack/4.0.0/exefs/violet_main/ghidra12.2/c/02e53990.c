/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e53990; name: FUN_02e53990
 */


bool FUN_02e53990(long *param_1)

{
  if ((*param_1 == 0) || (param_1[1] == 0)) {
    return false;
  }
  return *(short *)(param_1[1] + 0x1a) != 0;
}


