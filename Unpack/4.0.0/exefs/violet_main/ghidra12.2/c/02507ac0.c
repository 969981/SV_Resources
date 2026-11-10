/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02507ac0; name: FUN_02507ac0
 */


undefined8 FUN_02507ac0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char local_58 [8];
  long local_50;
  undefined1 auStack_48 [24];
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar3, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_0484d358 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_0484d358);
      puVar5 = &DAT_0484d330;
      if (iVar2 != 0) {
        DAT_0484d330 = 0;
        DAT_0484d338 = 0;
        FUN_00100190(&LAB_024da088,&DAT_0484d330,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0484d358);
      }
    }
    else {
      puVar5 = &DAT_0484d330;
    }
  }
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_0484d358 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_0484d358);
      if (iVar2 != 0) {
        DAT_0484d330 = 0;
        DAT_0484d338 = 0;
        FUN_00100190(&LAB_024da088,&DAT_0484d330,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0484d358);
      }
      puVar4 = &DAT_0484d330;
    }
    else {
      puVar4 = &DAT_0484d330;
    }
  }
  if (((DAT_0484de88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0484de88), iVar2 != 0)) {
    DAT_0484f238 = 1;
    __cxa_guard_release(&DAT_0484de88,puVar4);
  }
  FUN_02507c6c(local_58,puVar5,puVar4);
  FUN_02507d00(param_1,local_58);
  lVar1 = local_50;
  if (local_58[0] == '\x01') {
    local_50 = 0;
    if (lVar1 != 0) {
      FUN_02507de4(auStack_48);
    }
  }
  return 1;
}


