/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01967254; name: FUN_01967254
 */


void FUN_01967254(void)

{
  int iVar1;
  
  if (((DAT_048593c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048593c8), iVar1 != 0)) {
    DAT_048593c0 = FUN_026f62d0();
    __cxa_guard_release(&DAT_048593c8);
    return;
  }
  return;
}


