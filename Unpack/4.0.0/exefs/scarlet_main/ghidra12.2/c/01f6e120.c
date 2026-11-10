/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6e120; name: FUN_01f6e120
 */


bool FUN_01f6e120(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\0') {
    return false;
  }
  return *(char *)(param_1 + 0x21) != '\0';
}


