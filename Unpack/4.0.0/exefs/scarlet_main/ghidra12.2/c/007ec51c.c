/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ec51c; name: FUN_007ec51c
 */


void FUN_007ec51c(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x50) != param_2) {
    *(long *)(param_1 + 0x50) = param_2;
  }
  return;
}


