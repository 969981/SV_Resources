/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024ff3b0; name: FUN_024ff3b0
 */


void FUN_024ff3b0(char *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined4 *param_9,undefined4 *param_10,undefined4 *param_11)

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
                    /* WARNING: Could not recover jumptable at 0x024ff550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)
              (*param_4,*param_5,*param_6,*param_7,*param_8,*param_9,*param_10,*param_11);
    return;
  }
  if (*param_1 != '\0') {
    return;
  }
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 =
         *(code **)(UNRECOVERED_JUMPTABLE_00 +
                   *(long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x024ff4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)
            (*param_4,*param_5,*param_6,*param_7,*param_8,*param_9,*param_10,*param_11);
  return;
}


