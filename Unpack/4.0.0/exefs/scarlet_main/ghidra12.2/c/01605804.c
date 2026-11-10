/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01605804; name: FUN_01605804
 */


void FUN_01605804(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[3] = 0xcccccccccccccc;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[6] = 0;
  param_1[7] = param_2;
  param_1[8] = 0xcccccccccccccc;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xd),false,0);
  FUN_01605878(param_1,(long)(256.0 / *(float *)(param_1 + 0xc)));
  return;
}


