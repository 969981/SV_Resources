/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0167ee90; name: FUN_0167ee90
 */


bool FUN_0167ee90(long param_1)

{
  if ((*(char *)(param_1 + 0xa7) == '\0') && (*(char *)(param_1 + 0xa9) == '\0')) {
    return false;
  }
  return *(char *)(param_1 + 0xa6) == '\0';
}


