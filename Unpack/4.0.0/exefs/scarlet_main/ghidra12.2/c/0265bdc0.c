/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0265bdc0; name: FUN_0265bdc0
 */


undefined1 * FUN_0265bdc0(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_04855448 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04855448);
      if (iVar1 != 0) {
        DAT_04855430 = 0;
        DAT_04855438 = 0;
        FUN_00100190(FUN_0265cb18,&DAT_04855430,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04855448);
      }
      puVar3 = &DAT_04855430;
    }
    else {
      puVar3 = &DAT_04855430;
    }
  }
  return puVar3;
}


