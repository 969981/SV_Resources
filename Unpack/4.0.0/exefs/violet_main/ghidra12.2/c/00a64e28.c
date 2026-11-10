/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a64e28; name: FUN_00a64e28
 */


bool FUN_00a64e28(ushort *param_1,uint param_2)

{
  long *plVar1;
  ushort uVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  
  if (0x1f < (param_2 & 0xff)) {
    return false;
  }
  uVar2 = *param_1;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar7 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar7;
  plVar1 = *(long **)(lVar7 + 0x1c8);
  plVar3 = *(long **)(lVar7 + 0x1c0);
  do {
    if (plVar3 == plVar1) goto LAB_00a64eb4;
    lVar7 = *plVar3;
    uVar5 = FUN_00a669dc(lVar7 + 0x28);
    plVar3 = plVar3 + 1;
  } while ((uVar5 & 1) == 0);
  if (uVar2 < 0x402) {
    uVar6 = *(uint *)(lVar7 + 0x28 + (ulong)uVar2 * 0x20 + 0x24);
  }
  else {
LAB_00a64eb4:
    uVar6 = 0;
  }
  return (uVar6 >> (ulong)(param_2 & 0x1f) & 1) == 0;
}


