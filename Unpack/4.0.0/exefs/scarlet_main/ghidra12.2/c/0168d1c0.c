/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0168d1c0; name: FUN_0168d1c0
 */


undefined1 FUN_0168d1c0(void)

{
  int iVar1;
  long lVar2;
  
  if (((*PTR_DAT_047d89f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89f8);
  }
  lVar2 = *(long *)PTR_DAT_047d8a00;
  *(long *)PTR_DAT_047d8a08 = lVar2;
  return *(undefined1 *)(lVar2 + 0x2c);
}


