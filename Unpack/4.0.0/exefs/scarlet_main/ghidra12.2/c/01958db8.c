/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01958db8; name: FUN_01958db8
 */


void FUN_01958db8(undefined8 *param_1,undefined1 *param_2,code *UNRECOVERED_JUMPTABLE_00,
                 ulong param_4,undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  
  switch(*param_2) {
  case 0:
  case 1:
    if (*(long *)(param_2 + 8) != 0) {
      plVar1 = (long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1));
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x01958e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_5);
      return;
    }
  default:
    *param_1 = 0;
    return;
  case 2:
    break;
  case 3:
    FUN_025bcfcc(param_2 + 8,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  if ((*(long *)(param_2 + 8) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar2 == 0)) {
    *param_1 = 0;
    return;
  }
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1) + -0x28);
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x01958e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_5);
  return;
}


