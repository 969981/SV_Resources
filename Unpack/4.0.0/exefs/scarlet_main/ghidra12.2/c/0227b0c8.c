/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0227b0c8; name: FUN_0227b0c8
 */


void FUN_0227b0c8(void)

{
  int iVar1;
  
  if (((DAT_04842878 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04842878), iVar1 != 0)) {
    FUN_0227b838();
    DAT_04842870 = &DAT_04842860;
    __cxa_guard_release(&DAT_04842878);
    return;
  }
  return;
}


