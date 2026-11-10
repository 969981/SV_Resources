/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01997918; name: FUN_01997918
 */


void FUN_01997918(void)

{
  int iVar1;
  long lVar2;
  
  if (((*PTR_DAT_047d8840 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8840), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047db070,PTR_DAT_047d8848,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8840);
  }
  lVar2 = *(long *)PTR_DAT_047d8848;
  *(long *)PTR_DAT_047d8850 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x0199799c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar2 + 0x88) + 0xa0))();
  return;
}


