/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016379e0; name: FUN_016379e0
 */


long FUN_016379e0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_048405f8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_048405f8);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02acf048,&DAT_048405e8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_048405f8);
    }
  }
  uVar3 = FUN_01637a88(param_1);
  FUN_0163ab9c(&DAT_048405e8,uVar3);
  lVar1 = 0;
  if (DAT_048405e8 != 0) {
    lVar1 = DAT_048405e8 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_048405e8;
}


