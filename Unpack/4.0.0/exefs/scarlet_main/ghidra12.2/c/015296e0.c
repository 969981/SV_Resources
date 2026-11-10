/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015296e0; name: FUN_015296e0
 */


undefined8 FUN_015296e0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_38 [24];
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04805550 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04805550);
      puVar4 = &DAT_04805538;
      if (iVar1 != 0) {
        DAT_04805538 = 0;
        DAT_04805540 = 0;
        FUN_00100190(&LAB_01b225b8,&DAT_04805538,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04805550);
      }
    }
    else {
      puVar4 = &DAT_04805538;
    }
  }
  iVar1 = FUN_00cc4dc0(param_1,2);
  if ((DAT_04805568 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04805568);
    if (iVar2 != 0) {
      DAT_04805558 = 0x70;
      DAT_04805560 = 1;
      __cxa_guard_release(&DAT_04805568);
    }
  }
  FUN_01529814(auStack_38,&DAT_04805558,puVar4,iVar1 != 0);
  FUN_00ca1900(param_1,auStack_38);
  FUN_00cecfd8(auStack_38);
  return 1;
}


