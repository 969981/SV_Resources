/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c7ac70; name: FUN_01c7ac70
 */


undefined1 * FUN_01c7ac70(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_04814f00 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04814f00);
      if (iVar1 != 0) {
        DAT_04814ed8 = 0;
        DAT_04814ee0 = 0;
        FUN_00100190(&LAB_01c7b7c8,&DAT_04814ed8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04814f00);
      }
      puVar3 = &DAT_04814ed8;
    }
    else {
      puVar3 = &DAT_04814ed8;
    }
  }
  return puVar3;
}


