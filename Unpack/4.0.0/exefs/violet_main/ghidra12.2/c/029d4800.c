/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029d4800; name: FUN_029d4800
 */


void FUN_029d4800(void)

{
  int iVar1;
  
  if (((DAT_0486af88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0486af88), iVar1 != 0)) {
    DAT_0486af80 = FUN_022c37c0();
    __cxa_guard_release(&DAT_0486af88);
    return;
  }
  return;
}


