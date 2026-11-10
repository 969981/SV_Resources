/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bfc2d0; name: FUN_01bfc2d0
 */


undefined1 * FUN_01bfc2d0(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_048108a8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_048108a8);
      if (iVar1 != 0) {
        DAT_04810880 = 0;
        DAT_04810888 = 0;
        FUN_00100190(&LAB_01bfc728,&DAT_04810880,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048108a8);
      }
      puVar3 = &DAT_04810880;
    }
    else {
      puVar3 = &DAT_04810880;
    }
  }
  return puVar3;
}


