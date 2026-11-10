/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018bec20; name: FUN_018bec20
 */


undefined8 FUN_018bec20(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_04857a50 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04857a50);
      puVar3 = &DAT_04857a38;
      if (iVar1 != 0) {
        DAT_04857a38 = 0;
        DAT_04857a40 = 0;
        FUN_00100190(FUN_01853664,&DAT_04857a38,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04857a50);
      }
    }
    else {
      puVar3 = &DAT_04857a38;
    }
  }
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar4 = (undefined *)*puVar2, (undefined *)*puVar2 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d3b00 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d3b00);
      puVar4 = PTR_DAT_047d3b08;
      if (iVar1 != 0) {
        *PTR_DAT_047d3b08 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        FUN_00100190(PTR_LAB_047d44c0,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3b00);
      }
    }
    else {
      puVar4 = PTR_DAT_047d3b08;
    }
  }
  if (((DAT_04857ad0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04857ad0), iVar1 != 0)) {
    DAT_04859210 = 1;
    __cxa_guard_release(&DAT_04857ad0);
  }
  FUN_018bed7c(puVar3,puVar4);
  return 0;
}


