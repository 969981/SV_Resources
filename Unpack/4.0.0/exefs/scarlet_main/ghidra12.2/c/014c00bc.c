/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c00bc; name: FUN_014c00bc
 */


void FUN_014c00bc(void)

{
  int iVar1;
  
  if (((DAT_04841a78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04841a78), iVar1 != 0)) {
    DAT_04841a70 = FUN_021a73d0();
    __cxa_guard_release(&DAT_04841a78);
    return;
  }
  return;
}


