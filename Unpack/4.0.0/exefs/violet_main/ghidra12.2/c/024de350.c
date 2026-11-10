/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024de350; name: FUN_024de350
 */


undefined8 FUN_024de350(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined1 *puVar4;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar2, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_0484cc70 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0484cc70);
      puVar4 = &DAT_0484cc48;
      if (iVar1 != 0) {
        DAT_0484cc48 = 0;
        DAT_0484cc50 = 0;
        FUN_00100190(&LAB_024c8ee8,&DAT_0484cc48,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0484cc70);
      }
    }
    else {
      puVar4 = &DAT_0484cc48;
    }
  }
  uVar3 = FUN_024c6ea0(param_1,2);
  if ((DAT_0484d458 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0484d458);
    if (iVar1 != 0) {
      DAT_0484d448 = PTR_LAB_047deff0;
      DAT_0484d450 = 0;
      __cxa_guard_release(&DAT_0484d458,extraout_x1,uVar3);
    }
  }
  FUN_024de468(&DAT_0484d448,puVar4,uVar3);
  FUN_00c46da0(param_1);
  return 1;
}


