/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c7cd0; name: FUN_014c7cd0
 */


void FUN_014c7cd0(void)

{
  int iVar1;
  
  if (((DAT_04853cd8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04853cd8), iVar1 != 0)) {
    DAT_04853cd0 = FUN_025e8a94();
    __cxa_guard_release(&DAT_04853cd8);
    return;
  }
  return;
}


