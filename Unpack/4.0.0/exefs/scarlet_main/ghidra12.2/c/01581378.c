/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01581378; name: FUN_01581378
 */


void FUN_01581378(void)

{
  int iVar1;
  
  if (((DAT_0483ad70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483ad70), iVar1 != 0)) {
    FUN_01f95ce8();
    DAT_0483ad68 = &DAT_0483ad58;
    __cxa_guard_release(&DAT_0483ad70);
    return;
  }
  return;
}


