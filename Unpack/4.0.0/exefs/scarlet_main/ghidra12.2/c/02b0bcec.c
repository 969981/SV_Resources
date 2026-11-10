/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b0bcec; name: FUN_02b0bcec
 */


void FUN_02b0bcec(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  long *local_28;
  undefined4 local_4;
  
  local_4 = param_1;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_40 = &DAT_e4d07a996e5ef5e8;
  puStack_38 = &DAT_03c60f6f;
  local_30 = 4;
  local_28 = (long *)0x0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar2;
  uVar2 = FUN_00f844f4(uVar2,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = (undefined1 *)CONCAT44(local_40._4_4_,0x58662868);
  FUN_01549fa4(uVar2,&local_40,&local_4);
  return;
}


