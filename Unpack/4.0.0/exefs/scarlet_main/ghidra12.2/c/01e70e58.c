/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e70e58; name: FUN_01e70e58
 */


bool FUN_01e70e58(long param_1)

{
  if (*(long *)(param_1 + 0x40) == 0) {
    return false;
  }
  return *(char *)(*(long *)(param_1 + 0x40) + 0x29b7) != '\0';
}


