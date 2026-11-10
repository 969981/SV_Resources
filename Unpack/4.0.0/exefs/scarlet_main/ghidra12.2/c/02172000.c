/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02172000; name: FUN_02172000
 */


void FUN_02172000(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x2b0) == 4) {
    if ((*PTR_DAT_047d8c98 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d8c98);
      if (iVar1 != 0) {
        FUN_00100190(PTR_LAB_047dae08,PTR_DAT_047d8ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c98);
      }
    }
    uVar2 = *(undefined8 *)PTR_DAT_047d8ca0;
    *(undefined8 *)PTR_DAT_047d8ca8 = uVar2;
    FUN_02171cc4(uVar2,param_2);
    return;
  }
  if (*(int *)(param_1 + 0x2b0) == 3) {
    if ((*PTR_DAT_047d8c98 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d8c98);
      if (iVar1 != 0) {
        FUN_00100190(PTR_LAB_047dae08,PTR_DAT_047d8ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c98);
      }
    }
    uVar2 = *(undefined8 *)PTR_DAT_047d8ca0;
    *(undefined8 *)PTR_DAT_047d8ca8 = uVar2;
    FUN_0217190c(uVar2,param_2);
    return;
  }
  if ((*PTR_DAT_047d8c98 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d8c98);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047dae08,PTR_DAT_047d8ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c98);
    }
  }
  *(undefined8 *)PTR_DAT_047d8ca8 = *(undefined8 *)PTR_DAT_047d8ca0;
  FUN_02171884(param_2);
  return;
}


