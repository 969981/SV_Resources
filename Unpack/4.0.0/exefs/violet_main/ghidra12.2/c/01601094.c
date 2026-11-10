/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01601094; name: FUN_01601094
 */


void FUN_01601094(undefined8 *param_1,undefined8 param_2)

{
  param_1[6] = 0x1fffffffffffffff;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0xb] = param_2;
  param_1[0xc] = 0x1fffffffffffffff;
  param_1[0x13] = param_2;
  param_1[0x14] = 0x1fffffffffffffff;
  param_1[0x19] = param_2;
  param_1[0x1a] = 0x1fffffffffffffff;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x1e),false,0);
  return;
}


