/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02596b58; name: FUN_02596b58
 */


void FUN_02596b58(undefined1 *param_1,char *param_2,code *UNRECOVERED_JUMPTABLE_00,ulong param_4)

{
  if (*param_2 == '\x01') {
    if (*(long *)(param_2 + 8) != 0) {
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 =
             *(code **)(UNRECOVERED_JUMPTABLE_00 +
                       *(long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x02596b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  else if ((*param_2 == '\0') && (*(long *)(param_2 + 8) != 0)) {
    if ((param_4 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 =
           *(code **)(UNRECOVERED_JUMPTABLE_00 +
                     *(long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1)));
    }
                    /* WARNING: Could not recover jumptable at 0x02596b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *param_1 = 0;
  return;
}


