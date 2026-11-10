/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028bcd40; name: FUN_028bcd40
 */


undefined8 * FUN_028bcd40(void)

{
  int iVar1;
  
  if (((DAT_04863a10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04863a10), iVar1 != 0)) {
    FUN_028bcd9c();
    DAT_04863a08 = &DAT_048639f8;
    __cxa_guard_release(&DAT_04863a10);
  }
  return &DAT_04863a08;
}


