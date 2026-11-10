/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022032a8; name: FUN_022032a8
 */


undefined8 * FUN_022032a8(void)

{
  int iVar1;
  
  if (((DAT_048425a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048425a0), iVar1 != 0)) {
    FUN_02203304();
    DAT_04842598 = &DAT_04842588;
    __cxa_guard_release(&DAT_048425a0);
  }
  return &DAT_04842598;
}


