/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028fac0c; name: FUN_028fac0c
 */


undefined8 * FUN_028fac0c(void)

{
  int iVar1;
  
  if (((DAT_048660a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048660a8), iVar1 != 0)) {
    DAT_048660a0 = FUN_0219eba8();
    __cxa_guard_release(&DAT_048660a8);
  }
  return &DAT_048660a0;
}


