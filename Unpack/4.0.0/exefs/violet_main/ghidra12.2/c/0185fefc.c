/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0185fefc; name: FUN_0185fefc
 */


long FUN_0185fefc(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_048371d8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_048371d8);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00a8a92c,&DAT_048371c8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_048371d8);
    }
  }
  uVar3 = FUN_0185ffa4(param_1);
  FUN_01860220(&DAT_048371c8,uVar3);
  lVar1 = 0;
  if (DAT_048371c8 != 0) {
    lVar1 = DAT_048371c8 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_048371c8;
}


