/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022fec60; name: FUN_022fec60
 */


undefined8 FUN_022fec60(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar2, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_048452e8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_048452e8);
      if (iVar1 != 0) {
        DAT_048452d0 = 0;
        DAT_048452d8 = 0;
        FUN_00100190(&LAB_023020d8,&DAT_048452d0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048452e8);
      }
      puVar4 = &DAT_048452d0;
    }
    else {
      puVar4 = &DAT_048452d0;
    }
  }
  if (((DAT_048452c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048452c8), iVar1 != 0)) {
    DAT_048452b8 = &LAB_02b83838;
    DAT_048452c0 = 0;
    __cxa_guard_release(&DAT_048452c8,puVar4);
  }
  uVar3 = FUN_022fed64(&DAT_048452b8,puVar4);
  FUN_00c85bd0(param_1,uVar3);
  return 1;
}


