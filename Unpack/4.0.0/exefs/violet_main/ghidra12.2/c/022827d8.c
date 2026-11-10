/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022827d8; name: FUN_022827d8
 */


void FUN_022827d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar2 = (code *)param_1[1];
  if (pcVar2 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar2)(param_1 + 4);
  }
  uVar3 = param_2[1];
  param_1[4] = *param_2;
  param_1[5] = uVar3;
  param_1[6] = param_2[2];
  param_1[8] = 0;
  param_1[7] = 0;
  FUN_0227e4cc(param_1 + 7,param_2 + 3);
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  param_1[9] = param_2[5];
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  param_1[0xc] = param_2[8];
  uVar3 = param_2[9];
  param_2[9] = 0;
  param_1[0xd] = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 10);
  *param_1 = thunk_FUN_0228288c;
  param_1[1] = FUN_022828d0;
  *(undefined4 *)(param_1 + 0xe) = uVar1;
  param_1[2] = FUN_0228370c;
  param_1[3] = &LAB_02283824;
  return;
}


