/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01858688; name: FUN_01858688
 */


long FUN_01858688(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_0483acc8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0483acc8);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02a1c3ec,&DAT_0483acb8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483acc8);
    }
  }
  uVar3 = FUN_01858730(param_1);
  FUN_0185c0b4(&DAT_0483acb8,uVar3);
  lVar1 = 0;
  if (DAT_0483acb8 != 0) {
    lVar1 = DAT_0483acb8 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_0483acb8;
}


