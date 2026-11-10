/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021c70bc; name: FUN_021c70bc
 */


void FUN_021c70bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  uVar1 = param_1[2];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[2] = uVar1;
  FUN_021c5634(param_2 + 3,param_1 + 3);
  uVar1 = param_1[5];
  uVar2 = param_1[7];
  param_2[6] = param_1[6];
  param_2[7] = uVar2;
  param_2[5] = uVar1;
  param_2[8] = param_1[8];
  uVar1 = param_1[9];
  param_1[9] = 0;
  param_2[9] = uVar1;
  *(undefined4 *)(param_2 + 10) = *(undefined4 *)(param_1 + 10);
  return;
}


