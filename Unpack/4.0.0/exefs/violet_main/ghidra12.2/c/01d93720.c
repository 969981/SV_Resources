/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d93720; name: FUN_01d93720
 */


undefined8 FUN_01d93720(undefined8 param_1)

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
    if ((DAT_04832e90 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_04832e90);
      puVar5 = &DAT_04832e78;
      if (iVar3 != 0) {
        DAT_04832e78 = 0;
        DAT_04832e80 = 0;
        FUN_00100190(FUN_01847394,&DAT_04832e78,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04832e90);
      }
    }
    else {
      puVar5 = &DAT_04832e78;
    }
  }
  uVar2 = FUN_00c92df0(param_1,2,0);
  if (((DAT_04832ef8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04832ef8), iVar3 != 0)) {
    DAT_048336e0 = '\x01';
    __cxa_guard_release(&DAT_04832ef8);
  }
  puVar1 = PTR_LAB_047d8378;
  if (DAT_048336e0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_24 = uVar2;
  FUN_0190c0b0(puVar5,puVar1,0,&local_24);
  return 0;
}


