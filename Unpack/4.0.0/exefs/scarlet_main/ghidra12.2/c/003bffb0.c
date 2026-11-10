/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003bffb0; name: FUN_003bffb0
 */


bool FUN_003bffb0(uint param_1)

{
  if ((param_1 < 0x34) && ((1L << ((ulong)param_1 & 0x3f) & 0xabe0800e17c23U) != 0)) {
    return true;
  }
  return param_1 == 0x3374 || param_1 == 0xff01;
}


