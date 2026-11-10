/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0233c42c; name: FUN_0233c42c
 */


void FUN_0233c42c(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 *param_4)

{
  long *plVar1;
  
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x0233c470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar1,*param_4);
      return;
    }
    break;
  case 2:
    FUN_0233ce48(param_1 + 8,UNRECOVERED_JUMPTABLE);
    return;
  case 3:
    FUN_0233ce7c(param_1 + 8,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}


