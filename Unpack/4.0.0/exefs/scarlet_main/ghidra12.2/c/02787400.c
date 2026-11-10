/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02787400; name: FUN_02787400
 */


void FUN_02787400(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0x10];
  *param_1 = &PTR_FUN_045df9e8;
  param_1[10] = &PTR_LAB_045dfb28;
  param_1[4] = &PTR_LAB_045dfa80;
  param_1[5] = &DAT_045dfad0;
  param_1[0x10] = 0;
  if (lVar1 != 0) {
    FUN_02782144(param_1 + 0x11);
  }
  FUN_02782500(param_1 + 0xf);
  FUN_02782568(param_1);
  return;
}


