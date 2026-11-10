/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02671b20; name: FUN_02671b20
 */


undefined1 * FUN_02671b20(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_04856100 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04856100);
      if (iVar1 != 0) {
        DAT_048560e8 = 0;
        DAT_048560f0 = 0;
        FUN_00100190(FUN_02672c38,&DAT_048560e8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04856100);
      }
      puVar3 = &DAT_048560e8;
    }
    else {
      puVar3 = &DAT_048560e8;
    }
  }
  return puVar3;
}


