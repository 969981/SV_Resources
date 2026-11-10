/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ceeea8; name: FUN_01ceeea8
 */


void FUN_01ceeea8(undefined8 param_1,char *param_2,code *UNRECOVERED_JUMPTABLE_00,ulong param_4,
                 undefined8 param_5)

{
  long *plVar1;
  
  if (*param_2 == '\x01') {
    if (*(long *)(param_2 + 8) == 0) {
      FUN_019870dc(param_1);
      return;
    }
    plVar1 = (long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1));
    if ((param_4 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x01ceef18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_5);
    return;
  }
  if (*param_2 != '\0') {
    FUN_019870dc(param_1);
    return;
  }
  if (*(long *)(param_2 + 8) == 0) {
    FUN_019870dc(param_1);
    return;
  }
  plVar1 = (long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x01ceeeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_5);
  return;
}


