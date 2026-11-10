/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0274cc1c; name: FUN_0274cc1c
 */


void FUN_0274cc1c(void)

{
  int iVar1;
  
  if (((DAT_0485c198 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0485c198), iVar1 != 0)) {
    FUN_0274ccb0();
    DAT_0485c190 = &DAT_0485c180;
    __cxa_guard_release(&DAT_0485c198);
    return;
  }
  return;
}


