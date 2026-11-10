/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01664550; name: FUN_01664550
 */


undefined8 FUN_01664550(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar3, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_04847180 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04847180);
      puVar5 = &DAT_04847168;
      if (iVar2 != 0) {
        DAT_04847168 = 0;
        DAT_04847170 = 0;
        FUN_00100190(&LAB_0232ee14,&DAT_04847168,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04847180);
      }
    }
    else {
      puVar5 = &DAT_04847168;
    }
  }
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04847180 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04847180);
      if (iVar2 != 0) {
        DAT_04847168 = 0;
        DAT_04847170 = 0;
        FUN_00100190(&LAB_0232ee14,&DAT_04847168,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04847180);
      }
      puVar4 = &DAT_04847168;
    }
    else {
      puVar4 = &DAT_04847168;
    }
  }
  uVar1 = FUN_01664688(puVar5,puVar4);
  FUN_00c419e0(param_1,~uVar1 & 1);
  return 1;
}


