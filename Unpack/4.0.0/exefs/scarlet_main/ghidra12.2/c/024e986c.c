/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024e986c; name: FUN_024e986c
 */


void FUN_024e986c(undefined8 *param_1,char *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4,
                 undefined8 *param_5)

{
  if (((*param_2 != '\x01') && (*param_2 != '\0')) || (*(long *)(param_2 + 8) == 0)) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1))
                   );
  }
                    /* WARNING: Could not recover jumptable at 0x024e9898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_5);
  return;
}


