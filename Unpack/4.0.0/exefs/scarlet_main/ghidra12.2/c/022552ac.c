/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022552ac; name: FUN_022552ac
 */


bool FUN_022552ac(short *param_1)

{
  if ((*param_1 == 0x10) && ((char)((ushort)param_1[2] >> 8) == -0x42)) {
    return (param_1[2] & 0xffU) == 1;
  }
  return false;
}


