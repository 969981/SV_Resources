/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021734c8; name: FUN_021734c8
 */


bool FUN_021734c8(short *param_1)

{
  if ((*param_1 == 0x10) && (0xfe < (byte)((ushort)param_1[2] >> 8))) {
    return (param_1[2] & 0xffU) == 1;
  }
  return false;
}


