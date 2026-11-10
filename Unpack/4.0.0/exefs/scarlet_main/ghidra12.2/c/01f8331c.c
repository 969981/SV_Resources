/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f8331c; name: FUN_01f8331c
 */


undefined4 FUN_01f8331c(void)

{
  int iVar1;
  long lVar2;
  
  if (((*PTR_DAT_047d8b18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8b18), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dcc98,PTR_DAT_047d8b20,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8b18);
  }
  lVar2 = *(long *)PTR_DAT_047d8b20;
  *(long *)PTR_DAT_047d8b28 = lVar2;
  return *(undefined4 *)(lVar2 + 0x2c);
}


