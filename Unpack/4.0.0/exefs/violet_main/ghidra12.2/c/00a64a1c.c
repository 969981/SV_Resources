/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a64a1c; name: FUN_00a64a1c
 */


undefined2 FUN_00a64a1c(ushort *param_1)

{
  long *plVar1;
  ushort uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  
  puVar4 = PTR_DAT_047d4c98;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar6 = PTR_DAT_047d4ca8;
  puVar5 = PTR_DAT_047d4ca0;
  lVar10 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar10;
  plVar1 = *(long **)(lVar10 + 0x1c8);
  plVar3 = *(long **)(lVar10 + 0x1c0);
  do {
    if (plVar3 == plVar1) goto LAB_00a64acc;
    uVar9 = FUN_00a669dc(*plVar3 + 0x28);
    plVar3 = plVar3 + 1;
  } while ((uVar9 & 1) == 0);
  uVar2 = *param_1;
  if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar10 = *(long *)puVar5;
  *(long *)puVar6 = lVar10;
  plVar1 = *(long **)(lVar10 + 0x1c8);
  plVar3 = *(long **)(lVar10 + 0x1c0);
  do {
    if (plVar3 == plVar1) goto LAB_00a64acc;
    lVar10 = *plVar3;
    uVar9 = FUN_00a669dc(lVar10 + 0x28);
    plVar3 = plVar3 + 1;
  } while ((uVar9 & 1) == 0);
  if (uVar2 < 0x402) {
    uVar7 = *(undefined2 *)(lVar10 + 0x28 + (ulong)uVar2 * 0x20 + 0x28);
  }
  else {
LAB_00a64acc:
    uVar7 = 0;
  }
  return uVar7;
}


