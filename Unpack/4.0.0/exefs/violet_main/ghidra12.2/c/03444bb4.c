/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03444bb4; name: FUN_03444bb4
 */


void FUN_03444bb4(long *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  
  puVar3 = PTR_DAT_047e2fd0;
  if (*(code **)PTR_DAT_047e2fd0 != (code *)0x0) {
    (**(code **)PTR_DAT_047e2fd0)();
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  pMVar1 = (MutexType *)(param_1 + 0x3d);
  do {
    nn::os::LockMutex(pMVar1);
    while( true ) {
      if ((*(uint *)((long)param_1 + 0x21c) < *(uint *)(param_1 + 1)) &&
         (((int)param_1[0x42] != 0 ||
          ((*(int *)((long)param_1 + 0x214) != 0 && ((char)param_1[0x43] == '\0')))))) {
        lVar2 = param_1[0x4d];
        nn::os::UnlockMutex(pMVar1);
        if ((char)lVar2 == '\0') goto LAB_03444c64;
        goto LAB_03444c80;
      }
      if ((char)param_1[0x4d] == '\0') break;
      nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 0x41),pMVar1);
    }
    nn::os::UnlockMutex(pMVar1);
LAB_03444c64:
    uVar4 = (**(code **)(*param_1 + 0x18))(param_1);
    if ((uVar4 & 1) != 0) {
      if (*(code **)(puVar3 + 8) == (code *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x03444cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar3 + 8))();
      return;
    }
    nn::os::SleepThread(100000000);
LAB_03444c80:
    (**(code **)(*param_1 + 0x10))(param_1);
  } while( true );
}


