/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027eb4cc; name: FUN_027eb4cc
 */


void FUN_027eb4cc(long param_1)

{
  FUN_027eba58(param_1 + 0x5e8);
  if (*(int *)(param_1 + 0x48) - 1U < 3) {
    FUN_027ebaac(param_1);
    return;
  }
  return;
}


