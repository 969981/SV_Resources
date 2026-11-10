/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02645270; name: FUN_02645270
 */


void FUN_02645270(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar2;
  uVar2 = param_1[2];
  param_2[4] = 0;
  param_2[2] = uVar2;
  param_2[3] = 0;
  FUN_02642a0c(param_2 + 3,param_1 + 3);
  uVar2 = param_1[5];
  uVar1 = param_1[6];
  uVar3 = param_1[7];
  param_2[9] = 0;
  param_2[6] = uVar1;
  param_2[7] = uVar3;
  param_2[5] = uVar2;
  param_2[8] = 0;
  FUN_00d334b4(param_2 + 8,param_1 + 8);
  uVar2 = param_1[10];
  param_1[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[10] = uVar2;
  FUN_00c96b7c(param_2 + 0xb,param_1 + 0xb);
  param_2[0xd] = param_1[0xd];
  *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(param_1 + 0xe);
  return;
}


