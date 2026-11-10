/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c5e7a0; name: FUN_01c5e7a0
 */


undefined8 FUN_01c5e7a0(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar4, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_04813ab8 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_04813ab8);
      if (iVar3 != 0) {
        DAT_04813aa0 = 0;
        DAT_04813aa8 = 0;
        FUN_00100190(FUN_01c5bc78,&DAT_04813aa0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04813ab8);
      }
      puVar5 = &DAT_04813aa0;
    }
    else {
      puVar5 = &DAT_04813aa0;
    }
  }
  if (((DAT_04813a98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04813a98), iVar3 != 0)) {
    DAT_04815a70 = '\x01';
    DAT_04815a78 = 1;
    __cxa_guard_release(&DAT_04813a98);
  }
  uVar1 = 0x68;
  if (DAT_04815a70 == '\0') {
    uVar1 = 0;
  }
  uVar2 = FUN_01c5e8c4(puVar5,uVar1,DAT_04815a78);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


