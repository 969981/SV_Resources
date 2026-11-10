/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012b041c; name: FUN_012b041c
 */


void FUN_012b041c(undefined8 *param_1)

{
  FUN_012b1138();
  *param_1 = &PTR_FUN_045ac458;
  param_1[4] = &PTR_LAB_045ac488;
  FUN_012b066c(param_1 + 5);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  FUN_012b052c(param_1 + 0x11);
  FUN_012b056c(param_1 + 0x1e);
  FUN_012b05ac(param_1 + 0x2b);
  FUN_012b05ec(param_1 + 0x38);
  FUN_012b062c(param_1 + 0x45);
  param_1[0x57] = 0x276276276276276;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  param_1[0x56] = param_1[1];
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)((long)param_1 + 0x2e4) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x5b,0,1);
  param_1[0x5d] = &PTR_FUN_045ac4a8;
  param_1[0x68] = param_1[1];
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x69] = 0x7ffffffffffffff;
  *(undefined2 *)(param_1 + 0x6c) = 0;
  return;
}


