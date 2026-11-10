/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015cd5b4; name: FUN_015cd5b4
 */


void FUN_015cd5b4(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  FUN_00da2ea0(param_1,*(undefined8 *)PTR_DAT_047d8d98,param_2,param_3 & 1);
  *param_1 = &PTR_LAB_045ec128;
  param_1[0x70] = 0;
  param_1[4] = &PTR_LAB_045ec1d8;
  param_1[5] = &DAT_045ec228;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  return;
}


