/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b96dd0; name: FUN_01b96dd0
 */


undefined8 FUN_01b96dd0(undefined8 param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar4, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_0480b008 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_0480b008);
      if (iVar3 != 0) {
        DAT_0480aff0 = 0;
        DAT_0480aff8 = 0;
        FUN_00100190(FUN_015c6d70,&DAT_0480aff0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0480b008);
      }
      puVar5 = &DAT_0480aff0;
    }
    else {
      puVar5 = &DAT_0480aff0;
    }
  }
  if ((DAT_0480b010 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_0480b010);
    if (iVar3 != 0) {
      DAT_0480bb48 = '\x01';
      __cxa_guard_release(&DAT_0480b010);
    }
  }
  puVar1 = &LAB_00954ce0;
  if (DAT_0480bb48 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  uVar2 = FUN_01b96ee8(puVar5,puVar1,0);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


