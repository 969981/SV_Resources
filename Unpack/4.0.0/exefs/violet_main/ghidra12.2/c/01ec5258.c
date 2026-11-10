/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec5258; name: FUN_01ec5258
 */


void FUN_01ec5258(void)

{
  int iVar1;
  
  if (((DAT_04839c20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839c20), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1fbbc,&DAT_04839c10,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839c20);
  }
  FUN_01785db4(&DAT_04839c10,0);
  return;
}


