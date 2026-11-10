/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01478e28; name: FUN_01478e28
 */


undefined8
FUN_01478e28(long param_1,long param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  MutexType *pMVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  pMVar1 = (MutexType *)(*(long *)(param_1 + 0x240) + 0x70);
  nn::os::LockMutex(pMVar1);
  lVar3 = FUN_01478f0c(*(undefined8 *)(param_1 + 0x240),param_2,param_3 & 1,param_4,param_5);
  iVar2 = *(int *)(lVar3 + 0xc);
  nn::os::UnlockMutex(pMVar1);
  if (iVar2 < 2) {
    if ((param_3 & 1) == 0) {
      plVar4 = *(long **)(*(long *)(param_1 + 0x200) + 0x60);
      uVar5 = (**(code **)(*plVar4 + 0xf0))(plVar4,*(undefined8 *)(param_2 + 8),lVar3 + 8);
    }
    else {
      plVar4 = *(long **)(*(long *)(param_1 + 0x200) + 0x60);
      uVar5 = (**(code **)(*plVar4 + 0xf8))
                        (plVar4,*(undefined8 *)(param_2 + 8),FUN_0157fa00,param_1);
    }
    if ((int)uVar5 != 1) {
      FUN_01dacfd8(*(undefined8 *)(param_1 + 0x240),param_2);
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}


