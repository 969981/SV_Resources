/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea2d24; name: FUN_01ea2d24
 */


void FUN_01ea2d24(void)

{
  int iVar1;
  
  if (((DAT_04839720 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839720), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1b6d8,&DAT_04839710,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839720);
  }
  FUN_016679c8(&DAT_04839710,0);
  return;
}


