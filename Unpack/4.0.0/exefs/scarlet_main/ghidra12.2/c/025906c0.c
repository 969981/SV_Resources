/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025906c0; name: FUN_025906c0
 */


undefined8 FUN_025906c0(undefined8 param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 local_28;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (puVar6 = (undefined1 *)*puVar4, puVar6 == (undefined1 *)0x0)
     ) {
    if ((DAT_04850f78 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_04850f78);
      puVar6 = &DAT_04850f50;
      if (iVar3 != 0) {
        DAT_04850f50 = 0;
        DAT_04850f58 = 0;
        FUN_00100190(&LAB_011d261c,&DAT_04850f50,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04850f78);
      }
    }
    else {
      puVar6 = &DAT_04850f50;
    }
  }
  uVar5 = FUN_00c92df0(param_1,2,0);
  if ((DAT_04850fa0 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04850fa0);
    if (iVar3 != 0) {
      DAT_04851ba8 = '\x01';
      __cxa_guard_release(&DAT_04850fa0);
    }
  }
  puVar1 = PTR_LAB_047df6f0;
  if (DAT_04851ba8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_28 = uVar5;
  cVar2 = FUN_0259080c(puVar6,puVar1,0,&local_28);
  if (cVar2 == '\0') {
    FUN_00ca1a30(param_1);
  }
  else {
    FUN_00c5d960(param_1);
  }
  return 1;
}


