/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027bb1b0; name: FUN_027bb1b0
 */


void FUN_027bb1b0(char *param_1,long param_2)

{
  if (*param_1 == '\0') {
    FUN_027bc048(param_1,param_2);
    return;
  }
  FUN_01d0e1a8(param_1 + 8,param_2);
  FUN_01d0e1a8(param_1 + 0x28,param_2 + 0x20);
  return;
}


