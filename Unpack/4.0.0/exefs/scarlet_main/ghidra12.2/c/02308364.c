/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02308364; name: FUN_02308364
 */


void FUN_02308364(long *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined4 *param_4)

{
  long lVar1;
  
  if ((*param_1 == 0) || (lVar1 = *(long *)(*param_1 + 0x10), lVar1 == 0)) {
    return;
  }
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + ((long)param_3 >> 1) + -0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x0230838c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_4);
  return;
}


