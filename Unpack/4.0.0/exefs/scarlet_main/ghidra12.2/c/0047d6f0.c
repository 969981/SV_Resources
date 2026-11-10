/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0047d6f0; name: FUN_0047d6f0
 */


bool FUN_0047d6f0(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  bVar1 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    lVar3 = FUN_003ed1c0();
    if (lVar3 == 0) {
      bVar1 = false;
    }
    else {
      lVar4 = FUN_003eb5b0();
      if ((lVar4 == 0) || (iVar2 = FUN_003f0870(lVar4,param_1,param_2,lVar3), iVar2 == 0)) {
        bVar1 = false;
      }
      else {
        iVar2 = FUN_003eb480(lVar4);
        bVar1 = iVar2 == 0;
      }
      FUN_003ed280(lVar3);
      FUN_003eb520(lVar4);
    }
  }
  return bVar1;
}


