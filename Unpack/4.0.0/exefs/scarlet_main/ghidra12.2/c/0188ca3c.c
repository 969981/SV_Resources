/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0188ca3c; name: FUN_0188ca3c
 */


void FUN_0188ca3c(void)

{
  int iVar1;
  
  if (((DAT_0483a178 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483a178), iVar1 != 0)) {
    DAT_0483a170 = FUN_01c9fb88();
    __cxa_guard_release(&DAT_0483a178);
    return;
  }
  return;
}


