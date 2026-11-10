/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01525690; name: FUN_01525690
 */


undefined8 FUN_01525690(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04856680 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04856680);
      if (iVar2 != 0) {
        DAT_04856668 = 0;
        DAT_04856670 = 0;
        FUN_00100190(FUN_016a0834,&DAT_04856668,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04856680);
      }
      puVar4 = &DAT_04856668;
    }
    else {
      puVar4 = &DAT_04856668;
    }
  }
  if ((DAT_04856708 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04856708);
    if (iVar2 != 0) {
      DAT_04858260 = '\x01';
      __cxa_guard_release(&DAT_04856708);
    }
  }
  puVar1 = PTR_LAB_047e06c8;
  if (DAT_04858260 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01525790(puVar4,puVar1,0);
  return 0;
}


