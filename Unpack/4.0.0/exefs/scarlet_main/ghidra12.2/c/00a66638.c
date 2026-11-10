/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a66638; name: FUN_00a66638
 */


byte FUN_00a66638(ushort *param_1)

{
  long *plVar1;
  ushort uVar2;
  long *plVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  
  uVar2 = *param_1;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar7 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar7;
  plVar1 = *(long **)(lVar7 + 0x1c8);
  plVar3 = *(long **)(lVar7 + 0x1c0);
  do {
    if (plVar3 == plVar1) goto LAB_00a666a8;
    lVar7 = *plVar3;
    uVar6 = FUN_00a669dc(lVar7 + 0x28);
    plVar3 = plVar3 + 1;
  } while ((uVar6 & 1) == 0);
  if (uVar2 < 0x402) {
    bVar4 = *(byte *)(lVar7 + 0x28 + (ulong)uVar2 * 0x20 + 0x2b) >> 1 & 1;
  }
  else {
LAB_00a666a8:
    bVar4 = 0;
  }
  return bVar4;
}


