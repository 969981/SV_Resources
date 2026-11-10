/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021aabdc; name: FUN_021aabdc
 */


undefined8 * FUN_021aabdc(void)

{
  int iVar1;
  
  if (((DAT_04841ad8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04841ad8), iVar1 != 0)) {
    FUN_021aac38();
    DAT_04841ad0 = &DAT_04841ac0;
    __cxa_guard_release(&DAT_04841ad8);
  }
  return &DAT_04841ad0;
}


