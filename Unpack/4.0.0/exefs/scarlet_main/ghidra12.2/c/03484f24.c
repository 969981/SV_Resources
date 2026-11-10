/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03484f24; name: FUN_03484f24
 */


undefined8 FUN_03484f24(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  MutexType *pMVar6;
  
  if (param_2 == 0) {
    uVar3 = 0xe;
  }
  else {
    pMVar6 = *(MutexType **)PTR_DAT_047e6f28;
    nn::os::LockMutex(pMVar6);
    uVar1 = *(uint *)(pMVar6 + 0x28);
    if (uVar1 != 0) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = param_2 / uVar1;
      }
      for (lVar4 = *(long *)(*(long *)(pMVar6 + 0x20) + (ulong)(param_2 - uVar2 * uVar1) * 8);
          lVar4 != 0; lVar4 = *(long *)(lVar4 + 8)) {
        if (*(uint *)(lVar4 + 0x10) == param_2) {
          *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar6);
          uVar3 = (**(code **)(*param_1 + 0x50))(param_1,lVar4 + -8);
          if ((int)uVar3 != 1) {
            return uVar3;
          }
          if (*(uint *)(param_1 + 0x25) != 0) {
            lVar4 = (ulong)*(uint *)(param_1 + 0x25) << 3;
            puVar5 = (undefined8 *)param_1[0x24];
            do {
              FUN_03488c60(*puVar5,param_2);
              lVar4 = lVar4 + -8;
              puVar5 = puVar5 + 1;
            } while (lVar4 != 0);
          }
          return 1;
        }
      }
    }
    nn::os::UnlockMutex(pMVar6);
    uVar3 = 0xf;
  }
  return uVar3;
}


