/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028f8e90; name: FUN_028f8e90
 */


void FUN_028f8e90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_045ec320;
  param_1[4] = &PTR_LAB_045ec3d0;
  param_1[5] = &DAT_045ec420;
  FUN_028f8ee8(param_1 + 0x80);
  nn::os::FinalizeConditionVariable((ConditionVariableType *)(param_1 + 0x7e));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x7a));
  FUN_014855c8(param_1 + 0x6c);
  FUN_01a6aa10(param_1);
  return;
}


