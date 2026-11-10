/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c749d0; name: FUN_01c749d0
 */


undefined8 FUN_01c749d0(void)

{
  int iVar1;
  
  if (((DAT_04814da8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04814da8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_04814da8);
  }
  FUN_01c74a18();
  return 0;
}


