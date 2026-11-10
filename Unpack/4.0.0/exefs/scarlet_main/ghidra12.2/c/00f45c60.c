/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f45c60; name: FUN_00f45c60
 */


long FUN_00f45c60(char *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)*param_1;
  if (iVar3 < 0) {
    iVar3 = -0x80;
  }
  lVar1 = FUN_0111b030(iVar3);
  iVar3 = (int)param_1[1];
  if (iVar3 < 0) {
    iVar3 = -0x80;
  }
  lVar2 = FUN_0111b030(iVar3);
  return lVar2 + lVar1;
}


