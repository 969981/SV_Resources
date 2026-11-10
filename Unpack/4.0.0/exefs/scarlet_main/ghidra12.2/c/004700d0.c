/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004700d0; name: FUN_004700d0
 */


void FUN_004700d0(void)

{
  long in_x5;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(in_x5 + 8) + 0x60);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    FUN_0046fd50();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004700ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


