/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ff0430; name: FUN_00ff0430
 */


undefined1  [16] FUN_00ff0430(long param_1)

{
  MutexType *pMVar1;
  undefined1 auVar2 [16];
  int iVar3;
  long lVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(int *)(param_1 + 0x74) == 2) {
    if (((*PTR_DAT_047d8c00 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
    lVar4 = *(long *)PTR_DAT_047d8c08;
    *(long *)PTR_DAT_047d8c10 = lVar4;
    pMVar1 = (MutexType *)(*(long *)(lVar4 + 0x70) + 0x120);
    nn::os::LockMutex(pMVar1);
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x120))
              (*(long **)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),&local_60);
    uStack_38 = uStack_58;
    local_40 = local_60;
    uStack_28 = uStack_48;
    uStack_30 = uStack_50;
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    FUN_00ff050c(0,&local_40);
  }
  auVar2._8_8_ = uStack_38;
  auVar2._0_8_ = local_40;
  return auVar2;
}


