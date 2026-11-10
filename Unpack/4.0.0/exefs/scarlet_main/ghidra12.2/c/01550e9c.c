/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01550e9c; name: FUN_01550e9c
 */


void FUN_01550e9c(long param_1)

{
  if ((*(code **)(param_1 + 0x520) == (code *)0x0) || (**(char **)(param_1 + 0x5a8) == '\0')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01550eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x520))(param_1 + 0x540);
  return;
}


