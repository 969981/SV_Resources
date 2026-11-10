/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016beaf0; name: FUN_016beaf0
 */


undefined4 FUN_016beaf0(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 2U >> 1 | param_1 << 0x1f;
  if (uVar1 < 8) {
    return *(undefined4 *)(&DAT_03cbf500 + (long)(int)uVar1 * 4);
  }
  return 0;
}


