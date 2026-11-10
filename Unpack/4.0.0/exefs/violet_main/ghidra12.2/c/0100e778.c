/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0100e778; name: FUN_0100e778
 */


void FUN_0100e778(long param_1,undefined4 param_2)

{
  MutexType *pMVar1;
  int iVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  if (*(int *)(param_1 + 0x74) != 2) {
    return;
  }
  if (((*PTR_DAT_047d8c00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar3 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar3;
  pMVar1 = (MutexType *)(*(long *)(lVar3 + 0x70) + 0x120);
  nn::os::LockMutex(pMVar1);
  (**(code **)(**(long **)(param_1 + 0xd0) + 0x228))
            (*(long **)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),
             *(undefined4 *)(param_1 + 0xa0),0,0);
  nn::os::UnlockMutex(pMVar1);
  return;
}


