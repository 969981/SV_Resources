/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00401620; name: FUN_00401620
 */


long FUN_00401620(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 == 0) {
    lVar2 = 0;
    lVar3 = 0;
    lVar5 = 0;
    lVar4 = 0;
    lVar6 = 0;
    lVar7 = 0;
    goto LAB_0040171c;
  }
  lVar2 = thunk_FUN_003ffef0();
  if (lVar2 == 0) goto LAB_00401708;
  if (*(long *)(param_1 + 8) == 0) {
    if ((*(long *)(param_1 + 0x18) != 0) || (*(long *)(param_1 + 0x10) != 0)) {
LAB_00401708:
      lVar3 = 0;
      lVar5 = 0;
      lVar4 = 0;
      goto LAB_00401714;
    }
LAB_004016cc:
    if (*(long *)(param_1 + 0x20) == 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        return lVar2;
      }
      goto LAB_00401708;
    }
    lVar6 = FUN_003eb7a0();
    if (lVar6 != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        lVar7 = 0;
LAB_0040177c:
        iVar1 = FUN_00400280(lVar2,lVar6,lVar7);
        if (iVar1 != 0) {
          return lVar2;
        }
      }
      else {
        lVar7 = FUN_003eb7a0();
        if (lVar7 != 0) goto LAB_0040177c;
      }
      lVar3 = 0;
      lVar5 = 0;
      lVar4 = 0;
      goto LAB_0040171c;
    }
    lVar3 = 0;
    lVar5 = 0;
    lVar4 = 0;
  }
  else {
    if ((*(long *)(param_1 + 0x18) == 0) || (*(long *)(param_1 + 0x10) == 0)) goto LAB_00401708;
    lVar3 = FUN_003eb7a0();
    lVar4 = FUN_003eb7a0(*(undefined8 *)(param_1 + 0x18));
    lVar5 = FUN_003eb7a0(*(undefined8 *)(param_1 + 0x10));
    lVar6 = 0;
    if (((lVar3 == 0) || (lVar4 == 0)) || (lVar5 == 0)) {
      lVar7 = 0;
      goto LAB_0040171c;
    }
    iVar1 = FUN_004001c0(lVar2,lVar3,lVar5,lVar4);
    if (iVar1 != 0) goto LAB_004016cc;
LAB_00401714:
    lVar6 = 0;
  }
  lVar7 = 0;
LAB_0040171c:
  FUN_003eb520(lVar3);
  FUN_003eb520(lVar4);
  FUN_003eb520(lVar5);
  FUN_003eb520(lVar6);
  FUN_003eb520(lVar7);
  FUN_00400010(lVar2);
  return 0;
}


