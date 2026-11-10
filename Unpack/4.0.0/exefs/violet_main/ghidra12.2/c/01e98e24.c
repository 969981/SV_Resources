/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e98e24; name: FUN_01e98e24
 */


void FUN_01e98e24(void)

{
  int iVar1;
  
  if (((DAT_048395c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048395c0), iVar1 != 0)) {
    DAT_048395b8 = FUN_01c60d14();
    __cxa_guard_release(&DAT_048395c0);
    return;
  }
  return;
}


