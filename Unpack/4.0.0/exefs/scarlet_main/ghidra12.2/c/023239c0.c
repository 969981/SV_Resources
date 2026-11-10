/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023239c0; name: FUN_023239c0
 */


undefined8 FUN_023239c0(undefined8 param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 local_28;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (puVar6 = (undefined1 *)*puVar4, puVar6 == (undefined1 *)0x0)
     ) {
    if ((DAT_04846e20 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_04846e20);
      puVar6 = &DAT_04846df8;
      if (iVar3 != 0) {
        DAT_04846df8 = 0;
        DAT_04846e00 = 0;
        FUN_00100190(&LAB_023275a0,&DAT_04846df8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04846e20);
      }
    }
    else {
      puVar6 = &DAT_04846df8;
    }
  }
  uVar5 = FUN_00c92df0(param_1,2,0);
  if ((DAT_04846f30 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04846f30);
    if (iVar3 != 0) {
      DAT_04847510 = '\x01';
      __cxa_guard_release(&DAT_04846f30);
    }
  }
  pcVar1 = FUN_02327e6c;
  if (DAT_04847510 == '\0') {
    pcVar1 = (code *)0x0;
  }
  local_28 = uVar5;
  uVar2 = FUN_0232337c(puVar6,pcVar1,0,&local_28);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


