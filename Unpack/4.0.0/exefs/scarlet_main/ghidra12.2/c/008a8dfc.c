/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a8dfc; name: FUN_008a8dfc
 */


undefined * FUN_008a8dfc(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d2098 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d2098), iVar1 != 0))
  {
    *(undefined8 *)PTR_DAT_047d20a0 = 0;
    __cxa_guard_release(PTR_DAT_047d2098);
    return PTR_DAT_047d20a0;
  }
  return PTR_DAT_047d20a0;
}


