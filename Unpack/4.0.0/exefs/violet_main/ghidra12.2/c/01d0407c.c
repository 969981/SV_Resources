/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d0407c; name: FUN_01d0407c
 */


void FUN_01d0407c(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  
  if ((*PTR_DAT_047da800 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047da800);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047da9d0,PTR_DAT_047da808,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047da800);
    }
  }
  lVar2 = *(long *)PTR_DAT_047da808;
  *(long *)PTR_DAT_047da810 = lVar2;
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_01f709e0(lVar2,param_2);
  return;
}


