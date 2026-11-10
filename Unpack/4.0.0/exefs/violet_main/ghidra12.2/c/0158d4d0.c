/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0158d4d0; name: FUN_0158d4d0
 */


void FUN_0158d4d0(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_40 [2];
  undefined1 *local_38;
  undefined *puStack_30;
  undefined8 local_28;
  long *local_20;
  undefined4 local_14;
  
  if ((DAT_04840580 & 1) == 0) {
    local_14 = param_1;
    iVar1 = __cxa_guard_acquire(&DAT_04840580);
    param_1 = local_14;
    if (iVar1 != 0) {
      FUN_00100190(&LAB_02ace3a0,&DAT_04840570,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04840580);
      param_1 = local_14;
    }
  }
  DAT_04840568 = DAT_04840570;
  local_14 = param_1;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_38 = &DAT_e4d07a996e5ef5e8;
  puStack_30 = &DAT_03c60f6f;
  local_28 = 4;
  local_20 = (long *)0x0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar2;
  uVar2 = FUN_00f844f4(uVar2,&local_38);
  local_40[0] = 0x4f35d0dd;
  FUN_01576244(uVar2,local_40,&local_14);
  if (local_20 != (long *)0x0) {
    (**(code **)(*local_20 + 0x20))();
  }
  return;
}


