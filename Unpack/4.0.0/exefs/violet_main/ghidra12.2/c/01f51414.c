/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f51414; name: FUN_01f51414
 */


void FUN_01f51414(void)

{
  int iVar1;
  
  if (((DAT_0483a1d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483a1d8), iVar1 != 0)) {
    DAT_0483a1d0 = FUN_01c9fb88();
    __cxa_guard_release(&DAT_0483a1d8);
    return;
  }
  return;
}


