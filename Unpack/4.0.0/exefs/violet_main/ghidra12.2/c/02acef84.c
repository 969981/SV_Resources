/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02acef84; name: FUN_02acef84
 */


void FUN_02acef84(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *local_30;
  undefined *puStack_28;
  undefined8 local_20;
  long *local_18;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_30 = &DAT_e4d07a996e5ef5e8;
  puStack_28 = &DAT_03c60f6f;
  local_20 = 4;
  local_18 = (long *)0x0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar2;
  FUN_00f844f4(uVar2,&local_30);
  FUN_02b6a318();
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


