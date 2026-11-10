/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023e543c; name: FUN_023e543c
 */


void FUN_023e543c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
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
  uVar3 = param_2[1];
  param_1[4] = *param_2;
  param_1[5] = uVar3;
  param_1[6] = param_2[2];
  param_1[8] = 0;
  param_1[7] = 0;
  FUN_00c96b7c(param_1 + 7,param_2 + 3);
  param_1[9] = param_2[5];
  param_1[10] = param_2[6];
  param_1[0xb] = param_2[7];
  uVar3 = param_2[8];
  param_2[8] = 0;
  param_1[0xc] = uVar3;
  uVar3 = param_2[9];
  uVar1 = param_2[10];
  *param_1 = thunk_FUN_023e54f0;
  param_1[1] = FUN_023e5538;
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar1;
  param_1[2] = &LAB_023e5f1c;
  param_1[3] = &LAB_023e5fa4;
  return;
}


