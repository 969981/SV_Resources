/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02191194; name: FUN_02191194
 */


long FUN_02191194(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x300) == 0) {
    return 0;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x300) + 0x10);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + -0x28;
  }
  return lVar1;
}


