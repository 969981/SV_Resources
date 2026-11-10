/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0178562c; name: FUN_0178562c
 */


long FUN_0178562c(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_04839c20 & 1) == 0) && (param_1 = __cxa_guard_acquire(&DAT_04839c20), (int)param_1 != 0)
     ) {
    FUN_00100190(&LAB_00b1fbbc,&DAT_04839c10,&PTR_LOOP_04483000);
    param_1 = __cxa_guard_release(&DAT_04839c20);
  }
  DAT_04839c08 = DAT_04839c10;
  if (DAT_04839c10 != 0) {
    return param_1;
  }
  uVar3 = FUN_0126a9c0();
  if ((DAT_04839c20 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04839c20);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00b1fbbc,&DAT_04839c10,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04839c20);
    }
  }
  uVar3 = FUN_01785750(uVar3);
  FUN_01785db4(&DAT_04839c10,uVar3);
  lVar1 = 0;
  if (DAT_04839c10 != 0) {
    lVar1 = DAT_04839c10 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_04839c10;
}


