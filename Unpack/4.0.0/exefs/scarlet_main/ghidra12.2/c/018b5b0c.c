/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018b5b0c; name: FUN_018b5b0c
 */


void FUN_018b5b0c(undefined8 *param_1,undefined8 param_2,undefined1 *param_3)

{
  FUN_018b4ea4(param_1,0x23607a0597b3a656,&DAT_04593b30,param_2);
  *param_1 = &PTR_LAB_04593a18;
  param_1[4] = &PTR_LAB_04593a98;
  param_1[5] = &PTR_LAB_04593ae8;
  *(undefined1 *)(param_1 + 0xf) = *param_3;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return;
}


