/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012befd0; name: FUN_012befd0
 */


void FUN_012befd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_012bf03c();
  *param_1 = &PTR_LAB_045e7750;
  param_1[4] = &PTR_LAB_045e7780;
  param_1[5] = &PTR_LAB_045e77a0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 2);
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  memset((void *)((long)param_1 + 0x44),0,0x42);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return;
}


