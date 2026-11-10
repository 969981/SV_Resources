/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0235bd78; name: FUN_0235bd78
 */


void FUN_0235bd78(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047dab40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047dab40), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dd780,PTR_DAT_047dab48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dab40);
  }
  *(undefined8 *)PTR_DAT_047dab50 = *(undefined8 *)PTR_DAT_047dab48;
  FUN_0235cd6c();
  return;
}


