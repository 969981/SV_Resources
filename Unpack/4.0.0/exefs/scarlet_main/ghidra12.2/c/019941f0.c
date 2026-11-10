/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019941f0; name: FUN_019941f0
 */


bool FUN_019941f0(void)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = FUN_017f6f98();
  bVar1 = false;
  if (lVar2 != 0) {
    bVar1 = *(long *)(lVar2 + 0x38) != 0;
  }
  return bVar1;
}


