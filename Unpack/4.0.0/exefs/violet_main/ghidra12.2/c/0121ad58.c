/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0121ad58; name: FUN_0121ad58
 */


long FUN_0121ad58(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_048384a8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_048384a8);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00aa89a4,&DAT_04838498,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_048384a8);
    }
  }
  uVar3 = FUN_0121aeb0(param_1);
  FUN_0121ae00(&DAT_04838498,uVar3);
  lVar1 = 0;
  if (DAT_04838498 != 0) {
    lVar1 = DAT_04838498 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_04838498;
}


