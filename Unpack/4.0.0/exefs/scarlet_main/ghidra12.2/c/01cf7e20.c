/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cf7e20; name: FUN_01cf7e20
 */


undefined ** FUN_01cf7e20(void)

{
  int iVar1;
  
  if (((DAT_047ed380 & 1) != 0) || (iVar1 = __cxa_guard_acquire(&DAT_047ed380), iVar1 == 0)) {
    return DAT_047ed378;
  }
  if (((DAT_047ed368 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047ed368), iVar1 != 0)) {
    __cxa_guard_release(&DAT_047ed368);
  }
  DAT_047ed378 = &PTR_PTR_0448abf0;
  __cxa_guard_release(&DAT_047ed380);
  return DAT_047ed378;
}


