/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024c4188; name: FUN_024c4188
 */


void FUN_024c4188(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *local_28;
  
  if ((*PTR_DAT_047d6c20 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c20);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c20);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d6c28;
  *(undefined8 *)PTR_DAT_047d6c30 = uVar2;
  local_40 = *param_2;
  uStack_38 = param_2[1];
  local_30 = param_2[2];
  local_28 = (long *)param_2[3];
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x18))();
  }
  FUN_00e8b2b8(param_1,uVar2,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


