/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024dbed0; name: FUN_024dbed0
 */


undefined8 FUN_024dbed0(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auVar2 [12];
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar4, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_0484cc70 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_0484cc70);
      if (iVar3 != 0) {
        DAT_0484cc48 = 0;
        DAT_0484cc50 = 0;
        FUN_00100190(&LAB_024c8ee8,&DAT_0484cc48,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0484cc70);
      }
      puVar5 = &DAT_0484cc48;
    }
    else {
      puVar5 = &DAT_0484cc48;
    }
  }
  if ((DAT_0484d2e0 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_0484d2e0);
    if (iVar3 != 0) {
      DAT_0484e938 = '\x01';
      __cxa_guard_release(&DAT_0484d2e0);
    }
  }
  puVar1 = &LAB_02b9b8e8;
  if (DAT_0484e938 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  auVar2 = FUN_024dbce4(puVar5,puVar1,0);
  FUN_00c46da0((double)auVar2._0_4_,param_1);
  FUN_00c46da0((double)auVar2._4_4_,param_1);
  FUN_00c46da0((double)auVar2._8_4_,param_1);
  return 3;
}


