/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0149b698; name: FUN_0149b698
 */


long FUN_0149b698(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  return lVar1 + (ulong)*(byte *)(lVar1 + 0x938) * 0xc4 + 8;
}


