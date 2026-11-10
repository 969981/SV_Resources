/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b0c690; name: FUN_01b0c690
 */


undefined1 * FUN_01b0c690(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_04802e68 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04802e68);
      if (iVar1 != 0) {
        DAT_04802e40 = 0;
        DAT_04802e48 = 0;
        FUN_00100190(&LAB_01b0d874,&DAT_04802e40,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04802e68);
      }
      puVar3 = &DAT_04802e40;
    }
    else {
      puVar3 = &DAT_04802e40;
    }
  }
  return puVar3;
}


