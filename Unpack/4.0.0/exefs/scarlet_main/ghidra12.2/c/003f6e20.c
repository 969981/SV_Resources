/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f6e20; name: FUN_003f6e20
 */


bool FUN_003f6e20(uint param_1,ushort param_2)

{
  if (param_1 < 0x80) {
    return (*(ushort *)(&DAT_03cde1a8 + (ulong)param_1 * 2) & param_2) != 0;
  }
  return false;
}


