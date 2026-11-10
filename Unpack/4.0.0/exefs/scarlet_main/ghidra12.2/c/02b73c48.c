/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b73c48; name: FUN_02b73c48
 */


undefined8 FUN_02b73c48(long param_1,undefined2 param_2)

{
  MutexType *pMVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 0x74) == 2) {
    if (((*PTR_DAT_047d8c00 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
    lVar4 = *(long *)PTR_DAT_047d8c08;
    *(long *)PTR_DAT_047d8c10 = lVar4;
    pMVar1 = (MutexType *)(*(long *)(lVar4 + 0x70) + 0x120);
    nn::os::LockMutex(pMVar1);
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x1f0))
              (*(long **)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),param_2);
    nn::os::UnlockMutex(pMVar1);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


