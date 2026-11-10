/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c27fc8; name: FUN_01c27fc8
 */


void FUN_01c27fc8(undefined8 *param_1,undefined1 *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4,
                 undefined1 *param_5)

{
  long *plVar1;
  
  switch(*param_2) {
  case 0:
  case 1:
    if (*(long *)(param_2 + 8) != 0) {
      plVar1 = (long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1));
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x01c2800c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar1,*param_5);
      return;
    }
    break;
  case 2:
    FUN_01c28088(param_2 + 8,UNRECOVERED_JUMPTABLE);
    return;
  case 3:
    FUN_01c280c0(param_2 + 8,UNRECOVERED_JUMPTABLE);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


