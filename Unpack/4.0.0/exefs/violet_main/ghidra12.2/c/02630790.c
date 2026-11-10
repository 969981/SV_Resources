/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02630790; name: FUN_02630790
 */


undefined1 * FUN_02630790(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_04854f28 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04854f28);
      if (iVar1 != 0) {
        DAT_04854f10 = 0;
        DAT_04854f18 = 0;
        FUN_00100190(FUN_02631be4,&DAT_04854f10,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04854f28);
      }
      puVar3 = &DAT_04854f10;
    }
    else {
      puVar3 = &DAT_04854f10;
    }
  }
  return puVar3;
}


