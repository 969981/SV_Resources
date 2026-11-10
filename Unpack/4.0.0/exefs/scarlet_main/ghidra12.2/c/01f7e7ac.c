/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f7e7ac; name: FUN_01f7e7ac
 */


bool FUN_01f7e7ac(long param_1)

{
  if (*(char *)(param_1 + 0x13f) == '\0') {
    return *(float *)(param_1 + 0x144) < *(float *)(param_1 + 0x17c);
  }
  return false;
}


