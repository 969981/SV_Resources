/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029d48a8; name: FUN_029d48a8
 */


void FUN_029d48a8(void)

{
  int iVar1;
  
  if (((DAT_0486afc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0486afc8), iVar1 != 0)) {
    FUN_029d579c();
    DAT_0486afc0 = &DAT_0486afb0;
    __cxa_guard_release(&DAT_0486afc8);
    return;
  }
  return;
}


