/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02678b10; name: FUN_02678b10
 */


undefined8 FUN_02678b10(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar2, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04856300 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04856300);
      if (iVar1 != 0) {
        DAT_048562e8 = 0;
        DAT_048562f0 = 0;
        FUN_00100190(FUN_0119e8c0,&DAT_048562e8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04856300);
      }
      puVar4 = &DAT_048562e8;
    }
    else {
      puVar4 = &DAT_048562e8;
    }
  }
  if (((DAT_048563c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048563c0), iVar1 != 0)) {
    DAT_04859038 = 1;
    __cxa_guard_release(&DAT_048563c0);
  }
  uVar3 = FUN_02678c08(puVar4);
  FUN_00c85bd0(param_1,uVar3);
  return 1;
}


