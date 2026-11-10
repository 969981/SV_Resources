/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e27c0c; name: FUN_00e27c0c
 */


void FUN_00e27c0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  param_2[2] = 0;
  *param_2 = uVar1;
  param_2[1] = 0;
  FUN_00e27c6c(param_2 + 1,param_1 + 1);
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_1 + 3);
  uVar1 = param_1[4];
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 5);
  param_2[4] = uVar1;
  uVar1 = param_1[6];
  param_1[6] = 0;
  param_2[6] = uVar1;
  return;
}


