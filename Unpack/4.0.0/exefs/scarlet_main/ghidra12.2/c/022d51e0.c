/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022d51e0; name: FUN_022d51e0
 */


undefined8 FUN_022d51e0(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined4 local_24;
  
  puVar5 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar5 == (undefined8 *)0x0) || (puVar6 = (undefined1 *)*puVar5, puVar6 == (undefined1 *)0x0)
     ) {
    if ((DAT_04844648 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_04844648);
      puVar6 = &DAT_04844630;
      if (iVar4 != 0) {
        DAT_04844630 = 0;
        DAT_04844638 = 0;
        FUN_00100190(FUN_015b4a8c,&DAT_04844630,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04844648);
      }
    }
    else {
      puVar6 = &DAT_04844630;
    }
  }
  uVar2 = FUN_00c92df0(param_1,2,0);
  if ((DAT_04844860 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(&DAT_04844860);
    if (iVar4 != 0) {
      DAT_04845dc8 = '\x01';
      __cxa_guard_release(&DAT_04844860);
    }
  }
  puVar1 = &LAB_02b817a8;
  if (DAT_04845dc8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_24 = uVar2;
  uVar3 = FUN_022d531c(puVar6,puVar1,0,&local_24);
  FUN_00c419e0(param_1,uVar3 & 1);
  return 1;
}


