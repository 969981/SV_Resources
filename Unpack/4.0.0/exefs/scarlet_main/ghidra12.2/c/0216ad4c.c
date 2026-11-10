/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0216ad4c; name: FUN_0216ad4c
 */


undefined * FUN_0216ad4c(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d2378 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d2378), iVar1 != 0))
  {
    *(undefined8 *)PTR_DAT_047d2380 = 0;
    __cxa_guard_release(PTR_DAT_047d2378);
  }
  return PTR_DAT_047d2380;
}


