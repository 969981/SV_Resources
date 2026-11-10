/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003bf520; name: FUN_003bf520
 */


long FUN_003bf520(long param_1)

{
  long lVar1;
  
  if ((param_1 == 0) ||
     ((lVar1 = *(long *)(param_1 + 0x880), lVar1 == 0 &&
      ((*(long *)(param_1 + 0x660) == 0 ||
       (lVar1 = *(long *)(*(long *)(param_1 + 0x660) + 0x368), lVar1 == 0)))))) {
    return 0;
  }
  return lVar1;
}


