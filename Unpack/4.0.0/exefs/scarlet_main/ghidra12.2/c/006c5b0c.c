/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c5b0c; name: FUN_006c5b0c
 */


void FUN_006c5b0c(undefined8 *param_1,undefined8 param_2)

{
  param_1[4] = param_1 + 3;
  *param_1 = param_2;
  param_1[1] = param_1 + 1;
  param_1[2] = param_1 + 1;
  param_1[3] = param_1 + 3;
  nn::os::InitializeEvent(param_1 + 5,0,0);
  FUN_006c44c4(param_1 + 10);
  param_1[0x12] = param_1 + 5;
  *(undefined4 *)(param_1 + 0x13) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x14),true,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x18),true,0);
  FUN_006c6e28(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x22) = 0;
  return;
}


