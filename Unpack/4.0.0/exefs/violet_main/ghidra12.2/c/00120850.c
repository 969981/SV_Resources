/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00120850; name: FUN_00120850
 */


undefined8 FUN_00120850(MutexType *param_1,ulong param_2,undefined8 param_3,uint param_4)

{
  MutexType *pMVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong local_58;
  
  uVar4 = 0;
  pMVar1 = param_1 + 0x28;
  local_58 = param_2;
  do {
    nn::os::YieldThread();
    if (99 < uVar4) {
      nn::os::YieldThread();
    }
    if (local_58 == 0) {
      iVar3 = FUN_001201e0(pMVar1,&local_58,param_3);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x30) = 1;
        return 1;
      }
    }
    else {
      local_58 = FUN_001201d0(pMVar1);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x66);
  nn::os::LockMutex(param_1);
  lVar5 = 0;
  bVar2 = false;
  do {
    do {
      while (local_58 == 0) {
        iVar3 = FUN_001201e0(pMVar1,&local_58,param_3);
        if (iVar3 != 0) {
          *(undefined4 *)(param_1 + 0x30) = 1;
          nn::os::UnlockMutex(param_1);
          return 1;
        }
      }
      iVar3 = FUN_001201e0(pMVar1,&local_58,local_58 | 0x8000000000000000);
    } while (iVar3 == 0);
    if (param_4 == 0xffffffff) {
      nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 0x20),param_1);
    }
    else {
      if (bVar2) {
      }
      else {
        bVar2 = true;
        lVar5 = (ulong)param_4 * 1000000;
      }
      iVar3 = nn::os::TimedWaitConditionVariable
                        ((ConditionVariableType *)(param_1 + 0x20),param_1,lVar5);
      if (iVar3 == 0) {
        nn::os::UnlockMutex(param_1);
        return 0;
      }
    }
    local_58 = FUN_001201d0(pMVar1);
  } while( true );
}


