/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0216b9a0; name: FUN_0216b9a0
 */


void FUN_0216b9a0(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047dd280 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047dd280), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dd2e0,PTR_DAT_047dd288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd280);
  }
  FUN_01510b8c(PTR_DAT_047dd288,0);
  return;
}


