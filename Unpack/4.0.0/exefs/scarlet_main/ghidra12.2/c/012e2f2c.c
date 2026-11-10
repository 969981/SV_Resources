/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012e2f2c; name: FUN_012e2f2c
 */


void FUN_012e2f2c(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_012e3588();
  *param_1 = &PTR_FUN_045e7420;
  param_1[4] = &PTR_LAB_045e7470;
  param_1[5] = &PTR_LAB_045e7490;
  FUN_012e2fa0(param_1 + 6);
  FUN_012e2fa0(param_1 + 0x132);
  FUN_012e32b8(param_1 + 0x25e);
  uVar1 = FUN_012e337c(param_1 + 0x25e);
  if ((uVar1 & 1) != 0) {
    param_1[0x37f] = param_2;
  }
  return;
}


