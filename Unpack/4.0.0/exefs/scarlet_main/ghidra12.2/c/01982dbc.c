/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01982dbc; name: FUN_01982dbc
 */


void FUN_01982dbc(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_018b4ea4(param_1,0x2da7b4584624a364,&DAT_04593c70,param_2);
  *param_1 = &PTR_LAB_04593b58;
  param_1[4] = &PTR_LAB_04593bd8;
  param_1[5] = &PTR_LAB_04593c28;
  *(undefined4 *)(param_1 + 0xf) = *param_3;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return;
}


