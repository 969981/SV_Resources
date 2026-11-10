/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b4b794; name: FUN_01b4b794
 */


void FUN_01b4b794(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0x20;
  if ((param_1 & 1) == 0) {
    uVar1 = 0;
  }
  *(uint *)(DAT_04840860 + 0x40) = *(uint *)(DAT_04840860 + 0x40) & 0xffffffdf | uVar1;
  return;
}


