/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f65400; name: FUN_01f65400
 */


void FUN_01f65400(long param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_30 [16];
  
  if (((*PTR_DAT_047da800 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047da800), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047da9d0,PTR_DAT_047da808,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da800);
  }
  lVar2 = *(long *)PTR_DAT_047da808;
  *(long *)PTR_DAT_047da810 = lVar2;
  if (lVar2 != 0) {
    FUN_01e724b8(auStack_30);
    FUN_01f654a8(param_1 + 0x30,auStack_30);
    FUN_01e72aa4(auStack_30);
  }
  return;
}


