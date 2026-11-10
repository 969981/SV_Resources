/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ec417c; name: FUN_01ec417c
 */


void FUN_01ec417c(void)

{
  int iVar1;
  
  if (((DAT_04839c00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839c00), iVar1 != 0)) {
    DAT_04839bf8 = FUN_01c5b554();
    __cxa_guard_release(&DAT_04839c00);
    return;
  }
  return;
}


