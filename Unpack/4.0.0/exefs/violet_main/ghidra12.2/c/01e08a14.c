/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e08a14; name: FUN_01e08a14
 */


void FUN_01e08a14(undefined8 param_1)

{
  int iVar1;
  
  if ((DAT_04839b78 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04839b78);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00b1ecf8,&DAT_04839b68,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04839b78);
    }
  }
  DAT_04839b60 = DAT_04839b68;
  if (DAT_04839b68 == 0) {
    return;
  }
  FUN_01ebbe88(DAT_04839b68,param_1);
  return;
}


