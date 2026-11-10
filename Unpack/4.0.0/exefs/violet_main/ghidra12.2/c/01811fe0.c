/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01811fe0; name: FUN_01811fe0
 */


long FUN_01811fe0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_04840880 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04840880);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02af6da4,&DAT_04840870,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04840880);
    }
  }
  uVar3 = FUN_01812088(param_1);
  FUN_01812328(&DAT_04840870,uVar3);
  lVar1 = 0;
  if (DAT_04840870 != 0) {
    lVar1 = DAT_04840870 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_04840870;
}


