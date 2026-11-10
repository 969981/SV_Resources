/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02794864; name: FUN_02794864
 */


void FUN_02794864(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047e2090 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047e2090), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047e20a8,PTR_DAT_047e2098,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e2090);
  }
  FUN_027948c8(PTR_DAT_047e2098);
  return;
}


