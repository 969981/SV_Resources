/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026bdc60; name: FUN_026bdc60
 */


undefined8 FUN_026bdc60(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar3, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_048576b0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_048576b0);
      puVar5 = &DAT_04857698;
      if (iVar2 != 0) {
        DAT_04857698 = 0;
        DAT_048576a0 = 0;
        FUN_00100190(FUN_01279a18,&DAT_04857698,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048576b0);
      }
    }
    else {
      puVar5 = &DAT_04857698;
    }
  }
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_048576b0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_048576b0);
      if (iVar2 != 0) {
        DAT_04857698 = 0;
        DAT_048576a0 = 0;
        FUN_00100190(FUN_01279a18,&DAT_04857698,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048576b0);
      }
      puVar4 = &DAT_04857698;
    }
    else {
      puVar4 = &DAT_04857698;
    }
  }
  uVar1 = FUN_010eac74(puVar5,puVar4);
  FUN_00c419e0(param_1,~uVar1 & 1);
  return 1;
}


