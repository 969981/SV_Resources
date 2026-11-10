/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b79470; name: FUN_01b79470
 */


void FUN_01b79470(uint param_1)

{
  if (0x1869e < param_1) {
    param_1 = 99999;
  }
  *(uint *)(DAT_04840ac0 + 0x78) = (uint)*(byte *)(DAT_04840ac0 + 0x78) | param_1 << 8;
  return;
}


