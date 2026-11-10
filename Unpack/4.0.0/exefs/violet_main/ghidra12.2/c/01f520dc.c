/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f520dc; name: FUN_01f520dc
 */


void FUN_01f520dc(void)

{
  int iVar1;
  
  if (((DAT_0483a228 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483a228), iVar1 != 0)) {
    DAT_0483a220 = FUN_01c9fb88();
    __cxa_guard_release(&DAT_0483a228);
    return;
  }
  return;
}


