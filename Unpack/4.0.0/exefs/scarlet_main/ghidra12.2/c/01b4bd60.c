/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b4bd60; name: FUN_01b4bd60
 */


void FUN_01b4bd60(uint param_1)

{
  if (param_1 < 0xb) {
    *(uint *)(DAT_04840860 + 0x40) =
         *(uint *)(DAT_04840860 + 0x40) & 0xffc00000 |
         *(uint *)(DAT_04840860 + 0x40) & 0x3ffff | (param_1 & 0xf) << 0x12;
  }
  return;
}


