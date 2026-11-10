/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c75660; name: FUN_00c75660
 */


undefined4 FUN_00c75660(int param_1)

{
  if (param_1 - 1U < 0x9c) {
    return *(undefined4 *)(&DAT_03d6866c + (long)(int)(param_1 - 1U) * 4);
  }
  return 0;
}


