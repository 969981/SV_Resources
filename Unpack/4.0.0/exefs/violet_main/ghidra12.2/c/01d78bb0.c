/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d78bb0; name: FUN_01d78bb0
 */


undefined8 FUN_01d78bb0(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 local_24 [4];
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar4, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_048317e8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_048317e8);
      puVar5 = &DAT_048317d0;
      if (iVar2 != 0) {
        DAT_048317d0 = 0;
        DAT_048317d8 = 0;
        FUN_00100190(PTR_FUN_047d7d58,&DAT_048317d0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048317e8);
      }
    }
    else {
      puVar5 = &DAT_048317d0;
    }
  }
  iVar2 = FUN_00cc4dc0(param_1,2);
  if (((DAT_04831980 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04831980), iVar3 != 0)) {
    DAT_04832028 = '\x01';
    __cxa_guard_release(&DAT_04831980);
  }
  local_24[0] = iVar2 != 0;
  puVar1 = PTR_FUN_047d7ed8;
  if (DAT_04832028 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_0169b0f4(puVar5,puVar1,0,local_24);
  return 0;
}


