/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019d2d98; name: FUN_019d2d98
 */


void FUN_019d2d98(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = (code *)param_1[1];
  if (pcVar2 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar2)(param_1 + 4);
  }
  uVar3 = *param_2;
  *param_2 = 0;
  param_1[4] = uVar3;
  uVar3 = param_2[1];
  param_2[1] = 0;
  param_1[5] = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 2);
  *param_1 = &LAB_021abea8;
  param_1[1] = &LAB_02b56680;
  *(undefined4 *)(param_1 + 6) = uVar1;
  param_1[2] = &LAB_02b56714;
  param_1[3] = &LAB_02b567a4;
  return;
}


