/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029d484c; name: FUN_029d484c
 */


undefined8 * FUN_029d484c(void)

{
  int iVar1;
  
  if (((DAT_0486afd8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0486afd8), iVar1 != 0)) {
    FUN_029d48a8();
    DAT_0486afd0 = &DAT_0486afc0;
    __cxa_guard_release(&DAT_0486afd8);
  }
  return &DAT_0486afd0;
}


