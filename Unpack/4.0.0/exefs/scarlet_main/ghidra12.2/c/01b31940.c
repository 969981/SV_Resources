/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b31940; name: FUN_01b31940
 */


undefined8 FUN_01b31940(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined4 local_18;
  undefined4 uStack_14;
  
  puVar5 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar5 == (undefined8 *)0x0) || (puVar6 = (undefined1 *)*puVar5, puVar6 == (undefined1 *)0x0)
     ) {
    if ((DAT_04805c70 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_04805c70);
      puVar6 = &DAT_04805c58;
      if (iVar4 != 0) {
        DAT_04805c58 = 0;
        DAT_04805c60 = 0;
        FUN_00100190(&LAB_01b32538,&DAT_04805c58,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04805c70);
      }
    }
    else {
      puVar6 = &DAT_04805c58;
    }
  }
  uVar2 = FUN_00c92df0(param_1,2,0);
  uVar3 = FUN_00c92df0(param_1,3,0);
  if (((DAT_04805ce8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04805ce8), iVar4 != 0)) {
    DAT_04805e50 = '\x01';
    __cxa_guard_release(&DAT_04805ce8);
  }
  puVar1 = PTR_LAB_047d46c8;
  if (DAT_04805e50 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_18 = uVar3;
  uStack_14 = uVar2;
  FUN_018db5a8(puVar6,puVar1,0,&uStack_14,&local_18);
  return 0;
}


