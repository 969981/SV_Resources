/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019845e8; name: FUN_019845e8
 */


void FUN_019845e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[6] = 0;
  param_1[4] = uVar1;
  param_1[5] = 0;
  FUN_00d0a71c(param_1 + 5,param_2 + 1);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 3);
  *param_1 = &LAB_0193ba4c;
  param_1[1] = &LAB_028f0e04;
  param_1[2] = &LAB_028f0f14;
  param_1[3] = &LAB_028f0f58;
  return;
}


