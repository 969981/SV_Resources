/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03345f54; name: FUN_03345f54
 */


void FUN_03345f54(undefined8 *param_1,long param_2)

{
  MutexType *pMVar1;
  long *plVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = &DAT_047acac0;
  param_1[2] = param_2;
  param_1[3] = (MutexType *)(param_2 + 0x18);
  nn::os::LockMutex((MutexType *)(param_2 + 0x18));
  pMVar1 = (MutexType *)(param_2 + 0x38);
  nn::os::LockMutex(pMVar1);
  if (*(int *)(param_2 + 0x80) == *(int *)(param_2 + 0x84)) {
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    *(undefined1 *)(param_2 + 0x88) = 1;
    nn::os::UnlockMutex(pMVar1);
    nn::os::AcquireSemaphore((SemaphoreType *)(param_2 + 0x58));
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  *param_1 = &PTR_FUN_047acb10;
  pMVar1 = (MutexType *)(param_2 + 0x188);
  nn::os::LockMutex(pMVar1);
  if (*(int *)(param_2 + 0x1b0) != 0) {
    lVar3 = (long)*(int *)(param_2 + 0x1b0) << 4;
    plVar2 = *(long **)(param_2 + 0x1a8);
    do {
      if (*plVar2 != 0) {
        nn::os::UnlockMutex(pMVar1);
                    /* WARNING: Subroutine does not return */
        FUN_032270d0(0x8f7923a4,
                     "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkReflectPatchRegistry.cpp"
                     ,0x329,
                     "Patches are being unloaded while a loader is still active. All loaders must be destroyed before unloading patches"
                    );
      }
      lVar3 = lVar3 + -0x10;
      plVar2 = plVar2 + 2;
    } while (lVar3 != 0);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


