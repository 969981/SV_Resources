/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014c1b98; name: FUN_014c1b98
 */


ulong FUN_014c1b98(ulong param_1)

{
  if ((6 < ((uint)param_1 - 7 & 0xffff)) && (((uint)param_1 & 0xffff) < 7)) {
    param_1 = (ulong)*(ushort *)(&DAT_03d629ee + (param_1 & 0xffff) * 4);
  }
  return param_1;
}


