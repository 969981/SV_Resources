/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01459d2c; name: FUN_01459d2c
 */


void FUN_01459d2c(int *param_1,int *param_2)

{
  int iVar1;
  
  *param_1 = *param_2;
  param_1[1] = *param_2 + 0xff;
  iVar1 = *param_2;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[2] = iVar1;
  param_1[3] = 0;
  param_1[0x117] = 1;
  nn::os::InitializeLightEvent(param_1 + 0x114,0,1);
  return;
}


