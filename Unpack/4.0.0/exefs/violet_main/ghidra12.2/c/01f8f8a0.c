/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f8f8a0; name: FUN_01f8f8a0
 */


undefined8 * FUN_01f8f8a0(void)

{
  int iVar1;
  
  if (((DAT_0483ad30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483ad30), iVar1 != 0)) {
    FUN_01f8f8fc();
    DAT_0483ad28 = &DAT_0483ad18;
    __cxa_guard_release(&DAT_0483ad30);
  }
  return &DAT_0483ad28;
}


