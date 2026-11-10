/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0047d4f0; name: FUN_0047d4f0
 */


long FUN_0047d4f0(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_5 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_6 == 0) {
    return 0;
  }
  lVar2 = FUN_003ed1c0();
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = FUN_003eb5b0();
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_003eb5b0();
    if ((lVar4 != 0) && (lVar5 = FUN_003eb5b0(), lVar5 != 0)) {
      lVar6 = FUN_003eb5b0();
      if (lVar6 == 0) {
LAB_0047d688:
        lVar7 = 0;
      }
      else {
        FUN_003ec690(lVar6,param_4,4);
        FUN_003ec740(lVar3,4);
        iVar1 = FUN_003fd370(lVar3,param_3,lVar6,param_1,lVar2);
        if (iVar1 == 0) goto LAB_0047d688;
        lVar7 = FUN_0047cf20(param_1,param_3,param_1);
        if ((((lVar7 != 0) && (iVar1 = FUN_003f0dc0(lVar4,lVar3,lVar7,param_1,lVar2), iVar1 != 0))
            && (iVar1 = FUN_003f0b60(lVar3,param_2,lVar4,param_1,lVar2), iVar1 != 0)) &&
           ((iVar1 = FUN_003f1d10(lVar5,param_6,lVar6,lVar2), iVar1 != 0 &&
            (iVar1 = FUN_003f0310(lVar4,param_5,lVar5), iVar1 != 0)))) {
          lVar8 = FUN_003eb5b0();
          if ((lVar8 == 0) || (iVar1 = FUN_003fd370(lVar8,lVar3,lVar4,param_1,lVar2), iVar1 != 0))
          goto LAB_0047d694;
          FUN_003eb520(lVar8);
        }
      }
      lVar8 = 0;
      goto LAB_0047d694;
    }
  }
  lVar5 = 0;
  lVar7 = 0;
  lVar8 = 0;
  lVar6 = 0;
LAB_0047d694:
  FUN_003ed280(lVar2);
  FUN_003eb520(lVar6);
  FUN_003eb490(lVar3);
  FUN_003eb490(lVar4);
  FUN_003eb490(lVar5);
  FUN_003eb520(lVar7);
  return lVar8;
}


