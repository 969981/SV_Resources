/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b172f0; name: FUN_01b172f0
 */


void FUN_01b172f0(char *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined2 *param_4,
                 undefined2 *param_5,undefined2 *param_6,undefined2 *param_7)

{
  long *plVar1;
  
  if (*param_1 == '\x01') {
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x01b1737c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,*param_4,*param_5,*param_6,*param_7);
    return;
  }
  if ((*param_1 != '\0') || (*(long *)(param_1 + 8) == 0)) {
    return;
  }
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x01b17334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(plVar1,*param_4,*param_5,*param_6,*param_7);
  return;
}


