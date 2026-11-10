/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032420c4; name: FUN_032420c4
 */


void FUN_032420c4(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)&PTR_LAB_046abab0;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 5));
  puVar1 = PTR_DAT_047d1a08;
  if (param_1[4] != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1[4],0);
    param_1[4] = 0;
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x03242130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1 + 8))(0,param_1,0);
  return;
}


