/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022012a4; name: FUN_022012a4
 */


undefined1  [16] FUN_022012a4(long param_1)

{
  MutexType *pMVar1;
  undefined1 auVar2 [16];
  int iVar3;
  long lVar4;
  ulong uVar6;
  undefined1 auVar5 [16];
  undefined1 auVar7 [16];
  undefined8 local_30;
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
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x1d8))
              (*(long **)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),&local_30);
    auVar2._8_8_ = uStack_28;
    auVar2._0_8_ = local_30;
    auVar7._8_8_ = uStack_28;
    auVar7._0_8_ = local_30;
    auVar7 = NEON_ext(auVar7,auVar2,8,1);
    uVar6 = (ulong)auVar7._0_4_;
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    local_30 = 0;
    uVar6 = 0;
  }
  auVar5._8_8_ = uVar6;
  auVar5._0_8_ = local_30;
  return auVar5;
}


