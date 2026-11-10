/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0047d150; name: FUN_0047d150
 */


long FUN_0047d150(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  lVar2 = FUN_003ed1c0();
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = FUN_003eb5b0();
  if (lVar3 == 0) {
    lVar4 = 0;
LAB_0047d234:
    lVar5 = 0;
  }
  else {
    lVar4 = FUN_003eb5b0();
    if (lVar4 == 0) goto LAB_0047d234;
    lVar5 = FUN_003eb5b0();
    if (lVar5 != 0) {
      iVar1 = FUN_003fd370(lVar4,param_3,param_1,param_2,lVar2);
      if (iVar1 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = FUN_0047cf20(param_2,param_3,param_2);
        if (((lVar6 != 0) && (iVar1 = FUN_003f0dc0(lVar3,param_4,lVar6,param_2,lVar2), iVar1 != 0))
           && (iVar1 = FUN_003f08f0(lVar5,lVar4,lVar3,param_2,lVar2), iVar1 != 0))
        goto LAB_0047d250;
      }
      FUN_003eb520(lVar5);
      lVar5 = 0;
      goto LAB_0047d250;
    }
  }
  lVar6 = 0;
LAB_0047d250:
  FUN_003ed280(lVar2);
  FUN_003eb490(lVar3);
  FUN_003eb490(lVar4);
  FUN_003eb520(lVar6);
  return lVar5;
}


