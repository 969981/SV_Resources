/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a65d24; name: FUN_00a65d24
 */


uint FUN_00a65d24(ushort *param_1,int param_2,uint param_3)

{
  long *plVar1;
  ushort uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  
  puVar4 = PTR_DAT_047d4c98;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar7 != 0))
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
    if (plVar3 == plVar1) goto LAB_00a65e04;
    uVar8 = FUN_00a669dc(*plVar3 + 0x28);
    plVar3 = plVar3 + 1;
  } while ((uVar8 & 1) == 0);
  uVar2 = *param_1;
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar10 = *(long *)puVar5;
  *(long *)puVar6 = lVar10;
  plVar1 = *(long **)(lVar10 + 0x1c8);
  plVar3 = *(long **)(lVar10 + 0x1c0);
  do {
    if (plVar3 == plVar1) goto LAB_00a65de0;
    lVar10 = *plVar3;
    uVar8 = FUN_00a669dc(lVar10 + 0x28);
    plVar3 = plVar3 + 1;
  } while ((uVar8 & 1) == 0);
  if (uVar2 < 0x402) {
    lVar10 = lVar10 + 0x28 + (ulong)uVar2 * 0x20;
    uVar9 = *(uint *)(lVar10 + 0x18);
    uVar11 = *(uint *)(lVar10 + 0x1c);
    uVar12 = *(uint *)(lVar10 + 0x20);
  }
  else {
LAB_00a65de0:
    uVar9 = 0;
    uVar11 = 0;
    uVar12 = 0;
  }
  if (((param_2 == 0) || (uVar9 = uVar12, param_2 == 2)) || (uVar9 = uVar11, param_2 == 1)) {
    uVar9 = uVar9 >> (ulong)(param_3 & 0x1f) & 1;
  }
  else {
LAB_00a65e04:
    uVar9 = 0;
  }
  return uVar9;
}


