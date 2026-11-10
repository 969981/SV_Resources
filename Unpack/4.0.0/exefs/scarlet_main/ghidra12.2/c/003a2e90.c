/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a2e90; name: FUN_003a2e90
 */


void FUN_003a2e90(long *param_1)

{
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    *param_1 = *(long *)(*param_1 + 0x10);
  }
  return;
}


