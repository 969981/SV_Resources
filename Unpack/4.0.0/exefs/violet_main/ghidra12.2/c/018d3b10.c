/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018d3b10; name: FUN_018d3b10
 */


undefined1 * FUN_018d3b10(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_04818ba0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04818ba0);
      if (iVar1 != 0) {
        DAT_04818b88 = 0;
        DAT_04818b90 = 0;
        FUN_00100190(FUN_01870300,&DAT_04818b88,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04818ba0);
      }
      puVar3 = &DAT_04818b88;
    }
    else {
      puVar3 = &DAT_04818b88;
    }
  }
  return puVar3;
}


