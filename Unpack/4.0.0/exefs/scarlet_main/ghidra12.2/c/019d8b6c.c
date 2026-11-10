/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019d8b6c; name: FUN_019d8b6c
 */


void FUN_019d8b6c(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d8950 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8950), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d8df8,PTR_DAT_047d8958,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8950);
  }
  *(undefined8 *)PTR_DAT_047d8960 = *(undefined8 *)PTR_DAT_047d8958;
  return;
}


