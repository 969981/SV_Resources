/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02506f10; name: FUN_02506f10
 */


undefined8 FUN_02506f10(undefined8 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  float fVar5;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
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
  if ((DAT_0484de50 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0484de50);
    if (iVar2 != 0) {
      DAT_0484ebe8 = '\x01';
      __cxa_guard_release(&DAT_0484de50);
    }
  }
  puVar1 = &LAB_02b9dff8;
  if (DAT_0484ebe8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  fVar5 = (float)FUN_02507028(puVar4,puVar1,0);
  FUN_00c46da0((double)fVar5,param_1);
  return 1;
}


