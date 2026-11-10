/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0270c1f0; name: FUN_0270c1f0
 */


void FUN_0270c1f0(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_68 [24];
  undefined1 *puStack_50;
  code *pcStack_48;
  
  auVar10 = FUN_0270c1e0();
  lVar6 = auVar10._8_8_;
  puVar3 = auVar10._0_8_;
  pcStack_48 = FUN_0270c1fc;
  puStack_50 = auStack_68 + 0x58;
  FUN_00c4e5a0(auStack_68,0);
  lVar8 = *(long *)(lVar6 + 8);
  if (lVar8 != 0) {
    plVar1 = *(long **)(lVar6 + 0x20);
    *(long *)(lVar6 + 0x10) = lVar8;
    lVar9 = *(long *)(lVar6 + 0x18) - lVar8;
    uVar4 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar4 & 1) != 0) {
      lVar5 = FUN_00c4e600();
      if (0 < *(int *)(lVar5 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar8,lVar9,8);
        goto LAB_0270c230;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar8,lVar9,8);
  }
LAB_0270c230:
  plVar1 = (long *)*puVar3;
  uVar2 = puVar3[1];
  uVar7 = puVar3[2];
  uVar4 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if ((uVar4 & 1) != 0) {
    lVar8 = FUN_00c4e600();
    if (0 < *(int *)(lVar8 + 0x12c8)) {
      FUN_00c48fe8(plVar1,lVar6,uVar2,uVar7);
      goto LAB_0270c268;
    }
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar6,uVar2,uVar7);
LAB_0270c268:
  FUN_00c4e70c(auStack_68);
  return;
}


