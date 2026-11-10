/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01179460; name: FUN_01179460
 */


void FUN_01179460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_047d4df8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d4df8);
    if (iVar1 != 0) {
      FUN_00100190(param_1,PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d4e00;
  *(undefined8 *)PTR_DAT_047d4e08 = uVar2;
  FUN_011794fc(param_1,uVar2,param_2,param_3);
  return;
}


