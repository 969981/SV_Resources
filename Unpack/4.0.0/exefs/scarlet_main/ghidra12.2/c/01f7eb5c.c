/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f7eb5c; name: FUN_01f7eb5c
 */


bool FUN_01f7eb5c(long param_1)

{
  if ((*(char *)(param_1 + 0x50) == '\0') || (*(int *)(param_1 + 0x40) == 0)) {
    return false;
  }
  return *(int *)(param_1 + 0x48) != -1;
}


