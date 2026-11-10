/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b43460; name: FUN_01b43460
 */


void FUN_01b43460(uint param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar10 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar10;
  puVar6 = PTR_DAT_047d4890;
  puVar5 = PTR_DAT_047d4888;
  plVar1 = *(long **)(lVar10 + 0x1c0);
  plVar2 = *(long **)(lVar10 + 0x1c8);
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar10 = *plVar1;
    plVar8 = (long *)(*(code *)**(undefined8 **)(lVar10 + 0x28))((undefined8 *)(lVar10 + 0x28));
    if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
      uVar9 = FUN_01b3fb0c();
      *(undefined8 *)puVar6 = uVar9;
      __cxa_guard_release(puVar5);
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)puVar6) goto LAB_01b4350c;
    }
  }
  lVar10 = 0;
LAB_01b4350c:
  if (param_1 < 6) {
    bVar3 = *(byte *)(lVar10 + 0x56e);
    bVar4 = (byte)(1 << (ulong)(param_1 & 0x1f));
    *(byte *)(lVar10 + 0x56e) = bVar3 & (bVar4 ^ 0xff);
    if ((param_2 & 1) != 0) {
      *(byte *)(lVar10 + 0x56e) = bVar3 | bVar4;
    }
  }
  return;
}


