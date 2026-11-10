/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0227e3d8; name: FUN_0227e3d8
 */


void FUN_0227e3d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  pcVar5 = (code *)param_1[1];
  if (pcVar5 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar5)(param_1 + 4);
  }
  uVar1 = param_2[1];
  param_1[4] = *param_2;
  param_1[5] = uVar1;
  param_1[6] = param_2[2];
  param_1[8] = 0;
  param_1[7] = 0;
  FUN_0227e4cc(param_1 + 7,param_2 + 3);
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar6 = param_2[7];
  param_1[0xc] = 0;
  param_1[9] = uVar1;
  param_1[0xd] = 0;
  param_1[10] = uVar2;
  param_1[0xb] = uVar6;
  FUN_00c96b7c(param_1 + 0xc,param_2 + 8);
  param_1[0xe] = param_2[10];
  param_1[0xf] = param_2[0xb];
  param_1[0x10] = param_2[0xc];
  plVar4 = (long *)param_2[0xd];
  param_1[0x11] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  param_1[0x12] = param_2[0xe];
  uVar3 = *(undefined4 *)(param_2 + 0xf);
  *param_1 = thunk_FUN_0227e7f0;
  param_1[1] = FUN_0227e834;
  *(undefined4 *)(param_1 + 0x13) = uVar3;
  param_1[2] = FUN_02280e4c;
  param_1[3] = FUN_02280f00;
  return;
}


