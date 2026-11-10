/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020fbec0; name: FUN_020fbec0
 */


undefined8 * FUN_020fbec0(void)

{
  int iVar1;
  
  if (((DAT_04840b70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04840b70), iVar1 != 0)) {
    DAT_04840b68 = FUN_01b07aa4();
    __cxa_guard_release(&DAT_04840b70);
  }
  return &DAT_04840b68;
}


