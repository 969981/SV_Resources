/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012e2ba8; name: FUN_012e2ba8
 */


undefined * FUN_012e2ba8(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047e2448 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047e2448), iVar1 != 0))
  {
    FUN_00100190(&LAB_02c7b840,PTR_DAT_047e2450,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e2448);
  }
  return PTR_DAT_047e2450;
}


