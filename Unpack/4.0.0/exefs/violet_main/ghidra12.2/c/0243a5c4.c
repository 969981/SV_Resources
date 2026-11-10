/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0243a5c4; name: FUN_0243a5c4
 */


void FUN_0243a5c4(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)param_1[1];
  if (pcVar1 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(param_1 + 4);
  }
  uVar2 = param_2[1];
  param_1[4] = *param_2;
  param_1[5] = uVar2;
  param_1[6] = param_2[2];
  param_1[8] = 0;
  param_1[7] = 0;
  FUN_00d334b4(param_1 + 7,param_2 + 3);
  uVar2 = param_2[5];
  param_2[5] = 0;
  param_1[9] = uVar2;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_00c96b7c(param_1 + 10,param_2 + 6);
  uVar2 = param_2[9];
  param_1[0xc] = param_2[8];
  param_1[0xd] = uVar2;
  *param_1 = thunk_FUN_0243a674;
  param_1[1] = &LAB_0243a6bc;
  param_1[2] = &LAB_0243af78;
  param_1[3] = &LAB_0243b08c;
  return;
}


