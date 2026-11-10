/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a2d6c; name: FUN_008a2d6c
 */


long FUN_008a2d6c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  if (lVar1 == 0) {
    return 0;
  }
  return lVar1 + (ulong)*(uint *)(param_1 + 0x30);
}


