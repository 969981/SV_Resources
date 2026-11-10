/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e988c0; name: FUN_01e988c0
 */


undefined4 FUN_01e988c0(byte param_1)

{
  if (param_1 < 5) {
    return *(undefined4 *)(&DAT_03d5b7ec + (long)(char)param_1 * 4);
  }
  return 8;
}


