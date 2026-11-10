/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0225527c; name: FUN_0225527c
 */


bool FUN_0225527c(short *param_1)

{
  if (*param_1 == 0x10) {
    return (char)((ushort)param_1[2] >> 8) == -0x42 && (param_1[2] & 0xffU) == 0;
  }
  return false;
}


