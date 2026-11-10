/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02315c60; name: FUN_02315c60
 */


undefined8 FUN_02315c60(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar3, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_048468e8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_048468e8);
      puVar5 = &DAT_048468d0;
      if (iVar2 != 0) {
        DAT_048468d0 = 0;
        DAT_048468d8 = 0;
        FUN_00100190(FUN_01530768,&DAT_048468d0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048468e8);
      }
    }
    else {
      puVar5 = &DAT_048468d0;
    }
  }
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_048468e8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_048468e8);
      if (iVar2 != 0) {
        DAT_048468d0 = 0;
        DAT_048468d8 = 0;
        FUN_00100190(FUN_01530768,&DAT_048468d0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048468e8);
      }
      puVar4 = &DAT_048468d0;
    }
    else {
      puVar4 = &DAT_048468d0;
    }
  }
  uVar1 = FUN_0165a5c8(puVar5,puVar4);
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


