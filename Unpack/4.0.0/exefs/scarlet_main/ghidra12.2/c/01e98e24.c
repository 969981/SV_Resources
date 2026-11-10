/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e98e24; name: FUN_01e98e24
 */


void FUN_01e98e24(void)

{
  int iVar1;
  
  if (((DAT_048395c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048395c0), iVar1 != 0)) {
    DAT_048395b8 = FUN_01c60d14();
    __cxa_guard_release(&DAT_048395c0);
    return;
  }
  return;
}


