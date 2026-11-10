/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02115fe0; name: FUN_02115fe0
 */


void FUN_02115fe0(void)

{
  int iVar1;
  
  if (((DAT_04840d10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04840d10), iVar1 != 0)) {
    DAT_04840d08 = FUN_01af969c();
    __cxa_guard_release(&DAT_04840d10);
    return;
  }
  return;
}


