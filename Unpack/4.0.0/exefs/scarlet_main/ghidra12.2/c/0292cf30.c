/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0292cf30; name: FUN_0292cf30
 */


void FUN_0292cf30(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_0124c070();
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    *param_3 = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0292cf60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3,param_2);
  return;
}


