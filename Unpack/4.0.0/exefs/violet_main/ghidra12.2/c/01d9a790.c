/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d9a790; name: FUN_01d9a790
 */


undefined2 FUN_01d9a790(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((*PTR_DAT_047d84a8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_047d84a8);
    if (iVar2 != 0) {
      FUN_00100190(PTR_LAB_047d84c0,PTR_DAT_047d84b0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d84a8);
    }
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d84b0;
  *(undefined8 *)PTR_DAT_047d84b8 = uVar3;
  uVar1 = FUN_01dbdc80(uVar3,param_1);
  return uVar1;
}


