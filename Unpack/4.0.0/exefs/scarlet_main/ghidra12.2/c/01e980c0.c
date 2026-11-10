/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e980c0; name: FUN_01e980c0
 */


void FUN_01e980c0(void)

{
  int iVar1;
  
  if (((DAT_048394b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048394b0), iVar1 != 0)) {
    DAT_048394a8 = FUN_01c60d14();
    __cxa_guard_release(&DAT_048394b0);
    return;
  }
  return;
}


