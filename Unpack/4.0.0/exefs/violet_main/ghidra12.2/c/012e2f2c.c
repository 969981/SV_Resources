/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


