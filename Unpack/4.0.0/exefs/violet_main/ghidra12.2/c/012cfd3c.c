/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012cfd3c; name: FUN_012cfd3c
 */


void FUN_012cfd3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 1;
  nn::os::InitializeLightEvent(param_1 + 1,0,1);
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = uVar1;
  param_1[7] = 0x1c71c71c71c71c7;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_012cfeac(param_1 + 0xd);
  param_1[0x11] = 0;
  param_1[0x12] = uVar1;
  param_1[0x13] = 0;
  FUN_012d0398(param_1 + 3);
  return;
}


