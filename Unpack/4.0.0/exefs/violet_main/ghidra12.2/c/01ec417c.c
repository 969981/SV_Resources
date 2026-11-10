/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec417c; name: FUN_01ec417c
 */


void FUN_01ec417c(void)

{
  int iVar1;
  
  if (((DAT_04839c00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839c00), iVar1 != 0)) {
    DAT_04839bf8 = FUN_01c5b554();
    __cxa_guard_release(&DAT_04839c00);
    return;
  }
  return;
}


