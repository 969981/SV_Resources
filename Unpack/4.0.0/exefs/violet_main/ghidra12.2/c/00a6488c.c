/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a6488c; name: FUN_00a6488c
 */


void FUN_00a6488c(ushort *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  puVar2 = PTR_DAT_047d4c98;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar4 = PTR_DAT_047d4ca8;
  puVar3 = PTR_DAT_047d4ca0;
  lVar8 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar8;
  plVar1 = *(long **)(lVar8 + 0x1c8);
  plVar10 = *(long **)(lVar8 + 0x1c0);
  do {
    if (plVar10 == plVar1) {
      return;
    }
    lVar8 = *plVar10;
    uVar7 = FUN_00a669dc(lVar8 + 0x28);
    plVar10 = plVar10 + 1;
  } while ((uVar7 & 1) == 0);
  if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar9 = *(long *)puVar3;
  *(long *)puVar4 = lVar9;
  plVar1 = *(long **)(lVar9 + 0x1c8);
  if (*(long **)(lVar9 + 0x1c0) != plVar1) {
    plVar10 = *(long **)(lVar9 + 0x1c0);
    do {
      uVar7 = FUN_00a669dc(*plVar10 + 0x28);
      if ((uVar7 & 1) != 0) break;
      bVar5 = plVar1 + -1 != plVar10;
      plVar10 = plVar10 + 1;
    } while (bVar5);
  }
  if ((ulong)*param_1 < 0x402) {
    lVar8 = lVar8 + (ulong)*param_1 * 0x20;
    *(undefined8 *)(lVar8 + 0x50) = 0;
    *(undefined8 *)(lVar8 + 0x58) = 0;
    *(undefined8 *)(lVar8 + 0x40) = 0;
    *(undefined8 *)(lVar8 + 0x48) = 0;
  }
  return;
}


