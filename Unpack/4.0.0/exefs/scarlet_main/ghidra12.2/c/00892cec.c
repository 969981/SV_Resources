/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00892cec; name: FUN_00892cec
 */


undefined * FUN_00892cec(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d2108 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d2108), iVar1 != 0))
  {
    *(undefined8 *)PTR_DAT_047d2110 = 0;
    __cxa_guard_release(PTR_DAT_047d2108);
    return PTR_DAT_047d2110;
  }
  return PTR_DAT_047d2110;
}


