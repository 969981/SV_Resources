/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b01a0; name: FUN_003b01a0
 */


undefined8 FUN_003b01a0(long param_1,char *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar4 = FUN_0047dcc0();
  uVar8 = 0;
  if (lVar4 != 0) {
    if ((*param_2 != '\0') && (iVar2 = FUN_003f4860(param_2,0x3a,1,&LAB_003b2020,lVar4), iVar2 == 0)
       ) {
      FUN_0047db00(lVar4);
      return 0;
    }
    FUN_0047db00(*(undefined8 *)(param_1 + 0x18));
    *(long *)(param_1 + 0x18) = lVar4;
    plVar5 = (long *)(param_1 + 8);
    if (*plVar5 != 0) {
      plVar1 = (long *)(param_1 + 0x10);
      lVar6 = FUN_0047da00(*plVar5);
      uVar8 = 0;
      if (lVar6 != 0) {
        iVar2 = FUN_0047e430();
        while ((0 < iVar2 && (lVar7 = FUN_0047e450(lVar6,0), *(int *)(lVar7 + 0x2c) == 0x304))) {
          FUN_0047e170(lVar6,0);
          iVar2 = FUN_0047e430(lVar6);
        }
        iVar2 = FUN_0047e430(lVar4);
        if (0 < iVar2) {
          iVar2 = 0;
          do {
            uVar8 = FUN_0047e450(lVar4,iVar2);
            FUN_0047df50(lVar6,uVar8,iVar2);
            iVar2 = iVar2 + 1;
            iVar3 = FUN_0047e430(lVar4);
          } while (iVar2 < iVar3);
        }
        lVar4 = FUN_0047da00(lVar6);
        uVar8 = 0;
        if (lVar4 != 0) {
          FUN_0047db00(*plVar1);
          *plVar1 = lVar4;
          FUN_0047d9e0(lVar4,PTR_LAB_047cd0a8);
          FUN_0047e4d0(*plVar1);
          FUN_0047db00(*plVar5);
          uVar8 = 1;
          *plVar5 = lVar6;
        }
      }
      return uVar8;
    }
    uVar8 = 1;
  }
  return uVar8;
}


