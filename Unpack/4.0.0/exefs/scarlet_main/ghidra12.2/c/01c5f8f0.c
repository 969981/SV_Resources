/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c5f8f0; name: FUN_01c5f8f0
 */


undefined8 FUN_01c5f8f0(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar3, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_04813ab8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04813ab8);
      puVar5 = &DAT_04813aa0;
      if (iVar2 != 0) {
        DAT_04813aa0 = 0;
        DAT_04813aa8 = 0;
        FUN_00100190(FUN_01c5bc78,&DAT_04813aa0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04813ab8);
      }
    }
    else {
      puVar5 = &DAT_04813aa0;
    }
  }
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04813ab8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04813ab8);
      if (iVar2 != 0) {
        DAT_04813aa0 = 0;
        DAT_04813aa8 = 0;
        FUN_00100190(FUN_01c5bc78,&DAT_04813aa0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04813ab8);
      }
      puVar4 = &DAT_04813aa0;
    }
    else {
      puVar4 = &DAT_04813aa0;
    }
  }
  uVar1 = FUN_013eaa60(puVar5,puVar4);
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


