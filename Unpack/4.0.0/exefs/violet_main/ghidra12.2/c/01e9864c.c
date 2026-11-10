/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e9864c; name: FUN_01e9864c
 */


void FUN_01e9864c(void)

{
  int iVar1;
  
  if (((DAT_04839500 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839500), iVar1 != 0)) {
    DAT_048394f8 = FUN_01c60d14();
    __cxa_guard_release(&DAT_04839500);
    return;
  }
  return;
}


