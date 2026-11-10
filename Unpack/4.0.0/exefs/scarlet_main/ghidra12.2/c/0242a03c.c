/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0242a03c; name: FUN_0242a03c
 */


void FUN_0242a03c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar2 = param_2[1];
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[9] = 0;
  param_1[6] = uVar1;
  param_1[7] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar2;
  param_1[8] = 0;
  FUN_00d334b4(param_1 + 8,param_2 + 4);
  uVar4 = param_2[6];
  param_2[6] = 0;
  *param_1 = &LAB_0242a35c;
  param_1[1] = &LAB_0242a364;
  param_1[10] = uVar4;
  param_1[2] = &LAB_0242a4d4;
  param_1[3] = &LAB_0242a5c0;
  return;
}


