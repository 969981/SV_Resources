/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022e5af0; name: FUN_022e5af0
 */


void FUN_022e5af0(void)

{
  int iVar1;
  
  if (((DAT_04844960 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04844960), iVar1 != 0)) {
    FUN_022e5c6c();
    DAT_04844958 = &DAT_04844968;
    __cxa_guard_release(&DAT_04844960);
    return;
  }
  return;
}


