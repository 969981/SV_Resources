/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f5754c; name: FUN_01f5754c
 */


undefined8 * FUN_01f5754c(void)

{
  int iVar1;
  
  if (((DAT_0483a2d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483a2d8), iVar1 != 0)) {
    FUN_01f575a8();
    DAT_0483a2d0 = &DAT_0483a2c0;
    __cxa_guard_release(&DAT_0483a2d8);
  }
  return &DAT_0483a2d0;
}


