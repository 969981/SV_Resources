/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01741504; name: FUN_01741504
 */


long FUN_01741504(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_04839838 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04839838);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00b1bcec,&DAT_04839828,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04839838);
    }
  }
  uVar3 = FUN_0174167c(param_1,param_2,param_3);
  FUN_017415cc(&DAT_04839828,uVar3);
  lVar1 = 0;
  if (DAT_04839828 != 0) {
    lVar1 = DAT_04839828 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_04839828;
}


