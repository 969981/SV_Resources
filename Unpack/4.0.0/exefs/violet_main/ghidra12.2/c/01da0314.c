/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01da0314; name: FUN_01da0314
 */


void FUN_01da0314(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  
  if ((*PTR_DAT_047d8a20 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d8a20);
    if (iVar1 != 0) {
      FUN_00100190(param_1,PTR_LAB_047d8eb0,PTR_DAT_047d8a28,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8a20);
    }
  }
  lVar2 = *(long *)PTR_DAT_047d8a28;
  *(long *)PTR_DAT_047d8ea8 = lVar2;
  if (lVar2 == 0) {
    FUN_00ea425c(param_1,0,param_2);
    return;
  }
  FUN_01dbf334();
  return;
}


