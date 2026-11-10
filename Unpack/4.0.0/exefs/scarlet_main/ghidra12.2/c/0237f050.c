/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0237f050; name: FUN_0237f050
 */


void FUN_0237f050(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  pcVar3 = (code *)param_1[1];
  if (pcVar3 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar3)(param_1 + 4);
  }
  uVar4 = param_2[1];
  param_1[4] = *param_2;
  param_1[5] = uVar4;
  param_1[6] = param_2[2];
  uVar4 = param_2[3];
  uVar1 = param_2[4];
  uVar2 = param_2[6];
  param_1[9] = param_2[5];
  param_1[10] = uVar2;
  param_1[0xc] = 0;
  param_1[7] = uVar4;
  param_1[8] = uVar1;
  param_1[0xb] = 0;
  FUN_00c96b7c(param_1 + 0xb,param_2 + 7);
  param_1[0xd] = param_2[9];
  param_1[0xe] = param_2[10];
  param_1[0xf] = param_2[0xb];
  uVar4 = param_2[0xc];
  param_2[0xc] = 0;
  param_1[0x10] = uVar4;
  uVar4 = param_2[0xd];
  uVar1 = param_2[0xe];
  *param_1 = thunk_FUN_0237f114;
  param_1[1] = FUN_0237f15c;
  param_1[0x11] = uVar4;
  param_1[0x12] = uVar1;
  param_1[2] = &LAB_0237fdac;
  param_1[3] = &LAB_0237fe44;
  return;
}


