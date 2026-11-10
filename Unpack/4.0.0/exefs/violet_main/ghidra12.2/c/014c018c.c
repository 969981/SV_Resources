/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014c018c; name: FUN_014c018c
 */


void FUN_014c018c(void)

{
  int iVar1;
  
  if (((DAT_04865ee0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865ee0), iVar1 != 0)) {
    DAT_04865ed8 = FUN_0221b138();
    __cxa_guard_release(&DAT_04865ee0);
    return;
  }
  return;
}


