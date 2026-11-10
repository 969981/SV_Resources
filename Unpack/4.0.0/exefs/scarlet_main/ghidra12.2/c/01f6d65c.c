/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6d65c; name: FUN_01f6d65c
 */


void FUN_01f6d65c(void)

{
  int iVar1;
  
  if (((DAT_0483a528 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483a528), iVar1 != 0)) {
    DAT_0483a520 = FUN_01f6c93c();
    __cxa_guard_release(&DAT_0483a528);
    return;
  }
  return;
}


