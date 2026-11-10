/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012e3b68; name: FUN_012e3b68
 */


void FUN_012e3b68(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[4] = 0x276276276276276;
  param_1[5] = 0;
  param_1[9] = 0x276276276276276;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[7] = 0;
  param_1[8] = param_2;
  param_1[0xe] = 0;
  param_1[0xf] = &DAT_cbf29ce484222645;
  param_1[0x10] = &DAT_03c886bc;
  param_1[0x11] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)((long)param_1 + 0x13c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x26,0,1);
  nn::os::InitializeEvent(param_1 + 0x28,0,0);
  *(undefined1 *)(param_1 + 0x32) = 0;
  return;
}


