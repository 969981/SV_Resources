/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b4ba84; name: FUN_01b4ba84
 */


void FUN_01b4ba84(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 1) == 0) {
    uVar1 = 0x100;
  }
  *(uint *)(DAT_04840860 + 0x40) = *(uint *)(DAT_04840860 + 0x40) & 0xfffffeff | uVar1;
  return;
}


