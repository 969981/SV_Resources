/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02196790; name: FUN_02196790
 */


void FUN_02196790(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  long *plVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar6 = (long *)param_2[3];
  param_1[3] = plVar6;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  uVar4 = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 4) = uVar4;
  param_1[5] = param_2[5];
  uVar7 = param_2[6];
  uVar5 = *(undefined1 *)(param_2 + 7);
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 7) = uVar5;
  param_1[6] = uVar7;
  uVar7 = param_2[8];
  param_2[8] = 0;
  param_1[8] = uVar7;
  uVar7 = param_2[9];
  uVar2 = param_2[10];
  uVar1 = param_2[0xb];
  uVar3 = param_2[0xc];
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar3;
  param_1[9] = uVar7;
  param_1[10] = uVar2;
  uVar7 = param_2[0x10];
  uVar1 = param_2[0x11];
  uVar2 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar2;
  param_1[0x10] = uVar7;
  param_1[0x11] = uVar1;
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  return;
}


