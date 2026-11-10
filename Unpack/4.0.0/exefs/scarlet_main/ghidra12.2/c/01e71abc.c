/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e71abc; name: FUN_01e71abc
 */


undefined * FUN_01e71abc(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047da7f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047da7f0), iVar1 != 0))
  {
    FUN_01e71b20(PTR_DAT_047da7f8,0x10,0x1021,0);
    __cxa_guard_release(PTR_DAT_047da7f0);
  }
  return PTR_DAT_047da7f8;
}


