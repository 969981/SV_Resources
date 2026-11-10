/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0180b500; name: FUN_0180b500
 */


undefined8 FUN_0180b500(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar3, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_048577d8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_048577d8);
      puVar5 = &DAT_048577c0;
      if (iVar2 != 0) {
        DAT_048577c0 = 0;
        DAT_048577c8 = 0;
        FUN_00100190(FUN_0190562c,&DAT_048577c0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048577d8);
      }
    }
    else {
      puVar5 = &DAT_048577c0;
    }
  }
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_048577d8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_048577d8);
      if (iVar2 != 0) {
        DAT_048577c0 = 0;
        DAT_048577c8 = 0;
        FUN_00100190(FUN_0190562c,&DAT_048577c0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048577d8);
      }
      puVar4 = &DAT_048577c0;
    }
    else {
      puVar4 = &DAT_048577c0;
    }
  }
  uVar1 = FUN_0180b634(puVar5,puVar4);
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


