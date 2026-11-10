/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d93840; name: FUN_01d93840
 */


undefined8 FUN_01d93840(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar3, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_04832e90 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04832e90);
      puVar5 = &DAT_04832e78;
      if (iVar2 != 0) {
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
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04832e90 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04832e90);
      if (iVar2 != 0) {
        DAT_04832e78 = 0;
        DAT_04832e80 = 0;
        FUN_00100190(FUN_01847394,&DAT_04832e78,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04832e90);
      }
      puVar4 = &DAT_04832e78;
    }
    else {
      puVar4 = &DAT_04832e78;
    }
  }
  uVar1 = FUN_01d93974(puVar5,puVar4);
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


