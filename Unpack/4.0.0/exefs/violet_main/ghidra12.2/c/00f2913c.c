/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f2913c; name: FUN_00f2913c
 */


bool FUN_00f2913c(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar3 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar3;
  plVar4 = *(long **)(lVar3 + 0x1c0);
  do {
    lVar3 = *plVar4;
    uVar2 = FUN_00f280dc(lVar3 + 0x28);
    plVar4 = plVar4 + 1;
  } while ((uVar2 & 1) == 0);
  return *(long *)(lVar3 + 0x40) != 0;
}


