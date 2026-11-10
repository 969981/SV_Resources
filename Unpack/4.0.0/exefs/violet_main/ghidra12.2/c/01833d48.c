/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01833d48; name: FUN_01833d48
 */


void FUN_01833d48(undefined8 *param_1,undefined8 param_2)

{
  FUN_01834058();
  *param_1 = &PTR_FUN_045549d0;
  param_1[10] = 0;
  param_1[8] = &PTR_LAB_04554b60;
  param_1[4] = &PTR_LAB_04554a88;
  param_1[5] = &PTR_LAB_04554b08;
  param_1[9] = 0;
  FUN_00ca1a48(param_1 + 9,param_2);
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x14] = param_1[1];
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_01833dd4(param_1 + 0x15);
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  return;
}


