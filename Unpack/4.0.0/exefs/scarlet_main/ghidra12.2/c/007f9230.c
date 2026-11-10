/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f9230; name: FUN_007f9230
 */


void FUN_007f9230(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0xc];
  *param_1 = (long)(PTR_DAT_047d1598 + 0x10);
  if (lVar1 != 0) {
    FUN_0079213c(lVar1);
    FUN_007bfaa0(lVar1);
    param_1[0xc] = 0;
  }
  FUN_007971bc(param_1 + 0xd);
  FUN_007ec33c(param_1);
  return;
}


