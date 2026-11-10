/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013e7494; name: FUN_013e7494
 */


void FUN_013e7494(void *param_1,long param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4)

{
  if (param_2 == 0) {
    memset(param_1,0,0x810);
    FUN_011d2100(param_1);
    return;
  }
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(param_2 + ((long)param_4 >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x013e74c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}


