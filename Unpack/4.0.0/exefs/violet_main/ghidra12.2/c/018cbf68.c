/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018cbf68; name: FUN_018cbf68
 */


long FUN_018cbf68(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_04838438 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04838438);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00aa6fdc,&DAT_04838428,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04838438);
    }
  }
  uVar3 = FUN_018cc608(param_1);
  FUN_018cc010(&DAT_04838428,uVar3);
  lVar1 = 0;
  if (DAT_04838428 != 0) {
    lVar1 = DAT_04838428 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_04838428;
}


