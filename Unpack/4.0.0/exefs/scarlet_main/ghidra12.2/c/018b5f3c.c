/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018b5f3c; name: FUN_018b5f3c
 */


void FUN_018b5f3c(undefined8 *param_1,undefined8 param_2,void *param_3)

{
  FUN_018b4ea4(param_1,0x5c307d44ea569b63,&DAT_045947b0,param_2);
  *param_1 = &PTR_LAB_04594698;
  param_1[4] = &PTR_LAB_04594718;
  param_1[5] = &PTR_LAB_04594768;
  memcpy(param_1 + 0xf,param_3,0x60);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_01842f80(param_1,*(undefined4 *)(param_1 + 0xf));
  return;
}


