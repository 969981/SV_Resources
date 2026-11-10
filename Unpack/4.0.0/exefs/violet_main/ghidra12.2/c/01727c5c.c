/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01727c5c; name: FUN_01727c5c
 */


long FUN_01727c5c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_04840598 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04840598);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02ace768,&DAT_04840588,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04840598);
    }
  }
  uVar3 = FUN_01727db4(param_1);
  FUN_01727d04(&DAT_04840588,uVar3);
  lVar1 = 0;
  if (DAT_04840588 != 0) {
    lVar1 = DAT_04840588 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_04840588;
}


