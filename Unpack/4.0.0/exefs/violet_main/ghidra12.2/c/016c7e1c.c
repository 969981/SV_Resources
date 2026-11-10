/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016c7e1c; name: FUN_016c7e1c
 */


long FUN_016c7e1c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_04839480 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04839480);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00b18370,&DAT_04839470,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04839480);
    }
  }
  uVar3 = FUN_016c7f8c(param_1);
  FUN_016c7ec4(&DAT_04839470,uVar3);
  lVar1 = 0;
  if (DAT_04839470 != 0) {
    lVar1 = DAT_04839470 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_04839470;
}


