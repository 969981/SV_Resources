/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017c8cf0; name: FUN_017c8cf0
 */


undefined1 * FUN_017c8cf0(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_04856220 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04856220);
      if (iVar1 != 0) {
        DAT_04856208 = 0;
        DAT_04856210 = 0;
        FUN_00100190(FUN_016c0770,&DAT_04856208,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04856220);
      }
      puVar3 = &DAT_04856208;
    }
    else {
      puVar3 = &DAT_04856208;
    }
  }
  return puVar3;
}


