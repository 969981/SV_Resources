/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0143ab70; name: FUN_0143ab70
 */


undefined8 FUN_0143ab70(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 local_24 [4];
  
  puVar5 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar5 == (undefined8 *)0x0) || (puVar6 = (undefined1 *)*puVar5, puVar6 == (undefined1 *)0x0)
     ) {
    if ((DAT_0480c140 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_0480c140);
      puVar6 = &DAT_0480c128;
      if (iVar2 != 0) {
        DAT_0480c128 = 0;
        DAT_0480c130 = 0;
        FUN_00100190(FUN_0128f75c,&DAT_0480c128,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0480c140);
      }
    }
    else {
      puVar6 = &DAT_0480c128;
    }
  }
  iVar2 = FUN_00cc4dc0(param_1,2);
  if ((DAT_0480c178 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(&DAT_0480c178);
    if (iVar4 != 0) {
      DAT_0480c730 = '\x01';
      __cxa_guard_release(&DAT_0480c178);
    }
  }
  local_24[0] = iVar2 != 0;
  puVar1 = PTR_LAB_047d52c8;
  if (DAT_0480c730 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar3 = FUN_0143acb0(puVar6,puVar1,0,local_24);
  FUN_00c419e0(param_1,uVar3 & 1);
  return 1;
}


