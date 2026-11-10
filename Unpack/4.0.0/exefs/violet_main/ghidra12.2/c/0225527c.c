/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0225527c; name: FUN_0225527c
 */


bool FUN_0225527c(short *param_1)

{
  if (*param_1 == 0x10) {
    return (char)((ushort)param_1[2] >> 8) == -0x42 && (param_1[2] & 0xffU) == 0;
  }
  return false;
}


