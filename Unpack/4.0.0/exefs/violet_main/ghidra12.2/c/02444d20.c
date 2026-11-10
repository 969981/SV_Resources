/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02444d20; name: FUN_02444d20
 */


undefined1 * FUN_02444d20(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_04848b98 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04848b98);
      if (iVar1 != 0) {
        DAT_04848b70 = 0;
        DAT_04848b78 = 0;
        FUN_00100190(&LAB_0244733c,&DAT_04848b70,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04848b98);
      }
      puVar3 = &DAT_04848b70;
    }
    else {
      puVar3 = &DAT_04848b70;
    }
  }
  return puVar3;
}


