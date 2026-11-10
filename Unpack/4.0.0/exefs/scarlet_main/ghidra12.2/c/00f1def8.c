/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f1def8; name: FUN_00f1def8
 */


undefined8 FUN_00f1def8(long *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (*(long *)(lVar5 + 0x68) != 0) {
    uVar2 = FUN_00f1dff8(*(long *)(lVar5 + 0x68),*(int *)(lVar5 + 0x50) + (int)param_1[1],
                         param_1 + 2);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (param_2 != 0) {
      if (((*PTR_DAT_047d8280 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar1 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8280);
      }
      lVar4 = *(long *)PTR_DAT_047d8288;
      *(long *)PTR_DAT_047d8290 = lVar4;
      if (*(int *)(param_2 + 0x20) != 0) {
        plVar3 = *(long **)(*(long *)(lVar4 + 0x200) + 0x60);
        (**(code **)(*plVar3 + 0xd8))(plVar3,*(int *)(param_2 + 0x20),0,4);
      }
    }
  }
  nn::os::LockMutex((MutexType *)(lVar5 + 0x100));
  *(int *)(lVar5 + 0x120) = *(int *)(lVar5 + 0x120) + 1;
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x100));
  return 1;
}


