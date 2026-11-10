/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0190bf90; name: FUN_0190bf90
 */


undefined8 FUN_0190bf90(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined4 local_24;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar4, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_04832e90 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_04832e90);
      puVar5 = &DAT_04832e78;
      if (iVar3 != 0) {
        DAT_04832e78 = 0;
        DAT_04832e80 = 0;
        FUN_00100190(FUN_01847394,&DAT_04832e78,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04832e90);
      }
    }
    else {
      puVar5 = &DAT_04832e78;
    }
  }
  uVar2 = FUN_00c92df0(param_1,2,0);
  if (((DAT_04832f08 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04832f08), iVar3 != 0)) {
    DAT_048336e8 = '\x01';
    __cxa_guard_release(&DAT_04832f08);
  }
  puVar1 = PTR_LAB_047d8380;
  if (DAT_048336e8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_24 = uVar2;
  FUN_0190c0b0(puVar5,puVar1,0,&local_24);
  return 0;
}


