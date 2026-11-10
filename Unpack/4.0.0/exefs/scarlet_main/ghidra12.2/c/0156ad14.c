/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0156ad14; name: FUN_0156ad14
 */


void FUN_0156ad14(void)

{
  int iVar1;
  
  if (((DAT_04842668 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04842668), iVar1 != 0)) {
    DAT_04842660 = FUN_0221b138();
    __cxa_guard_release(&DAT_04842668);
    return;
  }
  return;
}


