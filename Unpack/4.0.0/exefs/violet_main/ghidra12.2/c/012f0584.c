/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012f0584; name: FUN_012f0584
 */


void FUN_012f0584(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_0486add0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0486add0);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02e49104,&DAT_0486adc0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0486add0);
    }
  }
  DAT_0486adb8 = DAT_0486adc0;
  if (DAT_0486adc0 != 0) {
    return;
  }
  if ((DAT_0486add0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0486add0);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02e49104,&DAT_0486adc0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0486add0);
    }
  }
  uVar3 = FUN_012f0994(param_1);
  FUN_012f37b4(&DAT_0486adc0,uVar3);
  lVar1 = 0;
  if (DAT_0486adc0 != 0) {
    lVar1 = DAT_0486adc0 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return;
}


