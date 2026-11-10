/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02341624; name: FUN_02341624
 */


void FUN_02341624(void)

{
  int iVar1;
  
  if (((DAT_04847fa8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04847fa8), iVar1 != 0)) {
    DAT_04847fa0 = FUN_0233db40();
    __cxa_guard_release(&DAT_04847fa8);
    return;
  }
  return;
}


