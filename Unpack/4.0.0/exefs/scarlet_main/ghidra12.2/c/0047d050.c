/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0047d050; name: FUN_0047d050
 */


long FUN_0047d050(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_5 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  lVar2 = FUN_003ed1c0();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_003eb5b0();
    if (((lVar3 != 0) && (iVar1 = FUN_003fd370(lVar3,param_2,param_3,param_5,lVar2), iVar1 != 0)) &&
       (iVar1 = FUN_003f0dc0(lVar3,param_1,lVar3,param_5,lVar2), iVar1 != 0)) {
      lVar4 = FUN_003eb5b0();
      if ((lVar4 == 0) || (iVar1 = FUN_003fd370(lVar4,lVar3,param_4,param_5,lVar2), iVar1 != 0))
      goto LAB_0047d11c;
      FUN_003eb520(lVar4);
    }
  }
  lVar4 = 0;
LAB_0047d11c:
  FUN_003ed280(lVar2);
  FUN_003eb490(lVar3);
  return lVar4;
}


