/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027703b4; name: FUN_027703b4
 */


void FUN_027703b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  pcVar2 = (code *)param_1[1];
  if (pcVar2 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar2)(param_1 + 4);
  }
  uVar1 = param_2[1];
  param_1[4] = *param_2;
  param_1[5] = uVar1;
  param_1[6] = param_2[2];
  param_1[7] = param_2[3];
  param_1[9] = 0;
  param_1[8] = 0;
  FUN_00cacc64(param_1 + 8,param_2 + 4);
  uVar1 = param_2[7];
  param_1[10] = param_2[6];
  param_1[0xb] = uVar1;
  *param_1 = thunk_FUN_0277044c;
  param_1[1] = FUN_02770494;
  param_1[2] = &LAB_02770ed0;
  param_1[3] = &LAB_02770f24;
  return;
}


