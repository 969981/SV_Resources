/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01add51c; name: FUN_01add51c
 */


void FUN_01add51c(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  long *plVar1;
  
  if (((*param_1 != '\x01') && (*param_1 != '\0')) || (*(long *)(param_1 + 8) == 0)) {
    return;
  }
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x01add550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_4,*param_5);
  return;
}


