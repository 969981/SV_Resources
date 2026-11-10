/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01581458; name: FUN_01581458
 */


void FUN_01581458(void)

{
  int iVar1;
  
  if (((DAT_04842778 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04842778), iVar1 != 0)) {
    FUN_0225cc94();
    DAT_04842770 = &DAT_04842760;
    __cxa_guard_release(&DAT_04842778);
    return;
  }
  return;
}


