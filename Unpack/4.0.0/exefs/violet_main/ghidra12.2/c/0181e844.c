/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0181e844; name: FUN_0181e844
 */


long FUN_0181e844(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_0483b210 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0483b210);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02a427cc,&DAT_0483b200,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483b210);
    }
  }
  uVar3 = FUN_0181e8ec(param_1);
  FUN_0181ee0c(&DAT_0483b200,uVar3);
  lVar1 = 0;
  if (DAT_0483b200 != 0) {
    lVar1 = DAT_0483b200 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_0483b200;
}


