/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b76974; name: FUN_01b76974
 */


void FUN_01b76974(byte param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  long *local_28;
  byte local_4 [4];
  
  local_4[0] = param_1 & 1;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_40 = &DAT_e4d07a996e5ef5e8;
  puStack_38 = &DAT_03c60f6f;
  local_30 = 4;
  local_28 = (long *)0x0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar2;
  uVar2 = FUN_00f844f4(uVar2,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = (undefined1 *)CONCAT44(local_40._4_4_,0x1e0ee3b7);
  FUN_018837a8(uVar2,&local_40,local_4);
  return;
}


