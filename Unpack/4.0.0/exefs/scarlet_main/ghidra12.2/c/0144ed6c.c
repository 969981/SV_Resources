/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0144ed6c; name: FUN_0144ed6c
 */


int FUN_0144ed6c(long param_1)

{
  if (*(char *)(param_1 + 0x19) == '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 8) == 0xff) {
    return 0xff;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 0x10);
}


