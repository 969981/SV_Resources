/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017a8bb4; name: FUN_017a8bb4
 */


void FUN_017a8bb4(undefined8 *param_1,undefined8 param_2)

{
  FUN_017a8c9c();
  param_1[10] = 0;
  *param_1 = &PTR_FUN_0456f9b8;
  param_1[4] = &PTR_LAB_0456f9e8;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  param_1[9] = 0x3ffffffffffffff;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xc),false,0);
  FUN_017a8c1c(param_1 + 0x10);
  FUN_017a8c5c(param_1 + 0x1d);
  return;
}


