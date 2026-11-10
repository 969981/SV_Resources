/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0168a958; name: FUN_0168a958
 */


long FUN_0168a958(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (((DAT_04839928 & 1) == 0) && (param_1 = __cxa_guard_acquire(&DAT_04839928), (int)param_1 != 0)
     ) {
    FUN_00100190(&LAB_00b1ce58,&DAT_04839918,&PTR_LOOP_04483000);
    param_1 = __cxa_guard_release(&DAT_04839928);
  }
  DAT_04839910 = DAT_04839918;
  if ((DAT_04839918 != 0) || (lVar2 = FUN_0126a9c0(), param_1 = 0, lVar2 == 0)) {
    return param_1;
  }
  if ((DAT_04839928 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04839928);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00b1ce58,&DAT_04839918,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04839928);
    }
  }
  uVar3 = FUN_0168ab78(lVar2);
  FUN_0168aa80(&DAT_04839918,uVar3);
  lVar2 = 0;
  if (DAT_04839918 != 0) {
    lVar2 = DAT_04839918 + 0x20;
  }
  FUN_0100ba9c(lVar2);
  return DAT_04839918;
}


