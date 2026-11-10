/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019a2000; name: FUN_019a2000
 */


undefined8 FUN_019a2000(undefined8 param_1)

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
    if ((DAT_04846b08 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04846b08);
      puVar5 = &DAT_04846ae0;
      if (iVar1 != 0) {
        DAT_04846ae0 = 0;
        DAT_04846ae8 = 0;
        FUN_00100190(&LAB_0231c138,&DAT_04846ae0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04846b08);
      }
    }
    else {
      puVar5 = &DAT_04846ae0;
    }
  }
  uVar4 = FUN_00c646d0(param_1,2,0);
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,3);
  if ((puVar3 == (undefined8 *)0x0) || (puVar6 = (undefined1 *)*puVar3, puVar6 == (undefined1 *)0x0)
     ) {
    if ((DAT_04846b58 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04846b58);
      puVar6 = &DAT_04846b30;
      if (iVar1 != 0) {
        DAT_04846b30 = 0;
        DAT_04846b38 = 0;
        FUN_00100190(&LAB_0231c8c4,&DAT_04846b30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04846b58);
      }
    }
    else {
      puVar6 = &DAT_04846b30;
    }
  }
  iVar1 = FUN_00cc4dc0(param_1,4);
  if (((DAT_04846b28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04846b28), iVar2 != 0)) {
    DAT_04846b18 = PTR_FUN_047de4d8;
    DAT_04846b20 = 0;
    __cxa_guard_release(&DAT_04846b28);
  }
  FUN_019a21a4(&DAT_04846b18,puVar5,uVar4,puVar6,iVar1 != 0);
  return 0;
}


