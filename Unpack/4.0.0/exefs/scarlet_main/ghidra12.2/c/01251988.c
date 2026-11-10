/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01251988; name: FUN_01251988
 */


bool FUN_01251988(long param_1,int param_2)

{
  if (param_2 < 6) {
    return *(char *)(param_1 + param_2 + 0x86) == '\0';
  }
  return false;
}


