/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b0340; name: FUN_003b0340
 */


undefined8 FUN_003b0340(long param_1,char *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  bool bVar9;
  
  lVar5 = FUN_0047dcc0();
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_1 + 0x120);
  }
  else {
    if ((*param_2 == '\0') || (iVar3 = FUN_003f4860(param_2,0x3a,1,&LAB_003b2020,lVar5), iVar3 != 0)
       ) {
      FUN_0047db00(*(undefined8 *)(param_1 + 0x130));
      bVar9 = false;
      *(long *)(param_1 + 0x130) = lVar5;
      lVar5 = *(long *)(param_1 + 0x120);
      goto joined_r0x003b039c;
    }
    FUN_0047db00(lVar5);
    lVar5 = *(long *)(param_1 + 0x120);
  }
  bVar9 = true;
joined_r0x003b039c:
  if (lVar5 == 0) {
    lVar5 = FUN_003b4400(param_1);
    if (lVar5 != 0) {
      uVar6 = FUN_0047da00();
      *(undefined8 *)(param_1 + 0x120) = uVar6;
    }
  }
  plVar8 = (long *)(param_1 + 0x120);
  if (bVar9) {
    return 0;
  }
  if (*plVar8 == 0) {
    return 1;
  }
  plVar1 = (long *)(param_1 + 0x128);
  uVar7 = *(undefined8 *)(param_1 + 0x130);
  lVar5 = FUN_0047da00(*plVar8);
  uVar6 = 0;
  if (lVar5 != 0) {
    iVar3 = FUN_0047e430();
    while ((0 < iVar3 && (lVar4 = FUN_0047e450(lVar5,0), *(int *)(lVar4 + 0x2c) == 0x304))) {
      FUN_0047e170(lVar5,0);
      iVar3 = FUN_0047e430(lVar5);
    }
    iVar3 = FUN_0047e430(uVar7);
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        uVar6 = FUN_0047e450(uVar7,iVar3);
        FUN_0047df50(lVar5,uVar6,iVar3);
        iVar3 = iVar3 + 1;
        iVar2 = FUN_0047e430(uVar7);
      } while (iVar3 < iVar2);
    }
    lVar4 = FUN_0047da00(lVar5);
    uVar6 = 0;
    if (lVar4 != 0) {
      FUN_0047db00(*plVar1);
      *plVar1 = lVar4;
      FUN_0047d9e0(lVar4,PTR_LAB_047cd0a8);
      FUN_0047e4d0(*plVar1);
      FUN_0047db00(*plVar8);
      uVar6 = 1;
      *plVar8 = lVar5;
    }
  }
  return uVar6;
}


