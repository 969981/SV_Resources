/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eb24b0; name: FUN_01eb24b0
 */


long FUN_01eb24b0(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  lVar1 = FUN_01eb25f0();
  iVar3 = (int)*(char *)(param_1 + 3);
  if (*(char *)(param_1 + 3) < -0x40) {
    iVar3 = -0x7c;
  }
  lVar2 = FUN_0111b030(iVar3);
  return lVar2 + lVar1;
}


