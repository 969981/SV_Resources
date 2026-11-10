/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278be60; name: FUN_0278be60
 */


void FUN_0278be60(void)

{
  if (DAT_0485e9d8 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0278be74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_0485e9d8 + 0x58))();
  return;
}


