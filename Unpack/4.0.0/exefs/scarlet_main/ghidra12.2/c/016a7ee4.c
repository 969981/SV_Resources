/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016a7ee4; name: FUN_016a7ee4
 */


void FUN_016a7ee4(long param_1,uint param_2)

{
  if (*(char *)(param_1 + 0x20) == '\0') {
    return;
  }
  FUN_016a7f0c(DAT_0485a0e8,param_1 + 0x24,param_2 & 1);
  return;
}


