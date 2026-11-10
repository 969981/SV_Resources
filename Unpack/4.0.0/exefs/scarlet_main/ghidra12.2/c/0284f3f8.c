/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0284f3f8; name: FUN_0284f3f8
 */


undefined8 * FUN_0284f3f8(void)

{
  int iVar1;
  
  if (((DAT_0485f1d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0485f1d8), iVar1 != 0)) {
    FUN_0284f4a0();
    DAT_0485f1d0 = &DAT_0485f1c0;
    __cxa_guard_release(&DAT_0485f1d8);
  }
  return &DAT_0485f1d0;
}


