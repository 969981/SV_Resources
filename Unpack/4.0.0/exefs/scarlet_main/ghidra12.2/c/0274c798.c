/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0274c798; name: FUN_0274c798
 */


void FUN_0274c798(long param_1)

{
  if (*(char *)(param_1 + 0x1c8) == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0274c7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047e1f80)();
  return;
}


