/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d7e5d0; name: FUN_01d7e5d0
 */


undefined8 FUN_01d7e5d0(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar4, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_04831b68 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_04831b68);
      if (iVar3 != 0) {
        DAT_04831b50 = 0;
        DAT_04831b58 = 0;
        FUN_00100190(PTR_FUN_047d8010,&DAT_04831b50,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04831b68);
      }
      puVar5 = &DAT_04831b50;
    }
    else {
      puVar5 = &DAT_04831b50;
    }
  }
  if ((DAT_04831ba8 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04831ba8);
    if (iVar3 != 0) {
      DAT_04832110 = '\x01';
      __cxa_guard_release(&DAT_04831ba8);
    }
  }
  puVar1 = PTR_FUN_047d8040;
  if (DAT_04832110 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_011a1638(puVar5,puVar1,0);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


