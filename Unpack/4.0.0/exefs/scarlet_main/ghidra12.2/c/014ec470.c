/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014ec470; name: FUN_014ec470
 */


undefined8 FUN_014ec470(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar2, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04846b08 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04846b08);
      puVar4 = &DAT_04846ae0;
      if (iVar1 != 0) {
        DAT_04846ae0 = 0;
        DAT_04846ae8 = 0;
        FUN_00100190(&LAB_0231c138,&DAT_04846ae0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04846b08);
      }
    }
    else {
      puVar4 = &DAT_04846ae0;
    }
  }
  uVar3 = FUN_00c646d0(param_1,2,0);
  if (((DAT_04846b70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04846b70), iVar1 != 0)) {
    DAT_04846b60 = &LAB_0159bae8;
    DAT_04846b68 = 0;
    __cxa_guard_release(&DAT_04846b70);
  }
  FUN_014ec574(&DAT_04846b60,puVar4,uVar3);
  return 0;
}


