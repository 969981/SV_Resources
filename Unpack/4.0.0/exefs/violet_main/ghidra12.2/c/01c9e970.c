/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c9e970; name: FUN_01c9e970
 */


undefined8 FUN_01c9e970(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar4, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_04817228 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_04817228);
      if (iVar3 != 0) {
        DAT_04817210 = 0;
        DAT_04817218 = 0;
        FUN_00100190(FUN_018b303c,&DAT_04817210,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04817228);
      }
      puVar5 = &DAT_04817210;
    }
    else {
      puVar5 = &DAT_04817210;
    }
  }
  if ((DAT_04817240 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04817240);
    if (iVar3 != 0) {
      DAT_0481b4c8 = '\x01';
      DAT_0481b4d0 = 1;
      __cxa_guard_release(&DAT_04817240);
    }
  }
  uVar1 = 0x98;
  if (DAT_0481b4c8 == '\0') {
    uVar1 = 0;
  }
  uVar2 = FUN_014f2ae4(puVar5,uVar1,DAT_0481b4d0);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


