/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024c8558; name: FUN_024c8558
 */


void FUN_024c8558(char *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  if (*param_1 == '\x01') {
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 =
           *(code **)(UNRECOVERED_JUMPTABLE_00 +
                     *(long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1)));
    }
                    /* WARNING: Could not recover jumptable at 0x024c85b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(*param_4,*param_5);
    return;
  }
  if ((*param_1 != '\0') || (*(long *)(param_1 + 8) == 0)) {
    return;
  }
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 =
         *(code **)(UNRECOVERED_JUMPTABLE_00 +
                   *(long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x024c8588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(*param_4,*param_5);
  return;
}


