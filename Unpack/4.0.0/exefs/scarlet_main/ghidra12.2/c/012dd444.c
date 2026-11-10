/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012dd444; name: FUN_012dd444
 */


void FUN_012dd444(undefined8 *param_1)

{
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  memset(param_1 + 4,0,0xea);
  *(undefined4 *)((long)param_1 + 0x11c) = 0x3f800000;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x24),true,0);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  memset(param_1 + 0x38,0,0x44);
  param_1[0x42] = 0;
  FUN_012dd4dc(param_1 + 0x43);
  param_1[0x47] = 0;
  param_1[0x41] = param_1 + 0x42;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  FUN_012dd598(param_1 + 0x4c);
  return;
}


