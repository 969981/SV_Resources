/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021609dc; name: FUN_021609dc
 */


undefined8 * FUN_021609dc(void)

{
  int iVar1;
  
  if (((DAT_048412d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048412d8), iVar1 != 0)) {
    FUN_02160a38();
    DAT_048412d0 = &DAT_048412c0;
    __cxa_guard_release(&DAT_048412d8);
  }
  return &DAT_048412d0;
}


