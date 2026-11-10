/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028f902c; name: FUN_028f902c
 */


void FUN_028f902c(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_045ec478;
  param_1[4] = &PTR_LAB_045ec528;
  param_1[5] = &DAT_045ec578;
  nn::os::FinalizeConditionVariable((ConditionVariableType *)(param_1 + 0x82));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x7e));
  pcVar1 = (code *)param_1[0x6f];
  if (pcVar1 != (code *)0x0) {
    param_1[0x71] = 0;
    param_1[0x70] = 0;
    param_1[0x6f] = 0;
    param_1[0x6e] = 0;
    (*pcVar1)(param_1 + 0x72);
  }
  FUN_01a6aa10(param_1);
  return;
}


