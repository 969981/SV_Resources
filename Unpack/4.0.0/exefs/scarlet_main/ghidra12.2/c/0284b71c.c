/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0284b71c; name: FUN_0284b71c
 */


void FUN_0284b71c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_01870100();
  *param_1 = &PTR_FUN_045e42d8;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[4] = &PTR_LAB_045e4358;
  param_1[5] = &PTR_LAB_045e43a8;
  uVar1 = *param_2;
  *param_2 = 0;
  param_1[0xb] = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  param_1[0xc] = param_2[1];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  return;
}


