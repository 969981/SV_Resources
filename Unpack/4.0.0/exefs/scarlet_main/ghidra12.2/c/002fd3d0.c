/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002fd3d0; name: FUN_002fd3d0
 */


void FUN_002fd3d0(void *param_1)

{
  if (*(void **)((long)param_1 + 0x20) != (void *)0x0) {
    free(*(void **)((long)param_1 + 0x20));
  }
  if (*(void **)((long)param_1 + 0x48) != (void *)0x0) {
    free(*(void **)((long)param_1 + 0x48));
  }
  free(*(void **)((long)param_1 + 0x70));
  free(param_1);
  return;
}


