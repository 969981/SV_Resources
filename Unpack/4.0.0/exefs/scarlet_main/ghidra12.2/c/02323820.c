/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02323820; name: FUN_02323820
 */


undefined8 FUN_02323820(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 local_38;
  undefined8 local_18;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (puVar7 = (undefined1 *)*puVar4, puVar7 == (undefined1 *)0x0)
     ) {
    if ((DAT_04846e20 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_04846e20);
      puVar7 = &DAT_04846df8;
      if (iVar3 != 0) {
        DAT_04846df8 = 0;
        DAT_04846e00 = 0;
        FUN_00100190(&LAB_023275a0,&DAT_04846df8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04846e20);
      }
    }
    else {
      puVar7 = &DAT_04846df8;
    }
  }
  uVar5 = FUN_00c92df0(param_1,2,0);
  uVar6 = FUN_00c92df0(param_1,3,0);
  if ((DAT_04846f28 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04846f28);
    if (iVar3 != 0) {
      DAT_04847508 = '\x01';
      __cxa_guard_release(&DAT_04846f28);
    }
  }
  puVar1 = PTR_FUN_047de560;
  if (DAT_04847508 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_38 = uVar6;
  local_18 = uVar5;
  uVar2 = FUN_02323980(puVar7,puVar1,0,&local_18,&local_38);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


