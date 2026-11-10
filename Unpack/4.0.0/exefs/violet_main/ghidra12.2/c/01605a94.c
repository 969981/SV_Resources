/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01605a94; name: FUN_01605a94
 */


void FUN_01605a94(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0x1c71c71c71c71c7;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  param_1[9] = 0x1c71c71c71c71c7;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xe),true,0);
  FUN_01605b18(param_1 + 1,(long)(1024.0 / *(float *)(param_1 + 0xd)));
  return;
}


