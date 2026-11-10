/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f739f4; name: FUN_00f739f4
 */


void FUN_00f739f4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_047d7430 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d7430);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_02b6f450,PTR_DAT_047d7438,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7430);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d7438;
  *(undefined8 *)PTR_DAT_047d7440 = uVar2;
  FUN_00f73a90(uVar2,param_1,param_2);
  return;
}


