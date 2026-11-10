/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038f340; name: FUN_0038f340
 */


undefined8 * FUN_0038f340(void)

{
  int iVar1;
  
  if (((DAT_047f15b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047f15b8), iVar1 != 0)) {
    DAT_047f15c0 = 0x10000;
    DAT_047f15d0 = 6;
    DAT_047f15c8 = DAT_03cb5450;
    __cxa_guard_release(&DAT_047f15b8);
    return &DAT_047f15c0;
  }
  return &DAT_047f15c0;
}


