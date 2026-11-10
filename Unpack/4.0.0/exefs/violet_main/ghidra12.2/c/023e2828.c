/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023e2828; name: FUN_023e2828
 */


void FUN_023e2828(undefined8 *param_1,undefined8 *param_2)

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
  uVar4 = *param_2;
  uVar1 = param_2[1];
  uVar2 = param_2[3];
  param_1[6] = param_2[2];
  param_1[7] = uVar2;
  param_1[9] = 0;
  param_1[4] = uVar4;
  param_1[5] = uVar1;
  param_1[8] = 0;
  FUN_00c96b7c(param_1 + 8,param_2 + 4);
  param_1[10] = param_2[6];
  param_1[0xb] = param_2[7];
  param_1[0xc] = param_2[8];
  uVar4 = param_2[9];
  param_2[9] = 0;
  *param_1 = &LAB_023e2b7c;
  param_1[1] = &LAB_023e2b84;
  param_1[0xd] = uVar4;
  param_1[2] = &LAB_023e2ca4;
  param_1[3] = &LAB_023e2d20;
  return;
}


