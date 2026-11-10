/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014f7e20; name: FUN_014f7e20
 */


undefined8 FUN_014f7e20(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04856b80 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04856b80);
      if (iVar2 != 0) {
        DAT_04856b68 = 0;
        DAT_04856b70 = 0;
        FUN_00100190(FUN_01524394,&DAT_04856b68,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04856b80);
      }
      puVar4 = &DAT_04856b68;
    }
    else {
      puVar4 = &DAT_04856b68;
    }
  }
  if (((DAT_04856c50 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04856c50), iVar2 != 0)) {
    DAT_048585f8 = '\x01';
    DAT_04858600 = 1;
    __cxa_guard_release(&DAT_04856c50);
  }
  uVar1 = 0x88;
  if (DAT_048585f8 == '\0') {
    uVar1 = 0;
  }
  FUN_014f7f2c(puVar4,uVar1,DAT_04858600);
  return 0;
}


