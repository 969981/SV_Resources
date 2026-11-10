/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b42ecc; name: FUN_01b42ecc
 */


bool FUN_01b42ecc(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar12 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar12;
  puVar7 = PTR_DAT_047d4890;
  puVar6 = PTR_DAT_047d4888;
  plVar3 = *(long **)(lVar12 + 0x1c0);
  plVar4 = *(long **)(lVar12 + 0x1c8);
  for (; plVar3 != plVar4; plVar3 = plVar3 + 1) {
    lVar12 = *plVar3;
    plVar10 = (long *)(*(code *)**(undefined8 **)(lVar12 + 0x28))((undefined8 *)(lVar12 + 0x28));
    if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
      uVar11 = FUN_01b3fb0c();
      *(undefined8 *)puVar7 = uVar11;
      __cxa_guard_release(puVar6);
    }
    for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      if (plVar10 == (long *)puVar7) goto LAB_01b42f78;
    }
  }
  lVar12 = 0;
LAB_01b42f78:
  if ((param_1 < 6) || (param_2 < 6)) {
    uVar1 = 0;
    if (param_1 < 6) {
      uVar1 = param_1;
    }
    uVar2 = 0;
    if (param_2 < 6) {
      uVar2 = param_2;
    }
    uVar5 = *(ushort *)(lVar12 + (ulong)uVar1 * 0xc + (ulong)uVar2 * 2 + 0x526);
    bVar8 = (byte)(uVar5 >> 8) < 0x21 && (uVar5 & 0xfe) < 0x1e;
  }
  else {
    bVar8 = false;
  }
  return bVar8;
}


