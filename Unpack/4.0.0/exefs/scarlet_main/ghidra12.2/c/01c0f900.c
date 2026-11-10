/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c0f900; name: FUN_01c0f900
 */


undefined1 * FUN_01c0f900(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_04811338 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04811338);
      if (iVar1 != 0) {
        DAT_04811320 = 0;
        DAT_04811328 = 0;
        FUN_00100190(FUN_01c10174,&DAT_04811320,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04811338);
      }
      puVar3 = &DAT_04811320;
    }
    else {
      puVar3 = &DAT_04811320;
    }
  }
  return puVar3;
}


