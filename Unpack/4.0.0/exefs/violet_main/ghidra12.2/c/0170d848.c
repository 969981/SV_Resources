/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0170d848; name: FUN_0170d848
 */


long FUN_0170d848(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_04839cb0 & 1) == 0) && (param_1 = __cxa_guard_acquire(&DAT_04839cb0), (int)param_1 != 0)
     ) {
    FUN_00100190(&LAB_00b2080c,&DAT_04839ca0,&PTR_LOOP_04483000);
    param_1 = __cxa_guard_release(&DAT_04839cb0);
  }
  DAT_04839c98 = DAT_04839ca0;
  if (DAT_04839ca0 != 0) {
    return param_1;
  }
  uVar3 = FUN_0126a9c0();
  if ((DAT_04839cb0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04839cb0);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00b2080c,&DAT_04839ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04839cb0);
    }
  }
  uVar3 = FUN_0170da1c(uVar3);
  FUN_0170d96c(&DAT_04839ca0,uVar3);
  lVar1 = 0;
  if (DAT_04839ca0 != 0) {
    lVar1 = DAT_04839ca0 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_04839ca0;
}


