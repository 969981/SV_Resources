/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019a4058; name: FUN_019a4058
 */


undefined8 FUN_019a4058(undefined1 param_1 [16],long param_2)

{
  MutexType *pMVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 local_30;
  ulong uStack_28;
  
  if (*(int *)(param_2 + 0x74) == 2) {
    if (((*PTR_DAT_047d8c00 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
    lVar4 = *(long *)PTR_DAT_047d8c08;
    *(long *)PTR_DAT_047d8c10 = lVar4;
    pMVar1 = (MutexType *)(*(long *)(lVar4 + 0x70) + 0x120);
    nn::os::LockMutex(pMVar1);
    auVar5 = NEON_ext(param_1,param_1,8,1);
    uStack_28 = (ulong)auVar5._0_4_;
    local_30 = param_1._0_8_;
    (**(code **)(**(long **)(param_2 + 0xd0) + 0x198))
              (*(long **)(param_2 + 0xd0),*(undefined8 *)(param_2 + 0xd8),&local_30,0);
    nn::os::UnlockMutex(pMVar1);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


