/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fb5eb4; name: FUN_01fb5eb4
 */


undefined4 FUN_01fb5eb4(int param_1)

{
  if (param_1 - 2U < 8) {
    return *(undefined4 *)(&DAT_03cbf220 + (long)(int)(param_1 - 2U) * 4);
  }
  return 0;
}


