/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045ae90; name: FUN_0045ae90
 */


undefined4 FUN_0045ae90(char param_1)

{
  if ((byte)(param_1 - 0x30U) < 0x37) {
    return *(undefined4 *)(&DAT_03cfa5b4 + (long)(char)(param_1 - 0x30U) * 4);
  }
  return 0xffffffff;
}


