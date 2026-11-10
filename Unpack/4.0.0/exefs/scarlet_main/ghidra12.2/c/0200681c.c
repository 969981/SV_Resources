/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0200681c; name: FUN_0200681c
 */


void FUN_0200681c(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d9210 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d9210), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dafb0,PTR_DAT_047d9218,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d9210);
  }
  FUN_014c8ac4(PTR_DAT_047d9218,0);
  return;
}


