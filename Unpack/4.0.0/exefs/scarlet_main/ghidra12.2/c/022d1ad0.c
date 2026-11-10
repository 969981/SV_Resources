/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022d1ad0; name: FUN_022d1ad0
 */


undefined8 FUN_022d1ad0(undefined8 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04844648 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04844648);
      if (iVar2 != 0) {
        DAT_04844630 = 0;
        DAT_04844638 = 0;
        FUN_00100190(FUN_015b4a8c,&DAT_04844630,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04844648);
      }
      puVar4 = &DAT_04844630;
    }
    else {
      puVar4 = &DAT_04844630;
    }
  }
  if ((DAT_04844688 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04844688);
    if (iVar2 != 0) {
      DAT_04845d00 = '\x01';
      __cxa_guard_release(&DAT_04844688);
    }
  }
  puVar1 = &LAB_02b81154;
  if (DAT_04845d00 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_018b9c70(puVar4,puVar1,0);
  return 0;
}


