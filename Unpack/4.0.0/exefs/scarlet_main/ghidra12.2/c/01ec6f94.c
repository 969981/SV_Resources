/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ec6f94; name: FUN_01ec6f94
 */


void FUN_01ec6f94(void)

{
  int iVar1;
  
  if (((DAT_04839c30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839c30), iVar1 != 0)) {
    DAT_04839c28 = FUN_01c59c7c();
    __cxa_guard_release(&DAT_04839c30);
    return;
  }
  return;
}


