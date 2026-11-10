/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d33124; name: FUN_01d33124
 */


void FUN_01d33124(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_047d78d8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d78d8);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d78f0,PTR_DAT_047d78e0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d78d8);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d78e0;
  *(undefined8 *)PTR_DAT_047d78e8 = uVar2;
  FUN_01480380(uVar2,param_1,0x91878d2e67dac9bc);
  return;
}


