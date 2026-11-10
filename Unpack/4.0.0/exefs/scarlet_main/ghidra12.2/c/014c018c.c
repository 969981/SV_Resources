/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c018c; name: FUN_014c018c
 */


void FUN_014c018c(void)

{
  int iVar1;
  
  if (((DAT_04865ee0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865ee0), iVar1 != 0)) {
    DAT_04865ed8 = FUN_0221b138();
    __cxa_guard_release(&DAT_04865ee0);
    return;
  }
  return;
}


