/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02408704; name: FUN_02408704
 */


void FUN_02408704(undefined8 *param_1,undefined8 *param_2)

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
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  FUN_00c96b7c(param_1 + 0xe,param_2 + 10);
  uVar4 = param_2[0xd];
  param_1[0x10] = param_2[0xc];
  param_1[0x11] = uVar4;
  *param_1 = thunk_FUN_024087c4;
  param_1[1] = &LAB_0240880c;
  param_1[2] = &LAB_02409338;
  param_1[3] = &LAB_0240945c;
  return;
}


