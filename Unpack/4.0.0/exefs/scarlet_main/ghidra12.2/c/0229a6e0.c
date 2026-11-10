/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0229a6e0; name: FUN_0229a6e0
 */


void FUN_0229a6e0(void *param_1,long param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4)

{
  if (param_2 == 0) {
    memset(param_1,0,0x120);
    FUN_0229a214(param_1);
    *(undefined1 *)((long)param_1 + 0x110) = 0;
    return;
  }
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(param_2 + ((long)param_4 >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x0229a710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}


