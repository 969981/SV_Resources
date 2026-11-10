/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02260328; name: FUN_02260328
 */


void FUN_02260328(void)

{
  int iVar1;
  
  if (((DAT_04842798 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04842798), iVar1 != 0)) {
    FUN_02260a24();
    DAT_04842790 = &DAT_04842780;
    __cxa_guard_release(&DAT_04842798);
    return;
  }
  return;
}


