/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0248acf0; name: FUN_0248acf0
 */


undefined8 FUN_0248acf0(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  double dVar5;
  float local_24;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_0484ab78 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_0484ab78);
      puVar4 = &DAT_0484ab60;
      if (iVar2 != 0) {
        DAT_0484ab60 = 0;
        DAT_0484ab68 = 0;
        FUN_00100190(FUN_0175678c,&DAT_0484ab60,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0484ab78);
      }
    }
    else {
      puVar4 = &DAT_0484ab60;
    }
  }
  dVar5 = (double)FUN_00c41790(param_1,2,0);
  if ((DAT_0484ab80 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0484ab80);
    if (iVar2 != 0) {
      DAT_0484bf20 = '\x01';
      __cxa_guard_release(&DAT_0484ab80);
    }
  }
  local_24 = (float)dVar5;
  puVar1 = PTR_LAB_047debf0;
  if (DAT_0484bf20 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_0248ae14(puVar4,puVar1,0,&local_24);
  return 0;
}


