/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ba00cc; name: FUN_02ba00cc
 */


bool FUN_02ba00cc(long param_1)

{
  if (*(char *)(param_1 + 0x430) == '\0') {
    return *(char *)(param_1 + 0x7c2) != '\0';
  }
  return false;
}


