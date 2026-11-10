/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019671ec; name: FUN_019671ec
 */


void FUN_019671ec(void)

{
  int iVar1;
  
  if (((DAT_04859358 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859358), iVar1 != 0)) {
    DAT_04859350 = FUN_026f59bc();
    __cxa_guard_release(&DAT_04859358);
    return;
  }
  return;
}


