/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e7b418; name: FUN_01e7b418
 */


void FUN_01e7b418(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined4 local_4;
  
  if ((*PTR_DAT_047da868 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047da868);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00ae377c,PTR_DAT_047da870,&PTR_LOOP_04483000,param_3);
      __cxa_guard_release(PTR_DAT_047da868);
    }
  }
  lVar2 = *(long *)PTR_DAT_047da870;
  *(long *)PTR_DAT_047da878 = lVar2;
  local_4 = 1;
  FUN_01e7b524(param_1,*(undefined8 *)(lVar2 + 0x28),param_2,&local_4,param_3);
  FUN_015d209c(*param_1);
  return;
}


