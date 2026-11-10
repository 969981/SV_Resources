/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c0e740; name: FUN_01c0e740
 */


undefined1 * FUN_01c0e740(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_048112e8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_048112e8);
      if (iVar1 != 0) {
        DAT_048112c0 = 0;
        DAT_048112c8 = 0;
        FUN_00100190(&LAB_01c0f498,&DAT_048112c0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048112e8);
      }
      puVar3 = &DAT_048112c0;
    }
    else {
      puVar3 = &DAT_048112c0;
    }
  }
  return puVar3;
}


