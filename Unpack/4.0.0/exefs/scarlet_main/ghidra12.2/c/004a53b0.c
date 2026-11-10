/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004a53b0; name: FUN_004a53b0
 */


long FUN_004a53b0(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x4b) == '\0') {
    return 0;
  }
  return *(long *)(param_1 + 0x28) + 0x98;
}


