/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0195139c; name: FUN_0195139c
 */


void FUN_0195139c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &DAT_04593530;
  param_1[4] = &PTR_LAB_045935c0;
  param_1[5] = &PTR_LAB_04593610;
  FUN_01070c60(param_1 + 0x1f,0);
  lVar1 = param_1[0x1b];
  param_1[0x1b] = 0;
  if (lVar1 != 0) {
    FUN_01071564(param_1 + 0x1c);
  }
  lVar1 = param_1[0x17];
  param_1[0x17] = 0;
  if (lVar1 != 0) {
    FUN_01071564(param_1 + 0x18);
  }
  lVar1 = param_1[0x13];
  param_1[0x13] = 0;
  if (lVar1 != 0) {
    FUN_01071564(param_1 + 0x14);
  }
  lVar1 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar1 != 0) {
    FUN_01071564(param_1 + 0x10);
  }
  lVar1 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar1 != 0) {
    FUN_01071564(param_1 + 0xc);
  }
  FUN_01951444(param_1);
  return;
}


