/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d71480; name: FUN_01d71480
 */


undefined1 * FUN_01d71480(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_04831570 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04831570);
      if (iVar1 != 0) {
        DAT_04831558 = 0;
        DAT_04831560 = 0;
        FUN_00100190(FUN_01d7304c,&DAT_04831558,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04831570);
      }
      puVar3 = &DAT_04831558;
    }
    else {
      puVar3 = &DAT_04831558;
    }
  }
  return puVar3;
}


