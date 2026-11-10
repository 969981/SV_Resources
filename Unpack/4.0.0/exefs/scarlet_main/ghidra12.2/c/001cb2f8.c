/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001cb2f8; name: FUN_001cb2f8
 */


byte FUN_001cb2f8(uint param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((param_1 < 0x80) && (param_1 != 0x20)) {
    bVar1 = (&DAT_03cc05ae)[param_1] & 0x5f;
  }
  return bVar1;
}


