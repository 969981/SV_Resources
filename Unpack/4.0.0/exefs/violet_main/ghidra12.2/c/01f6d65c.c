/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6d65c; name: FUN_01f6d65c
 */


void FUN_01f6d65c(void)

{
  int iVar1;
  
  if (((DAT_0483a528 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483a528), iVar1 != 0)) {
    DAT_0483a520 = FUN_01f6c93c();
    __cxa_guard_release(&DAT_0483a528);
    return;
  }
  return;
}


