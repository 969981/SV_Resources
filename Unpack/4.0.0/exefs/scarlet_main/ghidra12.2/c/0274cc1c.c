/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0274cc1c; name: FUN_0274cc1c
 */


void FUN_0274cc1c(void)

{
  int iVar1;
  
  if (((DAT_0485c198 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0485c198), iVar1 != 0)) {
    FUN_0274ccb0();
    DAT_0485c190 = &DAT_0485c180;
    __cxa_guard_release(&DAT_0485c198);
    return;
  }
  return;
}


