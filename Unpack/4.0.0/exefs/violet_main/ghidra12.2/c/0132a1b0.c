/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0132a1b0; name: FUN_0132a1b0
 */


undefined8 FUN_0132a1b0(undefined8 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_0484c8f0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_0484c8f0);
      if (iVar2 != 0) {
        DAT_0484c8d8 = 0;
        DAT_0484c8e0 = 0;
        FUN_00100190(FUN_01084180,&DAT_0484c8d8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0484c8f0);
      }
      puVar4 = &DAT_0484c8d8;
    }
    else {
      puVar4 = &DAT_0484c8d8;
    }
  }
  if ((DAT_0484c930 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0484c930);
    if (iVar2 != 0) {
      DAT_0484ca88 = '\x01';
      __cxa_guard_release(&DAT_0484c930);
    }
  }
  puVar1 = &LAB_024c162c;
  if (DAT_0484ca88 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_0132a2b0(puVar4,puVar1,0);
  return 0;
}


