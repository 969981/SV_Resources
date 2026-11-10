/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0168773c; name: FUN_0168773c
 */


void FUN_0168773c(undefined1 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  param_1[1] = 1;
  uVar1 = (**(code **)PTR_DAT_047d2720)(param_2);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0x100;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *param_1 = 1;
  param_1[2] = param_1[2] | 1;
  return;
}


