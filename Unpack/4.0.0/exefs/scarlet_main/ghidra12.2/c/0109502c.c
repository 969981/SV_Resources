/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0109502c; name: FUN_0109502c
 */


void FUN_0109502c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  if (3 < (int)param_1[5] - 1U) {
    if ((int)param_1[5] != 5) {
      return;
    }
    (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x01095078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3);
  return;
}


