/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bf6190; name: FUN_01bf6190
 */


undefined8 FUN_01bf6190(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04810568 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04810568);
      if (iVar2 != 0) {
        DAT_04810550 = 0;
        DAT_04810558 = 0;
        FUN_00100190(FUN_015da730,&DAT_04810550,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04810568);
      }
      puVar4 = &DAT_04810550;
    }
    else {
      puVar4 = &DAT_04810550;
    }
  }
  if ((DAT_04810548 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04810548);
    if (iVar2 != 0) {
      DAT_048106f8 = '\x01';
      __cxa_guard_release(&DAT_04810548);
    }
  }
  puVar1 = PTR_LAB_047d5950;
  if (DAT_048106f8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_00f6826c(puVar4,puVar1,0);
  return 0;
}


