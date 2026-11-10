/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025afc60; name: FUN_025afc60
 */


void FUN_025afc60(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined1 *param_4)

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
                    /* WARNING: Could not recover jumptable at 0x025afca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar1,*param_4);
      return;
    }
    break;
  case 2:
    FUN_025b0b50(param_1 + 8,UNRECOVERED_JUMPTABLE);
    return;
  case 3:
    FUN_025b0b84(param_1 + 8,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}


