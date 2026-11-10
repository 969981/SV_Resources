/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02305e00; name: FUN_02305e00
 */


undefined8 FUN_02305e00(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04845598 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04845598);
      if (iVar2 != 0) {
        DAT_04845580 = 0;
        DAT_04845588 = 0;
        FUN_00100190(FUN_0177426c,&DAT_04845580,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04845598);
      }
      puVar4 = &DAT_04845580;
    }
    else {
      puVar4 = &DAT_04845580;
    }
  }
  if ((DAT_04845578 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04845578);
    if (iVar2 != 0) {
      DAT_04846210 = '\x01';
      DAT_04846218 = 1;
      __cxa_guard_release(&DAT_04845578);
    }
  }
  uVar1 = 0x78;
  if (DAT_04846210 == '\0') {
    uVar1 = 0;
  }
  iVar2 = FUN_02305f24(puVar4,uVar1,DAT_04846218);
  FUN_00c5d960(param_1,(long)iVar2);
  return 1;
}


