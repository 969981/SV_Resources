/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ebd310; name: FUN_00ebd310
 */


undefined8 FUN_00ebd310(int param_1)

{
  if (param_1 - 2U < 0x35) {
    return *(undefined8 *)(&DAT_03d64e20 + (long)(int)(param_1 - 2U) * 8);
  }
  return 0;
}


