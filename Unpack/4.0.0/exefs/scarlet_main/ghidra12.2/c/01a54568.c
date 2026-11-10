/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a54568; name: FUN_01a54568
 */


void FUN_01a54568(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0xb];
  *param_1 = &DAT_045e3be8;
  param_1[4] = &PTR_LAB_045e3c68;
  param_1[5] = &PTR_LAB_045e3cb8;
  param_1[0xb] = 0;
  if (lVar1 != 0) {
    FUN_01a545b4(param_1 + 0xc);
  }
  FUN_016c9dc0(param_1);
  return;
}


