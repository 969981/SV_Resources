/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024d2bf0; name: FUN_024d2bf0
 */


undefined1 * FUN_024d2bf0(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_0484d0a8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0484d0a8);
      if (iVar1 != 0) {
        DAT_0484d080 = 0;
        DAT_0484d088 = 0;
        FUN_00100190(&LAB_024d9aa8,&DAT_0484d080,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0484d0a8);
      }
      puVar3 = &DAT_0484d080;
    }
    else {
      puVar3 = &DAT_0484d080;
    }
  }
  return puVar3;
}


