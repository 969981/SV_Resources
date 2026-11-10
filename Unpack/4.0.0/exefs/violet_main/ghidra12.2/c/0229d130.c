/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0229d130; name: FUN_0229d130
 */


undefined1 * FUN_0229d130(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_04842f18 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04842f18);
      if (iVar1 != 0) {
        DAT_04842ef0 = 0;
        DAT_04842ef8 = 0;
        FUN_00100190(&LAB_0229db90,&DAT_04842ef0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04842f18);
      }
      puVar3 = &DAT_04842ef0;
    }
    else {
      puVar3 = &DAT_04842ef0;
    }
  }
  return puVar3;
}


