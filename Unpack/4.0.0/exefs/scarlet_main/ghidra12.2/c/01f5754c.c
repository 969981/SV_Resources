/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f5754c; name: FUN_01f5754c
 */


undefined8 * FUN_01f5754c(void)

{
  int iVar1;
  
  if (((DAT_0483a2d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483a2d8), iVar1 != 0)) {
    FUN_01f575a8();
    DAT_0483a2d0 = &DAT_0483a2c0;
    __cxa_guard_release(&DAT_0483a2d8);
  }
  return &DAT_0483a2d0;
}


