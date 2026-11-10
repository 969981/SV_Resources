/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f5086c; name: FUN_01f5086c
 */


undefined4 FUN_01f5086c(byte param_1)

{
  if (param_1 < 5) {
    return *(undefined4 *)(&DAT_03d5bad8 + (long)(char)param_1 * 4);
  }
  return 8;
}


