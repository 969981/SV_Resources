/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02668720; name: FUN_02668720
 */


undefined8 FUN_02668720(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar4, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_04855bd8 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_04855bd8);
      if (iVar3 != 0) {
        DAT_04855bc0 = 0;
        DAT_04855bc8 = 0;
        FUN_00100190(FUN_0158dc80,&DAT_04855bc0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04855bd8);
      }
      puVar5 = &DAT_04855bc0;
    }
    else {
      puVar5 = &DAT_04855bc0;
    }
  }
  if ((DAT_04855bf0 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04855bf0);
    if (iVar3 != 0) {
      DAT_04855d10 = '\x01';
      __cxa_guard_release(&DAT_04855bf0);
    }
  }
  puVar1 = PTR_LAB_047e05d0;
  if (DAT_04855d10 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_01415808(puVar5,puVar1,0);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


