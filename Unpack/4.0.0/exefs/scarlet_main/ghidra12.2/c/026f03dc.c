/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f03dc; name: FUN_026f03dc
 */


void FUN_026f03dc(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\0') {
    return;
  }
  FUN_026f041c();
  FUN_026f04fc(param_1);
  FUN_026f071c(param_1);
  return;
}


