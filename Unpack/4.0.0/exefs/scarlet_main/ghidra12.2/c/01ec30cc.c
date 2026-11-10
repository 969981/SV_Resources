/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ec30cc; name: FUN_01ec30cc
 */


long FUN_01ec30cc(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)*(char *)(param_1 + 0x28);
  if (iVar3 < 0) {
    iVar3 = -0x80;
  }
  lVar1 = FUN_0111b030(iVar3);
  iVar3 = (int)*(char *)(param_1 + 0x29);
  if (iVar3 < 0) {
    iVar3 = -0x80;
  }
  lVar2 = FUN_0111b030(iVar3);
  return lVar1 + lVar2 + 0x3a;
}


