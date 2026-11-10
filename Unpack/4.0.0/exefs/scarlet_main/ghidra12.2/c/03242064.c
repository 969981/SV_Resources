/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03242064; name: FUN_03242064
 */


void FUN_03242064(long *param_1)

{
  *param_1 = (long)&PTR_LAB_046abab0;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 5));
  if (param_1[4] != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1[4],0);
    param_1[4] = 0;
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


