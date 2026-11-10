/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021609dc; name: FUN_021609dc
 */


undefined8 * FUN_021609dc(void)

{
  int iVar1;
  
  if (((DAT_048412d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048412d8), iVar1 != 0)) {
    FUN_02160a38();
    DAT_048412d0 = &DAT_048412c0;
    __cxa_guard_release(&DAT_048412d8);
  }
  return &DAT_048412d0;
}


