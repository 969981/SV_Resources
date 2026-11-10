/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023f9438; name: FUN_023f9438
 */


void FUN_023f9438(undefined8 *param_1,undefined8 *param_2)

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
  FUN_00d334b4(param_1 + 0xb,param_2 + 7);
  uVar4 = param_2[9];
  param_2[9] = 0;
  param_1[0xd] = uVar4;
  uVar4 = param_2[0xb];
  param_1[0xe] = param_2[10];
  param_1[0xf] = uVar4;
  *param_1 = thunk_FUN_023f94e4;
  param_1[1] = FUN_023f952c;
  param_1[2] = &LAB_023fa2ec;
  param_1[3] = &LAB_023fa3fc;
  return;
}


