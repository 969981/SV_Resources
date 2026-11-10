/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028fac0c; name: FUN_028fac0c
 */


undefined8 * FUN_028fac0c(void)

{
  int iVar1;
  
  if (((DAT_048660a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048660a8), iVar1 != 0)) {
    DAT_048660a0 = FUN_0219eba8();
    __cxa_guard_release(&DAT_048660a8);
  }
  return &DAT_048660a0;
}


