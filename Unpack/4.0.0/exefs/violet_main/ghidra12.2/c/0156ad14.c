/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0156ad14; name: FUN_0156ad14
 */


void FUN_0156ad14(void)

{
  int iVar1;
  
  if (((DAT_04842668 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04842668), iVar1 != 0)) {
    DAT_04842660 = FUN_0221b138();
    __cxa_guard_release(&DAT_04842668);
    return;
  }
  return;
}


