/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f51360; name: FUN_01f51360
 */


bool FUN_01f51360(long param_1)

{
  if (((*(long *)(param_1 + 0xd0) == 0 || *(char *)(param_1 + 0xd8) != '\0') &&
      ((*(long *)(param_1 + 0x100) == 0 || (*(char *)(param_1 + 0x108) != '\0')))) &&
     ((*(long *)(param_1 + 0x130) == 0 || (*(char *)(param_1 + 0x138) != '\0')))) {
    return *(long *)(param_1 + 0x160) == 0 || *(char *)(param_1 + 0x168) != '\0';
  }
  return false;
}


