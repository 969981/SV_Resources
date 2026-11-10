/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027c91f8; name: FUN_027c91f8
 */


void FUN_027c91f8(long *param_1,long param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\0') {
    *param_1 = 0;
    return;
  }
  *param_1 = param_2 + 0x1d0;
  return;
}


