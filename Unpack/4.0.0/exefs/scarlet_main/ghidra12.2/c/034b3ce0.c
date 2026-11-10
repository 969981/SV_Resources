/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b3ce0; name: FUN_034b3ce0
 */


void FUN_034b3ce0(long *param_1,uint param_2,uint param_3,void *param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  undefined1 auStack_74 [36];
  uint local_50;
  undefined8 local_48;
  
  pMVar1 = (MutexType *)(param_1 + 3);
  nn::os::LockMutex(pMVar1);
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 == 0) {
    lVar4 = 0;
  }
  else {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = param_2 / uVar2;
    }
    for (lVar4 = *(long *)(*param_1 + (ulong)(param_2 - uVar3 * uVar2) * 8);
        (lVar4 != 0 && (*(uint *)(lVar4 + 0x54) != param_2)); lVar4 = *(long *)(lVar4 + 0x70)) {
    }
  }
  pcVar5 = *(code **)(lVar4 + 0x58);
  if ((pcVar5 == (code *)0x0) || ((*(uint *)(lVar4 + 0x68) & param_3) == 0)) {
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  local_88 = *(undefined8 *)(lVar4 + 0x60);
  uStack_80 = *(undefined8 *)(lVar4 + 0x38);
  local_78 = param_2;
  memcpy(auStack_74,param_4,0x24);
  local_48 = 0;
  local_50 = param_3;
  nn::os::ClearEvent((EventType *)(param_1 + 7));
  nn::os::UnlockMutex(pMVar1);
  (*pcVar5)(param_3,&local_88);
  nn::os::SignalEvent((EventType *)(param_1 + 7));
  return;
}


