/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0196e1c0; name: FUN_0196e1c0
 */


undefined1 * FUN_0196e1c0(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_04801800 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04801800);
      if (iVar1 != 0) {
        DAT_048017e8 = 0;
        DAT_048017f0 = 0;
        FUN_00100190(FUN_019e9b98,&DAT_048017e8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04801800);
      }
      puVar3 = &DAT_048017e8;
    }
    else {
      puVar3 = &DAT_048017e8;
    }
  }
  return puVar3;
}


