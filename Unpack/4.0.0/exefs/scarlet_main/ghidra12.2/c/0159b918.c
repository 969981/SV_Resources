/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0159b918; name: FUN_0159b918
 */


void FUN_0159b918(void)

{
  int iVar1;
  
  if (((DAT_04839bc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839bc8), iVar1 != 0)) {
    FUN_01ec17e0();
    DAT_04839bc0 = &DAT_04839bb0;
    __cxa_guard_release(&DAT_04839bc8);
    return;
  }
  return;
}


