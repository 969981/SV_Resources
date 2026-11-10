/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015ac550; name: FUN_015ac550
 */


undefined8 FUN_015ac550(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined4 local_24;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar4, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_048313e8 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_048313e8);
      puVar5 = &DAT_048313d0;
      if (iVar3 != 0) {
        DAT_048313d0 = 0;
        DAT_048313d8 = 0;
        FUN_00100190(FUN_013d0e1c,&DAT_048313d0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048313e8);
      }
    }
    else {
      puVar5 = &DAT_048313d0;
    }
  }
  uVar2 = FUN_00c92df0(param_1,2,0);
  if (((DAT_04831490 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04831490), iVar3 != 0)) {
    DAT_04831e18 = '\x01';
    __cxa_guard_release(&DAT_04831490);
  }
  puVar1 = PTR_LAB_047d7c40;
  if (DAT_04831e18 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_24 = uVar2;
  FUN_015ac670(puVar5,puVar1,0,&local_24);
  return 0;
}


