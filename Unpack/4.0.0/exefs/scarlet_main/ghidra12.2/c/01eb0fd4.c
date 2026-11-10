/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eb0fd4; name: FUN_01eb0fd4
 */


long FUN_01eb0fd4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0111b030(*(undefined1 *)(param_1 + 0x1c));
  lVar2 = FUN_0111b030(*(undefined1 *)(param_1 + 0x1d));
  return lVar1 + lVar2 + 0x27;
}


