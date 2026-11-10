/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea27fc; name: FUN_01ea27fc
 */


void FUN_01ea27fc(void)

{
  int iVar1;
  
  if (((DAT_04839cb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839cb0), iVar1 != 0)) {
    FUN_00100190(&LAB_00b2080c,&DAT_04839ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839cb0);
  }
  DAT_04839c98 = DAT_04839ca0;
  if (DAT_04839ca0 == 0) {
    return;
  }
  FUN_01ec8768();
  return;
}


