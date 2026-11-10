/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b3c14; name: FUN_034b3c14
 */


void FUN_034b3c14(long *param_1,uint param_2,undefined8 *param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  
  pMVar1 = (MutexType *)(param_1 + 3);
  nn::os::LockMutex(pMVar1);
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = param_2 / uVar2;
    }
    for (lVar4 = *(long *)(*param_1 + (ulong)(param_2 - uVar3 * uVar2) * 8); lVar4 != 0;
        lVar4 = *(long *)(lVar4 + 0x70)) {
      if (*(uint *)(lVar4 + 0x54) == param_2) {
        if ((*(byte *)(lVar4 + 0x68) >> 4 & 1) != 0) {
          *param_3 = *(undefined8 *)(lVar4 + 0x60);
          param_3[1] = *(undefined8 *)(lVar4 + 0x38);
          *(uint *)(param_3 + 2) = param_2;
          *(undefined4 *)((long)param_3 + 0x14) = *(undefined4 *)(lVar4 + 0x34);
          pcVar5 = *(code **)(lVar4 + 0x58);
          nn::os::ClearEvent((EventType *)(param_1 + 7));
          nn::os::UnlockMutex(pMVar1);
          (*pcVar5)(0x10,param_3);
          nn::os::SignalEvent((EventType *)(param_1 + 7));
          return;
        }
        break;
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


