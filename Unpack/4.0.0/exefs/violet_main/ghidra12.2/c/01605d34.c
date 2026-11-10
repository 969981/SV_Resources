/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01605d34; name: FUN_01605d34
 */


void FUN_01605d34(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = param_2;
  param_1[3] = 0x199999999999999;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  param_1[0xd] = 0;
  param_1[8] = 0x199999999999999;
  param_1[9] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = param_2;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xe),false,0);
  return;
}


