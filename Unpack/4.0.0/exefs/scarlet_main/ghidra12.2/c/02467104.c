/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02467104; name: FUN_02467104
 */


long FUN_02467104(void)

{
  int iVar1;
  long lVar2;
  
  if (((*PTR_DAT_047e2400 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047e2400), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047e2478,PTR_DAT_047e2408,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e2400);
  }
  lVar2 = *(long *)PTR_DAT_047e2408;
  *(long *)PTR_DAT_047e2430 = lVar2;
  return lVar2 + 0x28;
}


