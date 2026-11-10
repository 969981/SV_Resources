/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ccde40; name: FUN_01ccde40
 */


undefined8 FUN_01ccde40(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [24];
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_048172e8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_048172e8);
      if (iVar1 != 0) {
        DAT_048172d0 = 0;
        DAT_048172d8 = 0;
        FUN_00100190(FUN_01874690,&DAT_048172d0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048172e8);
      }
      puVar3 = &DAT_048172d0;
    }
    else {
      puVar3 = &DAT_048172d0;
    }
  }
  FUN_01ccdf00(auStack_38,puVar3);
  FUN_01cce010(param_1,auStack_38);
  FUN_01cce0e8(auStack_38);
  return 1;
}


