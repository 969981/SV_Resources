/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fd1a0; name: FUN_007fd1a0
 */


void FUN_007fd1a0(long param_1)

{
  if (*(long *)(param_1 + 0x13a0) == 0) {
    return;
  }
  FUN_007fde08();
                    /* WARNING: Could not recover jumptable at 0x007fd1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x13a0) + 0x10))(*(long **)(param_1 + 0x13a0),0);
  return;
}


