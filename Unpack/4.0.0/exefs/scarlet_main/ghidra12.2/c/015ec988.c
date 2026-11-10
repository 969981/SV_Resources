/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015ec988; name: FUN_015ec988
 */


void FUN_015ec988(undefined8 *param_1)

{
  FUN_015eca00();
  *param_1 = &DAT_04553ae0;
  param_1[4] = &PTR_LAB_04553b28;
  param_1[5] = &PTR_LAB_04553b48;
  param_1[6] = &PTR_LAB_04553b60;
  nn::os::InitializeMutex((MutexType *)(param_1 + 7),false,0);
  param_1[0xf] = 0;
  param_1[0x10] = param_1[1];
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x11] = 0x7ffffffffffffff;
  param_1[0x12] = 0;
  memset(param_1 + 0x14,0,0x100);
  return;
}


