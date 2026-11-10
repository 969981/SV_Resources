/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e5370; name: FUN_001e5370
 */


undefined4 FUN_001e5370(int param_1)

{
  if (param_1 - 5U < 4) {
    return *(undefined4 *)(&DAT_03caaf70 + (long)(int)(param_1 - 5U) * 4);
  }
  return 3;
}


