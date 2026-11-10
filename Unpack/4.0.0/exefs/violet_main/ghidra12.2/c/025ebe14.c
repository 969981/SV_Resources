/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025ebe14; name: FUN_025ebe14
 */


void FUN_025ebe14(void)

{
  int iVar1;
  
  if (((DAT_04853dc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04853dc8), iVar1 != 0)) {
    DAT_04853dc0 = FUN_025e8a94();
    __cxa_guard_release(&DAT_04853dc8);
    return;
  }
  return;
}


