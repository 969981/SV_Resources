/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016a9abc; name: FUN_016a9abc
 */


void FUN_016a9abc(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0xa8);
  if ((*(ulong *)(param_1 + 0xb0) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(param_1 + ((long)*(ulong *)(param_1 + 0xb0) >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x016a9ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


