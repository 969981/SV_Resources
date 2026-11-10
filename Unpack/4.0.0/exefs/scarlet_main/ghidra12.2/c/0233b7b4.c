/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0233b7b4; name: FUN_0233b7b4
 */


void FUN_0233b7b4(char *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined4 *param_6,undefined8 *param_7,undefined4 *param_8)

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
                    /* WARNING: Could not recover jumptable at 0x0233b83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(*param_4,*param_5,*param_6,plVar1,*param_7,param_7[1],*param_8);
    return;
  }
  if (*param_1 != '\0') {
    return;
  }
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0233b804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(*param_4,*param_5,*param_6,plVar1,*param_7,param_7[1],*param_8);
  return;
}


