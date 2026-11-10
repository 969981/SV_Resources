/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008f1b38; name: FUN_008f1b38
 */


undefined8 * FUN_008f1b38(void)

{
  int iVar1;
  
  if (((DAT_048006a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048006a0), iVar1 != 0)) {
    DAT_048006e0 = 0;
    DAT_048006e8 = 0;
    DAT_048006a8 = 0;
    DAT_048006d0 = 0;
    DAT_048006d8 = 0;
    DAT_048006c0 = 0;
    DAT_048006c8 = 0;
    DAT_048006b0 = 0;
    DAT_048006b8 = 0;
    __cxa_guard_release(&DAT_048006a0);
  }
  return &DAT_048006a8;
}


