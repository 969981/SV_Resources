/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007adb9c; name: FUN_007adb9c
 */


void FUN_007adb9c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0xf];
  *param_1 = (long)(PTR_DAT_047d0d68 + 0x10);
  if (lVar1 != 0) {
    FUN_0078cb10(lVar1);
    FUN_007bfaa0(lVar1);
  }
  param_1[0xb] = 0;
  thunk_FUN_0078ccbc(param_1);
  operator_delete(param_1);
  return;
}


