/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0241912c; name: FUN_0241912c
 */


void FUN_0241912c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  pcVar4 = (code *)param_1[1];
  if (pcVar4 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar4)(param_1 + 4);
  }
  uVar5 = param_2[1];
  param_1[4] = *param_2;
  param_1[5] = uVar5;
  param_1[6] = param_2[2];
  uVar5 = param_2[3];
  uVar1 = param_2[4];
  uVar2 = param_2[6];
  param_1[9] = param_2[5];
  param_1[10] = uVar2;
  param_1[7] = uVar5;
  param_1[8] = uVar1;
  uVar5 = param_2[7];
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = uVar5;
  FUN_00c96b7c(param_1 + 0xc,param_2 + 8);
  param_1[0xe] = param_2[10];
  param_1[0xf] = param_2[0xb];
  param_1[0x10] = param_2[0xc];
  plVar3 = (long *)param_2[0xd];
  param_1[0x11] = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  uVar5 = param_2[0xf];
  param_1[0x12] = param_2[0xe];
  param_1[0x13] = uVar5;
  *param_1 = thunk_FUN_02419210;
  param_1[1] = FUN_02419258;
  param_1[2] = &LAB_0241c8f0;
  param_1[3] = &LAB_0241c990;
  return;
}


