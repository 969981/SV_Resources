/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01268a50; name: FUN_01268a50
 */


undefined8 FUN_01268a50(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04831b68 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04831b68);
      if (iVar2 != 0) {
        DAT_04831b50 = 0;
        DAT_04831b58 = 0;
        FUN_00100190(PTR_FUN_047d8010,&DAT_04831b50,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04831b68);
      }
      puVar4 = &DAT_04831b50;
    }
    else {
      puVar4 = &DAT_04831b50;
    }
  }
  if ((DAT_04831b70 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04831b70);
    if (iVar2 != 0) {
      DAT_048320e0 = '\x01';
      __cxa_guard_release(&DAT_04831b70);
    }
  }
  puVar1 = PTR_FUN_047d8018;
  if (DAT_048320e0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01268b50(puVar4,puVar1,0);
  return 0;
}


