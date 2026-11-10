/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b381c; name: FUN_034b381c
 */


void FUN_034b381c(undefined4 param_1,undefined4 param_2,long *param_3,uint param_4,
                 undefined4 param_5,undefined4 param_6,byte param_7)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  byte local_58;
  
  pMVar1 = (MutexType *)(param_3 + 3);
  nn::os::LockMutex(pMVar1);
  uVar2 = *(uint *)(param_3 + 1);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = param_4 / uVar2;
    }
    lVar4 = *(long *)(*param_3 + (ulong)(param_4 - uVar3 * uVar2) * 8);
    if (lVar4 != 0) {
      local_58 = param_7 & 1;
      do {
        if (*(uint *)(lVar4 + 0x54) == param_4) {
          if ((*(byte *)(lVar4 + 0x68) >> 3 & 1) != 0) {
            local_80 = *(undefined8 *)(lVar4 + 0x60);
            uStack_78 = *(undefined8 *)(lVar4 + 0x38);
            uStack_6c = *(undefined4 *)(lVar4 + 0x34);
            pcVar5 = *(code **)(lVar4 + 0x58);
            local_70 = param_4;
            local_68 = param_1;
            uStack_64 = param_2;
            local_60 = param_5;
            uStack_5c = param_6;
            nn::os::ClearEvent((EventType *)(param_3 + 7));
            nn::os::UnlockMutex(pMVar1);
            (*pcVar5)(8,&local_80);
            nn::os::SignalEvent((EventType *)(param_3 + 7));
            return;
          }
          break;
        }
        lVar4 = *(long *)(lVar4 + 0x70);
      } while (lVar4 != 0);
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


