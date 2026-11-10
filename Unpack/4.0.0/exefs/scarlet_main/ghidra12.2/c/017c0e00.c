/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017c0e00; name: FUN_017c0e00
 */


void FUN_017c0e00(char *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3)

{
  if (*param_1 == '\x01') {
    if (*(long *)(param_1 + 8) != 0) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 =
             *(code **)(UNRECOVERED_JUMPTABLE_00 +
                       *(long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x017c0e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  else if ((*param_1 == '\0') && (*(long *)(param_1 + 8) != 0)) {
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 =
           *(code **)(UNRECOVERED_JUMPTABLE_00 +
                     *(long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1)));
    }
                    /* WARNING: Could not recover jumptable at 0x017c0e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  return;
}


