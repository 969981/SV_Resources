/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01828ad8; name: FUN_01828ad8
 */


long FUN_01828ad8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_048383f8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_048383f8);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00aa519c,&DAT_048383e8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_048383f8);
    }
  }
  uVar3 = FUN_01828b8c(param_1,param_2);
  FUN_01829154(&DAT_048383e8,uVar3);
  lVar1 = 0;
  if (DAT_048383e8 != 0) {
    lVar1 = DAT_048383e8 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_048383e8;
}


