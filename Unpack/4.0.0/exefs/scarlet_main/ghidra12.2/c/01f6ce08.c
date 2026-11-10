/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6ce08; name: FUN_01f6ce08
 */


void FUN_01f6ce08(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_40 [6];
  long *local_28;
  undefined8 local_8;
  
  local_8 = param_1;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d4ca0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar2;
  FUN_00d8fb98(local_40,PTR_DAT_047dcc90);
  uVar2 = FUN_00f844f4(uVar2,local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40[0] = 0xcbc197ca;
  FUN_020f0260(uVar2,local_40,&local_8);
  return;
}


