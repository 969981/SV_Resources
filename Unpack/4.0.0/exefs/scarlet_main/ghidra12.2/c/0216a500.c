/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0216a500; name: FUN_0216a500
 */


undefined8 * FUN_0216a500(void)

{
  int iVar1;
  
  if (((DAT_048415f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048415f8), iVar1 != 0)) {
    FUN_0216a55c();
    DAT_048415f0 = &DAT_04841600;
    __cxa_guard_release(&DAT_048415f8);
  }
  return &DAT_048415f0;
}


