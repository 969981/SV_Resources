/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01828cbc; name: FUN_01828cbc
 */


void FUN_01828cbc(undefined8 *param_1,undefined8 param_2)

{
  FUN_01828dbc();
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = &PTR_LAB_04545fc0;
  param_1[4] = &PTR_LAB_04545ff0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[6] = 0;
  param_1[7] = param_2;
  param_1[8] = 0x3ffffffffffffff;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = 0x3ffffffffffffff;
  param_1[0xe] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = param_2;
  param_1[0x15] = 0x3ffffffffffffff;
  param_1[0x18] = 0;
  param_1[0x19] = param_2;
  param_1[0x1a] = 0x3ffffffffffffff;
  param_1[0x1b] = 0;
  FUN_01828d7c(param_1 + 0x22);
  param_1[0x2f] = 0;
  *(undefined4 *)((long)param_1 + 0x18c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x30,0,1);
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  return;
}


