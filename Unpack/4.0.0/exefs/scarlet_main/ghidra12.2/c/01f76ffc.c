/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f76ffc; name: FUN_01f76ffc
 */


void FUN_01f76ffc(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_0455cd58;
  *(undefined4 *)(param_1 + 1) = param_2;
  uVar1 = FUN_01cf7e20();
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 6) = param_3;
  param_1[4] = 0;
  param_1[5] = uVar1;
  FUN_01f7135c(param_1 + 7,param_4);
  return;
}


