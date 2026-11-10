/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029d4800; name: FUN_029d4800
 */


void FUN_029d4800(void)

{
  int iVar1;
  
  if (((DAT_0486af88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0486af88), iVar1 != 0)) {
    DAT_0486af80 = FUN_022c37c0();
    __cxa_guard_release(&DAT_0486af88);
    return;
  }
  return;
}


