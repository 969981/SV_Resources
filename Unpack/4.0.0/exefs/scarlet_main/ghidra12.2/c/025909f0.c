/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025909f0; name: FUN_025909f0
 */


undefined8 FUN_025909f0(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 local_28;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar6 = (undefined1 *)*puVar3, puVar6 == (undefined1 *)0x0)
     ) {
    if ((DAT_04850f78 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04850f78);
      puVar6 = &DAT_04850f50;
      if (iVar2 != 0) {
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
  uVar4 = FUN_00c92df0(param_1,2,0);
  if ((DAT_04850fb0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04850fb0);
    if (iVar2 != 0) {
      DAT_04851bb8 = '\x01';
      __cxa_guard_release(&DAT_04850fb0);
    }
  }
  puVar1 = PTR_LAB_047df700;
  if (DAT_04851bb8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_28 = uVar4;
  uVar5 = FUN_02590b40(puVar6,puVar1,0,&local_28);
  if ((uVar5 & 0xff) == 0) {
    FUN_00ca1a30(param_1);
  }
  else {
    FUN_00c5d960(param_1,uVar5 >> 0x10 & 0xffff);
  }
  return 1;
}


