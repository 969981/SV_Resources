/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0047e4d0; name: FUN_0047e4d0
 */


void FUN_0047e4d0(uint *param_1)

{
  if (((param_1 == (uint *)0x0) || (param_1[4] != 0)) ||
     (*(__compar_fn_t *)(param_1 + 6) == (__compar_fn_t)0x0)) {
    return;
  }
  if (1 < (int)*param_1) {
    qsort(*(void **)(param_1 + 2),(ulong)*param_1,8,*(__compar_fn_t *)(param_1 + 6));
  }
  param_1[4] = 1;
  return;
}


