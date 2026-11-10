/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0232ea50; name: FUN_0232ea50
 */


undefined8 FUN_0232ea50(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
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
  if ((DAT_04847188 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04847188);
    if (iVar2 != 0) {
      DAT_048475e8 = '\x01';
      __cxa_guard_release(&DAT_04847188);
    }
  }
  puVar1 = PTR_LAB_047de610;
  if (DAT_048475e8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_0232eb50(puVar4,puVar1,0);
  return 0;
}


