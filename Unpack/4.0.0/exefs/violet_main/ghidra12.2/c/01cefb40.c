/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cefb40; name: FUN_01cefb40
 */


void FUN_01cefb40(void)

{
  int iVar1;
  long lVar2;
  
  if (((*PTR_DAT_047da9b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047da9b8), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047daa28,PTR_DAT_047da9c0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da9b8);
  }
  lVar2 = *(long *)PTR_DAT_047da9c0;
  *(long *)PTR_DAT_047da9c8 = lVar2;
  if (lVar2 == 0) {
    return;
  }
  FUN_01f64d50();
  return;
}


