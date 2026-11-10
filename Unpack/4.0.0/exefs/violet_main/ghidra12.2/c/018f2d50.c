/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018f2d50; name: FUN_018f2d50
 */


undefined8 FUN_018f2d50(void)

{
  int iVar1;
  
  if (((DAT_04802808 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04802808), iVar1 != 0)) {
    __cxa_guard_release(&DAT_04802808);
  }
  FUN_018f2d98();
  return 0;
}


