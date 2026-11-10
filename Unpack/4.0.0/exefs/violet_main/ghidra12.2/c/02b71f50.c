/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b71f50; name: FUN_02b71f50
 */


undefined1 FUN_02b71f50(byte param_1)

{
  if (param_1 < 0x13) {
    return (&DAT_03d630a1)[(ulong)param_1 * 2];
  }
  return 0x12;
}


