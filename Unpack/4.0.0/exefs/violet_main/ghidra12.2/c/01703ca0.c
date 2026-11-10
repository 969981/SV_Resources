/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01703ca0; name: FUN_01703ca0
 */


undefined1 * FUN_01703ca0(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_04850be0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04850be0);
      if (iVar1 != 0) {
        DAT_04850bc8 = 0;
        DAT_04850bd0 = 0;
        FUN_00100190(FUN_018d0c3c,&DAT_04850bc8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04850be0);
      }
      puVar3 = &DAT_04850bc8;
    }
    else {
      puVar3 = &DAT_04850bc8;
    }
  }
  return puVar3;
}


