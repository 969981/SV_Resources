/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017ca3d8; name: FUN_017ca3d8
 */


long FUN_017ca3d8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_048393e0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_048393e0);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00b0c240,&DAT_048393d0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_048393e0);
    }
  }
  uVar3 = FUN_017ca480(param_1);
  FUN_017ca93c(&DAT_048393d0,uVar3);
  lVar1 = 0;
  if (DAT_048393d0 != 0) {
    lVar1 = DAT_048393d0 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_048393d0;
}


