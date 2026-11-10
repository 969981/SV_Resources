/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019137f0; name: FUN_019137f0
 */


void FUN_019137f0(void)

{
  long lVar1;
  
  if (DAT_0485e9f8 != 0) {
    FUN_027896dc();
    lVar1 = DAT_0485e9f8;
    DAT_0485e9f8 = 0;
    if (lVar1 != 0) {
      FUN_018fe510(&DAT_0485ea00);
      return;
    }
  }
  return;
}


