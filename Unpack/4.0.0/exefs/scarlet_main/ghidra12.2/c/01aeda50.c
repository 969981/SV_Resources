/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01aeda50; name: FUN_01aeda50
 */


undefined8 FUN_01aeda50(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined *puVar4;
  undefined1 *puVar5;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar2, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_04800ca0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04800ca0);
      puVar5 = &DAT_04800c90;
      if (iVar1 != 0) {
        DAT_04800c90 = 0;
        DAT_04800c98 = 0;
        FUN_00100190(&LAB_008f349c,&DAT_04800c90,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04800ca0);
      }
    }
    else {
      puVar5 = &DAT_04800c90;
    }
  }
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar4 = (undefined *)*puVar2, (undefined *)*puVar2 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d3ac0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d3ac0);
      puVar4 = PTR_DAT_047d3ac8;
      if (iVar1 != 0) {
        *PTR_DAT_047d3ac8 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        FUN_00100190(FUN_00e92448,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3ac0);
      }
    }
    else {
      puVar4 = PTR_DAT_047d3ac8;
    }
  }
  if (((DAT_048013a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048013a0), iVar1 != 0)) {
    DAT_04801390 = PTR_LAB_047d3b30;
    DAT_04801398 = 0;
    __cxa_guard_release(&DAT_048013a0,extraout_x1,puVar4);
  }
  uVar3 = FUN_01aedbdc(&DAT_04801390,puVar5,puVar4);
  FUN_00c5d960(param_1,uVar3);
  return 1;
}


