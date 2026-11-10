/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f82820; name: FUN_01f82820
 */


bool FUN_01f82820(void)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  
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
    if (plVar3 == plVar1) goto LAB_01f82890;
    lVar7 = *plVar3;
    uVar6 = FUN_011b8548(lVar7 + 0x28);
    plVar3 = plVar3 + 1;
  } while ((uVar6 & 1) == 0);
  bVar2 = *(byte *)(lVar7 + 0x45);
  if (bVar2 < 2) {
    bVar4 = bVar2 != 0;
  }
  else {
LAB_01f82890:
    bVar4 = false;
  }
  return bVar4;
}


