/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02344b84; name: FUN_02344b84
 */


void FUN_02344b84(void)

{
  int iVar1;
  
  if (((DAT_04848008 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04848008), iVar1 != 0)) {
    DAT_04848000 = FUN_0233db40();
    __cxa_guard_release(&DAT_04848008);
    return;
  }
  return;
}


