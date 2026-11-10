/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014c7cd0; name: FUN_014c7cd0
 */


void FUN_014c7cd0(void)

{
  int iVar1;
  
  if (((DAT_04853cd8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04853cd8), iVar1 != 0)) {
    DAT_04853cd0 = FUN_025e8a94();
    __cxa_guard_release(&DAT_04853cd8);
    return;
  }
  return;
}


