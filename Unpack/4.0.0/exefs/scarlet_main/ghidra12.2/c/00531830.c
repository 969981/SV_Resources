/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00531830; name: FUN_00531830
 */


void FUN_00531830(long param_1)

{
  if (0 < *(int *)(param_1 + 4)) {
    if (*(long *)(*(long *)(param_1 + 8) + -8) == 0) {
      FUN_0049e700();
      return;
    }
  }
  return;
}


