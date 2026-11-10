/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0159b918; name: FUN_0159b918
 */


void FUN_0159b918(void)

{
  int iVar1;
  
  if (((DAT_04839bc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839bc8), iVar1 != 0)) {
    FUN_01ec17e0();
    DAT_04839bc0 = &DAT_04839bb0;
    __cxa_guard_release(&DAT_04839bc8);
    return;
  }
  return;
}


