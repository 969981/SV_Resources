/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d6cc20; name: FUN_01d6cc20
 */


undefined8 FUN_01d6cc20(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_048313e8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_048313e8);
      if (iVar2 != 0) {
        DAT_048313d0 = 0;
        DAT_048313d8 = 0;
        FUN_00100190(FUN_013d0e1c,&DAT_048313d0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048313e8);
      }
      puVar4 = &DAT_048313d0;
    }
    else {
      puVar4 = &DAT_048313d0;
    }
  }
  if ((DAT_04831468 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04831468);
    if (iVar2 != 0) {
      DAT_04831df8 = '\x01';
      __cxa_guard_release(&DAT_04831468);
    }
  }
  puVar1 = PTR_FUN_047d7c20;
  if (DAT_04831df8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01296ec0(puVar4,puVar1,0);
  return 0;
}


