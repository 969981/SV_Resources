/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b3738; name: FUN_034b3738
 */


void FUN_034b3738(long *param_1,uint param_2,undefined4 param_3,undefined8 param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
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
        if ((*(byte *)(lVar4 + 0x68) >> 1 & 1) != 0) {
          local_60 = *(undefined8 *)(lVar4 + 0x60);
          uStack_58 = *(undefined8 *)(lVar4 + 0x38);
          pcVar5 = *(code **)(lVar4 + 0x58);
          local_50 = param_2;
          uStack_4c = param_3;
          local_48 = param_4;
          nn::os::ClearEvent((EventType *)(param_1 + 7));
          nn::os::UnlockMutex(pMVar1);
          (*pcVar5)(2,&local_60);
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


