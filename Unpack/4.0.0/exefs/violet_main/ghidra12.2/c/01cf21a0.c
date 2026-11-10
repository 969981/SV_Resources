/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cf21a0; name: FUN_01cf21a0
 */


undefined1 * FUN_01cf21a0(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_0481bb10 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0481bb10);
      if (iVar1 != 0) {
        DAT_0481bae8 = 0;
        DAT_0481baf0 = 0;
        FUN_00100190(&LAB_01cf37e8,&DAT_0481bae8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0481bb10);
      }
      puVar3 = &DAT_0481bae8;
    }
    else {
      puVar3 = &DAT_0481bae8;
    }
  }
  return puVar3;
}


