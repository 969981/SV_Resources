/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e98904; name: FUN_01e98904
 */


void FUN_01e98904(void)

{
  int iVar1;
  
  if (((DAT_04839560 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839560), iVar1 != 0)) {
    DAT_04839558 = FUN_01c60d14();
    __cxa_guard_release(&DAT_04839560);
    return;
  }
  return;
}


