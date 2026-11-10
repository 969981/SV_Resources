/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0147ea90; name: FUN_0147ea90
 */


undefined4 FUN_0147ea90(char param_1)

{
  if ((byte)(param_1 - 2U) < 9) {
    return *(undefined4 *)(&DAT_03d62848 + (long)(char)(param_1 - 2U) * 4);
  }
  return 0;
}


