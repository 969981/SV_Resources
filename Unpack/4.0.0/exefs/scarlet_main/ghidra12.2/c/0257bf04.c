/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0257bf04; name: FUN_0257bf04
 */


void FUN_0257bf04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
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
  param_1[8] = 0;
  param_1[7] = 0;
  FUN_021c5634(param_1 + 7,param_2 + 3);
  uVar4 = param_2[5];
  uVar1 = param_2[6];
  uVar5 = param_2[7];
  param_1[0xd] = 0;
  param_1[10] = uVar1;
  param_1[0xb] = uVar5;
  param_1[9] = uVar4;
  param_1[0xc] = 0;
  FUN_00d334b4(param_1 + 0xc,param_2 + 8);
  uVar4 = param_2[10];
  param_2[10] = 0;
  param_1[0xe] = uVar4;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  FUN_00c96b7c(param_1 + 0xf,param_2 + 0xb);
  param_1[0x11] = param_2[0xd];
  uVar2 = *(undefined4 *)(param_2 + 0xe);
  *param_1 = thunk_FUN_0257bfe0;
  param_1[1] = FUN_0257c024;
  *(undefined4 *)(param_1 + 0x12) = uVar2;
  param_1[2] = FUN_0257ce04;
  param_1[3] = &LAB_0257cf44;
  return;
}


