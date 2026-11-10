/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d2960; name: FUN_031d2960
 */


void FUN_031d2960(undefined8 *param_1)

{
  param_1[6] = &LAB_00500000;
  param_1[7] = &LAB_00500000;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = 0xffffffffffffffff;
  param_1[4] = 0xffffffffffffffff;
  param_1[5] = 0xffffffffffffffff;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x8000000000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x8000000000000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x8000000000000000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x8000000000000000;
  param_1[0x16] = 0x8000000000000000;
  param_1[0x17] = 0;
  memset(param_1 + 0x1a,0,0x70);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x28),true,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2c),true,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x30),true,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x34),true,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x38),true,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x3c),true,0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x204) = 0;
  *(undefined1 *)((long)param_1 + 0x205) = 0;
  *(undefined1 *)((long)param_1 + 0x206) = 0;
  *(undefined1 *)((long)param_1 + 0x207) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined1 *)((long)param_1 + 0x209) = 0;
  return;
}


