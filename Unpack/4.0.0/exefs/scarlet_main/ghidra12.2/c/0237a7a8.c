/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0237a7a8; name: FUN_0237a7a8
 */


void FUN_0237a7a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar4;
  param_2[2] = param_1[2];
  uVar4 = param_1[3];
  uVar2 = param_1[4];
  uVar1 = param_1[5];
  uVar3 = param_1[6];
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = uVar1;
  param_2[6] = uVar3;
  param_2[3] = uVar4;
  param_2[4] = uVar2;
  FUN_00c96b7c(param_2 + 7,param_1 + 7);
  param_2[9] = param_1[9];
  param_2[10] = param_1[10];
  param_2[0xb] = param_1[0xb];
  uVar4 = param_1[0xc];
  param_1[0xc] = 0;
  param_2[0xc] = uVar4;
  uVar4 = param_1[0xe];
  param_2[0xd] = param_1[0xd];
  param_2[0xe] = uVar4;
  return;
}


