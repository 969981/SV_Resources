/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033a33c; name: FUN_0033a33c
 */


void FUN_0033a33c(long param_1,long param_2)

{
  if ((*(long *)(param_1 + 8) != 0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


