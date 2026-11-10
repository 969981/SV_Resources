/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0266e92c; name: FUN_0266e92c
 */


void FUN_0266e92c(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_047d8918 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d8918);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8918);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d8920;
  *(undefined8 *)PTR_DAT_047d8928 = uVar2;
  FUN_0221dfb4(uVar2,param_1,param_2);
  return;
}


