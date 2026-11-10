/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0169bad0; name: FUN_0169bad0
 */


undefined8 FUN_0169bad0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar3, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_04800c88 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04800c88);
      puVar5 = &DAT_04800c70;
      if (iVar1 != 0) {
        DAT_04800c70 = 0;
        DAT_04800c78 = 0;
        FUN_00100190(FUN_01adf878,&DAT_04800c70,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04800c88);
      }
    }
    else {
      puVar5 = &DAT_04800c70;
    }
  }
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar3 == (undefined8 *)0x0) || (puVar6 = (undefined1 *)*puVar3, puVar6 == (undefined1 *)0x0)
     ) {
    if ((DAT_04800ca0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04800ca0);
      puVar6 = &DAT_04800c90;
      if (iVar1 != 0) {
        DAT_04800c90 = 0;
        DAT_04800c98 = 0;
        FUN_00100190(&LAB_008f349c,&DAT_04800c90,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04800ca0);
      }
    }
    else {
      puVar6 = &DAT_04800c90;
    }
  }
  iVar1 = FUN_00cc4dc0(param_1,3);
  if ((DAT_04800cb8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04800cb8);
    if (iVar2 != 0) {
      DAT_04800ca8 = PTR_LAB_047d3a10;
      DAT_04800cb0 = 0;
      __cxa_guard_release(&DAT_04800cb8);
    }
  }
  uVar4 = FUN_0169bc78(&DAT_04800ca8,puVar5,puVar6,iVar1 != 0);
  FUN_00c5d960(param_1,uVar4);
  return 1;
}


