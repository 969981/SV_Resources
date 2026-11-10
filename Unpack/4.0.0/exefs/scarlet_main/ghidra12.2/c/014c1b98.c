/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c1b98; name: FUN_014c1b98
 */


ulong FUN_014c1b98(ulong param_1)

{
  if ((6 < ((uint)param_1 - 7 & 0xffff)) && (((uint)param_1 & 0xffff) < 7)) {
    param_1 = (ulong)*(ushort *)(&DAT_03d629ee + (param_1 & 0xffff) * 4);
  }
  return param_1;
}


