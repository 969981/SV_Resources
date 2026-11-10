/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0262b074; name: FUN_0262b074
 */


void FUN_0262b074(undefined8 *param_1,undefined8 *param_2)

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
  FUN_02263160(param_1 + 7,param_2 + 3);
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
  *param_1 = thunk_FUN_0262b150;
  param_1[1] = FUN_0262b194;
  *(undefined4 *)(param_1 + 0x12) = uVar2;
  param_1[2] = FUN_0262c2ac;
  param_1[3] = &LAB_0262c3ec;
  return;
}


