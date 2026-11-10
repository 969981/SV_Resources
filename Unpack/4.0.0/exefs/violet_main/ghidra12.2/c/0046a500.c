/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0046a500; name: FUN_0046a500
 */


undefined8 FUN_0046a500(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
  iVar1 = FUN_0047e430(*(undefined8 *)(param_1 + 0x58));
  if (iVar1 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_003ed1c0();
    if (lVar3 != 0) {
      iVar6 = 0;
      puVar4 = (undefined8 *)(param_1 + 0x38);
      plVar9 = (long *)(param_1 + 0x30);
      do {
        lVar7 = *plVar9;
        uVar8 = *puVar4;
        puVar4 = (undefined8 *)FUN_0047e450(*(undefined8 *)(param_1 + 0x58),iVar6);
        plVar9 = puVar4 + 3;
        lVar5 = *plVar9;
        if (lVar5 == 0) {
          lVar5 = FUN_003eb610();
          *plVar9 = lVar5;
          if (lVar5 == 0) goto LAB_0046a5a0;
        }
        iVar2 = FUN_003f1d10(lVar5,lVar7,uVar8,lVar3);
        if (iVar2 == 0) goto LAB_0046a5a0;
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
      uVar8 = 1;
      goto LAB_0046a5a4;
    }
  }
LAB_0046a5a0:
  uVar8 = 0;
LAB_0046a5a4:
  FUN_003ed280(lVar3);
  return uVar8;
}


