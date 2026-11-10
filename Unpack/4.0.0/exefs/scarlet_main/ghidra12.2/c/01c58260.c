/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c58260; name: FUN_01c58260
 */


undefined8 FUN_01c58260(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined2 local_24 [2];
  
  puVar5 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar5 == (undefined8 *)0x0) || (puVar6 = (undefined1 *)*puVar5, puVar6 == (undefined1 *)0x0)
     ) {
    if ((DAT_04813790 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_04813790);
      puVar6 = &DAT_04813778;
      if (iVar4 != 0) {
        DAT_04813778 = 0;
        DAT_04813780 = 0;
        FUN_00100190(FUN_0193158c,&DAT_04813778,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04813790);
      }
    }
    else {
      puVar6 = &DAT_04813778;
    }
  }
  uVar3 = FUN_00c92df0(param_1,2,0);
  if (((DAT_04813798 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04813798), iVar4 != 0)) {
    DAT_04815a30 = '\x01';
    DAT_04815a38 = 1;
    __cxa_guard_release(&DAT_04813798);
  }
  uVar1 = 0x70;
  if (DAT_04815a30 == '\0') {
    uVar1 = 0;
  }
  local_24[0] = uVar3;
  uVar2 = FUN_01c583a8(puVar6,uVar1,DAT_04815a38,local_24);
  FUN_00c5d960(param_1,uVar2);
  return 1;
}


