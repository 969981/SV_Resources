/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0216a500; name: FUN_0216a500
 */


undefined8 * FUN_0216a500(void)

{
  int iVar1;
  
  if (((DAT_048415f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048415f8), iVar1 != 0)) {
    FUN_0216a55c();
    DAT_048415f0 = &DAT_04841600;
    __cxa_guard_release(&DAT_048415f8);
  }
  return &DAT_048415f0;
}


