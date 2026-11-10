/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01601850; name: FUN_01601850
 */


void FUN_01601850(undefined8 *param_1,undefined8 param_2)

{
  FUN_0160194c();
  *(undefined4 *)(param_1 + 0x14) = 0;
  *param_1 = &PTR_FUN_0457f348;
  param_1[4] = &PTR_LAB_0457f390;
  param_1[5] = &PTR_LAB_0457f3b0;
  param_1[6] = param_2;
  param_1[7] = &PTR_FUN_0457f3d8;
  param_1[0x12] = 0x666666666666666;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x17] = 0x666666666666666;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  param_1[0x1c] = &PTR_FUN_0457f3f8;
  param_1[0x1d] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = param_2;
  param_1[0x15] = 0;
  param_1[0x16] = param_2;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = param_2;
  param_1[0x27] = 0x3ffffffffffffff;
  param_1[0x2a] = 0;
  param_1[0x2b] = param_2;
  param_1[0x2c] = 0x3ffffffffffffff;
  param_1[0x2d] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = param_2;
  param_1[0x35] = 0x3fffffffffffffff;
  param_1[0x36] = 0;
  FUN_00ddaef8(param_1 + 0x38,&DAT_03c886bc,0);
  *(undefined4 *)(param_1 + 0x39) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x3a),true,0);
  return;
}


