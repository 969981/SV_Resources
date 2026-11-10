/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00249380; name: FUN_00249380
 */


undefined ** FUN_00249380(void)

{
  int iVar1;
  
  if (((DAT_047ed3a8 & 1) != 0) || (iVar1 = __cxa_guard_acquire(&DAT_047ed3a8), iVar1 == 0)) {
    return DAT_047ed3a0;
  }
  if (((DAT_047ed398 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047ed398), iVar1 != 0)) {
    __cxa_guard_release(&DAT_047ed398);
  }
  DAT_047ed3a0 = &PTR_PTR_0448ac10;
  __cxa_guard_release(&DAT_047ed3a8);
  return DAT_047ed3a0;
}


