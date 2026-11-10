/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012b0b20; name: FUN_012b0b20
 */


void FUN_012b0b20(undefined8 *param_1)

{
  undefined *puVar1;
  
  FUN_012b1264();
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_045aebd0;
  param_1[4] = &PTR_LAB_045aec00;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  memset(param_1 + 5,0,0x48);
  puVar1 = PTR_DAT_047dd330;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0xe] = puVar1 + 0x10;
  return;
}


