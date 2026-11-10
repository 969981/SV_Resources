/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b39fc; name: FUN_034b39fc
 */


void FUN_034b39fc(long *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  
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
        if (((*(byte *)(lVar4 + 0x68) >> 6 & 1) != 0) &&
           (pcVar5 = *(code **)(lVar4 + 0x58), pcVar5 != (code *)0x0)) {
          local_78 = *(undefined8 *)(lVar4 + 0x60);
          uStack_70 = *(undefined8 *)(lVar4 + 0x38);
          uStack_64 = *(undefined4 *)(lVar4 + 0x34);
          local_58 = *param_5;
          local_54 = *param_6;
          local_68 = param_2;
          local_60 = param_3;
          uStack_5c = param_4;
          nn::os::ClearEvent((EventType *)(param_1 + 7));
          nn::os::UnlockMutex(pMVar1);
          (*pcVar5)(0x40,&local_78);
          nn::os::SignalEvent((EventType *)(param_1 + 7));
          *param_5 = local_58;
          *param_6 = local_54;
          return;
        }
        break;
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


