/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e5b604; name: FUN_01e5b604
 */


bool FUN_01e5b604(long param_1)

{
  if (*(long *)(param_1 + 0x120) == 0) {
    return false;
  }
  return *(char *)(*(long *)(param_1 + 0x120) + 0x211) != '\0';
}


