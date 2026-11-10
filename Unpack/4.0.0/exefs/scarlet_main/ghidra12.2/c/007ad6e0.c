/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ad6e0; name: FUN_007ad6e0
 */


void FUN_007ad6e0(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0xc];
  *param_1 = (long)(PTR_DAT_047d0d50 + 0x10);
  if (lVar1 != 0) {
    FUN_0078cb10(lVar1);
    FUN_007bfaa0(lVar1);
  }
  param_1[0xd] = 0;
  thunk_FUN_0078ccbc(param_1);
  return;
}


