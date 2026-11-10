/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017ca7a0; name: FUN_017ca7a0
 */


void FUN_017ca7a0(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047da9a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047da9a0), iVar1 != 0))
  {
    FUN_00100190(&LAB_00b0c23c,PTR_DAT_047da9a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da9a0);
  }
  *(undefined8 *)PTR_DAT_047da9b0 = *(undefined8 *)PTR_DAT_047da9a8;
  return;
}


