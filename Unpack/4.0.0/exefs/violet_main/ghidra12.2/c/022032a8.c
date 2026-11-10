/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022032a8; name: FUN_022032a8
 */


undefined8 * FUN_022032a8(void)

{
  int iVar1;
  
  if (((DAT_048425a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048425a0), iVar1 != 0)) {
    FUN_02203304();
    DAT_04842598 = &DAT_04842588;
    __cxa_guard_release(&DAT_048425a0);
  }
  return &DAT_04842598;
}


