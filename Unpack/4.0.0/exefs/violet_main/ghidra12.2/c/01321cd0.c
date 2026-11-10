/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01321cd0; name: FUN_01321cd0
 */


undefined8 FUN_01321cd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 local_24 [4];
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar4, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_04802d10 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_04802d10);
      puVar5 = &DAT_04802cf8;
      if (iVar3 != 0) {
        DAT_04802cf8 = 0;
        DAT_04802d00 = 0;
        FUN_00100190(PTR_FUN_047d3ed8,&DAT_04802cf8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04802d10);
      }
    }
    else {
      puVar5 = &DAT_04802cf8;
    }
  }
  uVar2 = FUN_00c92df0(param_1,2,0);
  if ((DAT_04802dc8 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04802dc8);
    if (iVar3 != 0) {
      DAT_04803f78 = '\x01';
      DAT_04803f80 = 1;
      __cxa_guard_release(&DAT_04802dc8);
    }
  }
  uVar1 = 0x738;
  if (DAT_04803f78 == '\0') {
    uVar1 = 0;
  }
  local_24[0] = uVar2;
  iVar3 = FUN_01321e18(puVar5,uVar1,DAT_04803f80,local_24);
  FUN_00c5d960(param_1,(long)iVar3);
  return 1;
}


