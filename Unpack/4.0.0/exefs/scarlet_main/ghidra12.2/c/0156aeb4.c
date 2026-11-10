/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0156aeb4; name: FUN_0156aeb4
 */


void FUN_0156aeb4(void)

{
  int iVar1;
  
  if (((DAT_04866030 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04866030), iVar1 != 0)) {
    DAT_04866028 = FUN_021a73d0();
    __cxa_guard_release(&DAT_04866030);
    return;
  }
  return;
}


