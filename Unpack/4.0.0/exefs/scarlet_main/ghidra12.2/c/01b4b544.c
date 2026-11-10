/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b4b544; name: FUN_01b4b544
 */


void FUN_01b4b544(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 1) == 0) {
    uVar1 = 4;
  }
  *(uint *)(DAT_04840860 + 0x40) = *(uint *)(DAT_04840860 + 0x40) & 0xfffffffb | uVar1;
  return;
}


