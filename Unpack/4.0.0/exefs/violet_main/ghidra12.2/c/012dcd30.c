/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012dcd30; name: FUN_012dcd30
 */


void FUN_012dcd30(undefined8 *param_1,int param_2,undefined4 param_3)

{
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = &PTR_LAB_046a3e10;
  nn::os::InitializeMutex((MutexType *)(param_1 + 3),true,0);
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  if (0 < param_2) {
    FUN_031c1ee4(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0xb) = param_3;
  return;
}


