/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016a4950; name: FUN_016a4950
 */


long FUN_016a4950(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_04839c70 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04839c70);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00b2035c,&DAT_04839c60,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04839c70);
    }
  }
  uVar3 = FUN_016a4af0(param_1);
  FUN_016a49f8(&DAT_04839c60,uVar3);
  lVar1 = 0;
  if (DAT_04839c60 != 0) {
    lVar1 = DAT_04839c60 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_04839c60;
}


