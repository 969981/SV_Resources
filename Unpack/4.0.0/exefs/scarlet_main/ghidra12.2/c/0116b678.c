/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0116b678; name: FUN_0116b678
 */


void FUN_0116b678(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  long *local_28;
  
  if ((*PTR_DAT_047d8280 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d8280);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
  }
  lVar3 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar3;
  FUN_0116b758(auStack_40,param_1);
  plVar2 = *(long **)(*(long *)(lVar3 + 0x200) + 0x60);
  (**(code **)(*plVar2 + 0xa8))(plVar2,&DAT_03c3c6f0,local_38,param_2);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


