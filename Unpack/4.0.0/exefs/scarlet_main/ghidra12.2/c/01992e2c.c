/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01992e2c; name: FUN_01992e2c
 */


bool FUN_01992e2c(long *param_1)

{
  if (*(char *)((long)param_1 + 0x31) == '\0') {
    return *(float *)(*param_1 + 0x3c) != 0.0;
  }
  return true;
}


