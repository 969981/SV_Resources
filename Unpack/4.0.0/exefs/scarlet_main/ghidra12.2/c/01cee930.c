/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cee930; name: FUN_01cee930
 */


void FUN_01cee930(undefined8 param_1,long *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4,
                 undefined8 param_5)

{
  long *plVar1;
  
  if (*param_2 == 0) {
    FUN_019870dc(param_1);
    return;
  }
  plVar1 = (long *)(*param_2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x01cee950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_5);
  return;
}


