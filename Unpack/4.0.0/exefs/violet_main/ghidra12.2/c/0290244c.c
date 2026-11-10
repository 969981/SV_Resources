/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290244c; name: FUN_0290244c
 */


undefined8 * FUN_0290244c(void)

{
  int iVar1;
  
  if (((DAT_0486a1a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0486a1a0), iVar1 != 0)) {
    DAT_0486a198 = FUN_029024a0();
    __cxa_guard_release(&DAT_0486a1a0);
  }
  return &DAT_0486a198;
}


