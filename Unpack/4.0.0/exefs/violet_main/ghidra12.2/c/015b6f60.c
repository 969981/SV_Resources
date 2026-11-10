/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015b6f60; name: FUN_015b6f60
 */


undefined8 FUN_015b6f60(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar3, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_04801790 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04801790);
      puVar5 = &DAT_04801768;
      if (iVar2 != 0) {
        DAT_04801768 = 0;
        DAT_04801770 = 0;
        FUN_00100190(&LAB_01a975ec,&DAT_04801768,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04801790);
      }
    }
    else {
      puVar5 = &DAT_04801768;
    }
  }
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04801790 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04801790);
      if (iVar2 != 0) {
        DAT_04801768 = 0;
        DAT_04801770 = 0;
        FUN_00100190(&LAB_01a975ec,&DAT_04801768,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04801790);
      }
      puVar4 = &DAT_04801768;
    }
    else {
      puVar4 = &DAT_04801768;
    }
  }
  uVar1 = FUN_015b7090(puVar5,puVar4);
  FUN_00c419e0(param_1,~uVar1 & 1);
  return 1;
}


