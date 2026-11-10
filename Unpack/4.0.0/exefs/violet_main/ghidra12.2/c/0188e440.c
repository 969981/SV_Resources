/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0188e440; name: FUN_0188e440
 */


undefined8 FUN_0188e440(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar3, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_04844a78 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04844a78);
      puVar5 = &DAT_04844a60;
      if (iVar2 != 0) {
        DAT_04844a60 = 0;
        DAT_04844a68 = 0;
        FUN_00100190(FUN_00def06c,&DAT_04844a60,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04844a78);
      }
    }
    else {
      puVar5 = &DAT_04844a60;
    }
  }
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04844a78 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04844a78);
      if (iVar2 != 0) {
        DAT_04844a60 = 0;
        DAT_04844a68 = 0;
        FUN_00100190(FUN_00def06c,&DAT_04844a60,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04844a78);
      }
      puVar4 = &DAT_04844a60;
    }
    else {
      puVar4 = &DAT_04844a60;
    }
  }
  uVar1 = FUN_0188e578(puVar5,puVar4);
  FUN_00c419e0(param_1,~uVar1 & 1);
  return 1;
}


