/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022ea590; name: FUN_022ea590
 */


undefined8 FUN_022ea590(undefined8 param_1)

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
    if ((DAT_04844a78 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_04844a78);
      puVar6 = &DAT_04844a60;
      if (iVar4 != 0) {
        DAT_04844a60 = 0;
        DAT_04844a68 = 0;
        FUN_00100190(FUN_00def06c,&DAT_04844a60,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04844a78);
      }
    }
    else {
      puVar6 = &DAT_04844a60;
    }
  }
  uVar2 = FUN_00c92df0(param_1,2,0);
  if ((DAT_04844ba0 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(&DAT_04844ba0);
    if (iVar4 != 0) {
      DAT_04845ee8 = '\x01';
      __cxa_guard_release(&DAT_04844ba0);
    }
  }
  puVar1 = &LAB_022ecee0;
  if (DAT_04845ee8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_24 = uVar2;
  uVar3 = FUN_022e989c(puVar6,puVar1,0,&local_24);
  FUN_00c419e0(param_1,uVar3 & 1);
  return 1;
}


