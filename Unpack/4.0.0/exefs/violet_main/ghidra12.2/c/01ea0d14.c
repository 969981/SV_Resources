/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea0d14; name: FUN_01ea0d14
 */


void FUN_01ea0d14(void)

{
  int iVar1;
  
  if (((DAT_04839670 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839670), iVar1 != 0)) {
    DAT_04839668 = FUN_01d03f68();
    __cxa_guard_release(&DAT_04839670);
    return;
  }
  return;
}


