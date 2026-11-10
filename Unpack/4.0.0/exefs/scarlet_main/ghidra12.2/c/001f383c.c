/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f383c; name: FUN_001f383c
 */


int FUN_001f383c(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_001edb18();
  if ((lVar3 == 0) || (iVar1 = FUN_001f98c0(), iVar1 == 0)) {
    iVar1 = -0x1f5;
  }
  else {
    iVar2 = FUN_001f9894(lVar3,8);
    iVar1 = 0;
    if (iVar2 < -900) {
      iVar1 = iVar2;
    }
  }
  return iVar1;
}


