/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020a2b74; name: FUN_020a2b74
 */


void FUN_020a2b74(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  MutexType *pMVar1;
  int iVar2;
  long lVar3;
  undefined8 local_50;
  ulong uStack_48;
  undefined8 local_40;
  ulong uStack_38;
  
  if (*(int *)(param_1 + 0x74) == 2) {
    if (((*PTR_DAT_047d8c00 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
    lVar3 = *(long *)PTR_DAT_047d8c08;
    *(long *)PTR_DAT_047d8c10 = lVar3;
    pMVar1 = (MutexType *)(*(long *)(lVar3 + 0x70) + 0x120);
    nn::os::LockMutex(pMVar1);
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x1c8))
              (*(long **)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),&local_40,&local_50);
    nn::os::UnlockMutex(pMVar1);
    param_2[1] = uStack_38 & 0xffffffff;
    *param_2 = local_40;
    uStack_48 = uStack_48 & 0xffffffff;
  }
  else {
    local_50 = 0;
    uStack_48 = 0;
    param_2[1] = 0;
    *param_2 = 0;
  }
  param_3[1] = uStack_48;
  *param_3 = local_50;
  return;
}


