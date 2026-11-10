/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0267ca50; name: FUN_0267ca50
 */


undefined1 * FUN_0267ca50(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_048565d8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_048565d8);
      if (iVar1 != 0) {
        DAT_048565c0 = 0;
        DAT_048565c8 = 0;
        FUN_00100190(FUN_0267ddf8,&DAT_048565c0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048565d8);
      }
      puVar3 = &DAT_048565c0;
    }
    else {
      puVar3 = &DAT_048565c0;
    }
  }
  return puVar3;
}


